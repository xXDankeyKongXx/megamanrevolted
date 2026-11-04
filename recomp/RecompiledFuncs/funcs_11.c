#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_800636E8_3EAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800636E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800636EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800636F0: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800636F4: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x800636F8: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800636FC: bne         $v0, $zero, L_80063718
    if (ctx->r2 != 0) {
        // 0x80063700: lui         $v1, 0x10
        ctx->r3 = S32(0X10 << 16);
            goto L_80063718;
    }
    // 0x80063700: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80063704: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80063708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006370C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80063710: j           L_80063740
    // 0x80063714: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
        goto L_80063740;
    // 0x80063714: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
L_80063718:
    // 0x80063718: lbu         $v0, 0x7C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7C);
    // 0x8006371C: or          $v1, $a1, $v1
    ctx->r3 = ctx->r5 | ctx->r3;
    // 0x80063720: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80063724: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063728: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006372C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063730: lw          $v0, 0x750($at)
    ctx->r2 = MEM_W(ctx->r1, 0X750);
    // 0x80063734: jalr        $v0
    // 0x80063738: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80063738: nop

    after_0:
    // 0x8006373C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80063740:
    // 0x80063740: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80063744: jr          $ra
    // 0x80063748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80063748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005E34C_3974C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005E34C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005E350: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005E354: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005E358: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8005E35C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E360: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E364: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E368: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E36C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8005E370: addiu       $fp, $zero, 0x9
    ctx->r30 = ADD32(0, 0X9);
    // 0x8005E374: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8005E378: addiu       $s7, $zero, 0x2C
    ctx->r23 = ADD32(0, 0X2C);
    // 0x8005E37C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8005E380: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8005E384: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005E388: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8005E38C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005E390: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005E394: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005E398: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005E39C: sb          $fp, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r30;
    // 0x8005E3A0: sb          $s7, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r23;
    // 0x8005E3A4: jal         0x80030284
    // 0x8005E3A8: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    func_80030284_B684(rdram, ctx);
        goto after_0;
    // 0x8005E3A8: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    after_0:
    // 0x8005E3AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E3B0: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    // 0x8005E3B4: jal         0x8003026C
    // 0x8005E3B8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_1;
    // 0x8005E3B8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_1:
    // 0x8005E3BC: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E3C0: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8005E3C4: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x8005E3C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E3CC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E3D0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005E3D4: sb          $s1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r17;
    // 0x8005E3D8: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005E3DC: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E3E0: sb          $s4, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r20;
    // 0x8005E3E4: sb          $s1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r17;
    // 0x8005E3E8: sb          $s4, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r20;
    // 0x8005E3EC: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E3F0: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E3F4: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E3F8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E3FC: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E400: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E404: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E408: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E40C: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    // 0x8005E410: addiu       $s5, $zero, 0xD8
    ctx->r21 = ADD32(0, 0XD8);
    // 0x8005E414: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E418: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E41C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8005E420: sh          $s5, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r21;
    // 0x8005E424: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E428: sh          $s5, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r21;
    // 0x8005E42C: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E430: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
    // 0x8005E434: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8005E438: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x8005E43C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E440: jal         0x800302C8
    // 0x8005E444: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_2;
    // 0x8005E444: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_2:
    // 0x8005E448: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E44C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E450: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E454: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E458: sb          $fp, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r30;
    // 0x8005E45C: sb          $s7, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r23;
    // 0x8005E460: jal         0x80030284
    // 0x8005E464: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    func_80030284_B684(rdram, ctx);
        goto after_3;
    // 0x8005E464: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    after_3:
    // 0x8005E468: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E46C: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    // 0x8005E470: jal         0x8003026C
    // 0x8005E474: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_4;
    // 0x8005E474: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_4:
    // 0x8005E478: addiu       $s3, $zero, 0x28
    ctx->r19 = ADD32(0, 0X28);
    // 0x8005E47C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E480: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x8005E484: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E488: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E48C: addiu       $v0, $zero, 0xE2
    ctx->r2 = ADD32(0, 0XE2);
    // 0x8005E490: addiu       $v1, $zero, 0x9F
    ctx->r3 = ADD32(0, 0X9F);
    // 0x8005E494: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E498: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E49C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8005E4A0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E4A4: sb          $s4, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r20;
    // 0x8005E4A8: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x8005E4AC: sb          $s4, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r20;
    // 0x8005E4B0: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E4B4: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x8005E4B8: sb          $v1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r3;
    // 0x8005E4BC: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x8005E4C0: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E4C4: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E4C8: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E4CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E4D0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E4D4: addiu       $s2, $zero, 0xC8
    ctx->r18 = ADD32(0, 0XC8);
    // 0x8005E4D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E4DC: sh          $s3, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r19;
    // 0x8005E4E0: sh          $s2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r18;
    // 0x8005E4E4: sh          $s3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r19;
    // 0x8005E4E8: sh          $s2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r18;
    // 0x8005E4EC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E4F0: jal         0x800302C8
    // 0x8005E4F4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_5;
    // 0x8005E4F4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_5:
    // 0x8005E4F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E4FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E500: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E504: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E508: sb          $fp, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r30;
    // 0x8005E50C: sb          $s7, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r23;
    // 0x8005E510: jal         0x80030284
    // 0x8005E514: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    func_80030284_B684(rdram, ctx);
        goto after_6;
    // 0x8005E514: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    after_6:
    // 0x8005E518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E51C: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    // 0x8005E520: jal         0x8003026C
    // 0x8005E524: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_7;
    // 0x8005E524: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_7:
    // 0x8005E528: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E52C: addiu       $v0, $zero, 0x128
    ctx->r2 = ADD32(0, 0X128);
    // 0x8005E530: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x8005E534: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8005E538: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8005E53C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8005E540: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8005E544: sb          $v0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r2;
    // 0x8005E548: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8005E54C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E550: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x8005E554: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E558: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x8005E55C: sb          $v1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r3;
    // 0x8005E560: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x8005E564: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E568: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E56C: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E570: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E574: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E578: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E57C: sh          $s3, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r19;
    // 0x8005E580: sh          $s2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r18;
    // 0x8005E584: sh          $s2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r18;
    // 0x8005E588: sh          $s3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r19;
    // 0x8005E58C: sh          $s5, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r21;
    // 0x8005E590: sh          $s5, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r21;
    // 0x8005E594: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E598: jal         0x800302C8
    // 0x8005E59C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_8;
    // 0x8005E59C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_8:
    // 0x8005E5A0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005E5A4: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8005E5A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005E5AC: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8005E5B0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E5B4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8005E5B8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8005E5BC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8005E5C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E5C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005E5C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005E5CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005E5D0: jr          $ra
    // 0x8005E5D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005E5D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008B31C_6671C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B31C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008B320: jr          $ra
    // 0x8008B324: sw          $a0, -0x11B4($at)
    MEM_W(-0X11B4, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8008B324: sw          $a0, -0x11B4($at)
    MEM_W(-0X11B4, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80093F20_6F320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093F20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80093F24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80093F28: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80093F2C: addiu       $s0, $s0, -0xE20
    ctx->r16 = ADD32(ctx->r16, -0XE20);
    // 0x80093F30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093F34: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80093F38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80093F3C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80093F40: beq         $v0, $zero, L_80093F68
    if (ctx->r2 == 0) {
        // 0x80093F44: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_80093F68;
    }
    // 0x80093F44: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80093F48: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
L_80093F4C:
    // 0x80093F4C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80093F50: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x80093F54: beq         $v0, $a0, L_80093FA8
    if (ctx->r2 == ctx->r4) {
        // 0x80093F58: addu        $s0, $v1, $zero
        ctx->r16 = ADD32(ctx->r3, 0);
            goto L_80093FA8;
    }
    // 0x80093F58: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x80093F5C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80093F60: bne         $v0, $zero, L_80093F4C
    if (ctx->r2 != 0) {
        // 0x80093F64: nop
    
            goto L_80093F4C;
    }
    // 0x80093F64: nop

L_80093F68:
    // 0x80093F68: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x80093F6C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80093F70: beq         $v0, $zero, L_80093F8C
    if (ctx->r2 == 0) {
        // 0x80093F74: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80093F8C;
    }
    // 0x80093F74: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80093F78: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80093F7C:
    // 0x80093F7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80093F80: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80093F84: bne         $v0, $zero, L_80093F7C
    if (ctx->r2 != 0) {
        // 0x80093F88: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80093F7C;
    }
    // 0x80093F88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80093F8C:
    // 0x80093F8C: jal         0x80094460
    // 0x80093F90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80093F90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80093F94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80093F98: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x80093F9C: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x80093FA0: jal         0x80094460
    // 0x80093FA4: sb          $s1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r17;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80093FA4: sb          $s1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r17;
    after_1:
L_80093FA8:
    // 0x80093FA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093FAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80093FB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80093FB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80093FB8: jr          $ra
    // 0x80093FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80093FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void __scHandleRSP(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009AFDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009AFE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8009AFE4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009AFE8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8009AFEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009AFF0: lw          $s0, 0x274($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X274);
    // 0x8009AFF4: sw          $zero, 0x274($s1)
    MEM_W(0X274, ctx->r17) = 0;
    // 0x8009AFF8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8009AFFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8009B000: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8009B004: beq         $v0, $zero, L_8009B058
    if (ctx->r2 == 0) {
        // 0x8009B008: sw          $zero, 0x14($sp)
        MEM_W(0X14, ctx->r29) = 0;
            goto L_8009B058;
    }
    // 0x8009B008: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8009B00C: jal         0x8009AB50
    // 0x8009B010: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x8009B010: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_0:
    // 0x8009B014: beql        $v0, $zero, L_8009B05C
    if (ctx->r2 == 0) {
        // 0x8009B018: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8009B05C;
    }
    goto skip_0;
    // 0x8009B018: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x8009B01C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8009B020: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8009B024: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8009B028: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8009B02C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8009B030: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8009B034: bne         $v1, $v0, L_8009B074
    if (ctx->r3 != ctx->r2) {
        // 0x8009B038: nop
    
            goto L_8009B074;
    }
    // 0x8009B038: nop

    // 0x8009B03C: lw          $v0, 0x268($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X268);
    // 0x8009B040: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8009B044: lw          $v0, 0x270($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X270);
    // 0x8009B048: bne         $v0, $zero, L_8009B074
    if (ctx->r2 != 0) {
        // 0x8009B04C: sw          $s0, 0x268($s1)
        MEM_W(0X268, ctx->r17) = ctx->r16;
            goto L_8009B074;
    }
    // 0x8009B04C: sw          $s0, 0x268($s1)
    MEM_W(0X268, ctx->r17) = ctx->r16;
    // 0x8009B050: j           L_8009B074
    // 0x8009B054: sw          $s0, 0x270($s1)
    MEM_W(0X270, ctx->r17) = ctx->r16;
        goto L_8009B074;
    // 0x8009B054: sw          $s0, 0x270($s1)
    MEM_W(0X270, ctx->r17) = ctx->r16;
L_8009B058:
    // 0x8009B058: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8009B05C:
    // 0x8009B05C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8009B060: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8009B064: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x8009B068: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8009B06C: jal         0x8009B1B0
    // 0x8009B070: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    __scTaskComplete(rdram, ctx);
        goto after_1;
    // 0x8009B070: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    after_1:
L_8009B074:
    // 0x8009B074: lw          $v0, 0x274($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X274);
    // 0x8009B078: lw          $v1, 0x278($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X278);
    // 0x8009B07C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8009B080: bne         $v1, $zero, L_8009B08C
    if (ctx->r3 != 0) {
        // 0x8009B084: sll         $s0, $v0, 1
        ctx->r16 = S32(ctx->r2 << 1);
            goto L_8009B08C;
    }
    // 0x8009B084: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    // 0x8009B088: ori         $s0, $s0, 0x1
    ctx->r16 = ctx->r16 | 0X1;
L_8009B08C:
    // 0x8009B08C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8009B090: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8009B094: addiu       $a2, $sp, 0x14
    ctx->r6 = ADD32(ctx->r29, 0X14);
    // 0x8009B098: jal         0x8009B39C
    // 0x8009B09C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    __scSchedule(rdram, ctx);
        goto after_2;
    // 0x8009B09C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8009B0A0: beq         $v0, $s0, L_8009B0B8
    if (ctx->r2 == ctx->r16) {
        // 0x8009B0A4: nop
    
            goto L_8009B0B8;
    }
    // 0x8009B0A4: nop

    // 0x8009B0A8: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8009B0AC: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x8009B0B0: jal         0x8009B294
    // 0x8009B0B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scExec(rdram, ctx);
        goto after_3;
    // 0x8009B0B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_8009B0B8:
    // 0x8009B0B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8009B0BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B0C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B0C4: jr          $ra
    // 0x8009B0C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8009B0C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008D670_68A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D674: sb          $v0, 0xBA($a0)
    MEM_B(0XBA, ctx->r4) = ctx->r2;
    // 0x8008D678: jr          $ra
    // 0x8008D67C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D67C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8007D63C_58A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007D63C: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8007D640: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D644: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8007D648: lbu         $v1, -0x3E28($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E28);
    // 0x8007D64C: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8007D650: bne         $v0, $zero, L_8007D790
    if (ctx->r2 != 0) {
        // 0x8007D654: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8007D790;
    }
    // 0x8007D654: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007D658: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x8007D65C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D660: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8007D664: sb          $v0, -0x3E28($at)
    MEM_B(-0X3E28, ctx->r1) = ctx->r2;
    // 0x8007D668: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D66C: lw          $v1, -0x41B0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B0);
    // 0x8007D670: sll         $a1, $t0, 4
    ctx->r5 = S32(ctx->r8 << 4);
    // 0x8007D674: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8007D678: lbu         $a0, 0xB61($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XB61);
    // 0x8007D67C: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x8007D680: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8007D684: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x8007D688: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D68C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D690: sw          $v0, -0x41A8($at)
    MEM_W(-0X41A8, ctx->r1) = ctx->r2;
    // 0x8007D694: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8007D698: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x8007D69C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D6A0: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D6A4: sw          $v0, -0x41A4($at)
    MEM_W(-0X41A4, ctx->r1) = ctx->r2;
    // 0x8007D6A8: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x8007D6AC: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8007D6B0: lw          $a2, -0x44F0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X44F0);
    // 0x8007D6B4: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x8007D6B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D6BC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D6C0: sw          $v0, -0x41A0($at)
    MEM_W(-0X41A0, ctx->r1) = ctx->r2;
    // 0x8007D6C4: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x8007D6C8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D6CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D6D0: lw          $v0, -0x41A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A8);
    // 0x8007D6D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007D6D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D6DC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D6E0: sw          $v0, -0x41A8($at)
    MEM_W(-0X41A8, ctx->r1) = ctx->r2;
    // 0x8007D6E4: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
    // 0x8007D6E8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D6EC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D6F0: lw          $v0, -0x41A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A4);
    // 0x8007D6F4: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x8007D6F8: lw          $a3, -0x2650($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2650);
    // 0x8007D6FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007D700: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D704: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D708: sw          $v0, -0x41A4($at)
    MEM_W(-0X41A4, ctx->r1) = ctx->r2;
    // 0x8007D70C: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    // 0x8007D710: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8007D714: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x8007D718: lw          $a2, -0x41A0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41A0);
    // 0x8007D71C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D720: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007D724: lw          $v1, -0x41A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41A8);
    // 0x8007D728: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8007D72C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D730: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D734: sw          $a2, -0x41A0($at)
    MEM_W(-0X41A0, ctx->r1) = ctx->r6;
    // 0x8007D738: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x8007D73C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D740: mflo        $v0
    ctx->r2 = lo;
    // 0x8007D744: lh          $a0, 0xE($a3)
    ctx->r4 = MEM_H(ctx->r7, 0XE);
    // 0x8007D748: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D74C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007D750: lw          $v1, -0x41A4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41A4);
    // 0x8007D754: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D758: mflo        $a0
    ctx->r4 = lo;
    // 0x8007D75C: lh          $v1, 0x10($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X10);
    // 0x8007D760: nop

    // 0x8007D764: mult        $v1, $a2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D768: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D76C: sll         $a1, $t0, 3
    ctx->r5 = S32(ctx->r8 << 3);
    // 0x8007D770: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007D774: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x8007D778: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007D77C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007D780: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007D784: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D788: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D78C: sh          $v0, -0x3FA4($at)
    MEM_H(-0X3FA4, ctx->r1) = ctx->r2;
L_8007D790:
    // 0x8007D790: jr          $ra
    // 0x8007D794: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8007D794: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800861E0_615E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800861E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800861E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800861E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800861EC: lui         $a0, 0x400
    ctx->r4 = S32(0X400 << 16);
    // 0x800861F0: ori         $a0, $a0, 0x1
    ctx->r4 = ctx->r4 | 0X1;
    // 0x800861F4: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x800861F8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800861FC: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x80086200: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x80086204: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80086208: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8008620C: addiu       $v1, $v1, -0x77BC
    ctx->r3 = ADD32(ctx->r3, -0X77BC);
    // 0x80086210: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80086214: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80086218: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8008621C: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x80086220: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80086224: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086228: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008622C: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80086230: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80086234: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80086238: addiu       $v0, $v0, -0x16E0
    ctx->r2 = ADD32(ctx->r2, -0X16E0);
    // 0x8008623C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x80086240: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x80086244: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80086248: addiu       $v1, $v1, -0x1C
    ctx->r3 = ADD32(ctx->r3, -0X1C);
    // 0x8008624C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086250: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086254: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x80086258: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008625C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086260: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80086264: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x80086268: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8008626C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086270: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086274: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x80086278: sw          $a1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r5;
    // 0x8008627C: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x80086280: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x80086284: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x80086288: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8008628C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80086290: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80086294: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    // 0x80086298: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8008629C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800862A0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800862A4: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x800862A8: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x800862AC: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x800862B0: jal         0x800281C8
    // 0x800862B4: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x800862B4: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    after_0:
    // 0x800862B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800862BC: beq         $s1, $zero, L_80086470
    if (ctx->r17 == 0) {
        // 0x800862C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80086470;
    }
    // 0x800862C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800862C4: jal         0x8009A2B0
    // 0x800862C8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x800862C8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x800862CC: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x800862D0: ori         $v0, $v0, 0x4008
    ctx->r2 = ctx->r2 | 0X4008;
    // 0x800862D4: lui         $a1, 0x218
    ctx->r5 = S32(0X218 << 16);
    // 0x800862D8: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    // 0x800862DC: lui         $a2, 0x218
    ctx->r6 = S32(0X218 << 16);
    // 0x800862E0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800862E4: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x800862E8: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
    // 0x800862EC: lui         $a3, 0x218
    ctx->r7 = S32(0X218 << 16);
    // 0x800862F0: ori         $a3, $a3, 0x6
    ctx->r7 = ctx->r7 | 0X6;
    // 0x800862F4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800862F8: lui         $v0, 0x218
    ctx->r2 = S32(0X218 << 16);
    // 0x800862FC: sw          $s1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r17;
    // 0x80086300: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x80086304: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80086308: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8008630C: lui         $t1, 0x210
    ctx->r9 = S32(0X210 << 16);
    // 0x80086310: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x80086314: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    // 0x80086318: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8008631C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80086320: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80086324: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80086328: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8008632C: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x80086330: lh          $v0, 0x12($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X12);
    // 0x80086334: lui         $t2, 0x210
    ctx->r10 = S32(0X210 << 16);
    // 0x80086338: ori         $t2, $t2, 0x4
    ctx->r10 = ctx->r10 | 0X4;
    // 0x8008633C: sw          $a2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r6;
    // 0x80086340: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x80086344: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80086348: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008634C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80086350: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80086354: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80086358: lh          $v0, 0x1A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A);
    // 0x8008635C: lui         $t0, 0x210
    ctx->r8 = S32(0X210 << 16);
    // 0x80086360: ori         $t0, $t0, 0x6
    ctx->r8 = ctx->r8 | 0X6;
    // 0x80086364: sw          $a3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r7;
    // 0x80086368: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8008636C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80086370: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80086374: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80086378: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x8008637C: lh          $a1, 0x20($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X20);
    // 0x80086380: lh          $v1, 0x22($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X22);
    // 0x80086384: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    // 0x80086388: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8008638C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086390: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086394: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80086398: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008639C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800863A0: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x800863A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800863A8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800863AC: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
    // 0x800863B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800863B4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800863B8: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x800863BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800863C0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800863C4: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x800863C8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800863CC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800863D0: lui         $v0, 0x210
    ctx->r2 = S32(0X210 << 16);
    // 0x800863D4: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x800863D8: sll         $a1, $a1, 18
    ctx->r5 = S32(ctx->r5 << 18);
    // 0x800863DC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800863E0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x800863E4: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x800863E8: sw          $a1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r5;
    // 0x800863EC: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x800863F0: addiu       $v0, $a0, 0x38
    ctx->r2 = ADD32(ctx->r4, 0X38);
    // 0x800863F4: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x800863F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800863FC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086400: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
    // 0x80086404: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80086408: sw          $v1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r3;
    // 0x8008640C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80086410: ori         $a2, $a2, 0x602
    ctx->r6 = ctx->r6 | 0X602;
    // 0x80086414: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
    // 0x80086418: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008641C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086420: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80086424: sw          $v1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r3;
    // 0x80086428: sw          $t2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r10;
    // 0x8008642C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80086430: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x80086434: addiu       $v0, $a0, 0x48
    ctx->r2 = ADD32(ctx->r4, 0X48);
    // 0x80086438: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008643C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086440: sw          $t0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r8;
    // 0x80086444: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80086448: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
    // 0x8008644C: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80086450: ori         $a3, $a3, 0x402
    ctx->r7 = ctx->r7 | 0X402;
    // 0x80086454: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
    // 0x80086458: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008645C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086460: sw          $a3, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r7;
    // 0x80086464: sw          $a2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r6;
    // 0x80086468: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8008646C: sw          $v1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r3;
L_80086470:
    // 0x80086470: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80086474: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80086478: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008647C: jr          $ra
    // 0x80086480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80086480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80086484: nop

    // 0x80086488: nop

    // 0x8008648C: nop

;}
RECOMP_FUNC void func_8007E024_59424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007E024: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007E028: lh          $v0, -0x3E02($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E02);
    // 0x8007E02C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007E030: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8007E034: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007E038: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8007E03C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8007E040: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8007E044: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8007E048: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8007E04C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8007E050: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8007E054: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8007E058: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8007E05C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8007E060: bgez        $v0, L_8007E06C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007E064: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8007E06C;
    }
    // 0x8007E064: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8007E068: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
L_8007E06C:
    // 0x8007E06C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8007E070: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007E074: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E078: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007E07C: lw          $v0, -0x3D90($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3D90);
    // 0x8007E080: andi        $v1, $a0, 0x1F
    ctx->r3 = ctx->r4 & 0X1F;
    // 0x8007E084: srlv        $v0, $v0, $v1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r3 & 31));
    // 0x8007E088: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8007E08C: bne         $v0, $zero, L_8007E0A4
    if (ctx->r2 != 0) {
        // 0x8007E090: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_8007E0A4;
    }
    // 0x8007E090: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8007E094: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8007E098: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E09C: j           L_8007E300
    // 0x8007E0A0: sh          $v0, -0x3E02($at)
    MEM_H(-0X3E02, ctx->r1) = ctx->r2;
        goto L_8007E300;
    // 0x8007E0A0: sh          $v0, -0x3E02($at)
    MEM_H(-0X3E02, ctx->r1) = ctx->r2;
L_8007E0A4:
    // 0x8007E0A4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007E0A8: lw          $v0, -0x44E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44E4);
    // 0x8007E0AC: beq         $v0, $a2, L_8007E120
    if (ctx->r2 == ctx->r6) {
        // 0x8007E0B0: nop
    
            goto L_8007E120;
    }
    // 0x8007E0B0: nop

    // 0x8007E0B4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007E0B8: lbu         $v0, -0x44E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44E0);
    // 0x8007E0BC: bne         $v0, $zero, L_8007E0F0
    if (ctx->r2 != 0) {
        // 0x8007E0C0: lui         $a1, 0xE200
        ctx->r5 = S32(0XE200 << 16);
            goto L_8007E0F0;
    }
    // 0x8007E0C0: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    // 0x8007E0C4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E0C8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E0CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007E0D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E0D4: sb          $v0, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r2;
    // 0x8007E0D8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E0DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E0E0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E0E4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007E0E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007E0EC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_8007E0F0:
    // 0x8007E0F0: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    // 0x8007E0F4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E0F8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E0FC: lui         $a0, 0xC810
    ctx->r4 = S32(0XC810 << 16);
    // 0x8007E100: ori         $a0, $a0, 0x49D8
    ctx->r4 = ctx->r4 | 0X49D8;
    // 0x8007E104: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E108: sw          $a2, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r6;
    // 0x8007E10C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E110: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E114: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E118: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8007E11C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_8007E120:
    // 0x8007E120: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007E124: lhu         $v0, -0x3E02($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3E02);
    // 0x8007E128: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007E12C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E130: beq         $s4, $zero, L_8007E300
    if (ctx->r20 == 0) {
        // 0x8007E134: sh          $v0, -0x3E02($at)
        MEM_H(-0X3E02, ctx->r1) = ctx->r2;
            goto L_8007E300;
    }
    // 0x8007E134: sh          $v0, -0x3E02($at)
    MEM_H(-0X3E02, ctx->r1) = ctx->r2;
    // 0x8007E138: lui         $s5, 0x8018
    ctx->r21 = S32(0X8018 << 16);
    // 0x8007E13C: addiu       $s5, $s5, -0x3E00
    ctx->r21 = ADD32(ctx->r21, -0X3E00);
L_8007E140:
    // 0x8007E140: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8007E144: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x8007E148: beq         $v1, $v0, L_8007E240
    if (ctx->r3 == ctx->r2) {
        // 0x8007E14C: slti        $v0, $v1, 0xDF
        ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
            goto L_8007E240;
    }
    // 0x8007E14C: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x8007E150: beq         $v0, $zero, L_8007E18C
    if (ctx->r2 == 0) {
        // 0x8007E154: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8007E18C;
    }
    // 0x8007E154: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007E158: beq         $v1, $v0, L_8007E1CC
    if (ctx->r3 == ctx->r2) {
        // 0x8007E15C: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_8007E1CC;
    }
    // 0x8007E15C: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x8007E160: beq         $v0, $zero, L_8007E178
    if (ctx->r2 == 0) {
        // 0x8007E164: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007E178;
    }
    // 0x8007E164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007E168: beq         $v1, $v0, L_8007E244
    if (ctx->r3 == ctx->r2) {
        // 0x8007E16C: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8007E244;
    }
    // 0x8007E16C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8007E170: j           L_8007E2F8
    // 0x8007E174: nop

        goto L_8007E2F8;
    // 0x8007E174: nop

L_8007E178:
    // 0x8007E178: addiu       $v0, $zero, 0xD9
    ctx->r2 = ADD32(0, 0XD9);
    // 0x8007E17C: beq         $v1, $v0, L_8007E244
    if (ctx->r3 == ctx->r2) {
        // 0x8007E180: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8007E244;
    }
    // 0x8007E180: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8007E184: j           L_8007E2F8
    // 0x8007E188: nop

        goto L_8007E2F8;
    // 0x8007E188: nop

L_8007E18C:
    // 0x8007E18C: addiu       $v0, $zero, 0xE2
    ctx->r2 = ADD32(0, 0XE2);
    // 0x8007E190: beq         $v1, $v0, L_8007E238
    if (ctx->r3 == ctx->r2) {
        // 0x8007E194: slti        $v0, $v1, 0xE3
        ctx->r2 = SIGNED(ctx->r3) < 0XE3 ? 1 : 0;
            goto L_8007E238;
    }
    // 0x8007E194: slti        $v0, $v1, 0xE3
    ctx->r2 = SIGNED(ctx->r3) < 0XE3 ? 1 : 0;
    // 0x8007E198: beq         $v0, $zero, L_8007E1B0
    if (ctx->r2 == 0) {
        // 0x8007E19C: addiu       $v0, $zero, 0xDF
        ctx->r2 = ADD32(0, 0XDF);
            goto L_8007E1B0;
    }
    // 0x8007E19C: addiu       $v0, $zero, 0xDF
    ctx->r2 = ADD32(0, 0XDF);
    // 0x8007E1A0: beql        $v1, $v0, L_8007E2F8
    if (ctx->r3 == ctx->r2) {
        // 0x8007E1A4: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8007E2F8;
    }
    goto skip_0;
    // 0x8007E1A4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    skip_0:
    // 0x8007E1A8: j           L_8007E2F8
    // 0x8007E1AC: nop

        goto L_8007E2F8;
    // 0x8007E1AC: nop

L_8007E1B0:
    // 0x8007E1B0: addiu       $v0, $zero, 0xE7
    ctx->r2 = ADD32(0, 0XE7);
    // 0x8007E1B4: beq         $v1, $v0, L_8007E240
    if (ctx->r3 == ctx->r2) {
        // 0x8007E1B8: addiu       $v0, $zero, 0xF5
        ctx->r2 = ADD32(0, 0XF5);
            goto L_8007E240;
    }
    // 0x8007E1B8: addiu       $v0, $zero, 0xF5
    ctx->r2 = ADD32(0, 0XF5);
    // 0x8007E1BC: beq         $v1, $v0, L_8007E26C
    if (ctx->r3 == ctx->r2) {
        // 0x8007E1C0: nop
    
            goto L_8007E26C;
    }
    // 0x8007E1C0: nop

    // 0x8007E1C4: j           L_8007E2F8
    // 0x8007E1C8: nop

        goto L_8007E2F8;
    // 0x8007E1C8: nop

L_8007E1CC:
    // 0x8007E1CC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007E1D0: lh          $v0, -0x3E06($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E06);
    // 0x8007E1D4: bgez        $v0, L_8007E1E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007E1D8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8007E1E0;
    }
    // 0x8007E1D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8007E1DC: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
L_8007E1E0:
    // 0x8007E1E0: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8007E1E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007E1E8: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8007E1EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007E1F0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8007E1F4: srlv        $v0, $v0, $v1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r3 & 31));
    // 0x8007E1F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8007E1FC: beq         $v0, $zero, L_8007E224
    if (ctx->r2 == 0) {
        // 0x8007E200: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8007E224;
    }
    // 0x8007E200: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8007E204: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007E208: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007E20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007E210: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007E214: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E218: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E21C: jal         0x8009A3B4
    // 0x8007E220: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8007E220: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_0:
L_8007E224:
    // 0x8007E224: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007E228: lhu         $v0, -0x3E06($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3E06);
    // 0x8007E22C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007E230: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E234: sh          $v0, -0x3E06($at)
    MEM_H(-0X3E06, ctx->r1) = ctx->r2;
L_8007E238:
    // 0x8007E238: j           L_8007E2F8
    // 0x8007E23C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_8007E2F8;
    // 0x8007E23C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_8007E240:
    // 0x8007E240: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_8007E244:
    // 0x8007E244: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007E248: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007E24C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007E250: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007E254: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E258: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E25C: jal         0x8009A3B4
    // 0x8007E260: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8007E260: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_1:
    // 0x8007E264: j           L_8007E2F8
    // 0x8007E268: nop

        goto L_8007E2F8;
    // 0x8007E268: nop

L_8007E26C:
    // 0x8007E26C: beq         $s3, $zero, L_8007E280
    if (ctx->r19 == 0) {
        // 0x8007E270: nop
    
            goto L_8007E280;
    }
    // 0x8007E270: nop

    // 0x8007E274: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8007E278: j           L_8007E2C4
    // 0x8007E27C: lw          $s2, -0x6F10($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6F10);
        goto L_8007E2C4;
    // 0x8007E27C: lw          $s2, -0x6F10($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6F10);
L_8007E280:
    // 0x8007E280: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007E284: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007E288: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8007E28C: beq         $v0, $zero, L_8007E2BC
    if (ctx->r2 == 0) {
        // 0x8007E290: nop
    
            goto L_8007E2BC;
    }
    // 0x8007E290: nop

L_8007E294:
    // 0x8007E294: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8007E298: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007E29C: jal         0x8009A3B4
    // 0x8007E2A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007E2A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8007E2A4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007E2A8: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007E2AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8007E2B0: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8007E2B4: bne         $v0, $zero, L_8007E294
    if (ctx->r2 != 0) {
        // 0x8007E2B8: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8007E294;
    }
    // 0x8007E2B8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_8007E2BC:
    // 0x8007E2BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E2C0: sw          $s2, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r18;
L_8007E2C4:
    // 0x8007E2C4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8007E2C8: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8007E2CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007E2D0: jal         0x80099F90
    // 0x8007E2D4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x8007E2D4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_3:
    // 0x8007E2D8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007E2DC: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007E2E0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8007E2E4: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8007E2E8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8007E2EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E2F0: sw          $s0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r16;
    // 0x8007E2F4: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
L_8007E2F8:
    // 0x8007E2F8: bne         $s4, $zero, L_8007E140
    if (ctx->r20 != 0) {
        // 0x8007E2FC: nop
    
            goto L_8007E140;
    }
    // 0x8007E2FC: nop

L_8007E300:
    // 0x8007E300: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8007E304: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8007E308: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8007E30C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E310: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8007E314: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8007E318: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8007E31C: jr          $ra
    // 0x8007E320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8007E320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80034B68_FF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034B6C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80034B70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034B74: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80034B78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034B7C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80034B80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80034B84: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x80034B88: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034B8C: addiu       $a0, $a0, 0x4390
    ctx->r4 = ADD32(ctx->r4, 0X4390);
    // 0x80034B90: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80034B94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034B98: jal         0x8009A3B4
    // 0x80034B9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034B9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034BA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034BA4: sw          $s0, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r16;
    // 0x80034BA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034BAC: sw          $s1, 0x4358($at)
    MEM_W(0X4358, ctx->r1) = ctx->r17;
    // 0x80034BB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034BB4: sw          $s2, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r18;
    // 0x80034BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80034BBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80034BC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034BC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034BC8: jr          $ra
    // 0x80034BCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034BCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80060AAC_3BEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060AAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80060AB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80060AB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80060AB8: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80060ABC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80060AC0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80060AC4: lw          $v1, -0x5810($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5810);
    // 0x80060AC8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80060ACC: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x80060AD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80060AD4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060AD8: beq         $v1, $zero, L_80060C08
    if (ctx->r3 == 0) {
        // 0x80060ADC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80060C08;
    }
    // 0x80060ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80060AE0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80060AE4: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x80060AE8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80060AEC: lw          $s0, -0x71D8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X71D8);
    // 0x80060AF0: jal         0x8004DA68
    // 0x80060AF4: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80060AF4: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80060AF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80060AFC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80060B00: beq         $v1, $v0, L_80060B3C
    if (ctx->r3 == ctx->r2) {
        // 0x80060B04: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_80060B3C;
    }
    // 0x80060B04: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80060B08: beq         $v0, $zero, L_80060B20
    if (ctx->r2 == 0) {
        // 0x80060B0C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80060B20;
    }
    // 0x80060B0C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80060B10: beq         $v1, $v0, L_80060B68
    if (ctx->r3 == ctx->r2) {
        // 0x80060B14: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80060B68;
    }
    // 0x80060B14: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80060B18: j           L_80060BEC
    // 0x80060B1C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_80060BEC;
    // 0x80060B1C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80060B20:
    // 0x80060B20: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80060B24: beq         $v1, $v0, L_80060BA8
    if (ctx->r3 == ctx->r2) {
        // 0x80060B28: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80060BA8;
    }
    // 0x80060B28: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80060B2C: beq         $v1, $v0, L_80060BC4
    if (ctx->r3 == ctx->r2) {
        // 0x80060B30: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80060BC4;
    }
    // 0x80060B30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80060B34: j           L_80060BEC
    // 0x80060B38: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_80060BEC;
    // 0x80060B38: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80060B3C:
    // 0x80060B3C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80060B40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80060B44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80060B48: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80060B4C: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x80060B50: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80060B54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80060B58: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80060B5C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80060B60: j           L_80060BD8
    // 0x80060B64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80060BD8;
    // 0x80060B64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060B68:
    // 0x80060B68: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80060B6C: beq         $v1, $v0, L_80060B98
    if (ctx->r3 == ctx->r2) {
        // 0x80060B70: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80060B98;
    }
    // 0x80060B70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80060B74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80060B78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060B7C: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x80060B80: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80060B84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80060B88: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80060B8C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80060B90: j           L_80060BD8
    // 0x80060B94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80060BD8;
    // 0x80060B94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060B98:
    // 0x80060B98: jal         0x8004F418
    // 0x80060B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80060B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80060BA0: j           L_80060BEC
    // 0x80060BA4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_80060BEC;
    // 0x80060BA4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80060BA8:
    // 0x80060BA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80060BAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80060BB0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80060BB4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80060BB8: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x80060BBC: j           L_80060BD8
    // 0x80060BC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80060BD8;
    // 0x80060BC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060BC4:
    // 0x80060BC4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80060BC8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80060BCC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80060BD0: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x80060BD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060BD8:
    // 0x80060BD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060BDC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80060BE0: jalr        $v0
    // 0x80060BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80060BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80060BE8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80060BEC:
    // 0x80060BEC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80060BF0: lw          $v1, -0x5810($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5810);
    // 0x80060BF4: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x80060BF8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80060BFC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060C00: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80060C04: sw          $v1, -0x5810($at)
    MEM_W(-0X5810, ctx->r1) = ctx->r3;
L_80060C08:
    // 0x80060C08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80060C0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80060C10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060C14: jr          $ra
    // 0x80060C18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80060C18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800915C0_6C9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800915C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800915C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800915C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800915CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800915D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800915D4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800915D8: beq         $v0, $zero, L_80091630
    if (ctx->r2 == 0) {
        // 0x800915DC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80091630;
    }
    // 0x800915DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800915E0: jal         0x80091C78
    // 0x800915E4: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_0;
    // 0x800915E4: nop

    after_0:
    // 0x800915E8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x800915EC: beq         $a2, $zero, L_80091630
    if (ctx->r6 == 0) {
        // 0x800915F0: nop
    
            goto L_80091630;
    }
    // 0x800915F0: nop

    // 0x800915F4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800915F8: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x800915FC: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80091600: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x80091604: lw          $v1, 0x88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X88);
    // 0x80091608: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8009160C: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80091610: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80091614: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x80091618: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8009161C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80091620: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x80091624: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80091628: jal         0x8008FB18
    // 0x8009162C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_1;
    // 0x8009162C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_80091630:
    // 0x80091630: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80091634: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80091638: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009163C: jr          $ra
    // 0x80091640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80091640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80091644: nop

    // 0x80091648: nop

    // 0x8009164C: nop

;}
RECOMP_FUNC void func_8004C45C_2785C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C45C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C460: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C464: addiu       $v0, $v0, 0x6B70
    ctx->r2 = ADD32(ctx->r2, 0X6B70);
    // 0x8004C468: addiu       $v1, $v0, 0xB80
    ctx->r3 = ADD32(ctx->r2, 0XB80);
    // 0x8004C46C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004C470: sw          $v0, -0x35B0($at)
    MEM_W(-0X35B0, ctx->r1) = ctx->r2;
    // 0x8004C474: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C47C: beq         $v0, $zero, L_8004C4E8
    if (ctx->r2 == 0) {
        // 0x8004C480: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C4E8;
    }
    // 0x8004C480: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C484: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C488:
    // 0x8004C488: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8004C48C: lw          $a0, -0x35B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35B0);
    // 0x8004C490: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C494: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C49C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C4A0: beq         $v0, $zero, L_8004C4C8
    if (ctx->r2 == 0) {
        // 0x8004C4A4: nop
    
            goto L_8004C4C8;
    }
    // 0x8004C4A4: nop

    // 0x8004C4A8: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C4AC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004C4B0: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x8004C4B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004C4B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004C4BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004C4C0: jalr        $v0
    // 0x8004C4C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C4C4: nop

    after_0:
L_8004C4C8:
    // 0x8004C4C8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004C4CC: lw          $v0, -0x35B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X35B0);
    // 0x8004C4D0: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x8004C4D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004C4D8: sw          $v0, -0x35B0($at)
    MEM_W(-0X35B0, ctx->r1) = ctx->r2;
    // 0x8004C4DC: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C4E0: bne         $v0, $zero, L_8004C488
    if (ctx->r2 != 0) {
        // 0x8004C4E4: nop
    
            goto L_8004C488;
    }
    // 0x8004C4E4: nop

L_8004C4E8:
    // 0x8004C4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C4EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C4F0: jr          $ra
    // 0x8004C4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004C4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C4F8: nop

    // 0x8004C4FC: nop

;}
RECOMP_FUNC void _timeToSamplesNoRound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800992A4: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x800992A8: nop

    // 0x800992AC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800992B0: lwc1        $f2, 0x44($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800992B4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x800992B8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800992BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800992C0: ldc1        $f2, 0x3170($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3170);
    // 0x800992C4: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x800992C8: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x800992CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800992D0: ldc1        $f2, 0x3178($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3178);
    // 0x800992D4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x800992D8: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x800992DC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800992E0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x800992E4: jr          $ra
    // 0x800992E8: nop

    TRACE_RETURN()
    return;
    // 0x800992E8: nop

;}
RECOMP_FUNC void func_8002A3B4_57B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A3B4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002A3B8: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8002A3BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A3C0: beq         $v0, $zero, L_8002A3E4
    if (ctx->r2 == 0) {
        // 0x8002A3C4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8002A3E4;
    }
    // 0x8002A3C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A3C8: jal         0x8002BA1C
    // 0x8002A3CC: nop

    func_8002BA1C_6E1C(rdram, ctx);
        goto after_0;
    // 0x8002A3CC: nop

    after_0:
    // 0x8002A3D0: jal         0x8002B274
    // 0x8002A3D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002B274_6674(rdram, ctx);
        goto after_1;
    // 0x8002A3D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8002A3D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002A3DC: jal         0x8002A8E0
    // 0x8002A3E0: sb          $v0, 0x6B2D($at)
    MEM_B(0X6B2D, ctx->r1) = ctx->r2;
    func_8002A8E0_5CE0(rdram, ctx);
        goto after_2;
    // 0x8002A3E0: sb          $v0, 0x6B2D($at)
    MEM_B(0X6B2D, ctx->r1) = ctx->r2;
    after_2:
L_8002A3E4:
    // 0x8002A3E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A3E8: jr          $ra
    // 0x8002A3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80064C10_40010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064C10: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064C14: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064C1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064C20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064C28: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80064C2C: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80064C30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064C34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80064C38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064C3C: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80064C40: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80064C44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064C48: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80064C4C: sb          $v0, 0x5218($at)
    MEM_B(0X5218, ctx->r1) = ctx->r2;
    // 0x80064C50: jal         0x8006033C
    // 0x80064C54: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80064C54: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    after_0:
    // 0x80064C58: bne         $v0, $zero, L_80064C94
    if (ctx->r2 != 0) {
        // 0x80064C5C: nop
    
            goto L_80064C94;
    }
    // 0x80064C5C: nop

    // 0x80064C60: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064C64: lbu         $v0, 0x5218($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5218);
    // 0x80064C68: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80064C6C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80064C70: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80064C74: lhu         $a0, -0x1DE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X1DE0);
    // 0x80064C78: jal         0x80070E80
    // 0x80064C7C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E80_4C280(rdram, ctx);
        goto after_1;
    // 0x80064C7C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_1:
    // 0x80064C80: beq         $v0, $zero, L_80064C94
    if (ctx->r2 == 0) {
        // 0x80064C84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80064C94;
    }
    // 0x80064C84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064C88: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80064C8C: j           L_80064C9C
    // 0x80064C90: sb          $v0, -0x6FA0($at)
    MEM_B(-0X6FA0, ctx->r1) = ctx->r2;
        goto L_80064C9C;
    // 0x80064C90: sb          $v0, -0x6FA0($at)
    MEM_B(-0X6FA0, ctx->r1) = ctx->r2;
L_80064C94:
    // 0x80064C94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80064C98: sb          $zero, -0x6FA0($at)
    MEM_B(-0X6FA0, ctx->r1) = 0;
L_80064C9C:
    // 0x80064C9C: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80064CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064CA4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80064CA8: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x80064CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064CB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80064CB4: jr          $ra
    // 0x80064CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008FB18_6AF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008FB18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FB1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8008FB20: beq         $a1, $v0, L_8008FB70
    if (ctx->r5 == ctx->r2) {
        // 0x8008FB24: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8008FB70;
    }
    // 0x8008FB24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8008FB28: slti        $v0, $a1, 0x5
    ctx->r2 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x8008FB2C: beq         $v0, $zero, L_8008FB44
    if (ctx->r2 == 0) {
        // 0x8008FB30: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8008FB44;
    }
    // 0x8008FB30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8008FB34: beq         $a1, $v0, L_8008FB58
    if (ctx->r5 == ctx->r2) {
        // 0x8008FB38: nop
    
            goto L_8008FB58;
    }
    // 0x8008FB38: nop

    // 0x8008FB3C: j           L_8008FBA4
    // 0x8008FB40: nop

        goto L_8008FBA4;
    // 0x8008FB40: nop

L_8008FB44:
    // 0x8008FB44: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8008FB48: beql        $a1, $v0, L_8008FB9C
    if (ctx->r5 == ctx->r2) {
        // 0x8008FB4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008FB9C;
    }
    goto skip_0;
    // 0x8008FB4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8008FB50: j           L_8008FBA4
    // 0x8008FB54: nop

        goto L_8008FBA4;
    // 0x8008FB54: nop

L_8008FB58:
    // 0x8008FB58: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x8008FB5C: beql        $v0, $zero, L_8008FB68
    if (ctx->r2 == 0) {
        // 0x8008FB60: sw          $a2, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r6;
            goto L_8008FB68;
    }
    goto skip_1;
    // 0x8008FB60: sw          $a2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r6;
    skip_1:
    // 0x8008FB64: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_8008FB68:
    // 0x8008FB68: j           L_8008FBAC
    // 0x8008FB6C: sw          $a2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r6;
        goto L_8008FBAC;
    // 0x8008FB6C: sw          $a2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r6;
L_8008FB70:
    // 0x8008FB70: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8008FB74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8008FB78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008FB7C: sw          $v1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r3;
    // 0x8008FB80: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x8008FB84: sh          $v0, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r2;
    // 0x8008FB88: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x8008FB8C: sw          $zero, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = 0;
    // 0x8008FB90: sw          $v1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r3;
    // 0x8008FB94: j           L_8008FBA4
    // 0x8008FB98: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
        goto L_8008FBA4;
    // 0x8008FB98: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
L_8008FB9C:
    // 0x8008FB9C: j           L_8008FBAC
    // 0x8008FBA0: sw          $v0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r2;
        goto L_8008FBAC;
    // 0x8008FBA0: sw          $v0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r2;
L_8008FBA4:
    // 0x8008FBA4: jal         0x800903B8
    // 0x8008FBA8: nop

    func_800903B8_6B7B8(rdram, ctx);
        goto after_0;
    // 0x8008FBA8: nop

    after_0:
L_8008FBAC:
    // 0x8008FBAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8008FBB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008FBB4: jr          $ra
    // 0x8008FBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008FBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800635A4_3E9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800635A4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x800635A8: lw          $a0, 0x6C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X6C);
    // 0x800635AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800635B0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x800635B4: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x800635B8: bne         $v1, $v0, L_800635E0
    if (ctx->r3 != ctx->r2) {
        // 0x800635BC: nop
    
            goto L_800635E0;
    }
    // 0x800635BC: nop

    // 0x800635C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800635C4: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x800635C8: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x800635CC: bne         $v1, $v0, L_800635E0
    if (ctx->r3 != ctx->r2) {
        // 0x800635D0: nop
    
            goto L_800635E0;
    }
    // 0x800635D0: nop

    // 0x800635D4: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x800635D8: j           L_800635EC
    // 0x800635DC: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
        goto L_800635EC;
    // 0x800635DC: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
L_800635E0:
    // 0x800635E0: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x800635E4: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x800635E8: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
L_800635EC:
    // 0x800635EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800635F0: bne         $a2, $v0, L_80063608
    if (ctx->r6 != ctx->r2) {
        // 0x800635F4: sll         $v0, $a2, 1
        ctx->r2 = S32(ctx->r6 << 1);
            goto L_80063608;
    }
    // 0x800635F4: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x800635F8: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x800635FC: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80063600: j           L_80063634
    // 0x80063604: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
        goto L_80063634;
    // 0x80063604: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
L_80063608:
    // 0x80063608: lw          $a0, 0x44($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X44);
    // 0x8006360C: sh          $v1, 0xC2($a1)
    MEM_H(0XC2, ctx->r5) = ctx->r3;
    // 0x80063610: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80063614: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80063618: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x8006361C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80063620: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80063624: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80063628: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8006362C: sw          $a0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r4;
    // 0x80063630: sw          $a0, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->r4;
L_80063634:
    // 0x80063634: jr          $ra
    // 0x80063638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80063638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800A3484_7E884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3484: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800A3488: jr          $ra
    // 0x800A348C: sw          $a0, 0x3C20($at)
    MEM_W(0X3C20, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x800A348C: sw          $a0, 0x3C20($at)
    MEM_W(0X3C20, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80046CEC_220EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046CEC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80046CF0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x80046CF4: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x80046CF8: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80046CFC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80046D00: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x80046D04: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80046D08: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x80046D0C: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x80046D10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80046D14: addiu       $a1, $fp, 0x14
    ctx->r5 = ADD32(ctx->r30, 0X14);
    // 0x80046D18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80046D1C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x80046D20: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x80046D24: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x80046D28: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x80046D2C: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x80046D30: jal         0x8009A3B4
    // 0x80046D34: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80046D34: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    after_0:
    // 0x80046D38: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80046D3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80046D40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80046D44: jal         0x8009A3B4
    // 0x80046D48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80046D48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80046D4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80046D50: jal         0x80040D60
    // 0x80046D54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80040D60_1C160(rdram, ctx);
        goto after_2;
    // 0x80046D54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x80046D58: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80046D5C: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80046D60: jal         0x8002C654
    // 0x80046D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80046D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80046D68: lh          $a0, 0x56($fp)
    ctx->r4 = MEM_H(ctx->r30, 0X56);
    // 0x80046D6C: jal         0x800319B4
    // 0x80046D70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80046D70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80046D74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80046D78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80046D7C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80046D80: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80046D84: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x80046D88: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x80046D8C: jal         0x80031270
    // 0x80046D90: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_5;
    // 0x80046D90: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    after_5:
    // 0x80046D94: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x80046D98: lhu         $a0, 0x40($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X40);
    // 0x80046D9C: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x80046DA0: lhu         $a1, 0x44($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X44);
    // 0x80046DA4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80046DA8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80046DAC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80046DB0: beq         $s2, $zero, L_80046E64
    if (ctx->r18 == 0) {
        // 0x80046DB4: sh          $v1, 0x1C($sp)
        MEM_H(0X1C, ctx->r29) = ctx->r3;
            goto L_80046E64;
    }
    // 0x80046DB4: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    // 0x80046DB8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80046DBC: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80046DC0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80046DC4: jal         0x8009A3B4
    // 0x80046DC8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80046DC8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_6:
    // 0x80046DCC: j           L_80046E78
    // 0x80046DD0: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
        goto L_80046E78;
    // 0x80046DD0: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046DD4:
    // 0x80046DD4: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x80046DD8: lh          $v1, 0x2($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X2);
    // 0x80046DDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80046DE0: srl         $a0, $v0, 31
    ctx->r4 = S32(U32(ctx->r2) >> 31);
    // 0x80046DE4: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x80046DE8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80046DEC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80046DF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80046DF4: sh          $v1, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r3;
    // 0x80046DF8: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80046DFC: lh          $v1, 0x2($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X2);
    // 0x80046E00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80046E04: srl         $a0, $v0, 31
    ctx->r4 = S32(U32(ctx->r2) >> 31);
    // 0x80046E08: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x80046E0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80046E10: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80046E14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80046E18: sh          $v1, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r3;
    // 0x80046E1C: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x80046E20: lh          $v1, 0x6($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X6);
    // 0x80046E24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80046E28: srl         $a0, $v0, 31
    ctx->r4 = S32(U32(ctx->r2) >> 31);
    // 0x80046E2C: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x80046E30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80046E34: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80046E38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80046E3C: sh          $v1, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r3;
    // 0x80046E40: lhu         $v0, 0x56($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X56);
    // 0x80046E44: sh          $v0, 0x6($s6)
    MEM_H(0X6, ctx->r22) = ctx->r2;
    // 0x80046E48: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80046E4C: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80046E50: sh          $v0, 0x8($s6)
    MEM_H(0X8, ctx->r22) = ctx->r2;
    // 0x80046E54: lhu         $v1, 0x6($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X6);
    // 0x80046E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80046E5C: j           L_80047070
    // 0x80046E60: sh          $v1, 0xA($s6)
    MEM_H(0XA, ctx->r22) = ctx->r3;
        goto L_80047070;
    // 0x80046E60: sh          $v1, 0xA($s6)
    MEM_H(0XA, ctx->r22) = ctx->r3;
L_80046E64:
    // 0x80046E64: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80046E68: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80046E6C: jal         0x8009A2B0
    // 0x80046E70: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x80046E70: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_7:
    // 0x80046E74: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80046E78:
    // 0x80046E78: beq         $v0, $zero, L_80047064
    if (ctx->r2 == 0) {
        // 0x80046E7C: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_80047064;
    }
    // 0x80046E7C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80046E80: lui         $s7, 0x8022
    ctx->r23 = S32(0X8022 << 16);
    // 0x80046E84: addiu       $s7, $s7, -0x26AC
    ctx->r23 = ADD32(ctx->r23, -0X26AC);
L_80046E88:
    // 0x80046E88: sll         $v0, $s5, 1
    ctx->r2 = S32(ctx->r21 << 1);
    // 0x80046E8C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80046E90: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80046E94: jal         0x8003E750
    // 0x80046E98: lh          $a0, -0x3C88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3C88);
    func_8003E750_19B50(rdram, ctx);
        goto after_8;
    // 0x80046E98: lh          $a0, -0x3C88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3C88);
    after_8:
    // 0x80046E9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80046EA0: blez        $a0, L_8004705C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80046EA4: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8004705C;
    }
    // 0x80046EA4: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046EA8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80046EAC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80046EB0: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x80046EB4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80046EB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80046EBC: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x80046EC0: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x80046EC4: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80046EC8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80046ECC: beq         $v0, $zero, L_80046EE8
    if (ctx->r2 == 0) {
        // 0x80046ED0: nop
    
            goto L_80046EE8;
    }
    // 0x80046ED0: nop

    // 0x80046ED4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80046ED8: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80046EDC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80046EE0: j           L_80046EF8
    // 0x80046EE4: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
        goto L_80046EF8;
    // 0x80046EE4: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
L_80046EE8:
    // 0x80046EE8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80046EEC: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80046EF0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80046EF4: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
L_80046EF8:
    // 0x80046EF8: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80046EFC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80046F00: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80046F04: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80046F08: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80046F0C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80046F10: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80046F14: beq         $v0, $zero, L_8004705C
    if (ctx->r2 == 0) {
        // 0x80046F18: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8004705C;
    }
    // 0x80046F18: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80046F1C: addiu       $s1, $s3, 0x8
    ctx->r17 = ADD32(ctx->r19, 0X8);
L_80046F20:
    // 0x80046F20: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x80046F24: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80046F28: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80046F2C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80046F30: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x80046F34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80046F38: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    // 0x80046F3C: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x80046F40: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x80046F44: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80046F48: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80046F4C: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x80046F50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80046F54: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    // 0x80046F58: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80046F5C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80046F60: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80046F64: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
    // 0x80046F68: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80046F6C: sltiu       $v0, $v0, 0x100
    ctx->r2 = ctx->r2 < 0X100 ? 1 : 0;
    // 0x80046F70: bnel        $v0, $zero, L_8004704C
    if (ctx->r2 != 0) {
        // 0x80046F74: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8004704C;
    }
    goto skip_0;
    // 0x80046F74: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x80046F78: lhu         $v0, 0x6($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6);
    // 0x80046F7C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80046F80: beq         $v0, $zero, L_80046F94
    if (ctx->r2 == 0) {
        // 0x80046F84: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_80046F94;
    }
    // 0x80046F84: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80046F88: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80046F8C: j           L_80046FA0
    // 0x80046F90: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
        goto L_80046FA0;
    // 0x80046F90: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
L_80046F94:
    // 0x80046F94: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80046F98: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80046F9C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_80046FA0:
    // 0x80046FA0: jal         0x8009A3B4
    // 0x80046FA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80046FA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80046FA8: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80046FAC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80046FB0: addiu       $a3, $a3, -0x35F0
    ctx->r7 = ADD32(ctx->r7, -0X35F0);
    // 0x80046FB4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80046FB8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80046FBC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80046FC0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80046FC4: jalr        $v0
    // 0x80046FC8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80046FC8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x80046FCC: beql        $v0, $zero, L_8004704C
    if (ctx->r2 == 0) {
        // 0x80046FD0: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8004704C;
    }
    goto skip_1;
    // 0x80046FD0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_1:
    // 0x80046FD4: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x80046FD8: addiu       $s0, $s4, 0x4
    ctx->r16 = ADD32(ctx->r20, 0X4);
L_80046FDC:
    // 0x80046FDC: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x80046FE0: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80046FE4: lhu         $v1, 0x0($s7)
    ctx->r3 = MEM_HU(ctx->r23, 0X0);
    // 0x80046FE8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80046FEC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80046FF0: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80046FF4: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80046FF8: lhu         $v1, -0x2($s7)
    ctx->r3 = MEM_HU(ctx->r23, -0X2);
    // 0x80046FFC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80047000: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80047004: sh          $a0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r4;
    // 0x80047008: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x8004700C: jal         0x8003FC30
    // 0x80047010: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8003FC30_1B030(rdram, ctx);
        goto after_11;
    // 0x80047010: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_11:
    // 0x80047014: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80047018: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x8004701C: lh          $v0, 0x30($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X30);
    // 0x80047020: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80047024: beq         $v0, $zero, L_8004703C
    if (ctx->r2 == 0) {
        // 0x80047028: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8004703C;
    }
    // 0x80047028: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8004702C: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x80047030: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80047034: bne         $v0, $zero, L_80046DD4
    if (ctx->r2 != 0) {
        // 0x80047038: nop
    
            goto L_80046DD4;
    }
    // 0x80047038: nop

L_8004703C:
    // 0x8004703C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80047040: bne         $s2, $zero, L_80046FDC
    if (ctx->r18 != 0) {
        // 0x80047044: addiu       $s4, $s4, 0x8
        ctx->r20 = ADD32(ctx->r20, 0X8);
            goto L_80046FDC;
    }
    // 0x80047044: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80047048: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8004704C:
    // 0x8004704C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80047050: bne         $v0, $zero, L_80046F20
    if (ctx->r2 != 0) {
        // 0x80047054: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_80046F20;
    }
    // 0x80047054: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x80047058: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_8004705C:
    // 0x8004705C: bne         $v0, $zero, L_80046E88
    if (ctx->r2 != 0) {
        // 0x80047060: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_80046E88;
    }
    // 0x80047060: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_80047064:
    // 0x80047064: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80047068: sh          $zero, 0x8($s6)
    MEM_H(0X8, ctx->r22) = 0;
    // 0x8004706C: sh          $zero, 0xA($s6)
    MEM_H(0XA, ctx->r22) = 0;
L_80047070:
    // 0x80047070: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80047074: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80047078: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x8004707C: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x80047080: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x80047084: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x80047088: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8004708C: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80047090: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80047094: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80047098: jr          $ra
    // 0x8004709C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x8004709C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_80079AC8_54EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079ACC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80079AD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80079AD4: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x80079AD8: lbu         $a0, 0xA($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XA);
    // 0x80079ADC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079AE0: addiu       $v0, $v0, -0x2E74
    ctx->r2 = ADD32(ctx->r2, -0X2E74);
    // 0x80079AE4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80079AE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80079AEC: sll         $a3, $a0, 1
    ctx->r7 = S32(ctx->r4 << 1);
    // 0x80079AF0: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80079AF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80079AF8: lh          $v0, 0x49C4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C4);
    // 0x80079AFC: lh          $a0, 0x38($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X38);
    // 0x80079B00: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x80079B04: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80079B08: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80079B0C: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x80079B10: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    // 0x80079B14: addiu       $a0, $t0, 0x64
    ctx->r4 = ADD32(ctx->r8, 0X64);
    // 0x80079B18: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80079B1C: bne         $v0, $zero, L_80079BD4
    if (ctx->r2 != 0) {
        // 0x80079B20: nop
    
            goto L_80079BD4;
    }
    // 0x80079B20: nop

    // 0x80079B24: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80079B28: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80079B2C: lh          $v1, 0x3C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X3C);
    // 0x80079B30: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80079B34: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80079B38: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x80079B3C: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80079B40: bne         $v0, $zero, L_80079BD4
    if (ctx->r2 != 0) {
        // 0x80079B44: nop
    
            goto L_80079BD4;
    }
    // 0x80079B44: nop

    // 0x80079B48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80079B4C: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80079B50: lh          $v1, 0x3A($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X3A);
    // 0x80079B54: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80079B58: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80079B5C: addiu       $v1, $t0, 0x96
    ctx->r3 = ADD32(ctx->r8, 0X96);
    // 0x80079B60: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80079B64: bne         $v1, $zero, L_80079BD4
    if (ctx->r3 != 0) {
        // 0x80079B68: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80079BD4;
    }
    // 0x80079B68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80079B6C: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x80079B70: bne         $v1, $zero, L_80079BAC
    if (ctx->r3 != 0) {
        // 0x80079B74: sb          $v0, 0x8($a1)
        MEM_B(0X8, ctx->r5) = ctx->r2;
            goto L_80079BAC;
    }
    // 0x80079B74: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80079B78: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80079B7C: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x80079B80: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80079B84: addiu       $v1, $v1, -0x2E34
    ctx->r3 = ADD32(ctx->r3, -0X2E34);
    // 0x80079B88: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80079B8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80079B90: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80079B94: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80079B98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80079B9C: jal         0x80070E98
    // 0x80079BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80070E98_4C298(rdram, ctx);
        goto after_0;
    // 0x80079BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80079BA4: j           L_80079BD4
    // 0x80079BA8: nop

        goto L_80079BD4;
    // 0x80079BA8: nop

L_80079BAC:
    // 0x80079BAC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80079BB0: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x80079BB4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80079BB8: addiu       $v1, $v1, -0x2E2C
    ctx->r3 = ADD32(ctx->r3, -0X2E2C);
    // 0x80079BBC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80079BC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80079BC4: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80079BC8: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80079BCC: jal         0x80070F38
    // 0x80079BD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_1;
    // 0x80079BD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
L_80079BD4:
    // 0x80079BD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80079BD8: jr          $ra
    // 0x80079BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80079BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008C114_67514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C114: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008C118: lw          $v0, 0x54($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X54);
    // 0x8008C11C: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8008C120: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C124: bgez        $v0, L_8008C150
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008C128: nop
    
            goto L_8008C150;
    }
    // 0x8008C128: nop

    // 0x8008C12C: lbu         $v0, 0xC3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC3);
    // 0x8008C130: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8008C134: beq         $v0, $zero, L_8008C150
    if (ctx->r2 == 0) {
        // 0x8008C138: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8008C150;
    }
    // 0x8008C138: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8008C13C: lbu         $v0, 0xC4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC4);
    // 0x8008C140: sb          $v1, 0xC3($a1)
    MEM_B(0XC3, ctx->r5) = ctx->r3;
    // 0x8008C144: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8008C148: sb          $v1, 0xC5($a1)
    MEM_B(0XC5, ctx->r5) = ctx->r3;
    // 0x8008C14C: sb          $v0, 0xCD($a1)
    MEM_B(0XCD, ctx->r5) = ctx->r2;
L_8008C150:
    // 0x8008C150: lbu         $a2, 0xC3($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0XC3);
    // 0x8008C154: lbu         $v0, 0xBF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XBF);
    // 0x8008C158: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8008C15C: sb          $v0, 0xC5($a1)
    MEM_B(0XC5, ctx->r5) = ctx->r2;
    // 0x8008C160: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008C164: beq         $v1, $v0, L_8008C1F8
    if (ctx->r3 == ctx->r2) {
        // 0x8008C168: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8008C1F8;
    }
    // 0x8008C168: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8008C16C: beq         $v0, $zero, L_8008C184
    if (ctx->r2 == 0) {
        // 0x8008C170: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008C184;
    }
    // 0x8008C170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008C174: beq         $v1, $v0, L_8008C1A0
    if (ctx->r3 == ctx->r2) {
        // 0x8008C178: nop
    
            goto L_8008C1A0;
    }
    // 0x8008C178: nop

    // 0x8008C17C: j           L_8008C2E8
    // 0x8008C180: nop

        goto L_8008C2E8;
    // 0x8008C180: nop

L_8008C184:
    // 0x8008C184: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8008C188: beq         $v1, $v0, L_8008C2E8
    if (ctx->r3 == ctx->r2) {
        // 0x8008C18C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8008C2E8;
    }
    // 0x8008C18C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8008C190: beq         $v1, $v0, L_8008C270
    if (ctx->r3 == ctx->r2) {
        // 0x8008C194: nop
    
            goto L_8008C270;
    }
    // 0x8008C194: nop

    // 0x8008C198: j           L_8008C2E8
    // 0x8008C19C: nop

        goto L_8008C2E8;
    // 0x8008C19C: nop

L_8008C1A0:
    // 0x8008C1A0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8008C1A4: lw          $v1, 0x40($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X40);
    // 0x8008C1A8: lw          $a0, 0x64($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X64);
    // 0x8008C1AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C1B0: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8008C1B4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008C1B8: mflo        $v0
    ctx->r2 = lo;
    // 0x8008C1BC: lbu         $v1, 0xC6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC6);
    // 0x8008C1C0: srl         $v0, $v0, 10
    ctx->r2 = S32(U32(ctx->r2) >> 10);
    // 0x8008C1C4: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008C1C8: beq         $v1, $zero, L_8008C1EC
    if (ctx->r3 == 0) {
        // 0x8008C1CC: nop
    
            goto L_8008C1EC;
    }
    // 0x8008C1CC: nop

    // 0x8008C1D0: lwc1        $f0, 0x58($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X58);
    // 0x8008C1D4: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008C1D8: nop

    // 0x8008C1DC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C1E0: lbu         $v0, 0xC0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC0);
    // 0x8008C1E4: j           L_8008C248
    // 0x8008C1E8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
        goto L_8008C248;
    // 0x8008C1E8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
L_8008C1EC:
    // 0x8008C1EC: lbu         $v1, 0xC1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC1);
    // 0x8008C1F0: j           L_8008C264
    // 0x8008C1F4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8008C264;
    // 0x8008C1F4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8008C1F8:
    // 0x8008C1F8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8008C1FC: lw          $v1, 0x40($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X40);
    // 0x8008C200: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C204: lbu         $v1, 0xC6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC6);
    // 0x8008C208: lw          $a0, 0x64($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X64);
    // 0x8008C20C: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8008C210: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C214: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008C218: mflo        $v0
    ctx->r2 = lo;
    // 0x8008C21C: lbu         $v1, 0xC7($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC7);
    // 0x8008C220: srl         $v0, $v0, 10
    ctx->r2 = S32(U32(ctx->r2) >> 10);
    // 0x8008C224: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008C228: beql        $v1, $zero, L_8008C260
    if (ctx->r3 == 0) {
        // 0x8008C22C: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8008C260;
    }
    goto skip_0;
    // 0x8008C22C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8008C230: lwc1        $f0, 0x5C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X5C);
    // 0x8008C234: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008C238: nop

    // 0x8008C23C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C240: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008C244: lbu         $v0, 0xC1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC1);
L_8008C248:
    // 0x8008C248: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008C24C: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8008C250: nop

    // 0x8008C254: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008C258: j           L_8008C2E8
    // 0x8008C25C: sb          $v0, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r2;
        goto L_8008C2E8;
    // 0x8008C25C: sb          $v0, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r2;
L_8008C260:
    // 0x8008C260: lbu         $v1, 0xC2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC2);
L_8008C264:
    // 0x8008C264: sb          $v0, 0xC3($a1)
    MEM_B(0XC3, ctx->r5) = ctx->r2;
    // 0x8008C268: j           L_8008C2E8
    // 0x8008C26C: sb          $v1, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r3;
        goto L_8008C2E8;
    // 0x8008C26C: sb          $v1, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r3;
L_8008C270:
    // 0x8008C270: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8008C274: lw          $v1, 0x54($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X54);
    // 0x8008C278: lw          $a0, 0x64($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X64);
    // 0x8008C27C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C280: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8008C284: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008C288: mflo        $v0
    ctx->r2 = lo;
    // 0x8008C28C: lbu         $v1, 0xC8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC8);
    // 0x8008C290: srl         $v0, $v0, 10
    ctx->r2 = S32(U32(ctx->r2) >> 10);
    // 0x8008C294: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008C298: beql        $v1, $zero, L_8008C2E0
    if (ctx->r3 == 0) {
        // 0x8008C29C: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8008C2E0;
    }
    goto skip_1;
    // 0x8008C29C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x8008C2A0: lwc1        $f0, 0x60($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X60);
    // 0x8008C2A4: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008C2A8: nop

    // 0x8008C2AC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C2B0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008C2B4: lbu         $v0, 0xCD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XCD);
    // 0x8008C2B8: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008C2BC: nop

    // 0x8008C2C0: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C2C4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008C2C8: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008C2CC: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8008C2D0: nop

    // 0x8008C2D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C2D8: j           L_8008C2E8
    // 0x8008C2DC: sb          $v0, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r2;
        goto L_8008C2E8;
    // 0x8008C2DC: sb          $v0, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r2;
L_8008C2E0:
    // 0x8008C2E0: sb          $v0, 0xC3($a1)
    MEM_B(0XC3, ctx->r5) = ctx->r2;
    // 0x8008C2E4: sb          $zero, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = 0;
L_8008C2E8:
    // 0x8008C2E8: jr          $ra
    // 0x8008C2EC: nop

    TRACE_RETURN()
    return;
    // 0x8008C2EC: nop

;}
RECOMP_FUNC void func_80087AE8_62EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087AE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80087AEC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80087AF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80087AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80087AF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80087AFC: jal         0x80092EB0
    // 0x80087B00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80087B00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80087B04: jal         0x80025E1C
    // 0x80087B08: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    func_80025E1C_121C(rdram, ctx);
        goto after_1;
    // 0x80087B08: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    after_1:
    // 0x80087B0C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80087B10: beql        $s1, $zero, L_80087BA0
    if (ctx->r17 == 0) {
        // 0x80087B14: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80087BA0;
    }
    goto skip_0;
    // 0x80087B14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80087B18: jal         0x80087570
    // 0x80087B1C: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x80087B1C: nop

    after_2:
    // 0x80087B20: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x80087B24: addiu       $s0, $s0, -0x29D8
    ctx->r16 = ADD32(ctx->r16, -0X29D8);
    // 0x80087B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80087B2C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80087B30: addiu       $a1, $a1, -0x29C0
    ctx->r5 = ADD32(ctx->r5, -0X29C0);
    // 0x80087B34: jal         0x8009A470
    // 0x80087B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80087B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80087B3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80087B40: jal         0x80099440
    // 0x80087B44: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x80087B44: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    after_4:
    // 0x80087B48: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087B4C: addiu       $a0, $a0, -0x29F0
    ctx->r4 = ADD32(ctx->r4, -0X29F0);
    // 0x80087B50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087B54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80087B58: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80087B5C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80087B60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80087B64: jal         0x80095690
    // 0x80087B68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    osFlashReadArray_recomp(rdram, ctx);
        goto after_5;
    // 0x80087B68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_5:
    // 0x80087B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80087B70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087B74: jal         0x8009A5E0
    // 0x80087B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x80087B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80087B7C: addiu       $a0, $s1, 0x1A00
    ctx->r4 = ADD32(ctx->r17, 0X1A00);
    // 0x80087B80: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80087B84: jal         0x80099F90
    // 0x80087B88: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    bcopy_recomp(rdram, ctx);
        goto after_7;
    // 0x80087B88: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_7:
    // 0x80087B8C: jal         0x80087590
    // 0x80087B90: nop

    func_80087590_62990(rdram, ctx);
        goto after_8;
    // 0x80087B90: nop

    after_8:
    // 0x80087B94: jal         0x80025FF8
    // 0x80087B98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_9;
    // 0x80087B98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x80087B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80087BA0:
    // 0x80087BA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80087BA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80087BA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80087BAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80087BB0: jr          $ra
    // 0x80087BB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80087BB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80087BB8: nop

    // 0x80087BBC: nop

;}
RECOMP_FUNC void func_80078E70_54270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078E70: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80078E74: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80078E78: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80078E7C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80078E80: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x80078E84: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80078E88: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x80078E8C: sltiu       $v0, $s6, 0x11
    ctx->r2 = ctx->r22 < 0X11 ? 1 : 0;
    // 0x80078E90: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80078E94: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80078E98: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80078E9C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80078EA0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80078EA4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80078EA8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80078EAC: bne         $v0, $zero, L_80078EB8
    if (ctx->r2 != 0) {
        // 0x80078EB0: sw          $a0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r4;
            goto L_80078EB8;
    }
    // 0x80078EB0: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x80078EB4: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
L_80078EB8:
    // 0x80078EB8: sltiu       $v0, $s0, 0x6
    ctx->r2 = ctx->r16 < 0X6 ? 1 : 0;
    // 0x80078EBC: beql        $v0, $zero, L_80078EC4
    if (ctx->r2 == 0) {
        // 0x80078EC0: addiu       $s0, $zero, 0x5
        ctx->r16 = ADD32(0, 0X5);
            goto L_80078EC4;
    }
    goto skip_0;
    // 0x80078EC0: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    skip_0:
L_80078EC4:
    // 0x80078EC4: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x80078EC8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80078ECC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80078ED0: lhu         $v0, -0x31F6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X31F6);
    // 0x80078ED4: jal         0x800A3450
    // 0x80078ED8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80078ED8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80078EDC: andi        $s3, $v0, 0xFFF
    ctx->r19 = ctx->r2 & 0XFFF;
    // 0x80078EE0: beq         $s6, $zero, L_80079130
    if (ctx->r22 == 0) {
        // 0x80078EE4: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80079130;
    }
    // 0x80078EE4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80078EE8: srl         $v0, $s5, 16
    ctx->r2 = S32(U32(ctx->r21) >> 16);
    // 0x80078EEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078EF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80078EF4: srl         $v0, $s5, 8
    ctx->r2 = S32(U32(ctx->r21) >> 8);
    // 0x80078EF8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078EFC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078F00: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80078F04: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80078F08: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x80078F0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80078F10: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x80078F14: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80078F18: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80078F1C:
    // 0x80078F1C: jal         0x8004F144
    // 0x80078F20: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80078F20: nop

    after_1:
    // 0x80078F24: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80078F28: beq         $s2, $zero, L_8007911C
    if (ctx->r18 == 0) {
        // 0x80078F2C: addiu       $v0, $zero, 0x86
        ctx->r2 = ADD32(0, 0X86);
            goto L_8007911C;
    }
    // 0x80078F2C: addiu       $v0, $zero, 0x86
    ctx->r2 = ADD32(0, 0X86);
    // 0x80078F30: sb          $fp, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r30;
    // 0x80078F34: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x80078F38: jal         0x800A3450
    // 0x80078F3C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80078F3C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_2:
    // 0x80078F40: srl         $v1, $s5, 24
    ctx->r3 = S32(U32(ctx->r21) >> 24);
    // 0x80078F44: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80078F48: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80078F4C: beq         $v0, $zero, L_80078F68
    if (ctx->r2 == 0) {
        // 0x80078F50: nop
    
            goto L_80078F68;
    }
    // 0x80078F50: nop

    // 0x80078F54: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80078F58: addiu       $v0, $v0, -0x46F0
    ctx->r2 = ADD32(ctx->r2, -0X46F0);
    // 0x80078F5C: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x80078F60: j           L_80078FF4
    // 0x80078F64: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
        goto L_80078FF4;
    // 0x80078F64: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_80078F68:
    // 0x80078F68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80078F6C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80078F70: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80078F74: beq         $v0, $zero, L_80078F90
    if (ctx->r2 == 0) {
        // 0x80078F78: nop
    
            goto L_80078F90;
    }
    // 0x80078F78: nop

    // 0x80078F7C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80078F80: addiu       $v0, $v0, -0x46C0
    ctx->r2 = ADD32(ctx->r2, -0X46C0);
    // 0x80078F84: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x80078F88: j           L_80078FF4
    // 0x80078F8C: sb          $s7, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r23;
        goto L_80078FF4;
    // 0x80078F8C: sb          $s7, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r23;
L_80078F90:
    // 0x80078F90: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80078F94: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80078F98: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80078F9C: beql        $v0, $zero, L_80078FB8
    if (ctx->r2 == 0) {
        // 0x80078FA0: andi        $v0, $s5, 0xFF
        ctx->r2 = ctx->r21 & 0XFF;
            goto L_80078FB8;
    }
    goto skip_1;
    // 0x80078FA0: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    skip_1:
    // 0x80078FA4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80078FA8: addiu       $v0, $v0, -0x4690
    ctx->r2 = ADD32(ctx->r2, -0X4690);
    // 0x80078FAC: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x80078FB0: j           L_80078FF0
    // 0x80078FB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80078FF0;
    // 0x80078FB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80078FB8:
    // 0x80078FB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078FBC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80078FC0: beql        $v0, $zero, L_80078FDC
    if (ctx->r2 == 0) {
        // 0x80078FC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80078FDC;
    }
    goto skip_2;
    // 0x80078FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x80078FC8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80078FCC: addiu       $v0, $v0, -0x4660
    ctx->r2 = ADD32(ctx->r2, -0X4660);
    // 0x80078FD0: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x80078FD4: j           L_80078FF0
    // 0x80078FD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80078FF0;
    // 0x80078FD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80078FDC:
    // 0x80078FDC: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x80078FE0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80078FE4: addiu       $v0, $v0, -0x4630
    ctx->r2 = ADD32(ctx->r2, -0X4630);
    // 0x80078FE8: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x80078FEC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80078FF0:
    // 0x80078FF0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80078FF4:
    // 0x80078FF4: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80078FF8: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
    // 0x80078FFC: jal         0x8009A3B4
    // 0x80079000: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80079000: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80079004: jal         0x800A3450
    // 0x80079008: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80079008: nop

    after_4:
    // 0x8007900C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80079010: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80079014: andi        $v0, $s0, 0xF
    ctx->r2 = ctx->r16 & 0XF;
    // 0x80079018: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8007901C: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80079020: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80079024: sb          $s1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r17;
    // 0x80079028: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007902C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80079030: lhu         $v1, -0x3250($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3250);
    // 0x80079034: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80079038: andi        $v0, $s0, 0xFFF
    ctx->r2 = ctx->r16 & 0XFFF;
    // 0x8007903C: sh          $v0, 0xC($s2)
    MEM_H(0XC, ctx->r18) = ctx->r2;
    // 0x80079040: srl         $v0, $s0, 4
    ctx->r2 = S32(U32(ctx->r16) >> 4);
    // 0x80079044: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x80079048: jal         0x80032498
    // 0x8007904C: sh          $v1, 0x3E($s2)
    MEM_H(0X3E, ctx->r18) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x8007904C: sh          $v1, 0x3E($s2)
    MEM_H(0X3E, ctx->r18) = ctx->r3;
    after_5:
    // 0x80079050: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80079054: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80079058: lbu         $v1, -0x31D4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X31D4);
    // 0x8007905C: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80079060: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80079064: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80079068: mflo        $v0
    ctx->r2 = lo;
    // 0x8007906C: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80079070: sh          $v0, 0x2C($s2)
    MEM_H(0X2C, ctx->r18) = ctx->r2;
    // 0x80079074: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079078: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8007907C: lbu         $v0, -0x31CC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X31CC);
    // 0x80079080: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80079084: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80079088: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8007908C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80079090: jal         0x800324B4
    // 0x80079094: sh          $v0, 0x2E($s2)
    MEM_H(0X2E, ctx->r18) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x80079094: sh          $v0, 0x2E($s2)
    MEM_H(0X2E, ctx->r18) = ctx->r2;
    after_6:
    // 0x80079098: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007909C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x800790A0: lbu         $v1, -0x31D4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X31D4);
    // 0x800790A4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x800790A8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800790AC: mflo        $v0
    ctx->r2 = lo;
    // 0x800790B0: sh          $zero, 0x32($s2)
    MEM_H(0X32, ctx->r18) = 0;
    // 0x800790B4: sh          $fp, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r30;
    // 0x800790B8: sh          $zero, 0x36($s2)
    MEM_H(0X36, ctx->r18) = 0;
    // 0x800790BC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800790C0: jal         0x800A3450
    // 0x800790C4: sh          $v0, 0x30($s2)
    MEM_H(0X30, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x800790C4: sh          $v0, 0x30($s2)
    MEM_H(0X30, ctx->r18) = ctx->r2;
    after_7:
    // 0x800790C8: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x800790CC: beq         $v1, $s7, L_8007910C
    if (ctx->r3 == ctx->r23) {
        // 0x800790D0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007910C;
    }
    // 0x800790D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800790D4: beql        $v0, $zero, L_800790EC
    if (ctx->r2 == 0) {
        // 0x800790D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800790EC;
    }
    goto skip_3;
    // 0x800790D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_3:
    // 0x800790DC: beq         $v1, $zero, L_80079104
    if (ctx->r3 == 0) {
        // 0x800790E0: lui         $v0, 0x60
        ctx->r2 = S32(0X60 << 16);
            goto L_80079104;
    }
    // 0x800790E0: lui         $v0, 0x60
    ctx->r2 = S32(0X60 << 16);
    // 0x800790E4: j           L_8007911C
    // 0x800790E8: nop

        goto L_8007911C;
    // 0x800790E8: nop

L_800790EC:
    // 0x800790EC: beq         $v1, $v0, L_80079114
    if (ctx->r3 == ctx->r2) {
        // 0x800790F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80079114;
    }
    // 0x800790F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800790F4: beq         $v1, $v0, L_80079118
    if (ctx->r3 == ctx->r2) {
        // 0x800790F8: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_80079118;
    }
    // 0x800790F8: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x800790FC: j           L_8007911C
    // 0x80079100: nop

        goto L_8007911C;
    // 0x80079100: nop

L_80079104:
    // 0x80079104: j           L_80079118
    // 0x80079108: ori         $v0, $v0, 0x6060
    ctx->r2 = ctx->r2 | 0X6060;
        goto L_80079118;
    // 0x80079108: ori         $v0, $v0, 0x6060
    ctx->r2 = ctx->r2 | 0X6060;
L_8007910C:
    // 0x8007910C: j           L_80079118
    // 0x80079110: ori         $v0, $zero, 0x8080
    ctx->r2 = 0 | 0X8080;
        goto L_80079118;
    // 0x80079110: ori         $v0, $zero, 0x8080
    ctx->r2 = 0 | 0X8080;
L_80079114:
    // 0x80079114: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80079118:
    // 0x80079118: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_8007911C:
    // 0x8007911C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80079120: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80079124: sltu        $v0, $s4, $s6
    ctx->r2 = ctx->r20 < ctx->r22 ? 1 : 0;
    // 0x80079128: bne         $v0, $zero, L_80078F1C
    if (ctx->r2 != 0) {
        // 0x8007912C: addu        $s3, $s3, $t0
        ctx->r19 = ADD32(ctx->r19, ctx->r8);
            goto L_80078F1C;
    }
    // 0x8007912C: addu        $s3, $s3, $t0
    ctx->r19 = ADD32(ctx->r19, ctx->r8);
L_80079130:
    // 0x80079130: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80079134: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80079138: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8007913C: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80079140: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80079144: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80079148: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8007914C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80079150: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80079154: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80079158: jr          $ra
    // 0x8007915C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8007915C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void alCopy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098D10: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80098D14: blez        $a2, L_80098D38
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80098D18: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80098D38;
    }
    // 0x80098D18: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80098D1C:
    // 0x80098D1C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80098D20: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80098D24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80098D28: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80098D2C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80098D30: bne         $v0, $zero, L_80098D1C
    if (ctx->r2 != 0) {
        // 0x80098D34: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80098D1C;
    }
    // 0x80098D34: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80098D38:
    // 0x80098D38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80098D3C: jr          $ra
    // 0x80098D40: nop

    TRACE_RETURN()
    return;
    // 0x80098D40: nop

;}
RECOMP_FUNC void func_8006FA44_4AE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FA44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006FA48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006FA4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006FA50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006FA54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006FA58: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006FA5C: jal         0x8006CC14
    // 0x8006FA60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8006CC14_48014(rdram, ctx);
        goto after_0;
    // 0x8006FA60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8006FA64: andi        $v0, $s1, 0x100
    ctx->r2 = ctx->r17 & 0X100;
    // 0x8006FA68: beq         $v0, $zero, L_8006FA7C
    if (ctx->r2 == 0) {
        // 0x8006FA6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006FA7C;
    }
    // 0x8006FA6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006FA70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006FA74: j           L_8006FAAC
    // 0x8006FA78: sw          $zero, -0x1B68($at)
    MEM_W(-0X1B68, ctx->r1) = 0;
        goto L_8006FAAC;
    // 0x8006FA78: sw          $zero, -0x1B68($at)
    MEM_W(-0X1B68, ctx->r1) = 0;
L_8006FA7C:
    // 0x8006FA7C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006FA80: lbu         $v1, -0x3B95($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B95);
    // 0x8006FA84: beq         $v1, $v0, L_8006FAAC
    if (ctx->r3 == ctx->r2) {
        // 0x8006FA88: nop
    
            goto L_8006FAAC;
    }
    // 0x8006FA88: nop

    // 0x8006FA8C: lhu         $v0, 0x140($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X140);
    // 0x8006FA90: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006FA94: bne         $v0, $zero, L_8006FAAC
    if (ctx->r2 != 0) {
        // 0x8006FA98: nop
    
            goto L_8006FAAC;
    }
    // 0x8006FA98: nop

    // 0x8006FA9C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006FAA0: jal         0x80034518
    // 0x8006FAA4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80034518_F918(rdram, ctx);
        goto after_1;
    // 0x8006FAA4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_1:
    // 0x8006FAA8: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
L_8006FAAC:
    // 0x8006FAAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006FAB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006FAB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006FAB8: jr          $ra
    // 0x8006FABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006FABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80093D50_6F150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093D54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093D58: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80093D5C: jal         0x8009B9F0
    // 0x80093D60: addiu       $a0, $a0, -0xAF0
    ctx->r4 = ADD32(ctx->r4, -0XAF0);
    osStartThread_recomp(rdram, ctx);
        goto after_0;
    // 0x80093D60: addiu       $a0, $a0, -0xAF0
    ctx->r4 = ADD32(ctx->r4, -0XAF0);
    after_0:
    // 0x80093D64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093D68: jr          $ra
    // 0x80093D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80048C7C_2407C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048C7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80048C80: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80048C84: addiu       $a0, $a0, -0x397C
    ctx->r4 = ADD32(ctx->r4, -0X397C);
    // 0x80048C88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80048C8C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80048C90: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80048C94: jal         0x80049204
    // 0x80048C98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_80049204_24604(rdram, ctx);
        goto after_0;
    // 0x80048C98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80048C9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80048CA0: lh          $v0, -0x3984($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3984);
    // 0x80048CA4: blez        $v0, L_80048CB8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80048CA8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80048CB8;
    }
    // 0x80048CA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80048CAC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80048CB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048CB4: sh          $v0, -0x3984($at)
    MEM_H(-0X3984, ctx->r1) = ctx->r2;
L_80048CB8:
    // 0x80048CB8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80048CBC: lh          $v0, -0x3982($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3982);
    // 0x80048CC0: blez        $v0, L_80048CD4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80048CC4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80048CD4;
    }
    // 0x80048CC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80048CC8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80048CCC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048CD0: sh          $v0, -0x3982($at)
    MEM_H(-0X3982, ctx->r1) = ctx->r2;
L_80048CD4:
    // 0x80048CD4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80048CD8: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80048CDC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80048CE0: lw          $v1, -0x2F34($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F34);
    // 0x80048CE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80048CE8: beq         $v1, $v0, L_80048D0C
    if (ctx->r3 == ctx->r2) {
        // 0x80048CEC: sw          $zero, 0x6B30($at)
        MEM_W(0X6B30, ctx->r1) = 0;
            goto L_80048D0C;
    }
    // 0x80048CEC: sw          $zero, 0x6B30($at)
    MEM_W(0X6B30, ctx->r1) = 0;
    // 0x80048CF0: beq         $v1, $zero, L_80048D04
    if (ctx->r3 == 0) {
        // 0x80048CF4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80048D04;
    }
    // 0x80048CF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80048CF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048CFC: j           L_80048D0C
    // 0x80048D00: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
        goto L_80048D0C;
    // 0x80048D00: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
L_80048D04:
    // 0x80048D04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048D08: sw          $zero, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = 0;
L_80048D0C:
    // 0x80048D0C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80048D10: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80048D14: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80048D18: lw          $v1, -0x2F30($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F30);
    // 0x80048D1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048D20: sw          $v0, -0x2F34($at)
    MEM_W(-0X2F34, ctx->r1) = ctx->r2;
    // 0x80048D24: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80048D28: beq         $v0, $zero, L_80048D44
    if (ctx->r2 == 0) {
        // 0x80048D2C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80048D44;
    }
    // 0x80048D2C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80048D30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80048D34: addu        $at, $at, $v0
    gpr jr_addend_80048D3C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80048D38: lw          $v0, 0x22D8($at)
    ctx->r2 = ADD32(ctx->r1, 0X22D8);
    // 0x80048D3C: jr          $v0
    // 0x80048D40: nop

    switch (jr_addend_80048D3C >> 2) {
        case 0: goto L_80048D44; break;
        case 1: goto L_80048E2C; break;
        case 2: goto L_800490DC; break;
        case 3: goto L_80048E64; break;
        case 4: goto L_80048F40; break;
        case 5: goto L_80048FC4; break;
        default: switch_error(__func__, 0x80048D3C, 0x800D22D8);
    }
    // 0x80048D40: nop

L_80048D44:
    // 0x80048D44: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80048D48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80048D4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048D50: sw          $v0, -0x2F2C($at)
    MEM_W(-0X2F2C, ctx->r1) = ctx->r2;
    // 0x80048D54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80048D58: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80048D5C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D60: sb          $v0, -0x3992($at)
    MEM_B(-0X3992, ctx->r1) = ctx->r2;
    // 0x80048D64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D68: sb          $v0, -0x396E($at)
    MEM_B(-0X396E, ctx->r1) = ctx->r2;
    // 0x80048D6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D70: sb          $v0, -0x394A($at)
    MEM_B(-0X394A, ctx->r1) = ctx->r2;
    // 0x80048D74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D78: sb          $v0, -0x3926($at)
    MEM_B(-0X3926, ctx->r1) = ctx->r2;
    // 0x80048D7C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D80: sb          $v0, -0x3902($at)
    MEM_B(-0X3902, ctx->r1) = ctx->r2;
    // 0x80048D84: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D88: sb          $v0, -0x38DE($at)
    MEM_B(-0X38DE, ctx->r1) = ctx->r2;
    // 0x80048D8C: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x80048D90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048D94: sh          $v0, -0x398A($at)
    MEM_H(-0X398A, ctx->r1) = ctx->r2;
    // 0x80048D98: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x80048D9C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DA0: sh          $v0, -0x3968($at)
    MEM_H(-0X3968, ctx->r1) = ctx->r2;
    // 0x80048DA4: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x80048DA8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DAC: sh          $v0, -0x3966($at)
    MEM_H(-0X3966, ctx->r1) = ctx->r2;
    // 0x80048DB0: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x80048DB4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DB8: sh          $v0, -0x3944($at)
    MEM_H(-0X3944, ctx->r1) = ctx->r2;
    // 0x80048DBC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DC0: sh          $v0, -0x3920($at)
    MEM_H(-0X3920, ctx->r1) = ctx->r2;
    // 0x80048DC4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DC8: sh          $v0, -0x38FC($at)
    MEM_H(-0X38FC, ctx->r1) = ctx->r2;
    // 0x80048DCC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80048DD0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DD4: sh          $v0, -0x38D6($at)
    MEM_H(-0X38D6, ctx->r1) = ctx->r2;
    // 0x80048DD8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80048DDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048DE0: sw          $v0, -0x2F28($at)
    MEM_W(-0X2F28, ctx->r1) = ctx->r2;
    // 0x80048DE4: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80048DE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048DEC: sw          $a0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r4;
    // 0x80048DF0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DF4: sh          $v1, -0x398C($at)
    MEM_H(-0X398C, ctx->r1) = ctx->r3;
    // 0x80048DF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048DFC: sh          $v1, -0x3942($at)
    MEM_H(-0X3942, ctx->r1) = ctx->r3;
    // 0x80048E00: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E04: sh          $v1, -0x391E($at)
    MEM_H(-0X391E, ctx->r1) = ctx->r3;
    // 0x80048E08: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E0C: sh          $v1, -0x38FA($at)
    MEM_H(-0X38FA, ctx->r1) = ctx->r3;
    // 0x80048E10: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E14: sh          $zero, -0x38D8($at)
    MEM_H(-0X38D8, ctx->r1) = 0;
    // 0x80048E18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048E1C: sw          $v0, -0x2F24($at)
    MEM_W(-0X2F24, ctx->r1) = ctx->r2;
    // 0x80048E20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048E24: j           L_80048FFC
    // 0x80048E28: sw          $a0, -0x2F20($at)
    MEM_W(-0X2F20, ctx->r1) = ctx->r4;
        goto L_80048FFC;
    // 0x80048E28: sw          $a0, -0x2F20($at)
    MEM_W(-0X2F20, ctx->r1) = ctx->r4;
L_80048E2C:
    // 0x80048E2C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80048E30: lw          $v0, -0x2F2C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F2C);
    // 0x80048E34: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80048E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048E3C: sw          $v1, -0x2F2C($at)
    MEM_W(-0X2F2C, ctx->r1) = ctx->r3;
    // 0x80048E40: beq         $v0, $zero, L_80048E54
    if (ctx->r2 == 0) {
        // 0x80048E44: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80048E54;
    }
    // 0x80048E44: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80048E48: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80048E4C: j           L_80048F5C
    // 0x80048E50: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_80048F5C;
    // 0x80048E50: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
L_80048E54:
    // 0x80048E54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80048E58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048E5C: j           L_80048FFC
    // 0x80048E60: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
        goto L_80048FFC;
    // 0x80048E60: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
L_80048E64:
    // 0x80048E64: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80048E68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048E6C: sw          $v0, -0x2F2C($at)
    MEM_W(-0X2F2C, ctx->r1) = ctx->r2;
    // 0x80048E70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80048E74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048E78: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
    // 0x80048E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80048E80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E84: sb          $v0, -0x3992($at)
    MEM_B(-0X3992, ctx->r1) = ctx->r2;
    // 0x80048E88: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E8C: sb          $v0, -0x396E($at)
    MEM_B(-0X396E, ctx->r1) = ctx->r2;
    // 0x80048E90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E94: sb          $v0, -0x394A($at)
    MEM_B(-0X394A, ctx->r1) = ctx->r2;
    // 0x80048E98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048E9C: sb          $v0, -0x3926($at)
    MEM_B(-0X3926, ctx->r1) = ctx->r2;
    // 0x80048EA0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EA4: sb          $v0, -0x3902($at)
    MEM_B(-0X3902, ctx->r1) = ctx->r2;
    // 0x80048EA8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EAC: sb          $v0, -0x38DE($at)
    MEM_B(-0X38DE, ctx->r1) = ctx->r2;
    // 0x80048EB0: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80048EB4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EB8: sh          $v0, -0x398C($at)
    MEM_H(-0X398C, ctx->r1) = ctx->r2;
    // 0x80048EBC: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x80048EC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EC4: sh          $v0, -0x398A($at)
    MEM_H(-0X398A, ctx->r1) = ctx->r2;
    // 0x80048EC8: addiu       $v0, $zero, 0x160
    ctx->r2 = ADD32(0, 0X160);
    // 0x80048ECC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048ED0: sh          $v0, -0x3968($at)
    MEM_H(-0X3968, ctx->r1) = ctx->r2;
    // 0x80048ED4: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x80048ED8: addiu       $v1, $zero, 0x170
    ctx->r3 = ADD32(0, 0X170);
    // 0x80048EDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EE0: sh          $v0, -0x3966($at)
    MEM_H(-0X3966, ctx->r1) = ctx->r2;
    // 0x80048EE4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80048EE8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EEC: sh          $v0, -0x3942($at)
    MEM_H(-0X3942, ctx->r1) = ctx->r2;
    // 0x80048EF0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EF4: sh          $v0, -0x391E($at)
    MEM_H(-0X391E, ctx->r1) = ctx->r2;
    // 0x80048EF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048EFC: sh          $v0, -0x38FA($at)
    MEM_H(-0X38FA, ctx->r1) = ctx->r2;
    // 0x80048F00: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x80048F04: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F08: sh          $v0, -0x38D8($at)
    MEM_H(-0X38D8, ctx->r1) = ctx->r2;
    // 0x80048F0C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80048F10: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F14: sh          $v0, -0x38D6($at)
    MEM_H(-0X38D6, ctx->r1) = ctx->r2;
    // 0x80048F18: addiu       $v0, $zero, -0x48
    ctx->r2 = ADD32(0, -0X48);
    // 0x80048F1C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F20: sh          $v1, -0x3944($at)
    MEM_H(-0X3944, ctx->r1) = ctx->r3;
    // 0x80048F24: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F28: sh          $v1, -0x3920($at)
    MEM_H(-0X3920, ctx->r1) = ctx->r3;
    // 0x80048F2C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F30: sh          $v1, -0x38FC($at)
    MEM_H(-0X38FC, ctx->r1) = ctx->r3;
    // 0x80048F34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048F38: j           L_80048FFC
    // 0x80048F3C: sw          $v0, -0x2F28($at)
    MEM_W(-0X2F28, ctx->r1) = ctx->r2;
        goto L_80048FFC;
    // 0x80048F3C: sw          $v0, -0x2F28($at)
    MEM_W(-0X2F28, ctx->r1) = ctx->r2;
L_80048F40:
    // 0x80048F40: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80048F44: lw          $v0, -0x2F2C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F2C);
    // 0x80048F48: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80048F4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048F50: sw          $v1, -0x2F2C($at)
    MEM_W(-0X2F2C, ctx->r1) = ctx->r3;
    // 0x80048F54: beq         $v0, $zero, L_80048FB4
    if (ctx->r2 == 0) {
        // 0x80048F58: sll         $v1, $v1, 3
        ctx->r3 = S32(ctx->r3 << 3);
            goto L_80048FB4;
    }
    // 0x80048F58: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
L_80048F5C:
    // 0x80048F5C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80048F60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80048F64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F68: sh          $v0, -0x398C($at)
    MEM_H(-0X398C, ctx->r1) = ctx->r2;
    // 0x80048F6C: addiu       $v0, $v1, 0x110
    ctx->r2 = ADD32(ctx->r3, 0X110);
    // 0x80048F70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F74: sh          $v0, -0x3968($at)
    MEM_H(-0X3968, ctx->r1) = ctx->r2;
    // 0x80048F78: addiu       $v0, $v1, 0x120
    ctx->r2 = ADD32(ctx->r3, 0X120);
    // 0x80048F7C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F80: sh          $v0, -0x3944($at)
    MEM_H(-0X3944, ctx->r1) = ctx->r2;
    // 0x80048F84: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F88: sh          $v0, -0x3920($at)
    MEM_H(-0X3920, ctx->r1) = ctx->r2;
    // 0x80048F8C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F90: sh          $v0, -0x38FC($at)
    MEM_H(-0X38FC, ctx->r1) = ctx->r2;
    // 0x80048F94: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80048F98: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048F9C: sh          $v0, -0x38D8($at)
    MEM_H(-0X38D8, ctx->r1) = ctx->r2;
    // 0x80048FA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80048FA4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80048FA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048FAC: j           L_80048FFC
    // 0x80048FB0: sw          $v0, -0x2F28($at)
    MEM_W(-0X2F28, ctx->r1) = ctx->r2;
        goto L_80048FFC;
    // 0x80048FB0: sw          $v0, -0x2F28($at)
    MEM_W(-0X2F28, ctx->r1) = ctx->r2;
L_80048FB4:
    // 0x80048FB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80048FB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048FBC: j           L_80048FFC
    // 0x80048FC0: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
        goto L_80048FFC;
    // 0x80048FC0: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
L_80048FC4:
    // 0x80048FC4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048FC8: sb          $zero, -0x3992($at)
    MEM_B(-0X3992, ctx->r1) = 0;
    // 0x80048FCC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048FD0: sb          $zero, -0x396E($at)
    MEM_B(-0X396E, ctx->r1) = 0;
    // 0x80048FD4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048FD8: sb          $zero, -0x394A($at)
    MEM_B(-0X394A, ctx->r1) = 0;
    // 0x80048FDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048FE0: sb          $zero, -0x3926($at)
    MEM_B(-0X3926, ctx->r1) = 0;
    // 0x80048FE4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048FE8: sb          $zero, -0x3902($at)
    MEM_B(-0X3902, ctx->r1) = 0;
    // 0x80048FEC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048FF0: sb          $zero, -0x38DE($at)
    MEM_B(-0X38DE, ctx->r1) = 0;
    // 0x80048FF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048FF8: sw          $zero, -0x2F20($at)
    MEM_W(-0X2F20, ctx->r1) = 0;
L_80048FFC:
    // 0x80048FFC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80049000: addiu       $s0, $s0, -0x39A0
    ctx->r16 = ADD32(ctx->r16, -0X39A0);
    // 0x80049004: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80049008: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004900C: beq         $v0, $zero, L_8004901C
    if (ctx->r2 == 0) {
        // 0x80049010: nop
    
            goto L_8004901C;
    }
    // 0x80049010: nop

    // 0x80049014: jal         0x800490F4
    // 0x80049018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800490F4_244F4(rdram, ctx);
        goto after_1;
    // 0x80049018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8004901C:
    // 0x8004901C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80049020: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80049024: beq         $v0, $zero, L_80049034
    if (ctx->r2 == 0) {
        // 0x80049028: nop
    
            goto L_80049034;
    }
    // 0x80049028: nop

    // 0x8004902C: jal         0x80049330
    // 0x80049030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80049330_24730(rdram, ctx);
        goto after_2;
    // 0x80049030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80049034:
    // 0x80049034: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80049038: lb          $v0, 0x4B21($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B21);
    // 0x8004903C: beq         $v0, $zero, L_8004905C
    if (ctx->r2 == 0) {
        // 0x80049040: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8004905C;
    }
    // 0x80049040: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80049044: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
    // 0x80049048: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8004904C: beq         $v0, $zero, L_8004905C
    if (ctx->r2 == 0) {
        // 0x80049050: addiu       $a0, $s0, 0x24
        ctx->r4 = ADD32(ctx->r16, 0X24);
            goto L_8004905C;
    }
    // 0x80049050: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80049054: jal         0x800496C0
    // 0x80049058: nop

    func_800496C0_24AC0(rdram, ctx);
        goto after_3;
    // 0x80049058: nop

    after_3:
L_8004905C:
    // 0x8004905C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80049060: addiu       $s1, $s1, -0x3958
    ctx->r17 = ADD32(ctx->r17, -0X3958);
    // 0x80049064: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80049068:
    // 0x80049068: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004906C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80049070: lbu         $v0, -0x3958($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3958);
    // 0x80049074: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80049078: beq         $v0, $zero, L_80049088
    if (ctx->r2 == 0) {
        // 0x8004907C: nop
    
            goto L_80049088;
    }
    // 0x8004907C: nop

    // 0x80049080: jal         0x800492F8
    // 0x80049084: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800492F8_246F8(rdram, ctx);
        goto after_4;
    // 0x80049084: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_80049088:
    // 0x80049088: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004908C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80049090: lbu         $v0, -0x3958($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3958);
    // 0x80049094: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80049098: beql        $v0, $zero, L_800490AC
    if (ctx->r2 == 0) {
        // 0x8004909C: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_800490AC;
    }
    goto skip_0;
    // 0x8004909C: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    skip_0:
    // 0x800490A0: jal         0x80049948
    // 0x800490A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80049948_24D48(rdram, ctx);
        goto after_5;
    // 0x800490A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x800490A8: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
L_800490AC:
    // 0x800490AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800490B0: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x800490B4: bne         $v0, $zero, L_80049068
    if (ctx->r2 != 0) {
        // 0x800490B8: addiu       $s0, $s0, 0x24
        ctx->r16 = ADD32(ctx->r16, 0X24);
            goto L_80049068;
    }
    // 0x800490B8: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x800490BC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800490C0: addiu       $a0, $a0, -0x38EC
    ctx->r4 = ADD32(ctx->r4, -0X38EC);
    // 0x800490C4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800490C8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x800490CC: beq         $v0, $zero, L_800490DC
    if (ctx->r2 == 0) {
        // 0x800490D0: nop
    
            goto L_800490DC;
    }
    // 0x800490D0: nop

    // 0x800490D4: jal         0x80049B38
    // 0x800490D8: nop

    func_80049B38_24F38(rdram, ctx);
        goto after_6;
    // 0x800490D8: nop

    after_6:
L_800490DC:
    // 0x800490DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800490E0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800490E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800490E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800490EC: jr          $ra
    // 0x800490F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800490F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80051770_2CB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051778: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005177C: lbu         $v0, 0xAC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XAC);
    // 0x80051780: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x80051784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80051788: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005178C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80051790: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x80051794: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80051798: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8005179C: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x800517A0: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x800517A4: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x800517A8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800517AC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800517B0: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800517B4: mflo        $a0
    ctx->r4 = lo;
    // 0x800517B8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x800517BC: addiu       $s0, $s0, 0x210
    ctx->r16 = ADD32(ctx->r16, 0X210);
    // 0x800517C0: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x800517C4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800517C8: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x800517CC: jal         0x8003BD00
    // 0x800517D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003BD00_17100(rdram, ctx);
        goto after_0;
    // 0x800517D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800517D4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800517D8: addiu       $a0, $a0, -0x3D98
    ctx->r4 = ADD32(ctx->r4, -0X3D98);
    // 0x800517DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x800517E0: lui         $a2, 0xFF
    ctx->r6 = S32(0XFF << 16);
    // 0x800517E4: ori         $a2, $a2, 0xF000
    ctx->r6 = ctx->r6 | 0XF000;
    // 0x800517E8: lui         $t3, 0xFF00
    ctx->r11 = S32(0XFF00 << 16);
    // 0x800517EC: lui         $t2, 0xFFF
    ctx->r10 = S32(0XFFF << 16);
    // 0x800517F0: lui         $t1, 0xF000
    ctx->r9 = S32(0XF000 << 16);
    // 0x800517F4: lui         $a1, 0xF
    ctx->r5 = S32(0XF << 16);
    // 0x800517F8: ori         $a1, $a1, 0xFF00
    ctx->r5 = ctx->r5 | 0XFF00;
    // 0x800517FC: lui         $t0, 0xFFF0
    ctx->r8 = S32(0XFFF0 << 16);
L_80051800:
    // 0x80051800: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051804: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80051808: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8005180C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051810: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051814: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80051818: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8005181C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051820: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051824: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051828: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8005182C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80051830: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x80051834: srl         $v0, $v0, 24
    ctx->r2 = S32(U32(ctx->r2) >> 24);
    // 0x80051838: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8005183C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80051840: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80051844: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051848: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005184C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80051850: andi        $v0, $v0, 0xFFF0
    ctx->r2 = ctx->r2 & 0XFFF0;
    // 0x80051854: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80051858: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8005185C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051860: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051864: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x80051868: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8005186C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051870: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051874: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051878: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005187C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80051880: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x80051884: srl         $v0, $v0, 28
    ctx->r2 = S32(U32(ctx->r2) >> 28);
    // 0x80051888: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8005188C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80051890: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051894: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051898: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8005189C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x800518A0: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x800518A4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800518A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800518AC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800518B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800518B4: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x800518B8: srl         $v0, $v0, 20
    ctx->r2 = S32(U32(ctx->r2) >> 20);
    // 0x800518BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800518C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800518C4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800518C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x800518CC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800518D0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800518D4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800518D8: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x800518DC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800518E0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800518E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800518E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800518EC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x800518F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800518F4: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x800518F8: srl         $v0, $v0, 24
    ctx->r2 = S32(U32(ctx->r2) >> 24);
    // 0x800518FC: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80051900: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80051904: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80051908: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8005190C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051910: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051914: andi        $v0, $v0, 0xFFF0
    ctx->r2 = ctx->r2 & 0XFFF0;
    // 0x80051918: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8005191C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051920: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051924: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80051928: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x8005192C: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80051930: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051934: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051938: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005193C: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80051940: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80051944: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x80051948: srl         $v0, $v0, 28
    ctx->r2 = S32(U32(ctx->r2) >> 28);
    // 0x8005194C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80051950: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80051954: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051958: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005195C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051960: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80051964: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80051968: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8005196C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051970: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80051974: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80051978: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x8005197C: srl         $v0, $v0, 20
    ctx->r2 = S32(U32(ctx->r2) >> 20);
    // 0x80051980: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051984: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051988: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8005198C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80051990: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051994: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051998: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8005199C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x800519A0: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800519A4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800519A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800519AC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800519B0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x800519B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800519B8: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x800519BC: srl         $v0, $v0, 24
    ctx->r2 = S32(U32(ctx->r2) >> 24);
    // 0x800519C0: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x800519C4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x800519C8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800519CC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800519D0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800519D4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800519D8: andi        $v0, $v0, 0xFFF0
    ctx->r2 = ctx->r2 & 0XFFF0;
    // 0x800519DC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x800519E0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800519E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800519E8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800519EC: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x800519F0: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x800519F4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x800519F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800519FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051A00: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80051A04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80051A08: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x80051A0C: srl         $v0, $v0, 28
    ctx->r2 = S32(U32(ctx->r2) >> 28);
    // 0x80051A10: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80051A14: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80051A18: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051A1C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051A20: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80051A24: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051A28: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80051A2C: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80051A30: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051A34: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051A38: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051A3C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80051A40: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x80051A44: srl         $v0, $v0, 20
    ctx->r2 = S32(U32(ctx->r2) >> 20);
    // 0x80051A48: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051A4C: bne         $a3, $zero, L_80051800
    if (ctx->r7 != 0) {
        // 0x80051A50: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80051800;
    }
    // 0x80051A50: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80051A54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051A58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80051A5C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051A60: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051A64: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80051A68: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80051A6C: srl         $v0, $v0, 20
    ctx->r2 = S32(U32(ctx->r2) >> 20);
    // 0x80051A70: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051A74: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80051A78: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80051A7C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80051A80: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80051A84: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80051A88: sh          $v1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r3;
    // 0x80051A8C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80051A90: addiu       $a0, $a0, -0x3D98
    ctx->r4 = ADD32(ctx->r4, -0X3D98);
    // 0x80051A94: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80051A98: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80051A9C: lhu         $v1, -0x3D96($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3D96);
    // 0x80051AA0: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80051AA4: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80051AA8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80051AAC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80051AB0: lhu         $v0, -0x3D94($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D94);
    // 0x80051AB4: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x80051AB8: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80051ABC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80051AC0: sh          $v1, -0x3D96($at)
    MEM_H(-0X3D96, ctx->r1) = ctx->r3;
    // 0x80051AC4: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80051AC8: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80051ACC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80051AD0: sh          $v0, -0x3D94($at)
    MEM_H(-0X3D94, ctx->r1) = ctx->r2;
    // 0x80051AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051AD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80051ADC: jr          $ra
    // 0x80051AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80051AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051AE4: nop

    // 0x80051AE8: nop

    // 0x80051AEC: nop

;}
RECOMP_FUNC void func_8006FF84_4B384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FF84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FF88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006FF8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006FF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FF94: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x8006FF98: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8006FF9C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8006FFA0: sb          $v1, 0x449($s0)
    MEM_B(0X449, ctx->r16) = ctx->r3;
    // 0x8006FFA4: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8006FFA8: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8006FFAC: beq         $a0, $zero, L_80070028
    if (ctx->r4 == 0) {
        // 0x8006FFB0: sb          $v0, 0xBD($s0)
        MEM_B(0XBD, ctx->r16) = ctx->r2;
            goto L_80070028;
    }
    // 0x8006FFB0: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    // 0x8006FFB4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8006FFB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006FFBC: bnel        $v1, $v0, L_80070020
    if (ctx->r3 != ctx->r2) {
        // 0x8006FFC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80070020;
    }
    goto skip_0;
    // 0x8006FFC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8006FFC4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8006FFC8: beq         $v1, $zero, L_8006FFE8
    if (ctx->r3 == 0) {
        // 0x8006FFCC: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8006FFE8;
    }
    // 0x8006FFCC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8006FFD0: bne         $v1, $v0, L_8006FFF8
    if (ctx->r3 != ctx->r2) {
        // 0x8006FFD4: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_8006FFF8;
    }
    // 0x8006FFD4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8006FFD8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006FFDC: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x8006FFE0: beq         $v0, $zero, L_8006FFF8
    if (ctx->r2 == 0) {
        // 0x8006FFE4: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_8006FFF8;
    }
    // 0x8006FFE4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
L_8006FFE8:
    // 0x8006FFE8: jal         0x80070E54
    // 0x8006FFEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x8006FFEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8006FFF0: beq         $v0, $zero, L_80070028
    if (ctx->r2 == 0) {
        // 0x8006FFF4: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_80070028;
    }
    // 0x8006FFF4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
L_8006FFF8:
    // 0x8006FFF8: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x8006FFFC: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80070000: lui         $a0, 0xD
    ctx->r4 = S32(0XD << 16);
    // 0x80070004: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x80070008: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8007000C: bne         $v1, $a0, L_80070018
    if (ctx->r3 != ctx->r4) {
        // 0x80070010: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80070018;
    }
    // 0x80070010: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80070014: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80070018:
    // 0x80070018: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8007001C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80070020:
    // 0x80070020: bne         $v1, $v0, L_80070040
    if (ctx->r3 != ctx->r2) {
        // 0x80070024: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80070040;
    }
    // 0x80070024: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80070028:
    // 0x80070028: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8007002C: jal         0x8002A46C
    // 0x80070030: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8002A46C_586C(rdram, ctx);
        goto after_1;
    // 0x80070030: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_1:
    // 0x80070034: jal         0x8002A46C
    // 0x80070038: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8002A46C_586C(rdram, ctx);
        goto after_2;
    // 0x80070038: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_2:
    // 0x8007003C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80070040:
    // 0x80070040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80070044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80070048: jr          $ra
    // 0x8007004C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007004C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002E4FC_98FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E4FC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002E500: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002E504: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8002E508: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002E50C: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x8002E510: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002E514: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8002E518: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002E51C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8002E520: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002E524: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002E528: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002E52C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002E530: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E534: sw          $s4, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r20;
    // 0x8002E538: blez        $s6, L_8002E688
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8002E53C: addu        $s5, $a3, $zero
        ctx->r21 = ADD32(ctx->r7, 0);
            goto L_8002E688;
    }
    // 0x8002E53C: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8002E540: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x8002E544: addu        $s0, $s1, $s2
    ctx->r16 = ADD32(ctx->r17, ctx->r18);
    // 0x8002E548: addiu       $v0, $s6, -0x1
    ctx->r2 = ADD32(ctx->r22, -0X1);
    // 0x8002E54C: blez        $v0, L_8002E5FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002E550: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8002E5FC;
    }
    // 0x8002E550: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8002E554: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
L_8002E558:
    // 0x8002E558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002E55C: jalr        $s5
    // 0x8002E560: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_0;
    // 0x8002E560: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8002E564: blez        $v0, L_8002E5EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002E568: subu        $v0, $s0, $s1
        ctx->r2 = SUB32(ctx->r16, ctx->r17);
            goto L_8002E5EC;
    }
    // 0x8002E568: subu        $v0, $s0, $s1
    ctx->r2 = SUB32(ctx->r16, ctx->r17);
    // 0x8002E56C: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x8002E570: bne         $s2, $zero, L_8002E57C
    if (ctx->r18 != 0) {
        // 0x8002E574: nop
    
            goto L_8002E57C;
    }
    // 0x8002E574: nop

    // 0x8002E578: break       7
    do_break(2147673464);
L_8002E57C:
    // 0x8002E57C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E580: bne         $s2, $at, L_8002E594
    if (ctx->r18 != ctx->r1) {
        // 0x8002E584: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002E594;
    }
    // 0x8002E584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002E588: bne         $v0, $at, L_8002E594
    if (ctx->r2 != ctx->r1) {
        // 0x8002E58C: nop
    
            goto L_8002E594;
    }
    // 0x8002E58C: nop

    // 0x8002E590: break       6
    do_break(2147673488);
L_8002E594:
    // 0x8002E594: mflo        $v0
    ctx->r2 = lo;
    // 0x8002E598: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8002E59C: nop

    // 0x8002E5A0: beq         $v0, $zero, L_8002E5B4
    if (ctx->r2 == 0) {
        // 0x8002E5A4: addu        $v0, $s1, $s2
        ctx->r2 = ADD32(ctx->r17, ctx->r18);
            goto L_8002E5B4;
    }
    // 0x8002E5A4: addu        $v0, $s1, $s2
    ctx->r2 = ADD32(ctx->r17, ctx->r18);
    // 0x8002E5A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E5AC: j           L_8002E5D4
    // 0x8002E5B0: sw          $s0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r16;
        goto L_8002E5D4;
    // 0x8002E5B0: sw          $s0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r16;
L_8002E5B4:
    // 0x8002E5B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E5B8: sw          $v0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r2;
    // 0x8002E5BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8002E5C0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002E5C4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002E5C8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002E5CC: lw          $v0, 0x2728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2728);
    // 0x8002E5D0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_8002E5D4:
    // 0x8002E5D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002E5D8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002E5DC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002E5E0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8002E5E4: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8002E5E8: lw          $s1, 0x2728($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2728);
L_8002E5EC:
    // 0x8002E5EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8002E5F0: slt         $v0, $s3, $s7
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8002E5F4: bne         $v0, $zero, L_8002E558
    if (ctx->r2 != 0) {
        // 0x8002E5F8: addu        $s0, $s0, $s2
        ctx->r16 = ADD32(ctx->r16, ctx->r18);
            goto L_8002E558;
    }
    // 0x8002E5F8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
L_8002E5FC:
    // 0x8002E5FC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002E600: lw          $v0, 0x2728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2728);
    // 0x8002E604: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8002E608: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x8002E60C: bne         $s2, $zero, L_8002E618
    if (ctx->r18 != 0) {
        // 0x8002E610: nop
    
            goto L_8002E618;
    }
    // 0x8002E610: nop

    // 0x8002E614: break       7
    do_break(2147673620);
L_8002E618:
    // 0x8002E618: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E61C: bne         $s2, $at, L_8002E630
    if (ctx->r18 != ctx->r1) {
        // 0x8002E620: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002E630;
    }
    // 0x8002E620: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002E624: bne         $v0, $at, L_8002E630
    if (ctx->r2 != ctx->r1) {
        // 0x8002E628: nop
    
            goto L_8002E630;
    }
    // 0x8002E628: nop

    // 0x8002E62C: break       6
    do_break(2147673644);
L_8002E630:
    // 0x8002E630: mflo        $v0
    ctx->r2 = lo;
    // 0x8002E634: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E638: sw          $s1, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r17;
    // 0x8002E63C: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x8002E640: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8002E644: bne         $v0, $zero, L_8002E664
    if (ctx->r2 != 0) {
        // 0x8002E648: addu        $a0, $s1, $s2
        ctx->r4 = ADD32(ctx->r17, ctx->r18);
            goto L_8002E664;
    }
    // 0x8002E648: addu        $a0, $s1, $s2
    ctx->r4 = ADD32(ctx->r17, ctx->r18);
    // 0x8002E64C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8002E650: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E654: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8002E658: jal         0x8002E34C
    // 0x8002E65C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_8002E34C_974C(rdram, ctx);
        goto after_1;
    // 0x8002E65C: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_1:
    // 0x8002E660: addu        $a0, $s1, $s2
    ctx->r4 = ADD32(ctx->r17, ctx->r18);
L_8002E664:
    // 0x8002E664: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E668: sw          $a0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r4;
    // 0x8002E66C: subu        $s0, $s6, $s0
    ctx->r16 = SUB32(ctx->r22, ctx->r16);
    // 0x8002E670: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8002E674: bne         $v0, $zero, L_8002E688
    if (ctx->r2 != 0) {
        // 0x8002E678: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_8002E688;
    }
    // 0x8002E678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E67C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8002E680: jal         0x8002E34C
    // 0x8002E684: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_8002E34C_974C(rdram, ctx);
        goto after_2;
    // 0x8002E684: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_2:
L_8002E688:
    // 0x8002E688: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8002E68C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002E690: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002E694: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E698: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002E69C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002E6A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002E6A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E6A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002E6AC: jr          $ra
    // 0x8002E6B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8002E6B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80061510_3C910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061510: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80061514: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80061518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006151C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80061520: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80061524: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80061528: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x8006152C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80061530: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80061534: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x80061538: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006153C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80061540: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80061544: bne         $v0, $zero, L_8006155C
    if (ctx->r2 != 0) {
        // 0x80061548: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8006155C;
    }
    // 0x80061548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006154C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80061550: lhu         $v0, 0x49AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AC);
    // 0x80061554: beq         $v0, $zero, L_80061564
    if (ctx->r2 == 0) {
        // 0x80061558: sll         $v0, $s3, 1
        ctx->r2 = S32(ctx->r19 << 1);
            goto L_80061564;
    }
    // 0x80061558: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
L_8006155C:
    // 0x8006155C: j           L_800616DC
    // 0x80061560: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800616DC;
    // 0x80061560: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80061564:
    // 0x80061564: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80061568: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8006156C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80061570: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061574: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80061578: addiu       $v1, $v1, -0x7790
    ctx->r3 = ADD32(ctx->r3, -0X7790);
    // 0x8006157C: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x80061580: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80061584: lui         $s2, 0x4
    ctx->r18 = S32(0X4 << 16);
    // 0x80061588: and         $v0, $v0, $s2
    ctx->r2 = ctx->r2 & ctx->r18;
    // 0x8006158C: beq         $v0, $zero, L_800615A0
    if (ctx->r2 == 0) {
        // 0x80061590: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800615A0;
    }
    // 0x80061590: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80061594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80061598: jal         0x80036B00
    // 0x8006159C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x8006159C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_800615A0:
    // 0x800615A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800615A4: beql        $s3, $v0, L_800615E4
    if (ctx->r19 == ctx->r2) {
        // 0x800615A8: sb          $zero, 0x3E($s0)
        MEM_B(0X3E, ctx->r16) = 0;
            goto L_800615E4;
    }
    goto skip_0;
    // 0x800615A8: sb          $zero, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = 0;
    skip_0:
    // 0x800615AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800615B0: lw          $v0, -0x7480($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7480);
    // 0x800615B4: and         $v0, $v0, $s2
    ctx->r2 = ctx->r2 & ctx->r18;
    // 0x800615B8: beq         $v0, $zero, L_800615CC
    if (ctx->r2 == 0) {
        // 0x800615BC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800615CC;
    }
    // 0x800615BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800615C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800615C4: jal         0x80036B00
    // 0x800615C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x800615C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_800615CC:
    // 0x800615CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800615D0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800615D4: sw          $zero, -0x7480($at)
    MEM_W(-0X7480, ctx->r1) = 0;
    // 0x800615D8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800615DC: sh          $v0, -0x73BE($at)
    MEM_H(-0X73BE, ctx->r1) = ctx->r2;
    // 0x800615E0: sb          $zero, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = 0;
L_800615E4:
    // 0x800615E4: lbu         $v1, 0x3E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3E);
    // 0x800615E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800615EC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800615F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800615F4: sb          $v0, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r2;
    // 0x800615F8: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x800615FC: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    // 0x80061600: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x80061604: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80061608: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x8006160C: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80061610: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80061614: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x80061618: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x8006161C: beq         $a2, $v0, L_80061654
    if (ctx->r6 == ctx->r2) {
        // 0x80061620: sb          $v1, 0x3C($s0)
        MEM_B(0X3C, ctx->r16) = ctx->r3;
            goto L_80061654;
    }
    // 0x80061620: sb          $v1, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r3;
    // 0x80061624: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80061628: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8006162C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80061630: sw          $s1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r17;
    // 0x80061634: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80061638: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8006163C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80061640: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80061644: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x80061648: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x8006164C: j           L_80061660
    // 0x80061650: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
        goto L_80061660;
    // 0x80061650: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80061654:
    // 0x80061654: sw          $s1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r17;
    // 0x80061658: sw          $s1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r17;
    // 0x8006165C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
L_80061660:
    // 0x80061660: lbu         $v1, 0x3E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3E);
    // 0x80061664: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80061668: sb          $v0, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r2;
    // 0x8006166C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80061670: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
    // 0x80061674: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80061678: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x8006167C: sb          $zero, 0x72($s0)
    MEM_B(0X72, ctx->r16) = 0;
    // 0x80061680: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    // 0x80061684: sb          $zero, 0x7D($s0)
    MEM_B(0X7D, ctx->r16) = 0;
    // 0x80061688: sb          $zero, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = 0;
    // 0x8006168C: sb          $zero, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = 0;
    // 0x80061690: sb          $zero, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = 0;
    // 0x80061694: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80061698: sb          $v1, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r3;
    // 0x8006169C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800616A0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x800616A4: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x800616A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800616AC: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x800616B0: sh          $zero, 0xBE($s0)
    MEM_H(0XBE, ctx->r16) = 0;
    // 0x800616B4: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x800616B8: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x800616BC: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x800616C0: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x800616C4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x800616C8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800616CC: srav        $v1, $v1, $s3
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r19 & 31));
    // 0x800616D0: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x800616D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800616D8: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
L_800616DC:
    // 0x800616DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800616E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800616E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800616E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800616EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800616F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800616F4: jr          $ra
    // 0x800616F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800616F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006FAE0_4AEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAE0: jr          $ra
    // 0x8006FAE4: nop

    TRACE_RETURN()
    return;
    // 0x8006FAE4: nop

;}
RECOMP_FUNC void _Putfld(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A10B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A10B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800A10B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800A10BC: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x800A10C0: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x800A10C4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x800A10C8: addiu       $a2, $a2, -0x25
    ctx->r6 = ADD32(ctx->r6, -0X25);
    // 0x800A10CC: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x800A10D0: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x800A10D4: sltiu       $v0, $a2, 0x54
    ctx->r2 = ctx->r6 < 0X54 ? 1 : 0;
    // 0x800A10D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A10DC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x800A10E0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x800A10E4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x800A10E8: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x800A10EC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x800A10F0: beq         $v0, $zero, L_800A155C
    if (ctx->r2 == 0) {
        // 0x800A10F4: sw          $zero, 0xC($s0)
        MEM_W(0XC, ctx->r16) = 0;
            goto L_800A155C;
    }
    // 0x800A10F4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x800A10F8: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x800A10FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A1100: addu        $at, $at, $v0
    gpr jr_addend_800A1108 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800A1104: lw          $v0, 0x3308($at)
    ctx->r2 = ADD32(ctx->r1, 0X3308);
    // 0x800A1108: jr          $v0
    // 0x800A110C: nop

    switch (jr_addend_800A1108 >> 2) {
        case 0: goto L_800A1540; break;
        case 1: goto L_800A155C; break;
        case 2: goto L_800A155C; break;
        case 3: goto L_800A155C; break;
        case 4: goto L_800A155C; break;
        case 5: goto L_800A155C; break;
        case 6: goto L_800A155C; break;
        case 7: goto L_800A155C; break;
        case 8: goto L_800A155C; break;
        case 9: goto L_800A155C; break;
        case 10: goto L_800A155C; break;
        case 11: goto L_800A155C; break;
        case 12: goto L_800A155C; break;
        case 13: goto L_800A155C; break;
        case 14: goto L_800A155C; break;
        case 15: goto L_800A155C; break;
        case 16: goto L_800A155C; break;
        case 17: goto L_800A155C; break;
        case 18: goto L_800A155C; break;
        case 19: goto L_800A155C; break;
        case 20: goto L_800A155C; break;
        case 21: goto L_800A155C; break;
        case 22: goto L_800A155C; break;
        case 23: goto L_800A155C; break;
        case 24: goto L_800A155C; break;
        case 25: goto L_800A155C; break;
        case 26: goto L_800A155C; break;
        case 27: goto L_800A155C; break;
        case 28: goto L_800A155C; break;
        case 29: goto L_800A155C; break;
        case 30: goto L_800A155C; break;
        case 31: goto L_800A155C; break;
        case 32: goto L_800A135C; break;
        case 33: goto L_800A155C; break;
        case 34: goto L_800A135C; break;
        case 35: goto L_800A155C; break;
        case 36: goto L_800A155C; break;
        case 37: goto L_800A155C; break;
        case 38: goto L_800A155C; break;
        case 39: goto L_800A155C; break;
        case 40: goto L_800A155C; break;
        case 41: goto L_800A155C; break;
        case 42: goto L_800A155C; break;
        case 43: goto L_800A155C; break;
        case 44: goto L_800A155C; break;
        case 45: goto L_800A155C; break;
        case 46: goto L_800A155C; break;
        case 47: goto L_800A155C; break;
        case 48: goto L_800A155C; break;
        case 49: goto L_800A155C; break;
        case 50: goto L_800A155C; break;
        case 51: goto L_800A1244; break;
        case 52: goto L_800A155C; break;
        case 53: goto L_800A155C; break;
        case 54: goto L_800A155C; break;
        case 55: goto L_800A155C; break;
        case 56: goto L_800A155C; break;
        case 57: goto L_800A155C; break;
        case 58: goto L_800A155C; break;
        case 59: goto L_800A155C; break;
        case 60: goto L_800A155C; break;
        case 61: goto L_800A155C; break;
        case 62: goto L_800A1110; break;
        case 63: goto L_800A1144; break;
        case 64: goto L_800A135C; break;
        case 65: goto L_800A135C; break;
        case 66: goto L_800A135C; break;
        case 67: goto L_800A155C; break;
        case 68: goto L_800A1144; break;
        case 69: goto L_800A155C; break;
        case 70: goto L_800A155C; break;
        case 71: goto L_800A155C; break;
        case 72: goto L_800A155C; break;
        case 73: goto L_800A1410; break;
        case 74: goto L_800A1244; break;
        case 75: goto L_800A14B0; break;
        case 76: goto L_800A155C; break;
        case 77: goto L_800A155C; break;
        case 78: goto L_800A14FC; break;
        case 79: goto L_800A155C; break;
        case 80: goto L_800A1244; break;
        case 81: goto L_800A155C; break;
        case 82: goto L_800A155C; break;
        case 83: goto L_800A1244; break;
        default: switch_error(__func__, 0x800A1108, 0x800D3308);
    }
    // 0x800A110C: nop

L_800A1110:
    // 0x800A1110: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800A1114: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x800A1118: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x800A111C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1120: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A1124: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A1128: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A112C: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A1130: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1134: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800A1138: addu        $a0, $t1, $a0
    ctx->r4 = ADD32(ctx->r9, ctx->r4);
    // 0x800A113C: j           L_800A1570
    // 0x800A1140: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
        goto L_800A1570;
    // 0x800A1140: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_800A1144:
    // 0x800A1144: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x800A1148: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x800A114C: beq         $v1, $v0, L_800A117C
    if (ctx->r3 == ctx->r2) {
        // 0x800A1150: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_800A117C;
    }
    // 0x800A1150: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x800A1154: bne         $v1, $v0, L_800A117C
    if (ctx->r3 != ctx->r2) {
        // 0x800A1158: addiu       $v1, $zero, -0x8
        ctx->r3 = ADD32(0, -0X8);
            goto L_800A117C;
    }
    // 0x800A1158: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x800A115C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1160: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800A1164: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A1168: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800A116C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1170: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x800A1174: j           L_800A11A0
    // 0x800A1178: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
        goto L_800A11A0;
    // 0x800A1178: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_800A117C:
    // 0x800A117C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1180: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A1184: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A1188: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A118C: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A1190: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1194: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800A1198: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800A119C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
L_800A11A0:
    // 0x800A11A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800A11A4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x800A11A8: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x800A11AC: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x800A11B0: bne         $v1, $v0, L_800A11D4
    if (ctx->r3 != ctx->r2) {
        // 0x800A11B4: nop
    
            goto L_800A11D4;
    }
    // 0x800A11B4: nop

    // 0x800A11B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800A11BC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x800A11C0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x800A11C4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A11C8: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800A11CC: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x800A11D0: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
L_800A11D4:
    // 0x800A11D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800A11D8: bgez        $v0, L_800A11F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A11DC: nop
    
            goto L_800A11F8;
    }
    // 0x800A11DC: nop

    // 0x800A11E0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A11E4: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A11E8: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A11EC: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A11F0: j           L_800A123C
    // 0x800A11F4: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
        goto L_800A123C;
    // 0x800A11F4: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
L_800A11F8:
    // 0x800A11F8: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x800A11FC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x800A1200: beq         $v0, $zero, L_800A1220
    if (ctx->r2 == 0) {
        // 0x800A1204: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_800A1220;
    }
    // 0x800A1204: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x800A1208: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A120C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A1210: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A1214: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A1218: j           L_800A123C
    // 0x800A121C: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
        goto L_800A123C;
    // 0x800A121C: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
L_800A1220:
    // 0x800A1220: beq         $v0, $zero, L_800A133C
    if (ctx->r2 == 0) {
        // 0x800A1224: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800A133C;
    }
    // 0x800A1224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800A1228: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A122C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A1230: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A1234: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A1238: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
L_800A123C:
    // 0x800A123C: j           L_800A1338
    // 0x800A1240: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
        goto L_800A1338;
    // 0x800A1240: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_800A1244:
    // 0x800A1244: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x800A1248: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x800A124C: beq         $v1, $v0, L_800A127C
    if (ctx->r3 == ctx->r2) {
        // 0x800A1250: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_800A127C;
    }
    // 0x800A1250: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x800A1254: bne         $v1, $v0, L_800A127C
    if (ctx->r3 != ctx->r2) {
        // 0x800A1258: addiu       $v1, $zero, -0x8
        ctx->r3 = ADD32(0, -0X8);
            goto L_800A127C;
    }
    // 0x800A1258: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x800A125C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1260: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800A1264: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A1268: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800A126C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1270: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x800A1274: j           L_800A12A0
    // 0x800A1278: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
        goto L_800A12A0;
    // 0x800A1278: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_800A127C:
    // 0x800A127C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1280: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A1284: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A1288: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A128C: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A1290: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1294: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800A1298: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800A129C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
L_800A12A0:
    // 0x800A12A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800A12A4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x800A12A8: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x800A12AC: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x800A12B0: bne         $v1, $v0, L_800A12C4
    if (ctx->r3 != ctx->r2) {
        // 0x800A12B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800A12C4;
    }
    // 0x800A12B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800A12B8: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x800A12BC: j           L_800A12D0
    // 0x800A12C0: nop

        goto L_800A12D0;
    // 0x800A12C0: nop

L_800A12C4:
    // 0x800A12C4: bne         $v1, $zero, L_800A12D8
    if (ctx->r3 != 0) {
        // 0x800A12C8: nop
    
            goto L_800A12D8;
    }
    // 0x800A12C8: nop

    // 0x800A12CC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_800A12D0:
    // 0x800A12D0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800A12D4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
L_800A12D8:
    // 0x800A12D8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x800A12DC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800A12E0: beq         $v0, $zero, L_800A133C
    if (ctx->r2 == 0) {
        // 0x800A12E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800A133C;
    }
    // 0x800A12E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800A12E8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A12EC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A12F0: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A12F4: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A12F8: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x800A12FC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x800A1300: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x800A1304: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A1308: xori        $v1, $v0, 0x78
    ctx->r3 = ctx->r2 ^ 0X78;
    // 0x800A130C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A1310: xori        $v0, $v0, 0x58
    ctx->r2 = ctx->r2 ^ 0X58;
    // 0x800A1314: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A1318: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800A131C: beq         $v1, $zero, L_800A133C
    if (ctx->r3 == 0) {
        // 0x800A1320: nop
    
            goto L_800A133C;
    }
    // 0x800A1320: nop

    // 0x800A1324: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A1328: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A132C: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A1330: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A1334: sb          $a3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r7;
L_800A1338:
    // 0x800A1338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_800A133C:
    // 0x800A133C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800A1340: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x800A1344: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800A1348: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A134C: jal         0x800A24A0
    // 0x800A1350: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    _Litob(rdram, ctx);
        goto after_0;
    // 0x800A1350: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_0:
    // 0x800A1354: j           L_800A1570
    // 0x800A1358: nop

        goto L_800A1570;
    // 0x800A1358: nop

L_800A135C:
    // 0x800A135C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1360: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x800A1364: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800A1368: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A136C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800A1370: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1374: ldc1        $f0, 0x0($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, 0X0);
    // 0x800A1378: sdc1        $f0, 0x0($s0)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X0, ctx->r16);
    // 0x800A137C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x800A1380: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x800A1384: beq         $v0, $zero, L_800A13A4
    if (ctx->r2 == 0) {
        // 0x800A1388: nop
    
            goto L_800A13A4;
    }
    // 0x800A1388: nop

    // 0x800A138C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A1390: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A1394: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A1398: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A139C: j           L_800A13E8
    // 0x800A13A0: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
        goto L_800A13E8;
    // 0x800A13A0: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
L_800A13A4:
    // 0x800A13A4: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x800A13A8: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x800A13AC: beq         $v0, $zero, L_800A13CC
    if (ctx->r2 == 0) {
        // 0x800A13B0: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_800A13CC;
    }
    // 0x800A13B0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x800A13B4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A13B8: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A13BC: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A13C0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A13C4: j           L_800A13E8
    // 0x800A13C8: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
        goto L_800A13E8;
    // 0x800A13C8: addiu       $v1, $zero, 0x2B
    ctx->r3 = ADD32(0, 0X2B);
L_800A13CC:
    // 0x800A13CC: beq         $v0, $zero, L_800A13F0
    if (ctx->r2 == 0) {
        // 0x800A13D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800A13F0;
    }
    // 0x800A13D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800A13D4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A13D8: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A13DC: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A13E0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A13E4: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
L_800A13E8:
    // 0x800A13E8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x800A13EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_800A13F0:
    // 0x800A13F0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800A13F4: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x800A13F8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800A13FC: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A1400: jal         0x800A26F0
    // 0x800A1404: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    _Ldtob(rdram, ctx);
        goto after_1;
    // 0x800A1404: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_1:
    // 0x800A1408: j           L_800A1570
    // 0x800A140C: nop

        goto L_800A1570;
    // 0x800A140C: nop

L_800A1410:
    // 0x800A1410: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x800A1414: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x800A1418: bne         $v1, $v0, L_800A1448
    if (ctx->r3 != ctx->r2) {
        // 0x800A141C: addiu       $v0, $zero, 0x6C
        ctx->r2 = ADD32(0, 0X6C);
            goto L_800A1448;
    }
    // 0x800A141C: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x800A1420: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1424: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A1428: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A142C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A1430: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A1434: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1438: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800A143C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x800A1440: j           L_800A1570
    // 0x800A1444: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_800A1570;
    // 0x800A1444: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_800A1448:
    // 0x800A1448: beq         $v1, $v0, L_800A1488
    if (ctx->r3 == ctx->r2) {
        // 0x800A144C: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_800A1488;
    }
    // 0x800A144C: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x800A1450: bne         $v1, $v0, L_800A1488
    if (ctx->r3 != ctx->r2) {
        // 0x800A1454: addiu       $v0, $zero, -0x4
        ctx->r2 = ADD32(0, -0X4);
            goto L_800A1488;
    }
    // 0x800A1454: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x800A1458: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800A145C: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x800A1460: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x800A1464: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x800A1468: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x800A146C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x800A1470: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x800A1474: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800A1478: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800A147C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800A1480: j           L_800A1570
    // 0x800A1484: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
        goto L_800A1570;
    // 0x800A1484: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_800A1488:
    // 0x800A1488: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A148C: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A1490: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A1494: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A1498: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A149C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A14A0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800A14A4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x800A14A8: j           L_800A1570
    // 0x800A14AC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_800A1570;
    // 0x800A14AC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_800A14B0:
    // 0x800A14B0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800A14B4: addiu       $a1, $zero, -0x4
    ctx->r5 = ADD32(0, -0X4);
    // 0x800A14B8: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x800A14BC: and         $a0, $a0, $a1
    ctx->r4 = ctx->r4 & ctx->r5;
    // 0x800A14C0: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    // 0x800A14C4: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x800A14C8: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x800A14CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800A14D0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x800A14D4: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x800A14D8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x800A14DC: sra         $v0, $a3, 31
    ctx->r2 = S32(SIGNED(ctx->r7) >> 31);
    // 0x800A14E0: addu        $a2, $t1, $a2
    ctx->r6 = ADD32(ctx->r9, ctx->r6);
    // 0x800A14E4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800A14E8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x800A14EC: jal         0x800A24A0
    // 0x800A14F0: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    _Litob(rdram, ctx);
        goto after_2;
    // 0x800A14F0: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    after_2:
    // 0x800A14F4: j           L_800A1570
    // 0x800A14F8: nop

        goto L_800A1570;
    // 0x800A14F8: nop

L_800A14FC:
    // 0x800A14FC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800A1500: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A1504: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A1508: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A150C: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A1510: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800A1514: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A1518: jal         0x8009A390
    // 0x800A151C: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    strlen_recomp(rdram, ctx);
        goto after_3;
    // 0x800A151C: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    after_3:
    // 0x800A1520: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x800A1524: bltz        $v1, L_800A1570
    if (SIGNED(ctx->r3) < 0) {
        // 0x800A1528: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_800A1570;
    }
    // 0x800A1528: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x800A152C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A1530: bnel        $v0, $zero, L_800A1570
    if (ctx->r2 != 0) {
        // 0x800A1534: sw          $v1, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r3;
            goto L_800A1570;
    }
    goto skip_0;
    // 0x800A1534: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    skip_0:
    // 0x800A1538: j           L_800A1570
    // 0x800A153C: nop

        goto L_800A1570;
    // 0x800A153C: nop

L_800A1540:
    // 0x800A1540: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A1544: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A1548: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A154C: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A1550: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x800A1554: j           L_800A1570
    // 0x800A1558: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
        goto L_800A1570;
    // 0x800A1558: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_800A155C:
    // 0x800A155C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A1560: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800A1564: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x800A1568: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x800A156C: sb          $a3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r7;
L_800A1570:
    // 0x800A1570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1574: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800A1578: jr          $ra
    // 0x800A157C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800A157C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80030AA0_BEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030AA0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80030AA4: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x80030AA8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x80030AAC: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x80030AB0: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80030AB4: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x80030AB8: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x80030ABC: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80030AC0: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80030AC4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80030AC8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80030ACC: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x80030AD0: bne         $a1, $a2, L_80030E94
    if (ctx->r5 != ctx->r6) {
        // 0x80030AD4: sw          $a2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r6;
            goto L_80030E94;
    }
    // 0x80030AD4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80030AD8: lhu         $v0, 0x0($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X0);
    // 0x80030ADC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80030AE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030AE4: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030AE8: sra         $t6, $v0, 31
    ctx->r14 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030AEC: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x80030AF0: sra         $t2, $v1, 31
    ctx->r10 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030AF4: multu       $t7, $t3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030AF8: lhu         $v0, 0x2($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X2);
    // 0x80030AFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030B00: mfhi        $t8
    ctx->r24 = hi;
    // 0x80030B04: mflo        $t9
    ctx->r25 = lo;
    // 0x80030B08: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80030B0C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80030B10: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x80030B14: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030B18: sra         $s0, $v0, 31
    ctx->r16 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030B1C: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x80030B20: sra         $t0, $v1, 31
    ctx->r8 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030B24: multu       $s1, $t1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030B28: lhu         $a0, 0x4($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0X4);
    // 0x80030B2C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80030B30: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80030B34: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030B38: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x80030B3C: sra         $t4, $a0, 31
    ctx->r12 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80030B40: mfhi        $a2
    ctx->r6 = hi;
    // 0x80030B44: mflo        $a3
    ctx->r7 = lo;
    // 0x80030B48: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80030B4C: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80030B50: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030B54: mfhi        $a0
    ctx->r4 = hi;
    // 0x80030B58: mflo        $a1
    ctx->r5 = lo;
    // 0x80030B5C: nop

    // 0x80030B60: nop

    // 0x80030B64: mult        $t7, $t2
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030B68: mflo        $t8
    ctx->r24 = lo;
    // 0x80030B6C: nop

    // 0x80030B70: nop

    // 0x80030B74: mult        $t3, $t6
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030B78: mflo        $t6
    ctx->r14 = lo;
    // 0x80030B7C: nop

    // 0x80030B80: nop

    // 0x80030B84: mult        $s1, $t0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030B88: mflo        $t2
    ctx->r10 = lo;
    // 0x80030B8C: nop

    // 0x80030B90: nop

    // 0x80030B94: mult        $t1, $s0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030B98: mflo        $s0
    ctx->r16 = lo;
    // 0x80030B9C: nop

    // 0x80030BA0: nop

    // 0x80030BA4: mult        $t5, $v0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030BA8: mflo        $t0
    ctx->r8 = lo;
    // 0x80030BAC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80030BB0: nop

    // 0x80030BB4: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030BB8: mflo        $t4
    ctx->r12 = lo;
    // 0x80030BBC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80030BC0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80030BC4: addu        $t8, $t9, $zero
    ctx->r24 = ADD32(ctx->r25, 0);
    // 0x80030BC8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80030BCC: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80030BD0: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x80030BD4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80030BD8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80030BDC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80030BE0: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80030BE4: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80030BE8: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x80030BEC: sltu        $v0, $t9, $a3
    ctx->r2 = ctx->r25 < ctx->r7 ? 1 : 0;
    // 0x80030BF0: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x80030BF4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80030BF8: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x80030BFC: sltu        $v0, $t9, $a1
    ctx->r2 = ctx->r25 < ctx->r5 ? 1 : 0;
    // 0x80030C00: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80030C04: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80030C08: srl         $t9, $t9, 12
    ctx->r25 = S32(U32(ctx->r25) >> 12);
    // 0x80030C0C: sll         $v0, $t8, 20
    ctx->r2 = S32(ctx->r24 << 20);
    // 0x80030C10: or          $t9, $t9, $v0
    ctx->r25 = ctx->r25 | ctx->r2;
    // 0x80030C14: sra         $t8, $t8, 12
    ctx->r24 = S32(SIGNED(ctx->r24) >> 12);
    // 0x80030C18: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80030C1C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80030C20: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80030C24: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80030C28: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x80030C2C: lhu         $v0, 0x6($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X6);
    // 0x80030C30: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x80030C34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030C38: sra         $s5, $v0, 16
    ctx->r21 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030C3C: sra         $s4, $v0, 31
    ctx->r20 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030C40: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80030C44: sra         $s2, $v1, 31
    ctx->r18 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030C48: multu       $s5, $s3
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030C4C: lhu         $v0, 0x8($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X8);
    // 0x80030C50: lw          $v1, 0x4($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X4);
    // 0x80030C54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030C58: sra         $s7, $v0, 16
    ctx->r23 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030C5C: sra         $s6, $v0, 31
    ctx->r22 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030C60: mfhi        $a2
    ctx->r6 = hi;
    // 0x80030C64: mflo        $a3
    ctx->r7 = lo;
    // 0x80030C68: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x80030C6C: sra         $t2, $v1, 31
    ctx->r10 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030C70: multu       $s7, $t3
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030C74: lhu         $a0, 0xA($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0XA);
    // 0x80030C78: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x80030C7C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80030C80: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030C84: sra         $t4, $a0, 31
    ctx->r12 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80030C88: mfhi        $t0
    ctx->r8 = hi;
    // 0x80030C8C: mflo        $t1
    ctx->r9 = lo;
    // 0x80030C90: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80030C94: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80030C98: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030C9C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80030CA0: mflo        $a1
    ctx->r5 = lo;
    // 0x80030CA4: nop

    // 0x80030CA8: nop

    // 0x80030CAC: mult        $s5, $s2
    result = S64(S32(ctx->r21)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030CB0: mflo        $t8
    ctx->r24 = lo;
    // 0x80030CB4: nop

    // 0x80030CB8: nop

    // 0x80030CBC: mult        $s3, $s4
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030CC0: mflo        $s4
    ctx->r20 = lo;
    // 0x80030CC4: nop

    // 0x80030CC8: nop

    // 0x80030CCC: mult        $s7, $t2
    result = S64(S32(ctx->r23)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030CD0: mflo        $s5
    ctx->r21 = lo;
    // 0x80030CD4: nop

    // 0x80030CD8: nop

    // 0x80030CDC: mult        $t3, $s6
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030CE0: mflo        $s6
    ctx->r22 = lo;
    // 0x80030CE4: nop

    // 0x80030CE8: nop

    // 0x80030CEC: mult        $t5, $v0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030CF0: mflo        $t2
    ctx->r10 = lo;
    // 0x80030CF4: nop

    // 0x80030CF8: nop

    // 0x80030CFC: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030D00: mflo        $t4
    ctx->r12 = lo;
    // 0x80030D04: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x80030D08: addu        $a2, $a2, $s4
    ctx->r6 = ADD32(ctx->r6, ctx->r20);
    // 0x80030D0C: addu        $t0, $t0, $s5
    ctx->r8 = ADD32(ctx->r8, ctx->r21);
    // 0x80030D10: addu        $t0, $t0, $s6
    ctx->r8 = ADD32(ctx->r8, ctx->r22);
    // 0x80030D14: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80030D18: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80030D1C: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x80030D20: sltu        $v0, $a3, $t1
    ctx->r2 = ctx->r7 < ctx->r9 ? 1 : 0;
    // 0x80030D24: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80030D28: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030D2C: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x80030D30: sltu        $v0, $a3, $a1
    ctx->r2 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x80030D34: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80030D38: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030D3C: srl         $a3, $a3, 12
    ctx->r7 = S32(U32(ctx->r7) >> 12);
    // 0x80030D40: sll         $v0, $a2, 20
    ctx->r2 = S32(ctx->r6 << 20);
    // 0x80030D44: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80030D48: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80030D4C: sw          $a3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r7;
    // 0x80030D50: lhu         $v0, 0xC($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0XC);
    // 0x80030D54: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80030D58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030D5C: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x80030D60: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030D64: sra         $t6, $v0, 31
    ctx->r14 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030D68: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80030D6C: sra         $s2, $v1, 31
    ctx->r18 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030D70: multu       $t7, $s3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030D74: lhu         $v0, 0xE($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0XE);
    // 0x80030D78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030D7C: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030D80: lw          $v1, 0x4($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X4);
    // 0x80030D84: sra         $s0, $v0, 31
    ctx->r16 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030D88: mfhi        $a2
    ctx->r6 = hi;
    // 0x80030D8C: mflo        $a3
    ctx->r7 = lo;
    // 0x80030D90: addu        $t5, $v1, $zero
    ctx->r13 = ADD32(ctx->r3, 0);
    // 0x80030D94: sra         $t4, $v1, 31
    ctx->r12 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030D98: multu       $s1, $t5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030D9C: lhu         $a0, 0x10($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0X10);
    // 0x80030DA0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80030DA4: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030DA8: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x80030DAC: sra         $t2, $a0, 31
    ctx->r10 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80030DB0: mfhi        $t0
    ctx->r8 = hi;
    // 0x80030DB4: mflo        $t1
    ctx->r9 = lo;
    // 0x80030DB8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80030DBC: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80030DC0: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030DC4: mfhi        $a0
    ctx->r4 = hi;
    // 0x80030DC8: mflo        $a1
    ctx->r5 = lo;
    // 0x80030DCC: nop

    // 0x80030DD0: nop

    // 0x80030DD4: mult        $t7, $s2
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030DD8: mflo        $s4
    ctx->r20 = lo;
    // 0x80030DDC: nop

    // 0x80030DE0: nop

    // 0x80030DE4: mult        $s3, $t6
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030DE8: mflo        $t6
    ctx->r14 = lo;
    // 0x80030DEC: nop

    // 0x80030DF0: nop

    // 0x80030DF4: mult        $s1, $t4
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030DF8: mflo        $s2
    ctx->r18 = lo;
    // 0x80030DFC: nop

    // 0x80030E00: nop

    // 0x80030E04: mult        $t5, $s0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030E08: mflo        $s0
    ctx->r16 = lo;
    // 0x80030E0C: nop

    // 0x80030E10: nop

    // 0x80030E14: mult        $t3, $v0
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030E18: mflo        $t4
    ctx->r12 = lo;
    // 0x80030E1C: nop

    // 0x80030E20: nop

    // 0x80030E24: mult        $v1, $t2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030E28: mflo        $t2
    ctx->r10 = lo;
    // 0x80030E2C: addu        $a2, $a2, $s4
    ctx->r6 = ADD32(ctx->r6, ctx->r20);
    // 0x80030E30: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x80030E34: addu        $t0, $t0, $s2
    ctx->r8 = ADD32(ctx->r8, ctx->r18);
    // 0x80030E38: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x80030E3C: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80030E40: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80030E44: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x80030E48: sltu        $v0, $a3, $t1
    ctx->r2 = ctx->r7 < ctx->r9 ? 1 : 0;
    // 0x80030E4C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80030E50: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030E54: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x80030E58: sltu        $v0, $a3, $a1
    ctx->r2 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x80030E5C: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80030E60: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030E64: srl         $a3, $a3, 12
    ctx->r7 = S32(U32(ctx->r7) >> 12);
    // 0x80030E68: sll         $v0, $a2, 20
    ctx->r2 = S32(ctx->r6 << 20);
    // 0x80030E6C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80030E70: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80030E74: sw          $a3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r7;
    // 0x80030E78: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80030E7C: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x80030E80: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80030E84: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80030E88: lw          $v0, 0x8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8);
    // 0x80030E8C: j           L_80031240
    // 0x80030E90: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
        goto L_80031240;
    // 0x80030E90: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
L_80030E94:
    // 0x80030E94: lhu         $v0, 0x0($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X0);
    // 0x80030E98: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80030E9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030EA0: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x80030EA4: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030EA8: sra         $s0, $v0, 31
    ctx->r16 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030EAC: addu        $t5, $v1, $zero
    ctx->r13 = ADD32(ctx->r3, 0);
    // 0x80030EB0: sra         $t4, $v1, 31
    ctx->r12 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030EB4: multu       $s1, $t5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030EB8: lhu         $v0, 0x2($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X2);
    // 0x80030EBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030EC0: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030EC4: lw          $v1, 0x4($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X4);
    // 0x80030EC8: sra         $s2, $v0, 31
    ctx->r18 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030ECC: mfhi        $a2
    ctx->r6 = hi;
    // 0x80030ED0: mflo        $a3
    ctx->r7 = lo;
    // 0x80030ED4: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x80030ED8: sra         $t2, $v1, 31
    ctx->r10 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030EDC: multu       $s3, $t3
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030EE0: lhu         $a0, 0x4($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0X4);
    // 0x80030EE4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80030EE8: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030EEC: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x80030EF0: sra         $t6, $a0, 31
    ctx->r14 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80030EF4: mfhi        $t0
    ctx->r8 = hi;
    // 0x80030EF8: mflo        $t1
    ctx->r9 = lo;
    // 0x80030EFC: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80030F00: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80030F04: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F08: mfhi        $a0
    ctx->r4 = hi;
    // 0x80030F0C: mflo        $a1
    ctx->r5 = lo;
    // 0x80030F10: nop

    // 0x80030F14: nop

    // 0x80030F18: mult        $s1, $t4
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F1C: mflo        $t8
    ctx->r24 = lo;
    // 0x80030F20: nop

    // 0x80030F24: nop

    // 0x80030F28: mult        $t5, $s0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F2C: mflo        $s0
    ctx->r16 = lo;
    // 0x80030F30: nop

    // 0x80030F34: nop

    // 0x80030F38: mult        $s3, $t2
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F3C: mflo        $t4
    ctx->r12 = lo;
    // 0x80030F40: nop

    // 0x80030F44: nop

    // 0x80030F48: mult        $t3, $s2
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F4C: mflo        $s2
    ctx->r18 = lo;
    // 0x80030F50: nop

    // 0x80030F54: nop

    // 0x80030F58: mult        $t7, $v0
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F5C: mflo        $t2
    ctx->r10 = lo;
    // 0x80030F60: nop

    // 0x80030F64: nop

    // 0x80030F68: mult        $v1, $t6
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030F6C: mflo        $t6
    ctx->r14 = lo;
    // 0x80030F70: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x80030F74: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x80030F78: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80030F7C: addu        $t0, $t0, $s2
    ctx->r8 = ADD32(ctx->r8, ctx->r18);
    // 0x80030F80: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80030F84: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80030F88: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x80030F8C: sltu        $v0, $a3, $t1
    ctx->r2 = ctx->r7 < ctx->r9 ? 1 : 0;
    // 0x80030F90: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80030F94: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030F98: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80030F9C: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x80030FA0: sltu        $v0, $a3, $a1
    ctx->r2 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x80030FA4: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80030FA8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030FAC: srl         $a3, $a3, 12
    ctx->r7 = S32(U32(ctx->r7) >> 12);
    // 0x80030FB0: sll         $v0, $a2, 20
    ctx->r2 = S32(ctx->r6 << 20);
    // 0x80030FB4: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80030FB8: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80030FBC: sw          $a3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r7;
    // 0x80030FC0: lhu         $v0, 0x6($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X6);
    // 0x80030FC4: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80030FC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030FCC: sra         $s7, $v0, 16
    ctx->r23 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030FD0: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x80030FD4: sra         $s6, $v0, 31
    ctx->r22 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030FD8: lhu         $v0, 0x8($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X8);
    // 0x80030FDC: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x80030FE0: sra         $s4, $v1, 31
    ctx->r20 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80030FE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80030FE8: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80030FEC: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x80030FF0: multu       $s7, $s5
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030FF4: lw          $v1, 0x4($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X4);
    // 0x80030FF8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80030FFC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80031000: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80031004: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80031008: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8003100C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80031010: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80031014: mfhi        $a2
    ctx->r6 = hi;
    // 0x80031018: mflo        $a3
    ctx->r7 = lo;
    // 0x8003101C: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x80031020: sra         $t2, $v1, 31
    ctx->r10 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80031024: multu       $t8, $t3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031028: lhu         $a0, 0xA($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0XA);
    // 0x8003102C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80031030: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80031034: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80031038: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x8003103C: sra         $t4, $a0, 31
    ctx->r12 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80031040: mfhi        $t0
    ctx->r8 = hi;
    // 0x80031044: mflo        $t1
    ctx->r9 = lo;
    // 0x80031048: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x8003104C: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80031050: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031054: mfhi        $a0
    ctx->r4 = hi;
    // 0x80031058: mflo        $a1
    ctx->r5 = lo;
    // 0x8003105C: nop

    // 0x80031060: nop

    // 0x80031064: mult        $s7, $s4
    result = S64(S32(ctx->r23)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031068: mflo        $t8
    ctx->r24 = lo;
    // 0x8003106C: nop

    // 0x80031070: nop

    // 0x80031074: mult        $s5, $s6
    result = S64(S32(ctx->r21)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031078: mflo        $s6
    ctx->r22 = lo;
    // 0x8003107C: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80031080: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80031084: mult        $t8, $t2
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031088: mflo        $s4
    ctx->r20 = lo;
    // 0x8003108C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80031090: nop

    // 0x80031094: mult        $t3, $t8
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031098: mflo        $t8
    ctx->r24 = lo;
    // 0x8003109C: nop

    // 0x800310A0: nop

    // 0x800310A4: mult        $t5, $v0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800310A8: mflo        $t2
    ctx->r10 = lo;
    // 0x800310AC: nop

    // 0x800310B0: nop

    // 0x800310B4: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800310B8: mflo        $t4
    ctx->r12 = lo;
    // 0x800310BC: addu        $t0, $t0, $s4
    ctx->r8 = ADD32(ctx->r8, ctx->r20);
    // 0x800310C0: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x800310C4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800310C8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800310CC: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x800310D0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x800310D4: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x800310D8: addu        $a2, $a2, $s6
    ctx->r6 = ADD32(ctx->r6, ctx->r22);
    // 0x800310DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800310E0: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x800310E4: sltu        $v0, $a3, $t1
    ctx->r2 = ctx->r7 < ctx->r9 ? 1 : 0;
    // 0x800310E8: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x800310EC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800310F0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800310F4: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x800310F8: sltu        $v0, $a3, $a1
    ctx->r2 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x800310FC: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80031100: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80031104: srl         $a3, $a3, 12
    ctx->r7 = S32(U32(ctx->r7) >> 12);
    // 0x80031108: sll         $v0, $a2, 20
    ctx->r2 = S32(ctx->r6 << 20);
    // 0x8003110C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80031110: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80031114: sw          $a3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r7;
    // 0x80031118: lhu         $v0, 0xC($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0XC);
    // 0x8003111C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80031120: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80031124: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x80031128: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003112C: sra         $t6, $v0, 31
    ctx->r14 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80031130: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80031134: sra         $s2, $v1, 31
    ctx->r18 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80031138: multu       $t7, $s3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003113C: lhu         $v0, 0xE($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0XE);
    // 0x80031140: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80031144: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80031148: lw          $v1, 0x4($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X4);
    // 0x8003114C: sra         $s0, $v0, 31
    ctx->r16 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80031150: mfhi        $a2
    ctx->r6 = hi;
    // 0x80031154: mflo        $a3
    ctx->r7 = lo;
    // 0x80031158: addu        $t5, $v1, $zero
    ctx->r13 = ADD32(ctx->r3, 0);
    // 0x8003115C: sra         $t4, $v1, 31
    ctx->r12 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80031160: multu       $s1, $t5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031164: lhu         $a0, 0x10($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0X10);
    // 0x80031168: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8003116C: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80031170: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x80031174: sra         $t2, $a0, 31
    ctx->r10 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80031178: mfhi        $t0
    ctx->r8 = hi;
    // 0x8003117C: mflo        $t1
    ctx->r9 = lo;
    // 0x80031180: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80031184: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80031188: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003118C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80031190: mflo        $a1
    ctx->r5 = lo;
    // 0x80031194: nop

    // 0x80031198: nop

    // 0x8003119C: mult        $t7, $s2
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800311A0: mflo        $s4
    ctx->r20 = lo;
    // 0x800311A4: nop

    // 0x800311A8: nop

    // 0x800311AC: mult        $s3, $t6
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800311B0: mflo        $t6
    ctx->r14 = lo;
    // 0x800311B4: nop

    // 0x800311B8: nop

    // 0x800311BC: mult        $s1, $t4
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800311C0: mflo        $s2
    ctx->r18 = lo;
    // 0x800311C4: nop

    // 0x800311C8: nop

    // 0x800311CC: mult        $t5, $s0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800311D0: mflo        $s0
    ctx->r16 = lo;
    // 0x800311D4: nop

    // 0x800311D8: nop

    // 0x800311DC: mult        $t3, $v0
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800311E0: mflo        $t4
    ctx->r12 = lo;
    // 0x800311E4: nop

    // 0x800311E8: nop

    // 0x800311EC: mult        $v1, $t2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800311F0: mflo        $t2
    ctx->r10 = lo;
    // 0x800311F4: addu        $a2, $a2, $s4
    ctx->r6 = ADD32(ctx->r6, ctx->r20);
    // 0x800311F8: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800311FC: addu        $t0, $t0, $s2
    ctx->r8 = ADD32(ctx->r8, ctx->r18);
    // 0x80031200: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x80031204: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80031208: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x8003120C: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x80031210: sltu        $v0, $a3, $t1
    ctx->r2 = ctx->r7 < ctx->r9 ? 1 : 0;
    // 0x80031214: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80031218: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8003121C: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x80031220: sltu        $v0, $a3, $a1
    ctx->r2 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x80031224: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80031228: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8003122C: srl         $a3, $a3, 12
    ctx->r7 = S32(U32(ctx->r7) >> 12);
    // 0x80031230: sll         $v0, $a2, 20
    ctx->r2 = S32(ctx->r6 << 20);
    // 0x80031234: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80031238: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x8003123C: sw          $a3, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r7;
L_80031240:
    // 0x80031240: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80031244: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x80031248: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x8003124C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80031250: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80031254: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80031258: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x8003125C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80031260: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80031264: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80031268: jr          $ra
    // 0x8003126C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x8003126C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8003B6B8_16AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B6B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003B6BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003B6C0: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8003B6C4: lw          $s0, -0x6F9C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F9C);
    // 0x8003B6C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003B6CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8003B6D0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003B6D4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8003B6D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003B6DC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8003B6E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003B6E4: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8003B6E8: sltiu       $v0, $s0, 0x40
    ctx->r2 = ctx->r16 < 0X40 ? 1 : 0;
    // 0x8003B6EC: beq         $v0, $zero, L_8003B7B8
    if (ctx->r2 == 0) {
        // 0x8003B6F0: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_8003B7B8;
    }
    // 0x8003B6F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003B6F4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8003B6F8: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8003B6FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003B700: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8003B704: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B708: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B70C: sh          $v0, -0x1140($at)
    MEM_H(-0X1140, ctx->r1) = ctx->r2;
    // 0x8003B710: jal         0x8003E964
    // 0x8003B714: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003E964_19D64(rdram, ctx);
        goto after_0;
    // 0x8003B714: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_0:
    // 0x8003B718: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B71C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B720: sh          $v0, -0x113E($at)
    MEM_H(-0X113E, ctx->r1) = ctx->r2;
    // 0x8003B724: lhu         $a1, 0x4($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4);
    // 0x8003B728: andi        $a0, $s2, 0xFFF
    ctx->r4 = ctx->r18 & 0XFFF;
    // 0x8003B72C: sra         $v1, $s3, 6
    ctx->r3 = S32(SIGNED(ctx->r19) >> 6);
    // 0x8003B730: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8003B734: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8003B738: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B73C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B740: sh          $a0, -0x113A($at)
    MEM_H(-0X113A, ctx->r1) = ctx->r4;
    // 0x8003B744: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B748: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B74C: sh          $a1, -0x113C($at)
    MEM_H(-0X113C, ctx->r1) = ctx->r5;
    // 0x8003B750: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x8003B754: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x8003B758: or          $v1, $s4, $v1
    ctx->r3 = ctx->r20 | ctx->r3;
    // 0x8003B75C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B760: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B764: sh          $v1, -0x1138($at)
    MEM_H(-0X1138, ctx->r1) = ctx->r3;
    // 0x8003B768: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    // 0x8003B76C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x8003B770: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B774: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B778: sb          $zero, -0x1134($at)
    MEM_B(-0X1134, ctx->r1) = 0;
    // 0x8003B77C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B780: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B784: sb          $v1, -0x1133($at)
    MEM_B(-0X1133, ctx->r1) = ctx->r3;
    // 0x8003B788: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B78C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B790: sb          $zero, -0x1132($at)
    MEM_B(-0X1132, ctx->r1) = 0;
    // 0x8003B794: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003B798: lw          $v1, -0x6F9C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F9C);
    // 0x8003B79C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003B7A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003B7A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B7A8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8003B7AC: sh          $v0, -0x1136($at)
    MEM_H(-0X1136, ctx->r1) = ctx->r2;
    // 0x8003B7B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B7B4: sw          $v1, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = ctx->r3;
L_8003B7B8:
    // 0x8003B7B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003B7BC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003B7C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B7C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003B7C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003B7CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003B7D0: jr          $ra
    // 0x8003B7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003B7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003A2EC_156EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A2EC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8003A2F0: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8003A2F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8003A2F8: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8003A2FC: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8003A300: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8003A304: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8003A308: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8003A30C: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8003A310: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8003A314: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8003A318: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8003A31C: lh          $a0, 0x14($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X14);
    // 0x8003A320: jal         0x80038CF8
    // 0x8003A324: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    func_80038CF8_140F8(rdram, ctx);
        goto after_0;
    // 0x8003A324: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    after_0:
    // 0x8003A328: bne         $v0, $zero, L_8003A79C
    if (ctx->r2 != 0) {
        // 0x8003A32C: nop
    
            goto L_8003A79C;
    }
    // 0x8003A32C: nop

    // 0x8003A330: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8003A334: jal         0x80031E5C
    // 0x8003A338: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    func_80031E5C_D25C(rdram, ctx);
        goto after_1;
    // 0x8003A338: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    after_1:
    // 0x8003A33C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003A340: addiu       $a0, $a0, 0x46A0
    ctx->r4 = ADD32(ctx->r4, 0X46A0);
    // 0x8003A344: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003A348: addiu       $a1, $a1, 0x6B58
    ctx->r5 = ADD32(ctx->r5, 0X6B58);
    // 0x8003A34C: jal         0x8009A3B4
    // 0x8003A350: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8003A350: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8003A354: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003A358: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8003A35C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8003A360: jal         0x8009A3B4
    // 0x8003A364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8003A364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8003A368: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003A36C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8003A370: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003A374: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8003A378: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003A37C: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8003A380: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8003A384: jal         0x80031F0C
    // 0x8003A388: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_4;
    // 0x8003A388: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_4:
    // 0x8003A38C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8003A390: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003A394: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8003A398: jal         0x8009A3B4
    // 0x8003A39C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8003A39C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x8003A3A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A3A4: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x8003A3A8: bltzl       $v0, L_8003A3B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003A3AC: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_8003A3B0;
    }
    goto skip_0;
    // 0x8003A3AC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_8003A3B0:
    // 0x8003A3B0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8003A3B4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8003A3B8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8003A3BC: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8003A3C0: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8003A3C4: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8003A3C8: beq         $v1, $zero, L_8003A3E8
    if (ctx->r3 == 0) {
        // 0x8003A3CC: sb          $v0, 0x6($s1)
        MEM_B(0X6, ctx->r17) = ctx->r2;
            goto L_8003A3E8;
    }
    // 0x8003A3CC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8003A3D0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003A3D4: lhu         $v1, -0x7810($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7810);
    // 0x8003A3D8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8003A3DC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003A3E0: bne         $v0, $zero, L_8003A448
    if (ctx->r2 != 0) {
        // 0x8003A3E4: nop
    
            goto L_8003A448;
    }
    // 0x8003A3E4: nop

L_8003A3E8:
    // 0x8003A3E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003A3EC: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x8003A3F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8003A3F4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003A3F8: bne         $v0, $zero, L_8003A79C
    if (ctx->r2 != 0) {
        // 0x8003A3FC: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8003A79C;
    }
    // 0x8003A3FC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8003A400: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003A404: lb          $v1, -0x72EC($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X72EC);
    // 0x8003A408: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003A40C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003A410: bne         $v0, $zero, L_8003A79C
    if (ctx->r2 != 0) {
        // 0x8003A414: nop
    
            goto L_8003A79C;
    }
    // 0x8003A414: nop

    // 0x8003A418: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x8003A41C: addiu       $v0, $v0, 0x160
    ctx->r2 = ADD32(ctx->r2, 0X160);
    // 0x8003A420: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8003A424: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
    // 0x8003A428: beq         $v0, $zero, L_8003A79C
    if (ctx->r2 == 0) {
        // 0x8003A42C: nop
    
            goto L_8003A79C;
    }
    // 0x8003A42C: nop

    // 0x8003A430: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x8003A434: addiu       $v0, $v0, 0x88
    ctx->r2 = ADD32(ctx->r2, 0X88);
    // 0x8003A438: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8003A43C: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
    // 0x8003A440: beq         $v0, $zero, L_8003A79C
    if (ctx->r2 == 0) {
        // 0x8003A444: nop
    
            goto L_8003A79C;
    }
    // 0x8003A444: nop

L_8003A448:
    // 0x8003A448: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8003A44C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8003A450: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8003A454: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8003A458: slti        $v0, $v1, 0x709
    ctx->r2 = SIGNED(ctx->r3) < 0X709 ? 1 : 0;
    // 0x8003A45C: beq         $v0, $zero, L_8003A480
    if (ctx->r2 == 0) {
        // 0x8003A460: slti        $v0, $v1, 0x2BD
        ctx->r2 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
            goto L_8003A480;
    }
    // 0x8003A460: slti        $v0, $v1, 0x2BD
    ctx->r2 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
    // 0x8003A464: bnel        $v0, $zero, L_8003A484
    if (ctx->r2 != 0) {
        // 0x8003A468: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8003A484;
    }
    goto skip_1;
    // 0x8003A468: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
    // 0x8003A46C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003A470: lbu         $v0, -0x265E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X265E);
    // 0x8003A474: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8003A478: beq         $v0, $zero, L_8003A484
    if (ctx->r2 == 0) {
        // 0x8003A47C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8003A484;
    }
    // 0x8003A47C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8003A480:
    // 0x8003A480: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_8003A484:
    // 0x8003A484: lw          $v0, 0x88($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X88);
    // 0x8003A488: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x8003A48C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003A490: sw          $v0, -0xC9C($at)
    MEM_W(-0XC9C, ctx->r1) = ctx->r2;
    // 0x8003A494: sb          $s2, 0xF($fp)
    MEM_B(0XF, ctx->r30) = ctx->r18;
    // 0x8003A498: lb          $v0, 0xF9($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF9);
    // 0x8003A49C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003A4A0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8003A4A4: addiu       $a2, $a2, 0x128C
    ctx->r6 = ADD32(ctx->r6, 0X128C);
    // 0x8003A4A8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8003A4AC: lb          $a1, 0xAF($s1)
    ctx->r5 = MEM_B(ctx->r17, 0XAF);
    // 0x8003A4B0: jal         0x800283A8
    // 0x8003A4B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_6;
    // 0x8003A4B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8003A4B8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8003A4BC: blez        $v0, L_8003A750
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8003A4C0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8003A750;
    }
    // 0x8003A4C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8003A4C4: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x8003A4C8: addiu       $s7, $s7, 0x9A4
    ctx->r23 = ADD32(ctx->r23, 0X9A4);
    // 0x8003A4CC: addiu       $s5, $zero, 0x7FFF
    ctx->r21 = ADD32(0, 0X7FFF);
    // 0x8003A4D0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8003A4D4: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x8003A4D8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_8003A4DC:
    // 0x8003A4DC: lb          $v0, 0xFB($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XFB);
    // 0x8003A4E0: bltz        $v0, L_8003A738
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003A4E4: addiu       $v1, $zero, 0x40
        ctx->r3 = ADD32(0, 0X40);
            goto L_8003A738;
    }
    // 0x8003A4E4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8003A4E8: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003A4EC: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x8003A4F0: bne         $v0, $v1, L_8003A508
    if (ctx->r2 != ctx->r3) {
        // 0x8003A4F4: addiu       $a1, $s3, 0x1E8
        ctx->r5 = ADD32(ctx->r19, 0X1E8);
            goto L_8003A508;
    }
    // 0x8003A4F4: addiu       $a1, $s3, 0x1E8
    ctx->r5 = ADD32(ctx->r19, 0X1E8);
    // 0x8003A4F8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8003A4FC: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    // 0x8003A500: j           L_8003A510
    // 0x8003A504: addiu       $a1, $s3, 0x240
    ctx->r5 = ADD32(ctx->r19, 0X240);
        goto L_8003A510;
    // 0x8003A504: addiu       $a1, $s3, 0x240
    ctx->r5 = ADD32(ctx->r19, 0X240);
L_8003A508:
    // 0x8003A508: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8003A50C: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
L_8003A510:
    // 0x8003A510: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8003A514: addiu       $a2, $a2, 0x990
    ctx->r6 = ADD32(ctx->r6, 0X990);
    // 0x8003A518: jal         0x800306F0
    // 0x8003A51C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_800306F0_BAF0(rdram, ctx);
        goto after_7;
    // 0x8003A51C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_7:
    // 0x8003A520: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8003A524: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    // 0x8003A528: sll         $s0, $s2, 3
    ctx->r16 = S32(ctx->r18 << 3);
    // 0x8003A52C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8003A530: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x8003A534: jal         0x800308E8
    // 0x8003A538: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800308E8_BCE8(rdram, ctx);
        goto after_8;
    // 0x8003A538: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x8003A53C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8003A540: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x8003A544: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8003A548: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8003A54C: lw          $v1, 0x4778($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4778);
    // 0x8003A550: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8003A554: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x8003A558: lw          $a1, 0x477C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X477C);
    // 0x8003A55C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003A560: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8003A564: addiu       $a0, $a0, 0x990
    ctx->r4 = ADD32(ctx->r4, 0X990);
    // 0x8003A568: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003A56C: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8003A570: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8003A574: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x8003A578: sw          $v1, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r3;
    // 0x8003A57C: jal         0x80031E5C
    // 0x8003A580: sw          $a1, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r5;
    func_80031E5C_D25C(rdram, ctx);
        goto after_9;
    // 0x8003A580: sw          $a1, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r5;
    after_9:
    // 0x8003A584: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8003A588: jal         0x80031E94
    // 0x8003A58C: addiu       $a0, $a0, 0x990
    ctx->r4 = ADD32(ctx->r4, 0X990);
    func_80031E94_D294(rdram, ctx);
        goto after_10;
    // 0x8003A58C: addiu       $a0, $a0, 0x990
    ctx->r4 = ADD32(ctx->r4, 0X990);
    after_10:
    // 0x8003A590: lhu         $t0, 0x15E($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X15E);
    // 0x8003A594: beq         $t0, $zero, L_8003A5C8
    if (ctx->r8 == 0) {
        // 0x8003A598: andi        $v0, $t0, 0x7FFF
        ctx->r2 = ctx->r8 & 0X7FFF;
            goto L_8003A5C8;
    }
    // 0x8003A598: andi        $v0, $t0, 0x7FFF
    ctx->r2 = ctx->r8 & 0X7FFF;
    // 0x8003A59C: bne         $v0, $s5, L_8003A5B0
    if (ctx->r2 != ctx->r21) {
        // 0x8003A5A0: addu        $a1, $s1, $s0
        ctx->r5 = ADD32(ctx->r17, ctx->r16);
            goto L_8003A5B0;
    }
    // 0x8003A5A0: addu        $a1, $s1, $s0
    ctx->r5 = ADD32(ctx->r17, ctx->r16);
    // 0x8003A5A4: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    // 0x8003A5A8: j           L_8003A678
    // 0x8003A5AC: sh          $s5, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r21;
        goto L_8003A678;
    // 0x8003A5AC: sh          $s5, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r21;
L_8003A5B0:
    // 0x8003A5B0: lh          $v0, 0x186($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X186);
    // 0x8003A5B4: bne         $v0, $s5, L_8003A67C
    if (ctx->r2 != ctx->r21) {
        // 0x8003A5B8: andi        $v0, $t0, 0x8000
        ctx->r2 = ctx->r8 & 0X8000;
            goto L_8003A67C;
    }
    // 0x8003A5B8: andi        $v0, $t0, 0x8000
    ctx->r2 = ctx->r8 & 0X8000;
    // 0x8003A5BC: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x8003A5C0: j           L_8003A678
    // 0x8003A5C4: sh          $zero, 0x186($a1)
    MEM_H(0X186, ctx->r5) = 0;
        goto L_8003A678;
    // 0x8003A5C4: sh          $zero, 0x186($a1)
    MEM_H(0X186, ctx->r5) = 0;
L_8003A5C8:
    // 0x8003A5C8: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    // 0x8003A5CC: lhu         $t0, 0x186($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X186);
    // 0x8003A5D0: andi        $v0, $t0, 0x7FFF
    ctx->r2 = ctx->r8 & 0X7FFF;
    // 0x8003A5D4: bne         $v0, $s5, L_8003A610
    if (ctx->r2 != ctx->r21) {
        // 0x8003A5D8: slti        $v0, $s2, 0x20
        ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
            goto L_8003A610;
    }
    // 0x8003A5D8: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x8003A5DC: beq         $v0, $zero, L_8003A67C
    if (ctx->r2 == 0) {
        // 0x8003A5E0: andi        $v0, $t0, 0x8000
        ctx->r2 = ctx->r8 & 0X8000;
            goto L_8003A67C;
    }
    // 0x8003A5E0: andi        $v0, $t0, 0x8000
    ctx->r2 = ctx->r8 & 0X8000;
    // 0x8003A5E4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A5E8: lw          $v0, -0x3C48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C48);
    // 0x8003A5EC: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003A5F0: addiu       $t1, $t1, -0x3C60
    ctx->r9 = ADD32(ctx->r9, -0X3C60);
    // 0x8003A5F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003A5F8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003A5FC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8003A600: sllv        $a0, $s6, $s2
    ctx->r4 = S32(ctx->r22 << (ctx->r18 & 31));
    // 0x8003A604: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8003A608: j           L_8003A678
    // 0x8003A60C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
        goto L_8003A678;
    // 0x8003A60C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_8003A610:
    // 0x8003A610: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A614: lw          $v0, -0x3C48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C48);
    // 0x8003A618: beq         $v0, $zero, L_8003A678
    if (ctx->r2 == 0) {
        // 0x8003A61C: slti        $v0, $s2, 0x20
        ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
            goto L_8003A678;
    }
    // 0x8003A61C: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x8003A620: beq         $v0, $zero, L_8003A67C
    if (ctx->r2 == 0) {
        // 0x8003A624: andi        $v0, $t0, 0x8000
        ctx->r2 = ctx->r8 & 0X8000;
            goto L_8003A67C;
    }
    // 0x8003A624: andi        $v0, $t0, 0x8000
    ctx->r2 = ctx->r8 & 0X8000;
    // 0x8003A628: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003A62C: sllv        $a2, $s6, $s2
    ctx->r6 = S32(ctx->r22 << (ctx->r18 & 31));
    // 0x8003A630: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A634: addiu       $a0, $a0, -0x3C60
    ctx->r4 = ADD32(ctx->r4, -0X3C60);
    // 0x8003A638: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A63C: addiu       $v1, $v1, -0x3C54
    ctx->r3 = ADD32(ctx->r3, -0X3C54);
L_8003A640:
    // 0x8003A640: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003A644: bnel        $v0, $s1, L_8003A668
    if (ctx->r2 != ctx->r17) {
        // 0x8003A648: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8003A668;
    }
    goto skip_2;
    // 0x8003A648: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    skip_2:
    // 0x8003A64C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A650: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8003A654: beq         $v0, $zero, L_8003A668
    if (ctx->r2 == 0) {
        // 0x8003A658: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8003A668;
    }
    // 0x8003A658: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003A65C: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x8003A660: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A664: sw          $s6, -0x3C44($at)
    MEM_W(-0X3C44, ctx->r1) = ctx->r22;
L_8003A668:
    // 0x8003A668: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003A66C: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8003A670: bne         $v0, $zero, L_8003A640
    if (ctx->r2 != 0) {
        // 0x8003A674: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8003A640;
    }
    // 0x8003A674: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8003A678:
    // 0x8003A678: andi        $v0, $t0, 0x8000
    ctx->r2 = ctx->r8 & 0X8000;
L_8003A67C:
    // 0x8003A67C: beq         $v0, $zero, L_8003A6FC
    if (ctx->r2 == 0) {
        // 0x8003A680: andi        $v0, $t0, 0x1F
        ctx->r2 = ctx->r8 & 0X1F;
            goto L_8003A6FC;
    }
    // 0x8003A680: andi        $v0, $t0, 0x1F
    ctx->r2 = ctx->r8 & 0X1F;
    // 0x8003A684: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8003A688: andi        $v0, $t0, 0x3E0
    ctx->r2 = ctx->r8 & 0X3E0;
    // 0x8003A68C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8003A690: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003A694: andi        $v0, $t0, 0x7C00
    ctx->r2 = ctx->r8 & 0X7C00;
    // 0x8003A698: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8003A69C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003A6A0: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x8003A6A4: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x8003A6A8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003A6AC: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8003A6B0: mfhi        $t1
    ctx->r9 = hi;
    // 0x8003A6B4: subu        $v1, $t1, $v0
    ctx->r3 = SUB32(ctx->r9, ctx->r2);
    // 0x8003A6B8: nop

    // 0x8003A6BC: bgez        $v1, L_8003A6C8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003A6C0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8003A6C8;
    }
    // 0x8003A6C0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8003A6C4: addiu       $v0, $v1, 0xF
    ctx->r2 = ADD32(ctx->r3, 0XF);
L_8003A6C8:
    // 0x8003A6C8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8003A6CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8003A6D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003A6D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003A6D8: lh          $v0, -0x3664($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3664);
    // 0x8003A6DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003A6E0: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8003A6E4: beql        $v0, $zero, L_8003A6EC
    if (ctx->r2 == 0) {
        // 0x8003A6E8: addiu       $v1, $zero, 0xF8
        ctx->r3 = ADD32(0, 0XF8);
            goto L_8003A6EC;
    }
    goto skip_3;
    // 0x8003A6E8: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    skip_3:
L_8003A6EC:
    // 0x8003A6EC: sb          $v1, 0xD($fp)
    MEM_B(0XD, ctx->r30) = ctx->r3;
    // 0x8003A6F0: ori         $t0, $zero, 0xC210
    ctx->r8 = 0 | 0XC210;
    // 0x8003A6F4: j           L_8003A704
    // 0x8003A6F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_8003A704;
    // 0x8003A6F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8003A6FC:
    // 0x8003A6FC: sb          $zero, 0xE($fp)
    MEM_B(0XE, ctx->r30) = 0;
    // 0x8003A700: lh          $a1, 0xAE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XAE);
L_8003A704:
    // 0x8003A704: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003A708: lbu         $a2, 0xF8($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0XF8);
    // 0x8003A70C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003A710: lw          $v1, -0xC9C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC9C);
    // 0x8003A714: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8003A718: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8003A71C: addiu       $a3, $a3, 0x990
    ctx->r7 = ADD32(ctx->r7, 0X990);
    // 0x8003A720: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8003A724: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8003A728: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8003A72C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003A730: jal         0x800817BC
    // 0x8003A734: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_800817BC_5CBBC(rdram, ctx);
        goto after_11;
    // 0x8003A734: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_8003A738:
    // 0x8003A738: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003A73C: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8003A740: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003A744: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003A748: bne         $v0, $zero, L_8003A4DC
    if (ctx->r2 != 0) {
        // 0x8003A74C: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_8003A4DC;
    }
    // 0x8003A74C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
L_8003A750:
    // 0x8003A750: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A754: lw          $v0, -0x3C48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C48);
    // 0x8003A758: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8003A75C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A760: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003A764: lw          $v0, -0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C60);
    // 0x8003A768: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A76C: addiu       $v1, $v1, -0x3C60
    ctx->r3 = ADD32(ctx->r3, -0X3C60);
    // 0x8003A770: beq         $v0, $zero, L_8003A79C
    if (ctx->r2 == 0) {
        // 0x8003A774: addiu       $v0, $v1, 0xC
        ctx->r2 = ADD32(ctx->r3, 0XC);
            goto L_8003A79C;
    }
    // 0x8003A774: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
    // 0x8003A778: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8003A77C: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8003A780: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A784: lw          $v1, -0x3C48($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C48);
    // 0x8003A788: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8003A78C: beq         $v0, $zero, L_8003A79C
    if (ctx->r2 == 0) {
        // 0x8003A790: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8003A79C;
    }
    // 0x8003A790: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8003A794: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A798: sw          $v0, -0x3C48($at)
    MEM_W(-0X3C48, ctx->r1) = ctx->r2;
L_8003A79C:
    // 0x8003A79C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8003A7A0: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8003A7A4: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8003A7A8: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8003A7AC: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8003A7B0: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8003A7B4: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8003A7B8: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8003A7BC: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8003A7C0: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8003A7C4: jr          $ra
    // 0x8003A7C8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8003A7C8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_800879A8_62DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800879A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800879AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800879B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800879B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800879B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800879BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800879C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800879C4: jal         0x80092EB0
    // 0x800879C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x800879C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800879CC: jal         0x80025E1C
    // 0x800879D0: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    func_80025E1C_121C(rdram, ctx);
        goto after_1;
    // 0x800879D0: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    after_1:
    // 0x800879D4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x800879D8: beq         $s2, $zero, L_80087AC8
    if (ctx->r18 == 0) {
        // 0x800879DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80087AC8;
    }
    // 0x800879DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800879E0: jal         0x80087570
    // 0x800879E4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x800879E4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    after_2:
    // 0x800879E8: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x800879EC: addiu       $s0, $s0, -0x29D8
    ctx->r16 = ADD32(ctx->r16, -0X29D8);
    // 0x800879F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800879F4: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800879F8: addiu       $a1, $a1, -0x29C0
    ctx->r5 = ADD32(ctx->r5, -0X29C0);
    // 0x800879FC: jal         0x8009A470
    // 0x80087A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80087A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80087A04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80087A08: jal         0x80099440
    // 0x80087A0C: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x80087A0C: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_4:
    // 0x80087A10: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087A14: addiu       $a0, $a0, -0x29F0
    ctx->r4 = ADD32(ctx->r4, -0X29F0);
    // 0x80087A18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087A1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80087A20: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x80087A24: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80087A28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80087A2C: jal         0x80095690
    // 0x80087A30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    osFlashReadArray_recomp(rdram, ctx);
        goto after_5;
    // 0x80087A30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_5:
    // 0x80087A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80087A38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087A3C: jal         0x8009A5E0
    // 0x80087A40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x80087A40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80087A44: jal         0x80095350
    // 0x80087A48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osFlashSectorErase_recomp(rdram, ctx);
        goto after_7;
    // 0x80087A48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x80087A4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80087A50: addiu       $a1, $s2, 0x1A00
    ctx->r5 = ADD32(ctx->r18, 0X1A00);
    // 0x80087A54: jal         0x80099F90
    // 0x80087A58: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x80087A58: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_8:
    // 0x80087A5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80087A60: jal         0x80099570
    // 0x80087A64: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_9;
    // 0x80087A64: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_9:
    // 0x80087A68: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80087A6C: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x80087A70: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_80087A74:
    // 0x80087A74: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087A78: addiu       $a0, $a0, -0x29F0
    ctx->r4 = ADD32(ctx->r4, -0X29F0);
    // 0x80087A7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087A80: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80087A84: jal         0x800954A0
    // 0x80087A88: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    osFlashWriteBuffer_recomp(rdram, ctx);
        goto after_10;
    // 0x80087A88: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_10:
    // 0x80087A8C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80087A90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087A94: jal         0x8009A5E0
    // 0x80087A98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x80087A98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80087A9C: jal         0x80095540
    // 0x80087AA0: or          $a0, $s4, $s1
    ctx->r4 = ctx->r20 | ctx->r17;
    osFlashWriteArray_recomp(rdram, ctx);
        goto after_12;
    // 0x80087AA0: or          $a0, $s4, $s1
    ctx->r4 = ctx->r20 | ctx->r17;
    after_12:
    // 0x80087AA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80087AA8: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x80087AAC: bne         $v0, $zero, L_80087A74
    if (ctx->r2 != 0) {
        // 0x80087AB0: addiu       $s0, $s0, 0x80
        ctx->r16 = ADD32(ctx->r16, 0X80);
            goto L_80087A74;
    }
    // 0x80087AB0: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x80087AB4: jal         0x80087590
    // 0x80087AB8: nop

    func_80087590_62990(rdram, ctx);
        goto after_13;
    // 0x80087AB8: nop

    after_13:
    // 0x80087ABC: jal         0x80025FF8
    // 0x80087AC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_14;
    // 0x80087AC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x80087AC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80087AC8:
    // 0x80087AC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80087ACC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80087AD0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80087AD4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80087AD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80087ADC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80087AE0: jr          $ra
    // 0x80087AE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80087AE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008C480_67880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C480: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8008C484: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8008C488:
    // 0x8008C488: lhu         $v1, 0xA2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0XA2);
    // 0x8008C48C: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x8008C490: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8008C494: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8008C498: sh          $v1, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r3;
    // 0x8008C49C: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8008C4A0: bne         $v1, $zero, L_8008C528
    if (ctx->r3 != 0) {
        // 0x8008C4A4: sw          $v0, 0x14($a2)
        MEM_W(0X14, ctx->r6) = ctx->r2;
            goto L_8008C528;
    }
    // 0x8008C4A4: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x8008C4A8: lw          $v1, 0x38($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X38);
    // 0x8008C4AC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008C4B0: sw          $v0, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r2;
    // 0x8008C4B4: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x8008C4B8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8008C4BC: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008C4C0: bnel        $v0, $zero, L_8008C524
    if (ctx->r2 != 0) {
        // 0x8008C4C4: sb          $a1, 0xBC($a2)
        MEM_B(0XBC, ctx->r6) = ctx->r5;
            goto L_8008C524;
    }
    goto skip_0;
    // 0x8008C4C4: sb          $a1, 0xBC($a2)
    MEM_B(0XBC, ctx->r6) = ctx->r5;
    skip_0:
    // 0x8008C4C8: lw          $v1, 0x38($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X38);
    // 0x8008C4CC: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8008C4D0: sb          $v0, 0xBC($a2)
    MEM_B(0XBC, ctx->r6) = ctx->r2;
    // 0x8008C4D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008C4D8: sw          $v0, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r2;
    // 0x8008C4DC: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x8008C4E0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8008C4E4: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008C4E8: bne         $v0, $zero, L_8008C51C
    if (ctx->r2 != 0) {
        // 0x8008C4EC: addiu       $v0, $a1, 0x2
        ctx->r2 = ADD32(ctx->r5, 0X2);
            goto L_8008C51C;
    }
    // 0x8008C4EC: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x8008C4F0: lw          $a0, 0x38($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X38);
    // 0x8008C4F4: andi        $v1, $a1, 0x7F
    ctx->r3 = ctx->r5 & 0X7F;
    // 0x8008C4F8: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8008C4FC: sh          $v1, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r3;
    // 0x8008C500: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8008C504: sw          $v0, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r2;
    // 0x8008C508: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8008C50C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8008C510: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008C514: j           L_8008C528
    // 0x8008C518: sh          $v0, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r2;
        goto L_8008C528;
    // 0x8008C518: sh          $v0, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r2;
L_8008C51C:
    // 0x8008C51C: j           L_8008C528
    // 0x8008C520: sh          $v0, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r2;
        goto L_8008C528;
    // 0x8008C520: sh          $v0, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r2;
L_8008C524:
    // 0x8008C524: sh          $a3, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r7;
L_8008C528:
    // 0x8008C528: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x8008C52C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x8008C530: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C534: bltz        $v0, L_8008C488
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008C538: nop
    
            goto L_8008C488;
    }
    // 0x8008C538: nop

    // 0x8008C53C: jr          $ra
    // 0x8008C540: nop

    TRACE_RETURN()
    return;
    // 0x8008C540: nop

;}
RECOMP_FUNC void func_80035760_10B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035760: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80035764: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80035768: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8003576C: lw          $a3, 0x55A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X55A0);
    // 0x80035770: lui         $t1, 0xAAAA
    ctx->r9 = S32(0XAAAA << 16);
    // 0x80035774: ori         $t1, $t1, 0xAAAB
    ctx->r9 = ctx->r9 | 0XAAAB;
    // 0x80035778: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x8003577C: lw          $t0, -0x2660($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2660);
    // 0x80035780: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80035784:
    // 0x80035784: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80035788: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8003578C: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    // 0x80035790: and         $v0, $a0, $t2
    ctx->r2 = ctx->r4 & ctx->r10;
    // 0x80035794: beq         $v0, $zero, L_800357CC
    if (ctx->r2 == 0) {
        // 0x80035798: sltu        $v0, $a0, $a3
        ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
            goto L_800357CC;
    }
    // 0x80035798: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x8003579C: bnel        $v0, $zero, L_800357D0
    if (ctx->r2 != 0) {
        // 0x800357A0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_800357D0;
    }
    goto skip_0;
    // 0x800357A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x800357A4: subu        $v0, $a0, $a3
    ctx->r2 = SUB32(ctx->r4, ctx->r7);
    // 0x800357A8: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800357AC: mfhi        $t3
    ctx->r11 = hi;
    // 0x800357B0: srl         $v1, $t3, 5
    ctx->r3 = S32(U32(ctx->r11) >> 5);
    // 0x800357B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800357B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800357BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800357C0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800357C4: lhu         $v0, 0x24($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X24);
    // 0x800357C8: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
L_800357CC:
    // 0x800357CC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800357D0:
    // 0x800357D0: slti        $v0, $a2, 0x6B0
    ctx->r2 = SIGNED(ctx->r6) < 0X6B0 ? 1 : 0;
    // 0x800357D4: bne         $v0, $zero, L_80035784
    if (ctx->r2 != 0) {
        // 0x800357D8: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_80035784;
    }
    // 0x800357D8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x800357DC: jr          $ra
    // 0x800357E0: nop

    TRACE_RETURN()
    return;
    // 0x800357E0: nop

;}
RECOMP_FUNC void func_8003491C_FD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003491C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80034920: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80034924: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80034928: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003492C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80034930: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80034934: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80034938: blez        $s2, L_800349E8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8003493C: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_800349E8;
    }
    // 0x8003493C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80034940: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80034944: lh          $v0, 0x5E90($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5E90);
    // 0x80034948: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x8003494C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80034950: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034954: mflo        $a1
    ctx->r5 = lo;
    // 0x80034958: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8003495C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80034960: lh          $v0, 0x5E92($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5E92);
    // 0x80034964: lh          $v1, 0x2($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X2);
    // 0x80034968: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003496C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034970: mflo        $a2
    ctx->r6 = lo;
    // 0x80034974: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80034978: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8003497C: lh          $v0, 0x5E94($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5E94);
    // 0x80034980: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x80034984: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80034988: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003498C: mflo        $a0
    ctx->r4 = lo;
    // 0x80034990: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80034994: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80034998: jal         0x80032424
    // 0x8003499C: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8003499C: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    after_0:
    // 0x800349A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800349A4: sltu        $v0, $s1, $v1
    ctx->r2 = ctx->r17 < ctx->r3 ? 1 : 0;
    // 0x800349A8: bne         $v0, $zero, L_800349E8
    if (ctx->r2 != 0) {
        // 0x800349AC: sltu        $v0, $v1, $s0
        ctx->r2 = ctx->r3 < ctx->r16 ? 1 : 0;
            goto L_800349E8;
    }
    // 0x800349AC: sltu        $v0, $v1, $s0
    ctx->r2 = ctx->r3 < ctx->r16 ? 1 : 0;
    // 0x800349B0: bnel        $v0, $zero, L_800349B8
    if (ctx->r2 != 0) {
        // 0x800349B4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800349B8;
    }
    goto skip_0;
    // 0x800349B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    skip_0:
L_800349B8:
    // 0x800349B8: subu        $v0, $s1, $v1
    ctx->r2 = SUB32(ctx->r17, ctx->r3);
    // 0x800349BC: mult        $v0, $s2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800349C0: mflo        $v0
    ctx->r2 = lo;
    // 0x800349C4: subu        $v1, $s1, $s0
    ctx->r3 = SUB32(ctx->r17, ctx->r16);
    // 0x800349C8: nop

    // 0x800349CC: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x800349D0: bne         $v1, $zero, L_800349DC
    if (ctx->r3 != 0) {
        // 0x800349D4: nop
    
            goto L_800349DC;
    }
    // 0x800349D4: nop

    // 0x800349D8: break       7
    do_break(2147699160);
L_800349DC:
    // 0x800349DC: mflo        $v0
    ctx->r2 = lo;
    // 0x800349E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800349E4: sb          $v0, 0x434F($at)
    MEM_B(0X434F, ctx->r1) = ctx->r2;
L_800349E8:
    // 0x800349E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800349EC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800349F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800349F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800349F8: jr          $ra
    // 0x800349FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800349FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007AD00_56100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007AD00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007AD04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8007AD08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8007AD0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007AD10: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8007AD14: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8007AD18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8007AD1C: jal         0x8007B19C
    // 0x8007AD20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8007B19C_5659C(rdram, ctx);
        goto after_0;
    // 0x8007AD20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007AD24: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8007AD28: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8007AD2C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AD30: bne         $v0, $zero, L_8007ADC8
    if (ctx->r2 != 0) {
        // 0x8007AD34: addiu       $s4, $s2, 0x28
        ctx->r20 = ADD32(ctx->r18, 0X28);
            goto L_8007ADC8;
    }
    // 0x8007AD34: addiu       $s4, $s2, 0x28
    ctx->r20 = ADD32(ctx->r18, 0X28);
    // 0x8007AD38: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8007AD3C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8007AD40: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8007AD44: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
L_8007AD48:
    // 0x8007AD48: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8007AD4C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007AD50: addu        $s0, $v0, $s4
    ctx->r16 = ADD32(ctx->r2, ctx->r20);
    // 0x8007AD54: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8007AD58: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x8007AD5C: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8007AD60: beq         $v0, $zero, L_8007AD80
    if (ctx->r2 == 0) {
        // 0x8007AD64: nop
    
            goto L_8007AD80;
    }
    // 0x8007AD64: nop

    // 0x8007AD68: jal         0x800A3450
    // 0x8007AD6C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8007AD6C: nop

    after_1:
    // 0x8007AD70: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x8007AD74: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AD78: j           L_8007AD94
    // 0x8007AD7C: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
        goto L_8007AD94;
    // 0x8007AD7C: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
L_8007AD80:
    // 0x8007AD80: jal         0x800A3450
    // 0x8007AD84: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8007AD84: nop

    after_2:
    // 0x8007AD88: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x8007AD8C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AD90: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
L_8007AD94:
    // 0x8007AD94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007AD98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8007AD9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8007ADA0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8007ADA4: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8007ADA8: bne         $v0, $zero, L_8007AD48
    if (ctx->r2 != 0) {
        // 0x8007ADAC: sh          $v1, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r3;
            goto L_8007AD48;
    }
    // 0x8007ADAC: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    // 0x8007ADB0: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    // 0x8007ADB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8007ADB8: jal         0x8002A2F8
    // 0x8007ADBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8007ADBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8007ADC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007ADC4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_8007ADC8:
    // 0x8007ADC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007ADCC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8007ADD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8007ADD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8007ADD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007ADDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007ADE0: jr          $ra
    // 0x8007ADE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007ADE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003A7CC_15BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A7CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003A7D0: lhu         $v0, 0x49AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AC);
    // 0x8003A7D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003A7D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003A7DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003A7E0: bne         $v0, $zero, L_8003A874
    if (ctx->r2 != 0) {
        // 0x8003A7E4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8003A874;
    }
    // 0x8003A7E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003A7E8: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x8003A7EC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8003A7F0: addiu       $s0, $s0, -0x4890
    ctx->r16 = ADD32(ctx->r16, -0X4890);
    // 0x8003A7F4: addiu       $s0, $s0, -0x5AC
    ctx->r16 = ADD32(ctx->r16, -0X5AC);
L_8003A7F8:
    // 0x8003A7F8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8003A7FC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8003A800: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003A804: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A808: beq         $v0, $zero, L_8003A818
    if (ctx->r2 == 0) {
        // 0x8003A80C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_8003A818;
    }
    // 0x8003A80C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8003A810: jal         0x8003A2EC
    // 0x8003A814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003A2EC_156EC(rdram, ctx);
        goto after_0;
    // 0x8003A814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_8003A818:
    // 0x8003A818: bne         $s1, $zero, L_8003A7F8
    if (ctx->r17 != 0) {
        // 0x8003A81C: addiu       $s0, $s0, -0x5AC
        ctx->r16 = ADD32(ctx->r16, -0X5AC);
            goto L_8003A7F8;
    }
    // 0x8003A81C: addiu       $s0, $s0, -0x5AC
    ctx->r16 = ADD32(ctx->r16, -0X5AC);
    // 0x8003A820: addiu       $s1, $zero, 0x12
    ctx->r17 = ADD32(0, 0X12);
    // 0x8003A824: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003A828: addiu       $s0, $s0, 0x3FF0
    ctx->r16 = ADD32(ctx->r16, 0X3FF0);
    // 0x8003A82C: addiu       $s0, $s0, -0x3C8
    ctx->r16 = ADD32(ctx->r16, -0X3C8);
L_8003A830:
    // 0x8003A830: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8003A834: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8003A838: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003A83C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A840: beq         $v0, $zero, L_8003A850
    if (ctx->r2 == 0) {
        // 0x8003A844: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_8003A850;
    }
    // 0x8003A844: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8003A848: jal         0x8003A2EC
    // 0x8003A84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003A2EC_156EC(rdram, ctx);
        goto after_1;
    // 0x8003A84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8003A850:
    // 0x8003A850: bnel        $s1, $zero, L_8003A830
    if (ctx->r17 != 0) {
        // 0x8003A854: addiu       $s0, $s0, -0x3C8
        ctx->r16 = ADD32(ctx->r16, -0X3C8);
            goto L_8003A830;
    }
    goto skip_0;
    // 0x8003A854: addiu       $s0, $s0, -0x3C8
    ctx->r16 = ADD32(ctx->r16, -0X3C8);
    skip_0:
    // 0x8003A858: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003A85C: addiu       $a0, $a0, -0x3C44
    ctx->r4 = ADD32(ctx->r4, -0X3C44);
    // 0x8003A860: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003A864: beq         $v0, $zero, L_8003A874
    if (ctx->r2 == 0) {
        // 0x8003A868: addiu       $a0, $a0, -0x1C
        ctx->r4 = ADD32(ctx->r4, -0X1C);
            goto L_8003A874;
    }
    // 0x8003A868: addiu       $a0, $a0, -0x1C
    ctx->r4 = ADD32(ctx->r4, -0X1C);
    // 0x8003A86C: jal         0x8009A2B0
    // 0x8003A870: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x8003A870: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
L_8003A874:
    // 0x8003A874: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003A878: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003A87C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003A880: jr          $ra
    // 0x8003A884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003A884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80077420_52820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077424: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80077428: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8007742C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80077430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80077434: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077438: lw          $v0, -0x3368($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3368);
    // 0x8007743C: jalr        $v0
    // 0x80077440: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80077440: nop

    after_0:
    // 0x80077444: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80077448: jr          $ra
    // 0x8007744C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007744C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007AB64_55F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007AB64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AB68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007AB6C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007AB70: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x8007AB74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8007AB78: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007AB7C: mflo        $v0
    ctx->r2 = lo;
    // 0x8007AB80: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x8007AB84: lh          $v1, 0x2($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2);
    // 0x8007AB88: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8007AB8C: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007AB90: mflo        $a2
    ctx->r6 = lo;
    // 0x8007AB94: lh          $a0, 0x4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4);
    // 0x8007AB98: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8007AB9C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8007ABA0: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007ABA4: mflo        $a0
    ctx->r4 = lo;
    // 0x8007ABA8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8007ABAC: nop

    // 0x8007ABB0: jal         0x80032424
    // 0x8007ABB4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8007ABB4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8007ABB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007ABBC: jr          $ra
    // 0x8007ABC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007ABC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80026810_1C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026810: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026814: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x80026818: jr          $ra
    // 0x8002681C: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8002681C: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_800875CC_629CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800875CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800875D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800875D4: jal         0x80095210
    // 0x800875D8: nop

    osFlashAllErase_recomp(rdram, ctx);
        goto after_0;
    // 0x800875D8: nop

    after_0:
    // 0x800875DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800875E0: jr          $ra
    // 0x800875E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800875E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80060790_3BB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060790: jr          $ra
    // 0x80060794: nop

    TRACE_RETURN()
    return;
    // 0x80060794: nop

;}
RECOMP_FUNC void func_80089EE4_652E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089EE4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089EE8: lw          $v0, 0x2BE8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BE8);
    // 0x80089EEC: bne         $v0, $zero, L_80089F14
    if (ctx->r2 != 0) {
        // 0x80089EF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80089F14;
    }
    // 0x80089EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80089EF4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089EF8: sb          $a0, 0x2BE0($at)
    MEM_B(0X2BE0, ctx->r1) = ctx->r4;
    // 0x80089EFC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089F00: sh          $a1, 0x2BE2($at)
    MEM_H(0X2BE2, ctx->r1) = ctx->r5;
    // 0x80089F04: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089F08: sh          $a2, 0x2BE4($at)
    MEM_H(0X2BE4, ctx->r1) = ctx->r6;
    // 0x80089F0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80089F10: sb          $v0, -0x14D0($at)
    MEM_B(-0X14D0, ctx->r1) = ctx->r2;
L_80089F14:
    // 0x80089F14: jr          $ra
    // 0x80089F18: nop

    TRACE_RETURN()
    return;
    // 0x80089F18: nop

;}
RECOMP_FUNC void func_80063CEC_3F0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063CEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80063CF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80063CF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80063CF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80063CFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80063D00: jal         0x8004A44C
    // 0x80063D04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004A44C_2584C(rdram, ctx);
        goto after_0;
    // 0x80063D04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80063D08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80063D0C: jal         0x8004A508
    // 0x80063D10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8004A508_25908(rdram, ctx);
        goto after_1;
    // 0x80063D10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80063D14: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x80063D18: bne         $s0, $zero, L_80063D48
    if (ctx->r16 != 0) {
        // 0x80063D1C: andi        $v0, $v0, 0xFF
        ctx->r2 = ctx->r2 & 0XFF;
            goto L_80063D48;
    }
    // 0x80063D1C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80063D20: bne         $v0, $zero, L_80063D38
    if (ctx->r2 != 0) {
        // 0x80063D24: nop
    
            goto L_80063D38;
    }
    // 0x80063D24: nop

    // 0x80063D28: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80063D2C: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80063D30: j           L_80063D6C
    // 0x80063D34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80063D6C;
    // 0x80063D34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80063D38:
    // 0x80063D38: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80063D3C: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80063D40: j           L_80063D6C
    // 0x80063D44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80063D6C;
    // 0x80063D44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80063D48:
    // 0x80063D48: bne         $v0, $zero, L_80063D60
    if (ctx->r2 != 0) {
        // 0x80063D4C: nop
    
            goto L_80063D60;
    }
    // 0x80063D4C: nop

    // 0x80063D50: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80063D54: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    // 0x80063D58: j           L_80063D6C
    // 0x80063D5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80063D6C;
    // 0x80063D5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80063D60:
    // 0x80063D60: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80063D64: lbu         $a0, 0x4($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X4);
    // 0x80063D68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80063D6C:
    // 0x80063D6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80063D70: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80063D74: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80063D78: bne         $v1, $v0, L_80063D90
    if (ctx->r3 != ctx->r2) {
        // 0x80063D7C: nop
    
            goto L_80063D90;
    }
    // 0x80063D7C: nop

    // 0x80063D80: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80063D84: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80063D88: j           L_80063DEC
    // 0x80063D8C: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
        goto L_80063DEC;
    // 0x80063D8C: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
L_80063D90:
    // 0x80063D90: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x80063D94: beq         $a1, $zero, L_80063DC8
    if (ctx->r5 == 0) {
        // 0x80063D98: sh          $a0, 0xC2($s1)
        MEM_H(0XC2, ctx->r17) = ctx->r4;
            goto L_80063DC8;
    }
    // 0x80063D98: sh          $a0, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r4;
    // 0x80063D9C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80063DA0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80063DA4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80063DA8: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80063DAC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80063DB0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80063DB4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80063DB8: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80063DBC: sw          $v1, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r3;
    // 0x80063DC0: j           L_80063DE0
    // 0x80063DC4: sw          $v1, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r3;
        goto L_80063DE0;
    // 0x80063DC4: sw          $v1, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r3;
L_80063DC8:
    // 0x80063DC8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80063DCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80063DD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063DD4: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x80063DD8: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80063DDC: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
L_80063DE0:
    // 0x80063DE0: sb          $zero, 0x3E($s1)
    MEM_B(0X3E, ctx->r17) = 0;
    // 0x80063DE4: sb          $zero, 0x3C($s1)
    MEM_B(0X3C, ctx->r17) = 0;
    // 0x80063DE8: sb          $zero, 0x72($s1)
    MEM_B(0X72, ctx->r17) = 0;
L_80063DEC:
    // 0x80063DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063DF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80063DF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80063DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80063DFC: jr          $ra
    // 0x80063E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80063E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
