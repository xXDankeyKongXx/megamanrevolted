#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225A68_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A78: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A7C: bne         $v0, $zero, L_80225AD8
    if (ctx->r2 != 0) {
        // 0x80225A80: nop
    
            goto L_80225AD8;
    }
    // 0x80225A80: nop

    // 0x80225A84: jal         0x80226BEC
    // 0x80225A88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225A88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x80225A8C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225A90: jal         0x8003E87C
    // 0x80225A94: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_1;
    // 0x80225A94: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    after_1:
    // 0x80225A98: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225A9C: bne         $v0, $v1, L_80225AA8
    if (ctx->r2 != ctx->r3) {
        // 0x80225AA0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225AA8;
    }
    // 0x80225AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225AA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80225AA8:
    // 0x80225AA8: jal         0x80226D28
    // 0x80225AAC: nop

    func_80226D28_ovl5(rdram, ctx);
        goto after_2;
    // 0x80225AAC: nop

    after_2:
    // 0x80225AB0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225AB4: jal         0x8003E87C
    // 0x80225AB8: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_3;
    // 0x80225AB8: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    after_3:
    // 0x80225ABC: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225AC0: beq         $v0, $v1, L_80225AD4
    if (ctx->r2 == ctx->r3) {
        // 0x80225AC4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225AD4;
    }
    // 0x80225AC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225AC8: jal         0x80226D28
    // 0x80225ACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D28_ovl5(rdram, ctx);
        goto after_4;
    // 0x80225ACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x80225AD0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225AD4:
    // 0x80225AD4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225AD8:
    // 0x80225AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225ADC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225AE0: jr          $ra
    // 0x80225AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802403D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802403D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802403D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802403DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802403E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802403E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802403E8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802403EC: beq         $v1, $zero, L_80240408
    if (ctx->r3 == 0) {
        // 0x802403F0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80240408;
    }
    // 0x802403F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802403F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802403F8: beq         $v1, $v0, L_802404A4
    if (ctx->r3 == ctx->r2) {
        // 0x802403FC: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_802404A4;
    }
    // 0x802403FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80240400: j           L_80240524
    // 0x80240404: nop

        goto L_80240524;
    // 0x80240404: nop

L_80240408:
    // 0x80240408: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8024040C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80240410: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80240414: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240418: addiu       $v0, $zero, 0x870
    ctx->r2 = ADD32(0, 0X870);
    // 0x8024041C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80240420: addiu       $v0, $zero, -0x610
    ctx->r2 = ADD32(0, -0X610);
    // 0x80240424: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80240428: addiu       $v0, $zero, -0x328
    ctx->r2 = ADD32(0, -0X328);
    // 0x8024042C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80240430: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80240434: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80240438: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8024043C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80240440: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80240444: jal         0x8009A3B4
    // 0x80240448: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240448: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8024044C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240450: jal         0x8004D5D4
    // 0x80240454: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80240454: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80240458: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8024045C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80240460: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80240464: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80240468: addiu       $v0, $v0, 0x6DAC
    ctx->r2 = ADD32(ctx->r2, 0X6DAC);
    // 0x8024046C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80240470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240474: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80240478: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8024047C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80240480: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80240484: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x80240488: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8024048C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x80240490: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80240494: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80240498: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024049C: j           L_80240524
    // 0x802404A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80240524;
    // 0x802404A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802404A4:
    // 0x802404A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802404A8: jal         0x8009A3B4
    // 0x802404AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802404AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802404B0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802404B4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802404B8: jal         0x8009A3B4
    // 0x802404BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802404BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x802404C0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802404C4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802404C8: jal         0x8009A3B4
    // 0x802404CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802404CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802404D0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802404D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802404D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802404DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802404E0: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x802404E4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x802404E8: addiu       $v0, $v0, -0x610
    ctx->r2 = ADD32(ctx->r2, -0X610);
    // 0x802404EC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802404F0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802404F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802404F8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802404FC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80240500: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80240504: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80240508: bne         $v0, $zero, L_80240524
    if (ctx->r2 != 0) {
        // 0x8024050C: nop
    
            goto L_80240524;
    }
    // 0x8024050C: nop

    // 0x80240510: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80240514: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80240518: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024051C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240520: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80240524:
    // 0x80240524: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80240528: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8024052C: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80240530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240534: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240538: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024053C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80240540: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80240544: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80240548: jal         0x80240C2C
    // 0x8024054C: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_80240C2C_ovl5(rdram, ctx);
        goto after_5;
    // 0x8024054C: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_5:
    // 0x80240550: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80240554: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80240558: jal         0x8009A3B4
    // 0x8024055C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8024055C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80240560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240564: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x80240568: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8024056C: jal         0x8003B564
    // 0x80240570: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80240570: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80240574: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80240578: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024057C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240580: jr          $ra
    // 0x80240584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BA70_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BA78: jal         0x8006033C
    // 0x8022BA7C: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022BA7C: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    after_0:
    // 0x8022BA80: bne         $v0, $zero, L_8022BAAC
    if (ctx->r2 != 0) {
        // 0x8022BA84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022BAAC;
    }
    // 0x8022BA84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022BA88: jal         0x8006033C
    // 0x8022BA8C: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022BA8C: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    after_1:
    // 0x8022BA90: bne         $v0, $zero, L_8022BAAC
    if (ctx->r2 != 0) {
        // 0x8022BA94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BAAC;
    }
    // 0x8022BA94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BA98: jal         0x8006033C
    // 0x8022BA9C: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022BA9C: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_2:
    // 0x8022BAA0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022BAA4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022BAA8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_8022BAAC:
    // 0x8022BAAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAB0: jr          $ra
    // 0x8022BAB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A710_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A710: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022A714: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x8022A718: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022A71C: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x8022A720: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8022A724: beq         $v0, $zero, L_8022A80C
    if (ctx->r2 == 0) {
        // 0x8022A728: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A80C;
    }
    // 0x8022A728: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A72C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A730: addu        $at, $at, $v0
    gpr jr_addend_8022A738 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A734: lw          $v0, 0x7008($at)
    ctx->r2 = ADD32(ctx->r1, 0X7008);
    // 0x8022A738: jr          $v0
    // 0x8022A73C: nop

    switch (jr_addend_8022A738 >> 2) {
        case 0: goto L_8022A740; break;
        case 1: goto L_8022A750; break;
        case 2: goto L_8022A76C; break;
        case 3: goto L_8022A788; break;
        case 4: goto L_8022A7C0; break;
        case 5: goto L_8022A7EC; break;
        case 6: goto L_8022A80C; break;
        default: switch_error(__func__, 0x8022A738, 0x80247008);
    }
    // 0x8022A73C: nop

L_8022A740:
    // 0x8022A740: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x8022A744: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x8022A748: j           L_8022A804
    // 0x8022A74C: sb          $v1, 0x448($a1)
    MEM_B(0X448, ctx->r5) = ctx->r3;
        goto L_8022A804;
    // 0x8022A74C: sb          $v1, 0x448($a1)
    MEM_B(0X448, ctx->r5) = ctx->r3;
L_8022A750:
    // 0x8022A750: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8022A754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A758: bne         $v1, $v0, L_8022A80C
    if (ctx->r3 != ctx->r2) {
        // 0x8022A75C: nop
    
            goto L_8022A80C;
    }
    // 0x8022A75C: nop

    // 0x8022A760: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x8022A764: j           L_8022A808
    // 0x8022A768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A808;
    // 0x8022A768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A76C:
    // 0x8022A76C: lbu         $v1, 0xD($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XD);
    // 0x8022A770: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A774: sb          $v0, 0x448($a1)
    MEM_B(0X448, ctx->r5) = ctx->r2;
    // 0x8022A778: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022A77C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A780: j           L_8022A80C
    // 0x8022A784: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_8022A80C;
    // 0x8022A784: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_8022A788:
    // 0x8022A788: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x8022A78C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A790: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x8022A794: lw          $v0, 0x430($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X430);
    // 0x8022A798: lb          $a0, 0xE($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XE);
    // 0x8022A79C: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x8022A7A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A7A4: sw          $v0, 0x430($a1)
    MEM_W(0X430, ctx->r5) = ctx->r2;
    // 0x8022A7A8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A7AC: bne         $a0, $v0, L_8022A80C
    if (ctx->r4 != ctx->r2) {
        // 0x8022A7B0: nop
    
            goto L_8022A80C;
    }
    // 0x8022A7B0: nop

    // 0x8022A7B4: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x8022A7B8: j           L_8022A808
    // 0x8022A7BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A808;
    // 0x8022A7BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A7C0:
    // 0x8022A7C0: lw          $v1, 0x428($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X428);
    // 0x8022A7C4: lbu         $a0, 0xD($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XD);
    // 0x8022A7C8: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x8022A7CC: sh          $v0, 0x442($a1)
    MEM_H(0X442, ctx->r5) = ctx->r2;
    // 0x8022A7D0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022A7D4: sb          $v0, 0x448($a1)
    MEM_B(0X448, ctx->r5) = ctx->r2;
    // 0x8022A7D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022A7DC: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
    // 0x8022A7E0: sw          $v1, 0x428($a1)
    MEM_W(0X428, ctx->r5) = ctx->r3;
    // 0x8022A7E4: j           L_8022A80C
    // 0x8022A7E8: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
        goto L_8022A80C;
    // 0x8022A7E8: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
L_8022A7EC:
    // 0x8022A7EC: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8022A7F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A7F4: bne         $v1, $v0, L_8022A80C
    if (ctx->r3 != ctx->r2) {
        // 0x8022A7F8: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_8022A80C;
    }
    // 0x8022A7F8: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x8022A7FC: lbu         $v0, 0xD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD);
    // 0x8022A800: sh          $v1, 0x442($a1)
    MEM_H(0X442, ctx->r5) = ctx->r3;
L_8022A804:
    // 0x8022A804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A808:
    // 0x8022A808: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_8022A80C:
    // 0x8022A80C: jr          $ra
    // 0x8022A810: nop

    TRACE_RETURN()
    return;
    // 0x8022A810: nop

;}
RECOMP_FUNC void func_8022DAFC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DB00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DB04: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DB08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DB10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DB14: lw          $v0, 0x5AD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5AD8);
    // 0x8022DB18: jalr        $v0
    // 0x8022DB1C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DB1C: nop

    after_0:
    // 0x8022DB20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DB24: jr          $ra
    // 0x8022DB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BC0C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BC10: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022BC14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BC18: bne         $v0, $zero, L_8022BC2C
    if (ctx->r2 != 0) {
        // 0x8022BC1C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022BC2C;
    }
    // 0x8022BC1C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BC20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC24: jal         0x800600F8
    // 0x8022BC28: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x8022BC28: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    after_0:
L_8022BC2C:
    // 0x8022BC2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC30: jr          $ra
    // 0x8022BC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240958_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240958: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8024095C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80240960: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80240964: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80240968: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8024096C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80240970: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80240974: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80240978: lui         $s0, 0xFF
    ctx->r16 = S32(0XFF << 16);
    // 0x8024097C: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x80240980: and         $a0, $v1, $s0
    ctx->r4 = ctx->r3 & ctx->r16;
    // 0x80240984: beq         $a0, $zero, L_802409FC
    if (ctx->r4 == 0) {
        // 0x80240988: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_802409FC;
    }
    // 0x80240988: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8024098C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80240990: beq         $v0, $zero, L_802409FC
    if (ctx->r2 == 0) {
        // 0x80240994: nop
    
            goto L_802409FC;
    }
    // 0x80240994: nop

    // 0x80240998: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8024099C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802409A0: beql        $v0, $zero, L_802409F4
    if (ctx->r2 == 0) {
        // 0x802409A4: addiu       $a0, $zero, 0x9B
        ctx->r4 = ADD32(0, 0X9B);
            goto L_802409F4;
    }
    goto skip_0;
    // 0x802409A4: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    skip_0:
    // 0x802409A8: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802409AC: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x802409B0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802409B4: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x802409B8: bgtz        $v0, L_802409E0
    if (SIGNED(ctx->r2) > 0) {
        // 0x802409BC: sw          $v0, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r2;
            goto L_802409E0;
    }
    // 0x802409BC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x802409C0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802409C4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x802409C8: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802409CC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x802409D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802409D4: sb          $zero, 0xC($s2)
    MEM_B(0XC, ctx->r18) = 0;
    // 0x802409D8: jal         0x80060D38
    // 0x802409DC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    func_80060D38_3C138(rdram, ctx);
        goto after_0;
    // 0x802409DC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    after_0:
L_802409E0:
    // 0x802409E0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802409E4: jal         0x8002A33C
    // 0x802409E8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802409E8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_1:
    // 0x802409EC: j           L_802409FC
    // 0x802409F0: sw          $s0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r16;
        goto L_802409FC;
    // 0x802409F0: sw          $s0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r16;
L_802409F4:
    // 0x802409F4: jal         0x8002A33C
    // 0x802409F8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802409F8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
L_802409FC:
    // 0x802409FC: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x80240A00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240A04: beq         $v1, $v0, L_80240A24
    if (ctx->r3 == ctx->r2) {
        // 0x80240A08: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80240A24;
    }
    // 0x80240A08: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80240A0C: bne         $v0, $zero, L_80240C10
    if (ctx->r2 != 0) {
        // 0x80240A10: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80240C10;
    }
    // 0x80240A10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240A14: beq         $v1, $v0, L_80240B78
    if (ctx->r3 == ctx->r2) {
        // 0x80240A18: nop
    
            goto L_80240B78;
    }
    // 0x80240A18: nop

    // 0x80240A1C: j           L_80240C10
    // 0x80240A20: nop

        goto L_80240C10;
    // 0x80240A20: nop

L_80240A24:
    // 0x80240A24: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80240A28: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x80240A2C: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x80240A30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240A34: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80240A38: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240A3C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80240A40: mfhi        $t0
    ctx->r8 = hi;
    // 0x80240A44: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80240A48: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80240A4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80240A50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240A54: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80240A58: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80240A5C: bne         $a0, $zero, L_80240B48
    if (ctx->r4 != 0) {
        // 0x80240A60: nop
    
            goto L_80240B48;
    }
    // 0x80240A60: nop

    // 0x80240A64: jal         0x8004F144
    // 0x80240A68: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80240A68: nop

    after_3:
    // 0x80240A6C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80240A70: beq         $s0, $zero, L_80240B48
    if (ctx->r16 == 0) {
        // 0x80240A74: nop
    
            goto L_80240B48;
    }
    // 0x80240A74: nop

    // 0x80240A78: jal         0x800A3450
    // 0x80240A7C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80240A7C: nop

    after_4:
    // 0x80240A80: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80240A84: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80240A88: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80240A8C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80240A90: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x80240A94: addiu       $v1, $zero, 0x41
    ctx->r3 = ADD32(0, 0X41);
    // 0x80240A98: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x80240A9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80240AA0: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80240AA4: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x80240AA8: addiu       $a2, $zero, -0x2000
    ctx->r6 = ADD32(0, -0X2000);
    // 0x80240AAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80240AB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80240AB4: jal         0x8004DC2C
    // 0x80240AB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_5;
    // 0x80240AB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80240ABC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80240AC0: jal         0x8004DD04
    // 0x80240AC4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x80240AC4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x80240AC8: andi        $v0, $s1, 0x1
    ctx->r2 = ctx->r17 & 0X1;
    // 0x80240ACC: bne         $v0, $zero, L_80240AE8
    if (ctx->r2 != 0) {
        // 0x80240AD0: addu        $s3, $s1, $zero
        ctx->r19 = ADD32(ctx->r17, 0);
            goto L_80240AE8;
    }
    // 0x80240AD0: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x80240AD4: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80240AD8: srl         $v0, $s1, 2
    ctx->r2 = S32(U32(ctx->r17) >> 2);
    // 0x80240ADC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80240AE0: j           L_80240AF8
    // 0x80240AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_80240AF8;
    // 0x80240AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80240AE8:
    // 0x80240AE8: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80240AEC: srl         $v0, $s1, 2
    ctx->r2 = S32(U32(ctx->r17) >> 2);
    // 0x80240AF0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80240AF4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_80240AF8:
    // 0x80240AF8: sh          $v1, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r3;
    // 0x80240AFC: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80240B00: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80240B04: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x80240B08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80240B0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240B10: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x80240B14: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x80240B18: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80240B1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240B20: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80240B24: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80240B28: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80240B2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240B30: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    // 0x80240B34: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x80240B38: srl         $v0, $s3, 8
    ctx->r2 = S32(U32(ctx->r19) >> 8);
    // 0x80240B3C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80240B40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240B44: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
L_80240B48:
    // 0x80240B48: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80240B4C: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x80240B50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240B54: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    // 0x80240B58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240B5C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80240B60: bne         $v0, $v1, L_80240C10
    if (ctx->r2 != ctx->r3) {
        // 0x80240B64: nop
    
            goto L_80240C10;
    }
    // 0x80240B64: nop

    // 0x80240B68: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80240B6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240B70: j           L_80240C10
    // 0x80240B74: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80240C10;
    // 0x80240B74: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80240B78:
    // 0x80240B78: jal         0x8004F144
    // 0x80240B7C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x80240B7C: nop

    after_7:
    // 0x80240B80: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80240B84: beq         $s0, $zero, L_80240C10
    if (ctx->r16 == 0) {
        // 0x80240B88: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80240C10;
    }
    // 0x80240B88: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80240B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240B90: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80240B94: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80240B98: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80240B9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240BA0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80240BA4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80240BA8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80240BAC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80240BB0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80240BB4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80240BB8: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80240BBC: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x80240BC0: addiu       $a2, $zero, -0x2000
    ctx->r6 = ADD32(0, -0X2000);
    // 0x80240BC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80240BC8: jal         0x8004DC2C
    // 0x80240BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_8;
    // 0x80240BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x80240BD0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80240BD4: jal         0x8004DD04
    // 0x80240BD8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80240BD8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_9:
    // 0x80240BDC: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x80240BE0: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80240BE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240BE8: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80240BEC: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80240BF0: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80240BF4: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80240BF8: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80240BFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240C00: jal         0x800A3450
    // 0x80240C04: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x80240C04: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    after_10:
    // 0x80240C08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80240C0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80240C10:
    // 0x80240C10: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80240C14: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80240C18: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80240C1C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80240C20: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80240C24: jr          $ra
    // 0x80240C28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80240C28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8023BA50_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023BA54: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023BA58: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023BA5C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023BA60: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023BA64: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023BA68: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023BA6C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023BA70: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023BA74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BA78: jal         0x8023BED8
    // 0x8023BA7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023BED8_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023BA7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023BA80: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023BA84: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8023BA88: addiu       $s6, $s6, 0x7528
    ctx->r22 = ADD32(ctx->r22, 0X7528);
    // 0x8023BA8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BA90: sltiu       $s7, $v0, 0x1
    ctx->r23 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023BA94: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x8023BA98: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8023BA9C:
    // 0x8023BA9C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023BAA0: lhu         $v1, 0x7520($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7520);
    // 0x8023BAA4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8023BAA8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BAAC: srav        $v1, $v1, $a0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r4 & 31));
    // 0x8023BAB0: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023BAB4: beq         $v1, $zero, L_8023BCC8
    if (ctx->r3 == 0) {
        // 0x8023BAB8: addiu       $v0, $s2, 0x1
        ctx->r2 = ADD32(ctx->r18, 0X1);
            goto L_8023BCC8;
    }
    // 0x8023BAB8: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8023BABC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8023BAC0: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8023BAC4: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x8023BAC8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023BACC: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8023BAD0: bne         $v1, $v0, L_8023BC20
    if (ctx->r3 != ctx->r2) {
        // 0x8023BAD4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8023BC20;
    }
    // 0x8023BAD4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8023BAD8: lb          $v0, 0xF($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XF);
    // 0x8023BADC: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x8023BAE0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023BAE4: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x8023BAE8: beq         $v0, $zero, L_8023BB10
    if (ctx->r2 == 0) {
        // 0x8023BAEC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8023BB10;
    }
    // 0x8023BAEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BAF0: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8023BAF4: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x8023BAF8: j           L_8023BB1C
    // 0x8023BAFC: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
        goto L_8023BB1C;
    // 0x8023BAFC: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_8023BB00:
    // 0x8023BB00: jal         0x8023BDCC
    // 0x8023BB04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023BDCC_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023BB04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023BB08: j           L_8023BBA4
    // 0x8023BB0C: nop

        goto L_8023BBA4;
    // 0x8023BB0C: nop

L_8023BB10:
    // 0x8023BB10: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8023BB14: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023BB18: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
L_8023BB1C:
    // 0x8023BB1C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8023BB20: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023BB24: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8023BB28: beq         $v0, $zero, L_8023BBA8
    if (ctx->r2 == 0) {
        // 0x8023BB2C: andi        $v0, $v1, 0xFD
        ctx->r2 = ctx->r3 & 0XFD;
            goto L_8023BBA8;
    }
    // 0x8023BB2C: andi        $v0, $v1, 0xFD
    ctx->r2 = ctx->r3 & 0XFD;
    // 0x8023BB30: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023BB34: lbu         $v0, 0x43($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X43);
    // 0x8023BB38: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8023BB3C: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8023BB40: beq         $v0, $zero, L_8023BB68
    if (ctx->r2 == 0) {
        // 0x8023BB44: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8023BB68;
    }
    // 0x8023BB44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023BB48: lhu         $v0, 0x6($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6);
    // 0x8023BB4C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023BB50: beq         $v0, $zero, L_8023BB6C
    if (ctx->r2 == 0) {
        // 0x8023BB54: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8023BB6C;
    }
    // 0x8023BB54: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023BB58: jal         0x8006033C
    // 0x8023BB5C: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023BB5C: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    after_2:
    // 0x8023BB60: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023BB64: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_8023BB68:
    // 0x8023BB68: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8023BB6C:
    // 0x8023BB6C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023BB70: lhu         $a0, 0x7520($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7520);
    // 0x8023BB74: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8023BB78:
    // 0x8023BB78: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BB7C: srav        $v0, $a0, $a1
    ctx->r2 = S32(SIGNED(ctx->r4) >> (ctx->r5 & 31));
    // 0x8023BB80: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023BB84: beq         $v0, $zero, L_8023BB00
    if (ctx->r2 == 0) {
        // 0x8023BB88: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023BB00;
    }
    // 0x8023BB88: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023BB8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023BB90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BB94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BB98: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x8023BB9C: bne         $v0, $zero, L_8023BB78
    if (ctx->r2 != 0) {
        // 0x8023BBA0: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8023BB78;
    }
    // 0x8023BBA0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8023BBA4:
    // 0x8023BBA4: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
L_8023BBA8:
    // 0x8023BBA8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8023BBAC: beq         $v0, $zero, L_8023BBE8
    if (ctx->r2 == 0) {
        // 0x8023BBB0: andi        $v0, $v1, 0xF7
        ctx->r2 = ctx->r3 & 0XF7;
            goto L_8023BBE8;
    }
    // 0x8023BBB0: andi        $v0, $v1, 0xF7
    ctx->r2 = ctx->r3 & 0XF7;
    // 0x8023BBB4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023BBB8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8023BBBC: beq         $v0, $zero, L_8023BBE8
    if (ctx->r2 == 0) {
        // 0x8023BBC0: nop
    
            goto L_8023BBE8;
    }
    // 0x8023BBC0: nop

    // 0x8023BBC4: sb          $s4, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r20;
    // 0x8023BBC8: lw          $v0, 0x328($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X328);
    // 0x8023BBCC: addiu       $s1, $v0, 0x328
    ctx->r17 = ADD32(ctx->r2, 0X328);
    // 0x8023BBD0: and         $v0, $s1, $s5
    ctx->r2 = ctx->r17 & ctx->r21;
    // 0x8023BBD4: bne         $v0, $zero, L_8023BBE4
    if (ctx->r2 != 0) {
        // 0x8023BBD8: sw          $zero, 0x328($s0)
        MEM_W(0X328, ctx->r16) = 0;
            goto L_8023BBE4;
    }
    // 0x8023BBD8: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x8023BBDC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023BBE0: lw          $s1, 0x7544($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X7544);
L_8023BBE4:
    // 0x8023BBE4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8023BBE8:
    // 0x8023BBE8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023BBEC: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8023BBF0: beq         $v0, $zero, L_8023BC20
    if (ctx->r2 == 0) {
        // 0x8023BBF4: andi        $v0, $v1, 0xFB
        ctx->r2 = ctx->r3 & 0XFB;
            goto L_8023BC20;
    }
    // 0x8023BBF4: andi        $v0, $v1, 0xFB
    ctx->r2 = ctx->r3 & 0XFB;
    // 0x8023BBF8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023BBFC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8023BC00: beq         $v1, $zero, L_8023BC0C
    if (ctx->r3 == 0) {
        // 0x8023BC04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BC0C;
    }
    // 0x8023BC04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BC08: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8023BC0C:
    // 0x8023BC0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BC10: lbu         $v0, 0x7523($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7523);
    // 0x8023BC14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BC18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BC1C: sb          $v0, 0x7523($at)
    MEM_B(0X7523, ctx->r1) = ctx->r2;
L_8023BC20:
    // 0x8023BC20: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023BC24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023BC28: beq         $v0, $zero, L_8023BCC8
    if (ctx->r2 == 0) {
        // 0x8023BC2C: addiu       $v0, $s2, 0x1
        ctx->r2 = ADD32(ctx->r18, 0X1);
            goto L_8023BCC8;
    }
    // 0x8023BC2C: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8023BC30: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8023BC34: beq         $v0, $zero, L_8023BCC8
    if (ctx->r2 == 0) {
        // 0x8023BC38: addiu       $v0, $s2, 0x1
        ctx->r2 = ADD32(ctx->r18, 0X1);
            goto L_8023BCC8;
    }
    // 0x8023BC38: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8023BC3C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8023BC40: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8023BC44: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8023BC48: addiu       $s1, $v0, 0x328
    ctx->r17 = ADD32(ctx->r2, 0X328);
    // 0x8023BC4C: and         $v0, $s1, $s5
    ctx->r2 = ctx->r17 & ctx->r21;
    // 0x8023BC50: bnel        $v0, $zero, L_8023BC64
    if (ctx->r2 != 0) {
        // 0x8023BC54: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8023BC64;
    }
    goto skip_0;
    // 0x8023BC54: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x8023BC58: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023BC5C: lw          $s1, 0x7544($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X7544);
    // 0x8023BC60: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8023BC64:
    // 0x8023BC64: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023BC68: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023BC6C: bne         $v1, $v0, L_8023BC8C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC70: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8023BC8C;
    }
    // 0x8023BC70: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8023BC74: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BC78: lbu         $v0, 0x7522($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7522);
    // 0x8023BC7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BC80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BC84: sb          $v0, 0x7522($at)
    MEM_B(0X7522, ctx->r1) = ctx->r2;
    // 0x8023BC88: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8023BC8C:
    // 0x8023BC8C: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BC90: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8023BC94: bne         $v0, $zero, L_8023BCA8
    if (ctx->r2 != 0) {
        // 0x8023BC98: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_8023BCA8;
    }
    // 0x8023BC98: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8023BC9C: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8023BCA0: jal         0x8004F418
    // 0x8023BCA4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8023BCA4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_3:
L_8023BCA8:
    // 0x8023BCA8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023BCAC: lhu         $v1, 0x7520($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X7520);
    // 0x8023BCB0: sllv        $v0, $s4, $s0
    ctx->r2 = S32(ctx->r20 << (ctx->r16 & 31));
    // 0x8023BCB4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8023BCB8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023BCBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BCC0: sh          $v1, 0x7520($at)
    MEM_H(0X7520, ctx->r1) = ctx->r3;
    // 0x8023BCC4: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
L_8023BCC8:
    // 0x8023BCC8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023BCCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BCD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BCD4: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x8023BCD8: bne         $v0, $zero, L_8023BA9C
    if (ctx->r2 != 0) {
        // 0x8023BCDC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BA9C;
    }
    // 0x8023BCDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BCE0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023BCE4: lbu         $v1, 0x7522($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7522);
    // 0x8023BCE8: bne         $v1, $v0, L_8023BD0C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BCEC: nop
    
            goto L_8023BD0C;
    }
    // 0x8023BCEC: nop

    // 0x8023BCF0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BCF4: lbu         $v0, 0x7523($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7523);
    // 0x8023BCF8: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8023BCFC: beq         $v0, $zero, L_8023BD0C
    if (ctx->r2 == 0) {
        // 0x8023BD00: nop
    
            goto L_8023BD0C;
    }
    // 0x8023BD00: nop

    // 0x8023BD04: jal         0x8006036C
    // 0x8023BD08: addiu       $a0, $zero, 0x627
    ctx->r4 = ADD32(0, 0X627);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023BD08: addiu       $a0, $zero, 0x627
    ctx->r4 = ADD32(0, 0X627);
    after_4:
L_8023BD0C:
    // 0x8023BD0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BD10: lhu         $v0, 0x7520($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7520);
    // 0x8023BD14: bne         $v0, $zero, L_8023BD2C
    if (ctx->r2 != 0) {
        // 0x8023BD18: nop
    
            goto L_8023BD2C;
    }
    // 0x8023BD18: nop

    // 0x8023BD1C: lbu         $v0, 0x8($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X8);
    // 0x8023BD20: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8023BD24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BD28: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
L_8023BD2C:
    // 0x8023BD2C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023BD30: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8023BD34: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8023BD38: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023BD3C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023BD40: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023BD44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023BD48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BD4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BD50: jr          $ra
    // 0x8023BD54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023BD54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023A138_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A138: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A13C: bne         $v0, $zero, L_8023A158
    if (ctx->r2 != 0) {
        // 0x8023A140: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8023A158;
    }
    // 0x8023A140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A144: lhu         $v1, 0x440($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X440);
    // 0x8023A148: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023A14C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8023A150: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023A154: sh          $v1, 0x440($a0)
    MEM_H(0X440, ctx->r4) = ctx->r3;
L_8023A158:
    // 0x8023A158: jr          $ra
    // 0x8023A15C: nop

    TRACE_RETURN()
    return;
    // 0x8023A15C: nop

;}
RECOMP_FUNC void func_80225E80_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225E88: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225E8C: bne         $v0, $zero, L_80225EA4
    if (ctx->r2 != 0) {
        // 0x80225E90: nop
    
            goto L_80225EA4;
    }
    // 0x80225E90: nop

    // 0x80225E94: jal         0x80225EB8
    // 0x80225E98: nop

    func_80225EB8_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225E98: nop

    after_0:
    // 0x80225E9C: j           L_80225EAC
    // 0x80225EA0: nop

        goto L_80225EAC;
    // 0x80225EA0: nop

L_80225EA4:
    // 0x80225EA4: jal         0x80226018
    // 0x80225EA8: nop

    func_80226018_ovl5(rdram, ctx);
        goto after_1;
    // 0x80225EA8: nop

    after_1:
L_80225EAC:
    // 0x80225EAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225EB0: jr          $ra
    // 0x80225EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233E84_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233E88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233E8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233E90: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80233E94: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233E98: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233E9C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80233EA0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80233EA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233EA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233EAC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233EB0: addiu       $s1, $s0, 0x338
    ctx->r17 = ADD32(ctx->r16, 0X338);
    // 0x80233EB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233EB8: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80233EBC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80233EC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233EC4: jal         0x8009A3B4
    // 0x80233EC8: sh          $v0, 0x334($s0)
    MEM_H(0X334, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233EC8: sh          $v0, 0x334($s0)
    MEM_H(0X334, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233ECC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233ED0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233ED4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80233ED8: addiu       $v0, $s0, 0x340
    ctx->r2 = ADD32(ctx->r16, 0X340);
    // 0x80233EDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233EE0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233EE4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233EE8: lhu         $v1, 0x334($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X334);
    // 0x80233EEC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80233EF0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80233EF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80233EF8: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80233EFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80233F00: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233F04: jal         0x80051E18
    // 0x80233F08: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80233F08: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80233F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F10: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80233F14: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80233F18: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233F1C: jr          $ra
    // 0x80233F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237EF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237EF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237EFC: jal         0x8005044C
    // 0x80237F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80237F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80237F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237F08: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    // 0x80237F0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237F10: jal         0x8004DA90
    // 0x80237F14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80237F14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80237F18: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80237F1C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80237F20: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237F24: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237F28: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x80237F2C: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x80237F30: bne         $v0, $v1, L_80237F44
    if (ctx->r2 != ctx->r3) {
        // 0x80237F34: nop
    
            goto L_80237F44;
    }
    // 0x80237F34: nop

    // 0x80237F38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237F3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237F40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237F44:
    // 0x80237F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237F48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237F4C: jr          $ra
    // 0x80237F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B530_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B530: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B534: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022B538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B53C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B544: bne         $v0, $zero, L_8022B680
    if (ctx->r2 != 0) {
        // 0x8022B548: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B680;
    }
    // 0x8022B548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B54C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B550: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8022B554: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022B558: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022B55C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B560: addiu       $v0, $v0, 0x50D8
    ctx->r2 = ADD32(ctx->r2, 0X50D8);
    // 0x8022B564: jal         0x8005FA7C
    // 0x8022B568: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022B568: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
    // 0x8022B56C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B570: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B574: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B578: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B57C: lw          $v0, 0x50A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A0);
    // 0x8022B580: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B584: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022B588: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B58C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B590: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B594: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B598: lw          $v0, 0x50A4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A4);
    // 0x8022B59C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B5A0: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022B5A4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B5A8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B5AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B5B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B5B4: lw          $v0, 0x50A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A8);
    // 0x8022B5B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B5BC: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022B5C0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B5C4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B5C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B5CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B5D0: lw          $v0, 0x50A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A0);
    // 0x8022B5D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B5D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B5DC: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022B5E0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B5E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B5E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B5EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B5F0: lw          $v0, 0x50A4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A4);
    // 0x8022B5F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B5F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B5FC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022B600: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B604: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B608: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B60C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B610: lw          $v0, 0x50A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A8);
    // 0x8022B614: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B618: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B61C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022B620: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B624: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B628: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B62C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B630: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B634: lw          $v0, 0x50AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50AC);
    // 0x8022B638: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B63C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B640: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B644: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8022B648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B64C: jal         0x8005F6B4
    // 0x8022B650: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8022B650: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B654: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B658: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B65C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B660: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B664: lw          $v0, 0x527C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X527C);
    // 0x8022B668: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022B66C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022B670: jal         0x80036E48
    // 0x8022B674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8022B674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8022B678: jal         0x800600F8
    // 0x8022B67C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x8022B67C: nop

    after_3:
L_8022B680:
    // 0x8022B680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B688: jr          $ra
    // 0x8022B68C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B68C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E9A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E9A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E9A8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022E9AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E9B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E9B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9B8: lw          $v0, 0x5BB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5BB0);
    // 0x8022E9BC: jalr        $v0
    // 0x8022E9C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E9C0: nop

    after_0:
    // 0x8022E9C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E9C8: jr          $ra
    // 0x8022E9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239CD0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239CD0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80239CD4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80239CD8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80239CDC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80239CE0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80239CE4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80239CE8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80239CEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80239CF0: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80239CF4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80239CF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80239CFC: jal         0x8009A3B4
    // 0x80239D00: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80239D00: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80239D04: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80239D08: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80239D0C: jal         0x8009A3B4
    // 0x80239D10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239D10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239D14: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80239D18: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80239D1C: jal         0x8009A3B4
    // 0x80239D20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80239D20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239D24: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239D28: jal         0x800A3450
    // 0x80239D2C: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80239D2C: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80239D30: jal         0x80049EBC
    // 0x80239D34: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    func_80049EBC_252BC(rdram, ctx);
        goto after_4;
    // 0x80239D34: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    after_4:
    // 0x80239D38: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x80239D3C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80239D40: beq         $v0, $zero, L_80239D50
    if (ctx->r2 == 0) {
        // 0x80239D44: addiu       $s3, $s1, 0x440
        ctx->r19 = ADD32(ctx->r17, 0X440);
            goto L_80239D50;
    }
    // 0x80239D44: addiu       $s3, $s1, 0x440
    ctx->r19 = ADD32(ctx->r17, 0X440);
    // 0x80239D48: jal         0x8023B294
    // 0x80239D4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023B294_ovl5(rdram, ctx);
        goto after_5;
    // 0x80239D4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_80239D50:
    // 0x80239D50: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x80239D54: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80239D58: bne         $v0, $zero, L_80239D90
    if (ctx->r2 != 0) {
        // 0x80239D5C: nop
    
            goto L_80239D90;
    }
    // 0x80239D5C: nop

    // 0x80239D60: jal         0x8023B014
    // 0x80239D64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023B014_ovl5(rdram, ctx);
        goto after_6;
    // 0x80239D64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80239D68: beq         $v0, $zero, L_80239D90
    if (ctx->r2 == 0) {
        // 0x80239D6C: nop
    
            goto L_80239D90;
    }
    // 0x80239D6C: nop

    // 0x80239D70: jal         0x800721F0
    // 0x80239D74: lw          $a0, 0x4CC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4CC);
    func_800721F0_4D5F0(rdram, ctx);
        goto after_7;
    // 0x80239D74: lw          $a0, 0x4CC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4CC);
    after_7:
    // 0x80239D78: blez        $v0, L_80239D90
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80239D7C: addiu       $v1, $zero, 0xB4
        ctx->r3 = ADD32(0, 0XB4);
            goto L_80239D90;
    }
    // 0x80239D7C: addiu       $v1, $zero, 0xB4
    ctx->r3 = ADD32(0, 0XB4);
    // 0x80239D80: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x80239D84: sh          $v1, 0x44E($s1)
    MEM_H(0X44E, ctx->r17) = ctx->r3;
    // 0x80239D88: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80239D8C: sh          $v0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r2;
L_80239D90:
    // 0x80239D90: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80239D94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239D98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239D9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239DA0: lw          $v0, 0x643C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X643C);
    // 0x80239DA4: jalr        $v0
    // 0x80239DA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80239DA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x80239DAC: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80239DB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239DB4: beq         $v0, $zero, L_80239EB0
    if (ctx->r2 == 0) {
        // 0x80239DB8: nop
    
            goto L_80239EB0;
    }
    // 0x80239DB8: nop

    // 0x80239DBC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80239DC0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80239DC4: beq         $v0, $zero, L_80239E98
    if (ctx->r2 == 0) {
        // 0x80239DC8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80239E98;
    }
    // 0x80239DC8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80239DCC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239DD0: addu        $at, $at, $v0
    gpr jr_addend_80239DD8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239DD4: lw          $v0, 0x7370($at)
    ctx->r2 = ADD32(ctx->r1, 0X7370);
    // 0x80239DD8: jr          $v0
    // 0x80239DDC: nop

    switch (jr_addend_80239DD8 >> 2) {
        case 0: goto L_80239E84; break;
        case 1: goto L_80239E8C; break;
        case 2: goto L_80239E98; break;
        case 3: goto L_80239E98; break;
        case 4: goto L_80239DE0; break;
        case 5: goto L_80239E98; break;
        case 6: goto L_80239E78; break;
        default: switch_error(__func__, 0x80239DD8, 0x80247370);
    }
    // 0x80239DDC: nop

L_80239DE0:
    // 0x80239DE0: jal         0x8004F488
    // 0x80239DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_9;
    // 0x80239DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x80239DE8: jal         0x8004A0DC
    // 0x80239DEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_10;
    // 0x80239DEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80239DF0: jal         0x8004EEAC
    // 0x80239DF4: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_11;
    // 0x80239DF4: nop

    after_11:
    // 0x80239DF8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80239DFC: beq         $s2, $zero, L_80239EA0
    if (ctx->r18 == 0) {
        // 0x80239E00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239EA0;
    }
    // 0x80239E00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239E04: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80239E08: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x80239E0C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80239E10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239E14: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x80239E18: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    // 0x80239E1C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80239E20: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80239E24: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80239E28: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80239E2C: lui         $v1, 0xFF80
    ctx->r3 = S32(0XFF80 << 16);
    // 0x80239E30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239E34: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80239E38: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80239E3C: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80239E40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80239E44: jal         0x8004DD04
    // 0x80239E48: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_12;
    // 0x80239E48: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_12:
    // 0x80239E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239E50: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x80239E54: addiu       $v0, $zero, -0xB39
    ctx->r2 = ADD32(0, -0XB39);
    // 0x80239E58: sh          $v0, 0x38($s3)
    MEM_H(0X38, ctx->r19) = ctx->r2;
    // 0x80239E5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239E60: sh          $v0, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r2;
    // 0x80239E64: addiu       $v0, $zero, -0x198A
    ctx->r2 = ADD32(0, -0X198A);
    // 0x80239E68: jal         0x8004EC38
    // 0x80239E6C: sh          $v0, 0x3C($s3)
    MEM_H(0X3C, ctx->r19) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_13;
    // 0x80239E6C: sh          $v0, 0x3C($s3)
    MEM_H(0X3C, ctx->r19) = ctx->r2;
    after_13:
    // 0x80239E70: j           L_80239EA0
    // 0x80239E74: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
        goto L_80239EA0;
    // 0x80239E74: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_80239E78:
    // 0x80239E78: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80239E7C: j           L_80239EA0
    // 0x80239E80: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80239EA0;
    // 0x80239E80: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80239E84:
    // 0x80239E84: j           L_80239EA0
    // 0x80239E88: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80239EA0;
    // 0x80239E88: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80239E8C:
    // 0x80239E8C: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80239E90: j           L_80239EA0
    // 0x80239E94: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80239EA0;
    // 0x80239E94: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80239E98:
    // 0x80239E98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80239E9C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80239EA0:
    // 0x80239EA0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80239EA4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80239EA8: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80239EAC: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80239EB0:
    // 0x80239EB0: lhu         $v0, 0xC($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XC);
    // 0x80239EB4: beq         $v0, $zero, L_80239EC0
    if (ctx->r2 == 0) {
        // 0x80239EB8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80239EC0;
    }
    // 0x80239EB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239EBC: sh          $v0, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r2;
L_80239EC0:
    // 0x80239EC0: lh          $v0, 0xA($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XA);
    // 0x80239EC4: beq         $v0, $zero, L_80239ED4
    if (ctx->r2 == 0) {
        // 0x80239EC8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80239ED4;
    }
    // 0x80239EC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239ECC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80239ED0: sh          $v0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r2;
L_80239ED4:
    // 0x80239ED4: lhu         $v0, 0xE($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XE);
    // 0x80239ED8: beq         $v0, $zero, L_80239EE4
    if (ctx->r2 == 0) {
        // 0x80239EDC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80239EE4;
    }
    // 0x80239EDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239EE0: sh          $v0, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r2;
L_80239EE4:
    // 0x80239EE4: lhu         $v0, 0x82($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X82);
    // 0x80239EE8: beq         $v0, $zero, L_80239EF4
    if (ctx->r2 == 0) {
        // 0x80239EEC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80239EF4;
    }
    // 0x80239EEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239EF0: sh          $v0, 0x82($s3)
    MEM_H(0X82, ctx->r19) = ctx->r2;
L_80239EF4:
    // 0x80239EF4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80239EF8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80239EFC: beq         $v0, $zero, L_80239F34
    if (ctx->r2 == 0) {
        // 0x80239F00: nop
    
            goto L_80239F34;
    }
    // 0x80239F00: nop

    // 0x80239F04: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80239F08: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80239F0C: beq         $v0, $a1, L_80239F24
    if (ctx->r2 == ctx->r5) {
        // 0x80239F10: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80239F24;
    }
    // 0x80239F10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239F14: jal         0x80050294
    // 0x80239F18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x80239F18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x80239F1C: j           L_80239F44
    // 0x80239F20: nop

        goto L_80239F44;
    // 0x80239F20: nop

L_80239F24:
    // 0x80239F24: jal         0x8005044C
    // 0x80239F28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_15;
    // 0x80239F28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x80239F2C: j           L_80239F44
    // 0x80239F30: nop

        goto L_80239F44;
    // 0x80239F30: nop

L_80239F34:
    // 0x80239F34: jal         0x80051770
    // 0x80239F38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_16;
    // 0x80239F38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
    // 0x80239F3C: jal         0x80051248
    // 0x80239F40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_17;
    // 0x80239F40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
L_80239F44:
    // 0x80239F44: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80239F48: lhu         $v1, 0x2C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2C);
    // 0x80239F4C: lhu         $a0, 0x2E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2E);
    // 0x80239F50: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80239F54: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80239F58: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80239F5C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80239F60: lhu         $a1, 0x30($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X30);
    // 0x80239F64: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80239F68: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80239F6C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80239F70: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80239F74: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80239F78: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80239F7C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80239F80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80239F84: beq         $v0, $zero, L_80239FA0
    if (ctx->r2 == 0) {
        // 0x80239F88: sh          $v1, 0x48($s1)
        MEM_H(0X48, ctx->r17) = ctx->r3;
            goto L_80239FA0;
    }
    // 0x80239F88: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x80239F8C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80239F90: lh          $a3, 0x56($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X56);
    // 0x80239F94: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80239F98: jal         0x8003B6B8
    // 0x80239F9C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_18;
    // 0x80239F9C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_18:
L_80239FA0:
    // 0x80239FA0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80239FA4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239FA8: beq         $v0, $zero, L_8023A0F4
    if (ctx->r2 == 0) {
        // 0x80239FAC: nop
    
            goto L_8023A0F4;
    }
    // 0x80239FAC: nop

    // 0x80239FB0: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80239FB4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80239FB8: beq         $v0, $zero, L_8023A004
    if (ctx->r2 == 0) {
        // 0x80239FBC: addiu       $s0, $s3, 0x10
        ctx->r16 = ADD32(ctx->r19, 0X10);
            goto L_8023A004;
    }
    // 0x80239FBC: addiu       $s0, $s3, 0x10
    ctx->r16 = ADD32(ctx->r19, 0X10);
    // 0x80239FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239FC4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80239FC8: jal         0x8009A3B4
    // 0x80239FCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80239FCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x80239FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239FD4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80239FD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239FDC: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80239FE0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80239FE4: addiu       $v0, $s3, 0x18
    ctx->r2 = ADD32(ctx->r19, 0X18);
    // 0x80239FE8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80239FEC: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80239FF0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80239FF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80239FF8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80239FFC: jal         0x80051E18
    // 0x8023A000: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x8023A000: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_20:
L_8023A004:
    // 0x8023A004: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8023A008: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8023A00C: beq         $v0, $zero, L_8023A07C
    if (ctx->r2 == 0) {
        // 0x8023A010: addiu       $s0, $s3, 0x68
        ctx->r16 = ADD32(ctx->r19, 0X68);
            goto L_8023A07C;
    }
    // 0x8023A010: addiu       $s0, $s3, 0x68
    ctx->r16 = ADD32(ctx->r19, 0X68);
    // 0x8023A014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A018: addiu       $a1, $s1, 0x1D0
    ctx->r5 = ADD32(ctx->r17, 0X1D0);
    // 0x8023A01C: jal         0x8009A3B4
    // 0x8023A020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x8023A020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x8023A024: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023A028: addiu       $v0, $s3, 0x70
    ctx->r2 = ADD32(ctx->r19, 0X70);
    // 0x8023A02C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023A030: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023A034: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023A038: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023A03C: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023A040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A044: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A048: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A04C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023A050: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8023A054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A058: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x8023A05C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023A060: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023A064: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023A068: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x8023A06C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023A070: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023A074: jal         0x80051E18
    // 0x8023A078: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_22;
    // 0x8023A078: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_22:
L_8023A07C:
    // 0x8023A07C: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8023A080: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023A084: beq         $v0, $zero, L_8023A0F4
    if (ctx->r2 == 0) {
        // 0x8023A088: addiu       $s0, $s3, 0x58
        ctx->r16 = ADD32(ctx->r19, 0X58);
            goto L_8023A0F4;
    }
    // 0x8023A088: addiu       $s0, $s3, 0x58
    ctx->r16 = ADD32(ctx->r19, 0X58);
    // 0x8023A08C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A090: addiu       $a1, $s1, 0x1A8
    ctx->r5 = ADD32(ctx->r17, 0X1A8);
    // 0x8023A094: jal         0x8009A3B4
    // 0x8023A098: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x8023A098: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x8023A09C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023A0A0: addiu       $v0, $s3, 0x60
    ctx->r2 = ADD32(ctx->r19, 0X60);
    // 0x8023A0A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023A0A8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023A0AC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023A0B0: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023A0B4: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023A0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A0BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A0C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A0C4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023A0C8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8023A0CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A0D0: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x8023A0D4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023A0D8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023A0DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023A0E0: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x8023A0E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023A0E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023A0EC: jal         0x80051E18
    // 0x8023A0F0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x8023A0F0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_24:
L_8023A0F4:
    // 0x8023A0F4: jal         0x80040F30
    // 0x8023A0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_25;
    // 0x8023A0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_25:
    // 0x8023A0FC: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    // 0x8023A100: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8023A104: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8023A108: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8023A10C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8023A110: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023A114: jr          $ra
    // 0x8023A118: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8023A118: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022F8B0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F8B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F8B4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022F8B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F8BC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F8C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F8C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F8C8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F8CC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F8D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F8D4: bne         $v0, $s2, L_8022F97C
    if (ctx->r2 != ctx->r18) {
        // 0x8022F8D8: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_8022F97C;
    }
    // 0x8022F8D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F8DC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022F8E0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F8E4: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022F8E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F8EC: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022F8F0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022F8F4: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8022F8F8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022F8FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F900: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022F904: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x8022F908: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F90C: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x8022F910: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022F914: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F918: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022F91C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F920: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x8022F924: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x8022F928: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F92C: jal         0x8004EC38
    // 0x8022F930: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022F930: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022F934: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022F938: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022F93C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022F940: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022F944: jal         0x80034FCC
    // 0x8022F948: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x8022F948: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x8022F94C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F950: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F954: jal         0x80050294
    // 0x8022F958: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F958: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022F95C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F960: jal         0x8004EC38
    // 0x8022F964: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022F964: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022F968: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F96C: sh          $v0, 0x7450($at)
    MEM_H(0X7450, ctx->r1) = ctx->r2;
    // 0x8022F970: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F974: j           L_8022F9A8
    // 0x8022F978: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
        goto L_8022F9A8;
    // 0x8022F978: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_8022F97C:
    // 0x8022F97C: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x8022F980: bne         $v0, $zero, L_8022F998
    if (ctx->r2 != 0) {
        // 0x8022F984: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022F998;
    }
    // 0x8022F984: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F988: jal         0x8005044C
    // 0x8022F98C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022F98C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022F990: j           L_8022F9A8
    // 0x8022F994: nop

        goto L_8022F9A8;
    // 0x8022F994: nop

L_8022F998:
    // 0x8022F998: lb          $a1, 0xE($s2)
    ctx->r5 = MEM_B(ctx->r18, 0XE);
    // 0x8022F99C: jal         0x80050294
    // 0x8022F9A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022F9A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022F9A4: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
L_8022F9A8:
    // 0x8022F9A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F9AC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F9B0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F9B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F9B8: jr          $ra
    // 0x8022F9BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F9BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F47C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F47C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F480: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022F484: bne         $a1, $a0, L_8022F4D8
    if (ctx->r5 != ctx->r4) {
        // 0x8022F488: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022F4D8;
    }
    // 0x8022F488: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022F48C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022F490: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022F494: bne         $v1, $v0, L_8022F4A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022F498: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022F4A4;
    }
    // 0x8022F498: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F49C: j           L_8022F4C0
    // 0x8022F4A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022F4C0;
    // 0x8022F4A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022F4A4:
    // 0x8022F4A4: bne         $v1, $v0, L_8022F4B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022F4A8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022F4B4;
    }
    // 0x8022F4A8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022F4AC: j           L_8022F4C0
    // 0x8022F4B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022F4C0;
    // 0x8022F4B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022F4B4:
    // 0x8022F4B4: bne         $v1, $v0, L_8022F4C0
    if (ctx->r3 != ctx->r2) {
        // 0x8022F4B8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F4C0;
    }
    // 0x8022F4B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F4BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022F4C0:
    // 0x8022F4C0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022F4C4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022F4C8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022F4CC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022F4D0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022F4D4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022F4D8:
    // 0x8022F4D8: jr          $ra
    // 0x8022F4DC: nop

    TRACE_RETURN()
    return;
    // 0x8022F4DC: nop

;}
RECOMP_FUNC void func_80235CE4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235CE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235CEC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80235CF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235CF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235CF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235CFC: lw          $v0, 0x5F10($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F10);
    // 0x80235D00: jalr        $v0
    // 0x80235D04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235D04: nop

    after_0:
    // 0x80235D08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235D0C: jr          $ra
    // 0x80235D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B40C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B40C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B410: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B414: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B418: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B41C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B420: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8022B424: beq         $v1, $zero, L_8022B43C
    if (ctx->r3 == 0) {
        // 0x8022B428: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B43C;
    }
    // 0x8022B428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B42C: beq         $v1, $v0, L_8022B4BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B430: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B4BC;
    }
    // 0x8022B430: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B434: j           L_8022B514
    // 0x8022B438: nop

        goto L_8022B514;
    // 0x8022B438: nop

L_8022B43C:
    // 0x8022B43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B440: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B444: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022B448: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B44C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B450: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022B454: addiu       $v0, $zero, 0x1A9
    ctx->r2 = ADD32(0, 0X1A9);
    // 0x8022B458: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B45C: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022B460: addiu       $v0, $zero, -0x301
    ctx->r2 = ADD32(0, -0X301);
    // 0x8022B464: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B468: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022B46C: addiu       $v0, $zero, 0x1940
    ctx->r2 = ADD32(0, 0X1940);
    // 0x8022B470: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B474: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022B478: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022B47C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B480: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8022B484: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B488: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B48C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022B490: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B494: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B498: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8022B49C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4A0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022B4A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4A8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022B4AC: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022B4B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4B4: j           L_8022B514
    // 0x8022B4B8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022B514;
    // 0x8022B4B8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8022B4BC:
    // 0x8022B4BC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022B4C0: addiu       $s0, $s0, 0x47CC
    ctx->r16 = ADD32(ctx->r16, 0X47CC);
    // 0x8022B4C4: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x8022B4C8: bne         $v1, $v0, L_8022B514
    if (ctx->r3 != ctx->r2) {
        // 0x8022B4CC: nop
    
            goto L_8022B514;
    }
    // 0x8022B4CC: nop

    // 0x8022B4D0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B4D4: lbu         $v0, 0x7440($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7440);
    // 0x8022B4D8: beq         $v0, $zero, L_8022B4E8
    if (ctx->r2 == 0) {
        // 0x8022B4DC: nop
    
            goto L_8022B4E8;
    }
    // 0x8022B4DC: nop

    // 0x8022B4E0: jal         0x80034E74
    // 0x8022B4E4: nop

    func_80034E74_10274(rdram, ctx);
        goto after_0;
    // 0x8022B4E4: nop

    after_0:
L_8022B4E8:
    // 0x8022B4E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B4EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B4F0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022B4F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4F8: jal         0x80070050
    // 0x8022B4FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x8022B4FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B504: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B508: jal         0x80034844
    // 0x8022B50C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_2;
    // 0x8022B50C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_2:
    // 0x8022B510: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8022B514:
    // 0x8022B514: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B518: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B51C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B520: jr          $ra
    // 0x8022B524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022B528: nop

    // 0x8022B52C: nop

;}
RECOMP_FUNC void func_80235070_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235074: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235078: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023507C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235080: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235084: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235088: lw          $v0, 0x5E90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5E90);
    // 0x8023508C: jalr        $v0
    // 0x80235090: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235090: nop

    after_0:
    // 0x80235094: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235098: jr          $ra
    // 0x8023509C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023509C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235F68_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235F6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235F70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235F78: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80235F7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235F80: jal         0x8004DA90
    // 0x80235F84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80235F84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80235F88: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80235F8C: bne         $v0, $zero, L_80235FA4
    if (ctx->r2 != 0) {
        // 0x80235F90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235FA4;
    }
    // 0x80235F90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235F94: jal         0x8005044C
    // 0x80235F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80235F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235F9C: j           L_80235FB4
    // 0x80235FA0: nop

        goto L_80235FB4;
    // 0x80235FA0: nop

L_80235FA4:
    // 0x80235FA4: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80235FA8: jal         0x80050294
    // 0x80235FAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80235FAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80235FB0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80235FB4:
    // 0x80235FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235FB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235FBC: jr          $ra
    // 0x80235FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E654_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E654: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E65C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E660: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022E664: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E668: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E66C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E670: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E674: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022E678: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E67C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E680: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E684: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022E688: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022E68C: jal         0x8022F578
    // 0x8022E690: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022F578_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022E690: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022E694: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022E698: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E69C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E6A0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022E6A4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022E6A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E6AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022E6B0: jal         0x8004F820
    // 0x8022E6B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022E6B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022E6B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6BC: bgez        $v0, L_8022E6EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E6C0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022E6EC;
    }
    // 0x8022E6C0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022E6C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E6C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E6CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E6D0: jal         0x8004F820
    // 0x8022E6D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022E6D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022E6D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E6E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022E6E4: j           L_8022E708
    // 0x8022E6E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022E708;
    // 0x8022E6E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022E6EC:
    // 0x8022E6EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E6F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E6F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E6F8: jal         0x8004F820
    // 0x8022E6FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022E6FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022E700: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E704: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022E708:
    // 0x8022E708: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E70C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022E710: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022E714: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E718: jal         0x800610AC
    // 0x8022E71C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022E71C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022E720: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022E724: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E728: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E72C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E730: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E734: jr          $ra
    // 0x8022E738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F14C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F14C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F150: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022F154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F158: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F15C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F160: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F164: bne         $v1, $v0, L_8022F18C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F168: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022F18C;
    }
    // 0x8022F168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F16C: jal         0x80061724
    // 0x8022F170: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022F170: nop

    after_0:
    // 0x8022F174: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F178: jal         0x800616FC
    // 0x8022F17C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022F17C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022F180: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F184: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F188: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022F18C:
    // 0x8022F18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F194: jr          $ra
    // 0x8022F198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BCBC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BCBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BCC0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022BCC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BCC8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022BCCC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BCD0: bne         $v0, $zero, L_8022BCF0
    if (ctx->r2 != 0) {
        // 0x8022BCD4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022BCF0;
    }
    // 0x8022BCD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BCD8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022BCDC: slti        $v0, $v0, 0xB6
    ctx->r2 = SIGNED(ctx->r2) < 0XB6 ? 1 : 0;
    // 0x8022BCE0: bne         $v0, $zero, L_8022BCF0
    if (ctx->r2 != 0) {
        // 0x8022BCE4: nop
    
            goto L_8022BCF0;
    }
    // 0x8022BCE4: nop

    // 0x8022BCE8: jal         0x800600F8
    // 0x8022BCEC: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x8022BCEC: nop

    after_0:
L_8022BCF0:
    // 0x8022BCF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BCF4: jr          $ra
    // 0x8022BCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282C4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802282C8: bne         $v0, $zero, L_802282D8
    if (ctx->r2 != 0) {
        // 0x802282CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802282D8;
    }
    // 0x802282CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802282D0: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802282D4: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_802282D8:
    // 0x802282D8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802282DC: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x802282E0: bne         $v1, $v0, L_802282F0
    if (ctx->r3 != ctx->r2) {
        // 0x802282E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282F0;
    }
    // 0x802282E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282E8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802282EC: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_802282F0:
    // 0x802282F0: jr          $ra
    // 0x802282F4: nop

    TRACE_RETURN()
    return;
    // 0x802282F4: nop

;}
RECOMP_FUNC void func_80227CE0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227CE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227CE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227CEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227CF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227CF8: lw          $s0, 0x24($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X24);
    // 0x80227CFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227D00: jal         0x80036B00
    // 0x80227D04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80227D04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227D08: jal         0x80054578
    // 0x80227D0C: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80227D0C: nop

    after_1:
    // 0x80227D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227D18: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80227D1C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227D20: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227D24: beq         $v0, $zero, L_80227D8C
    if (ctx->r2 == 0) {
        // 0x80227D28: nop
    
            goto L_80227D8C;
    }
    // 0x80227D28: nop

    // 0x80227D2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227D30: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80227D34: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227D38: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227D3C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80227D40: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227D44: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227D48: addiu       $v0, $zero, -0x4B0
    ctx->r2 = ADD32(0, -0X4B0);
    // 0x80227D4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227D50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227D54: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80227D58: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227D5C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80227D60: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227D64: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80227D68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227D6C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227D70: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227D74: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227D78: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227D7C: jal         0x80034844
    // 0x80227D80: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    func_80034844_FC44(rdram, ctx);
        goto after_2;
    // 0x80227D80: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    after_2:
    // 0x80227D84: j           L_80227D94
    // 0x80227D88: nop

        goto L_80227D94;
    // 0x80227D88: nop

L_80227D8C:
    // 0x80227D8C: jal         0x80035288
    // 0x80227D90: nop

    func_80035288_10688(rdram, ctx);
        goto after_3;
    // 0x80227D90: nop

    after_3:
L_80227D94:
    // 0x80227D94: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227D98: jal         0x80070050
    // 0x80227D9C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80227D9C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_4:
    // 0x80227DA0: jal         0x80060590
    // 0x80227DA4: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80227DA4: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_5:
    // 0x80227DA8: jal         0x8023B070
    // 0x80227DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023B070_ovl5(rdram, ctx);
        goto after_6;
    // 0x80227DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80227DB0: jal         0x8004F488
    // 0x80227DB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_7;
    // 0x80227DB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80227DB8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80227DBC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227DC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227DC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227DC8: jr          $ra
    // 0x80227DCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227DCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229A80_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A90: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229A94: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80229A98: bne         $v1, $v0, L_80229AC0
    if (ctx->r3 != ctx->r2) {
        // 0x80229A9C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229AC0;
    }
    // 0x80229A9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229AA0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229AA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229AA8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80229AAC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229AB0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80229AB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229AB8: jal         0x800616FC
    // 0x80229ABC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229ABC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_80229AC0:
    // 0x80229AC0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80229AC4: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x80229AC8: bne         $v0, $zero, L_80229BA0
    if (ctx->r2 != 0) {
        // 0x80229ACC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80229BA0;
    }
    // 0x80229ACC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229AD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229AD4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229AD8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229ADC: bne         $v0, $zero, L_80229BA0
    if (ctx->r2 != 0) {
        // 0x80229AE0: addiu       $v0, $zero, 0x269
        ctx->r2 = ADD32(0, 0X269);
            goto L_80229BA0;
    }
    // 0x80229AE0: addiu       $v0, $zero, 0x269
    ctx->r2 = ADD32(0, 0X269);
    // 0x80229AE4: addiu       $a0, $zero, -0x301
    ctx->r4 = ADD32(0, -0X301);
    // 0x80229AE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229AEC: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80229AF0: addiu       $v0, $zero, 0x382
    ctx->r2 = ADD32(0, 0X382);
    // 0x80229AF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229AF8: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80229AFC: lui         $v0, 0x269
    ctx->r2 = S32(0X269 << 16);
    // 0x80229B00: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x80229B04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229B08: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80229B0C: lui         $v0, 0x382
    ctx->r2 = S32(0X382 << 16);
    // 0x80229B10: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x80229B14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229B18: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80229B1C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229B24: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x80229B28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229B2C: sw          $a1, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r5;
    // 0x80229B30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229B34: sh          $a2, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r6;
    // 0x80229B38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229B3C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80229B40: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229B44: addiu       $v0, $zero, 0x1A1
    ctx->r2 = ADD32(0, 0X1A1);
    // 0x80229B48: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80229B4C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229B50: sh          $a0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r4;
    // 0x80229B54: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229B58: addiu       $v0, $zero, 0x385
    ctx->r2 = ADD32(0, 0X385);
    // 0x80229B5C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80229B60: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229B64: lui         $v0, 0x1A1
    ctx->r2 = S32(0X1A1 << 16);
    // 0x80229B68: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229B6C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229B70: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x80229B74: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229B78: lui         $v0, 0x385
    ctx->r2 = S32(0X385 << 16);
    // 0x80229B7C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80229B80: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229B84: sh          $a2, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r6;
    // 0x80229B88: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229B8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229B90: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x80229B94: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229B98: jal         0x800600F8
    // 0x80229B9C: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229B9C: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    after_1:
L_80229BA0:
    // 0x80229BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229BA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229BA8: jr          $ra
    // 0x80229BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234EC8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234EC8: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80234ECC: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80234ED0: beq         $v0, $zero, L_80234F14
    if (ctx->r2 == 0) {
        // 0x80234ED4: nop
    
            goto L_80234F14;
    }
    // 0x80234ED4: nop

    // 0x80234ED8: bltz        $v1, L_80234F14
    if (SIGNED(ctx->r3) < 0) {
        // 0x80234EDC: nop
    
            goto L_80234F14;
    }
    // 0x80234EDC: nop

    // 0x80234EE0: lhu         $v1, 0x32C($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X32C);
    // 0x80234EE4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80234EE8: beq         $v0, $zero, L_80234EFC
    if (ctx->r2 == 0) {
        // 0x80234EEC: andi        $v0, $v1, 0xFDFF
        ctx->r2 = ctx->r3 & 0XFDFF;
            goto L_80234EFC;
    }
    // 0x80234EEC: andi        $v0, $v1, 0xFDFF
    ctx->r2 = ctx->r3 & 0XFDFF;
    // 0x80234EF0: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x80234EF4: j           L_80234F08
    // 0x80234EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80234F08;
    // 0x80234EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234EFC:
    // 0x80234EFC: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x80234F00: beq         $v0, $zero, L_80234F14
    if (ctx->r2 == 0) {
        // 0x80234F04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234F14;
    }
    // 0x80234F04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80234F08:
    // 0x80234F08: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
    // 0x80234F0C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80234F10: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_80234F14:
    // 0x80234F14: jr          $ra
    // 0x80234F18: nop

    TRACE_RETURN()
    return;
    // 0x80234F18: nop

;}
RECOMP_FUNC void func_80229C58_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C58: jr          $ra
    // 0x80229C5C: nop

    TRACE_RETURN()
    return;
    // 0x80229C5C: nop

;}
RECOMP_FUNC void func_8022D000_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D004: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D008: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D00C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D010: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D014: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D018: lw          $v0, 0x59BC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X59BC);
    // 0x8022D01C: jalr        $v0
    // 0x8022D020: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D020: nop

    after_0:
    // 0x8022D024: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D028: jr          $ra
    // 0x8022D02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F9C0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F9C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F9C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F9CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F9D0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F9D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F9D8: jal         0x8004DA90
    // 0x8022F9DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F9DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022F9E0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F9E4: bne         $v0, $zero, L_8022F9FC
    if (ctx->r2 != 0) {
        // 0x8022F9E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F9FC;
    }
    // 0x8022F9E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F9EC: jal         0x8005044C
    // 0x8022F9F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F9F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F9F4: j           L_8022FA0C
    // 0x8022F9F8: nop

        goto L_8022FA0C;
    // 0x8022F9F8: nop

L_8022F9FC:
    // 0x8022F9FC: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8022FA00: jal         0x80050294
    // 0x8022FA04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022FA04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022FA08: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8022FA0C:
    // 0x8022FA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA14: jr          $ra
    // 0x8022FA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802290D8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802290D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802290DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802290E0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802290E4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802290E8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802290EC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802290F0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802290F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802290F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802290FC: lbu         $v1, 0x4($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X4);
    // 0x80229100: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x80229104: addiu       $s5, $s5, 0x49B0
    ctx->r21 = ADD32(ctx->r21, 0X49B0);
    // 0x80229108: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x8022910C: beq         $v0, $zero, L_80229928
    if (ctx->r2 == 0) {
        // 0x80229110: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229928;
    }
    // 0x80229110: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229114: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229118: addu        $at, $at, $v0
    gpr jr_addend_80229120 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022911C: lw          $v0, 0x6FC0($at)
    ctx->r2 = ADD32(ctx->r1, 0X6FC0);
    // 0x80229120: jr          $v0
    // 0x80229124: nop

    switch (jr_addend_80229120 >> 2) {
        case 0: goto L_80229128; break;
        case 1: goto L_802291CC; break;
        case 2: goto L_80229240; break;
        case 3: goto L_80229260; break;
        case 4: goto L_80229288; break;
        case 5: goto L_802292D4; break;
        case 6: goto L_80229310; break;
        case 7: goto L_80229344; break;
        case 8: goto L_8022935C; break;
        case 9: goto L_80229388; break;
        case 10: goto L_80229410; break;
        case 11: goto L_80229428; break;
        case 12: goto L_8022951C; break;
        case 13: goto L_8022957C; break;
        case 14: goto L_802295DC; break;
        case 15: goto L_80229764; break;
        case 16: goto L_802297C0; break;
        default: switch_error(__func__, 0x80229120, 0x80246FC0);
    }
    // 0x80229124: nop

L_80229128:
    // 0x80229128: jal         0x80036E48
    // 0x8022912C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022912C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80229130: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229134: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229138: jal         0x8005F6B4
    // 0x8022913C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8022913C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80229140: jal         0x8006033C
    // 0x80229144: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80229144: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    after_2:
    // 0x80229148: beq         $v0, $zero, L_80229178
    if (ctx->r2 == 0) {
        // 0x8022914C: addiu       $a0, $zero, 0x2E1
        ctx->r4 = ADD32(0, 0X2E1);
            goto L_80229178;
    }
    // 0x8022914C: addiu       $a0, $zero, 0x2E1
    ctx->r4 = ADD32(0, 0X2E1);
    // 0x80229150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229154: addiu       $v0, $v0, 0x4BB0
    ctx->r2 = ADD32(ctx->r2, 0X4BB0);
    // 0x80229158: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022915C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80229160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229164: addiu       $v0, $v0, 0x4E08
    ctx->r2 = ADD32(ctx->r2, 0X4E08);
    // 0x80229168: jal         0x80060C1C
    // 0x8022916C: sw          $v0, 0xA4($s4)
    MEM_W(0XA4, ctx->r20) = ctx->r2;
    func_80060C1C_3C01C(rdram, ctx);
        goto after_3;
    // 0x8022916C: sw          $v0, 0xA4($s4)
    MEM_W(0XA4, ctx->r20) = ctx->r2;
    after_3:
    // 0x80229170: j           L_80229198
    // 0x80229174: addiu       $a0, $zero, 0x52C
    ctx->r4 = ADD32(0, 0X52C);
        goto L_80229198;
    // 0x80229174: addiu       $a0, $zero, 0x52C
    ctx->r4 = ADD32(0, 0X52C);
L_80229178:
    // 0x80229178: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022917C: addiu       $v0, $v0, 0x4A08
    ctx->r2 = ADD32(ctx->r2, 0X4A08);
    // 0x80229180: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80229184: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80229188: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022918C: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x80229190: sw          $v0, 0xA4($s4)
    MEM_W(0XA4, ctx->r20) = ctx->r2;
    // 0x80229194: addiu       $a0, $zero, 0x52C
    ctx->r4 = ADD32(0, 0X52C);
L_80229198:
    // 0x80229198: sb          $zero, 0xB($s4)
    MEM_B(0XB, ctx->r20) = 0;
    // 0x8022919C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x802291A0: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x802291A4: sb          $zero, 0xB($s4)
    MEM_B(0XB, ctx->r20) = 0;
    // 0x802291A8: jal         0x8006036C
    // 0x802291AC: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802291AC: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    after_4:
    // 0x802291B0: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x802291B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802291B8: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    // 0x802291BC: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x802291C0: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x802291C4: j           L_802293F8
    // 0x802291C8: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
        goto L_802293F8;
    // 0x802291C8: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
L_802291CC:
    // 0x802291CC: jal         0x8006FF84
    // 0x802291D0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x802291D0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_5:
    // 0x802291D4: beq         $v0, $zero, L_802293F8
    if (ctx->r2 == 0) {
        // 0x802291D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802293F8;
    }
    // 0x802291D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802291DC: lbu         $v1, 0xBD($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XBD);
    // 0x802291E0: sb          $v0, 0x8($s5)
    MEM_B(0X8, ctx->r21) = ctx->r2;
    // 0x802291E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802291E8: sb          $v0, 0x9($s5)
    MEM_B(0X9, ctx->r21) = ctx->r2;
    // 0x802291EC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802291F0: sb          $v0, 0x448($s5)
    MEM_B(0X448, ctx->r21) = ctx->r2;
    // 0x802291F4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802291F8: sh          $v0, 0x438($s5)
    MEM_H(0X438, ctx->r21) = ctx->r2;
    // 0x802291FC: addiu       $v0, $zero, -0x301
    ctx->r2 = ADD32(0, -0X301);
    // 0x80229200: sh          $v0, 0x43A($s5)
    MEM_H(0X43A, ctx->r21) = ctx->r2;
    // 0x80229204: addiu       $v0, $zero, 0x2E8
    ctx->r2 = ADD32(0, 0X2E8);
    // 0x80229208: sh          $v0, 0x43C($s5)
    MEM_H(0X43C, ctx->r21) = ctx->r2;
    // 0x8022920C: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80229210: sw          $v0, 0x428($s5)
    MEM_W(0X428, ctx->r21) = ctx->r2;
    // 0x80229214: lui         $v0, 0xFCFF
    ctx->r2 = S32(0XFCFF << 16);
    // 0x80229218: sw          $v0, 0x42C($s5)
    MEM_W(0X42C, ctx->r21) = ctx->r2;
    // 0x8022921C: lui         $v0, 0x2E8
    ctx->r2 = S32(0X2E8 << 16);
    // 0x80229220: sw          $v0, 0x430($s5)
    MEM_W(0X430, ctx->r21) = ctx->r2;
    // 0x80229224: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229228: sh          $zero, 0x440($s5)
    MEM_H(0X440, ctx->r21) = 0;
    // 0x8022922C: sh          $v0, 0x442($s5)
    MEM_H(0X442, ctx->r21) = ctx->r2;
    // 0x80229230: sh          $zero, 0x444($s5)
    MEM_H(0X444, ctx->r21) = 0;
    // 0x80229234: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80229238: j           L_80229250
    // 0x8022923C: sb          $v1, 0xBD($s5)
    MEM_B(0XBD, ctx->r21) = ctx->r3;
        goto L_80229250;
    // 0x8022923C: sb          $v1, 0xBD($s5)
    MEM_B(0XBD, ctx->r21) = ctx->r3;
L_80229240:
    // 0x80229240: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229244: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80229248: bne         $v0, $zero, L_802293F8
    if (ctx->r2 != 0) {
        // 0x8022924C: nop
    
            goto L_802293F8;
    }
    // 0x8022924C: nop

L_80229250:
    // 0x80229250: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x80229254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229258: j           L_802293F8
    // 0x8022925C: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
        goto L_802293F8;
    // 0x8022925C: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
L_80229260:
    // 0x80229260: lbu         $v0, 0xBD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XBD);
    // 0x80229264: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229268: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x8022926C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80229270: sb          $v0, 0xBD($s5)
    MEM_B(0XBD, ctx->r21) = ctx->r2;
    // 0x80229274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229278: jal         0x800600F8
    // 0x8022927C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_6;
    // 0x8022927C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x80229280: j           L_80229250
    // 0x80229284: nop

        goto L_80229250;
    // 0x80229284: nop

L_80229288:
    // 0x80229288: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x8022928C: bne         $v0, $zero, L_80229754
    if (ctx->r2 != 0) {
        // 0x80229290: nop
    
            goto L_80229754;
    }
    // 0x80229290: nop

    // 0x80229294: jal         0x8006072C
    // 0x80229298: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_7;
    // 0x80229298: nop

    after_7:
    // 0x8022929C: beq         $v0, $zero, L_802293D8
    if (ctx->r2 == 0) {
        // 0x802292A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293D8;
    }
    // 0x802292A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292A4: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x802292A8: bne         $v1, $v0, L_802293D8
    if (ctx->r3 != ctx->r2) {
        // 0x802292AC: nop
    
            goto L_802293D8;
    }
    // 0x802292AC: nop

    // 0x802292B0: jal         0x80061798
    // 0x802292B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_8;
    // 0x802292B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x802292B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802292BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802292C0: jal         0x80036B00
    // 0x802292C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_9;
    // 0x802292C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x802292C8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802292CC: j           L_802293D8
    // 0x802292D0: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
        goto L_802293D8;
    // 0x802292D0: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
L_802292D4:
    // 0x802292D4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802292D8: addiu       $s0, $s0, 0x47CC
    ctx->r16 = ADD32(ctx->r16, 0X47CC);
    // 0x802292DC: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x802292E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802292E4: bne         $v1, $v0, L_802293D8
    if (ctx->r3 != ctx->r2) {
        // 0x802292E8: nop
    
            goto L_802293D8;
    }
    // 0x802292E8: nop

    // 0x802292EC: jal         0x8004F418
    // 0x802292F0: lw          $a0, 0x24($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_10;
    // 0x802292F0: lw          $a0, 0x24($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X24);
    after_10:
    // 0x802292F4: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x802292F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802292FC: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    // 0x80229300: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229304: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229308: j           L_802293D8
    // 0x8022930C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_802293D8;
    // 0x8022930C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80229310:
    // 0x80229310: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229314: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x80229318: bne         $v0, $zero, L_802293D8
    if (ctx->r2 != 0) {
        // 0x8022931C: nop
    
            goto L_802293D8;
    }
    // 0x8022931C: nop

    // 0x80229320: jal         0x80036E48
    // 0x80229324: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_11;
    // 0x80229324: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_11:
    // 0x80229328: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022932C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229330: jal         0x8005F6B4
    // 0x80229334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_12;
    // 0x80229334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x80229338: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x8022933C: j           L_80229378
    // 0x80229340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229378;
    // 0x80229340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229344:
    // 0x80229344: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x80229348: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022934C: jal         0x800600F8
    // 0x80229350: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_13;
    // 0x80229350: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    after_13:
    // 0x80229354: j           L_80229928
    // 0x80229358: nop

        goto L_80229928;
    // 0x80229358: nop

L_8022935C:
    // 0x8022935C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229360: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80229364: bne         $v0, $zero, L_802293D8
    if (ctx->r2 != 0) {
        // 0x80229368: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802293D8;
    }
    // 0x80229368: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022936C: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x80229370: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
    // 0x80229374: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229378:
    // 0x80229378: jal         0x800600F8
    // 0x8022937C: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_14;
    // 0x8022937C: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    after_14:
    // 0x80229380: j           L_802293D8
    // 0x80229384: nop

        goto L_802293D8;
    // 0x80229384: nop

L_80229388:
    // 0x80229388: lbu         $v1, 0x8($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8);
    // 0x8022938C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229390: beq         $v1, $v0, L_80229754
    if (ctx->r3 == ctx->r2) {
        // 0x80229394: nop
    
            goto L_80229754;
    }
    // 0x80229394: nop

    // 0x80229398: jal         0x8006072C
    // 0x8022939C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_15;
    // 0x8022939C: nop

    after_15:
    // 0x802293A0: beq         $v0, $zero, L_802293D8
    if (ctx->r2 == 0) {
        // 0x802293A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293D8;
    }
    // 0x802293A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802293A8: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x802293AC: bne         $v1, $v0, L_802293D8
    if (ctx->r3 != ctx->r2) {
        // 0x802293B0: nop
    
            goto L_802293D8;
    }
    // 0x802293B0: nop

    // 0x802293B4: jal         0x80061798
    // 0x802293B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_16;
    // 0x802293B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x802293BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802293C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802293C4: jal         0x80036B00
    // 0x802293C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_17;
    // 0x802293C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_17:
    // 0x802293CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802293D0: j           L_80229928
    // 0x802293D4: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
        goto L_80229928;
    // 0x802293D4: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
L_802293D8:
    // 0x802293D8: lbu         $v1, 0x8($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8);
    // 0x802293DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802293E0: beq         $v1, $v0, L_802293F8
    if (ctx->r3 == ctx->r2) {
        // 0x802293E4: nop
    
            goto L_802293F8;
    }
    // 0x802293E4: nop

    // 0x802293E8: lw          $v0, 0xA4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XA4);
    // 0x802293EC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802293F0: jalr        $v0
    // 0x802293F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_18;
    // 0x802293F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_18:
L_802293F8:
    // 0x802293F8: jal         0x8005FB90
    // 0x802293FC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_19;
    // 0x802293FC: nop

    after_19:
    // 0x80229400: jal         0x80060018
    // 0x80229404: nop

    func_80060018_3B418(rdram, ctx);
        goto after_20;
    // 0x80229404: nop

    after_20:
    // 0x80229408: j           L_80229928
    // 0x8022940C: nop

        goto L_80229928;
    // 0x8022940C: nop

L_80229410:
    // 0x80229410: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229414: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80229418: beq         $v0, $zero, L_80229754
    if (ctx->r2 == 0) {
        // 0x8022941C: nop
    
            goto L_80229754;
    }
    // 0x8022941C: nop

    // 0x80229420: j           L_80229928
    // 0x80229424: nop

        goto L_80229928;
    // 0x80229424: nop

L_80229428:
    // 0x80229428: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022942C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229430: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229434: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229438: bne         $v0, $zero, L_80229928
    if (ctx->r2 != 0) {
        // 0x8022943C: nop
    
            goto L_80229928;
    }
    // 0x8022943C: nop

    // 0x80229440: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229444: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80229448: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022944C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229450: jal         0x80070050
    // 0x80229454: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_21;
    // 0x80229454: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_21:
    // 0x80229458: jal         0x80054578
    // 0x8022945C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_80054578_2F978(rdram, ctx);
        goto after_22;
    // 0x8022945C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_22:
    // 0x80229460: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229464: jal         0x80034844
    // 0x80229468: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80034844_FC44(rdram, ctx);
        goto after_23;
    // 0x80229468: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_23:
    // 0x8022946C: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x80229470: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229474: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x80229478: sb          $s0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r16;
    // 0x8022947C: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x80229480: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229484: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x80229488: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x8022948C: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229490: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80229494: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80229498: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x8022949C: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
    // 0x802294A0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802294A4: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802294A8: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x802294AC: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x802294B0: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802294B4: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x802294B8: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x802294BC: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x802294C0: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x802294C4: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x802294C8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802294CC: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x802294D0: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x802294D4: addiu       $v0, $zero, -0x13D
    ctx->r2 = ADD32(0, -0X13D);
    // 0x802294D8: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x802294DC: jal         0x8004F418
    // 0x802294E0: lw          $a0, 0x28($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_24;
    // 0x802294E0: lw          $a0, 0x28($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X28);
    after_24:
    // 0x802294E4: jal         0x8004F418
    // 0x802294E8: lw          $a0, 0x2C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_25;
    // 0x802294E8: lw          $a0, 0x2C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2C);
    after_25:
    // 0x802294EC: jal         0x8004F418
    // 0x802294F0: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_26;
    // 0x802294F0: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    after_26:
    // 0x802294F4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802294F8: addiu       $s0, $s0, 0x49E0
    ctx->r16 = ADD32(ctx->r16, 0X49E0);
    // 0x802294FC: jal         0x8005FA7C
    // 0x80229500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_27;
    // 0x80229500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_27:
    // 0x80229504: jal         0x8005FA7C
    // 0x80229508: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_28;
    // 0x80229508: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_28:
    // 0x8022950C: jal         0x8006036C
    // 0x80229510: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_29;
    // 0x80229510: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_29:
    // 0x80229514: j           L_80229914
    // 0x80229518: nop

        goto L_80229914;
    // 0x80229518: nop

L_8022951C:
    // 0x8022951C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80229520: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229524: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80229528: addiu       $s0, $s0, 0x47B8
    ctx->r16 = ADD32(ctx->r16, 0X47B8);
    // 0x8022952C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229530: sb          $s1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r17;
    // 0x80229534: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229538: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022953C: jal         0x8006033C
    // 0x80229540: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    func_8006033C_3B73C(rdram, ctx);
        goto after_30;
    // 0x80229540: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    after_30:
    // 0x80229544: beq         $v0, $zero, L_8022955C
    if (ctx->r2 == 0) {
        // 0x80229548: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022955C;
    }
    // 0x80229548: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022954C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229550: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80229554: j           L_80229568
    // 0x80229558: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80229568;
    // 0x80229558: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022955C:
    // 0x8022955C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229560: sb          $s1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r17;
    // 0x80229564: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80229568:
    // 0x80229568: sb          $v0, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r2;
    // 0x8022956C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229570: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x80229574: j           L_80229754
    // 0x80229578: sb          $v0, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r2;
        goto L_80229754;
    // 0x80229578: sb          $v0, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r2;
L_8022957C:
    // 0x8022957C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80229580: addiu       $s0, $s0, 0x47CC
    ctx->r16 = ADD32(ctx->r16, 0X47CC);
    // 0x80229584: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x80229588: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022958C: bne         $v1, $v0, L_80229928
    if (ctx->r3 != ctx->r2) {
        // 0x80229590: nop
    
            goto L_80229928;
    }
    // 0x80229590: nop

    // 0x80229594: lw          $a0, 0x24($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X24);
    // 0x80229598: beq         $a0, $zero, L_802295A8
    if (ctx->r4 == 0) {
        // 0x8022959C: nop
    
            goto L_802295A8;
    }
    // 0x8022959C: nop

    // 0x802295A0: jal         0x8004F418
    // 0x802295A4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_31;
    // 0x802295A4: nop

    after_31:
L_802295A8:
    // 0x802295A8: jal         0x80054578
    // 0x802295AC: nop

    func_80054578_2F978(rdram, ctx);
        goto after_32;
    // 0x802295AC: nop

    after_32:
    // 0x802295B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802295B8: jal         0x80034844
    // 0x802295BC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_33;
    // 0x802295BC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_33:
    // 0x802295C0: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x802295C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295C8: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
    // 0x802295CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802295D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295D4: j           L_80229928
    // 0x802295D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80229928;
    // 0x802295D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_802295DC:
    // 0x802295DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802295E0: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x802295E4: bne         $v0, $zero, L_80229928
    if (ctx->r2 != 0) {
        // 0x802295E8: addiu       $v0, $zero, -0x4E
        ctx->r2 = ADD32(0, -0X4E);
            goto L_80229928;
    }
    // 0x802295E8: addiu       $v0, $zero, -0x4E
    ctx->r2 = ADD32(0, -0X4E);
    // 0x802295EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802295F0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802295F4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802295F8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802295FC: addiu       $s1, $s1, 0x4990
    ctx->r17 = ADD32(ctx->r17, 0X4990);
    // 0x80229600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229604: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80229608: sh          $v0, 0x438($s5)
    MEM_H(0X438, ctx->r21) = ctx->r2;
    // 0x8022960C: addiu       $v0, $zero, -0x51
    ctx->r2 = ADD32(0, -0X51);
    // 0x80229610: sh          $v0, 0x43C($s5)
    MEM_H(0X43C, ctx->r21) = ctx->r2;
    // 0x80229614: lui         $v0, 0xFFB2
    ctx->r2 = S32(0XFFB2 << 16);
    // 0x80229618: lui         $s2, 0xFFFF
    ctx->r18 = S32(0XFFFF << 16);
    // 0x8022961C: sw          $v0, 0x428($s5)
    MEM_W(0X428, ctx->r21) = ctx->r2;
    // 0x80229620: lui         $v0, 0xFFAF
    ctx->r2 = S32(0XFFAF << 16);
    // 0x80229624: addiu       $s3, $zero, 0x800
    ctx->r19 = ADD32(0, 0X800);
    // 0x80229628: sw          $v0, 0x430($s5)
    MEM_W(0X430, ctx->r21) = ctx->r2;
    // 0x8022962C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229630: sh          $s0, 0x43A($s5)
    MEM_H(0X43A, ctx->r21) = ctx->r16;
    // 0x80229634: sw          $s2, 0x42C($s5)
    MEM_W(0X42C, ctx->r21) = ctx->r18;
    // 0x80229638: sh          $s3, 0x442($s5)
    MEM_H(0X442, ctx->r21) = ctx->r19;
    // 0x8022963C: sb          $v0, 0x448($s5)
    MEM_B(0X448, ctx->r21) = ctx->r2;
    // 0x80229640: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229644: jal         0x8005FA7C
    // 0x80229648: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_34;
    // 0x80229648: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    after_34:
    // 0x8022964C: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229650: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x80229654: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80229658: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x8022965C: sh          $s0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r16;
    // 0x80229660: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229664: addiu       $v0, $zero, -0x65
    ctx->r2 = ADD32(0, -0X65);
    // 0x80229668: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022966C: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229670: lui         $v0, 0x6F
    ctx->r2 = S32(0X6F << 16);
    // 0x80229674: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229678: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x8022967C: sw          $s2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r18;
    // 0x80229680: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229684: lui         $v0, 0xFF9B
    ctx->r2 = S32(0XFF9B << 16);
    // 0x80229688: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022968C: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x80229690: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80229694: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x80229698: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x8022969C: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x802296A0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802296A4: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    // 0x802296A8: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x802296AC: addiu       $a0, $s1, 0x50
    ctx->r4 = ADD32(ctx->r17, 0X50);
    // 0x802296B0: jal         0x8005FA7C
    // 0x802296B4: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_35;
    // 0x802296B4: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_35:
    // 0x802296B8: jal         0x8005FA7C
    // 0x802296BC: addiu       $a0, $s1, 0x64
    ctx->r4 = ADD32(ctx->r17, 0X64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_36;
    // 0x802296BC: addiu       $a0, $s1, 0x64
    ctx->r4 = ADD32(ctx->r17, 0X64);
    after_36:
    // 0x802296C0: jal         0x8005FA7C
    // 0x802296C4: addiu       $a0, $s1, 0x3C
    ctx->r4 = ADD32(ctx->r17, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_37;
    // 0x802296C4: addiu       $a0, $s1, 0x3C
    ctx->r4 = ADD32(ctx->r17, 0X3C);
    after_37:
    // 0x802296C8: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x802296CC: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802296D0: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x802296D4: sb          $s0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r16;
    // 0x802296D8: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x802296DC: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x802296E0: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802296E4: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x802296E8: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x802296EC: addiu       $v0, $zero, -0x13D
    ctx->r2 = ADD32(0, -0X13D);
    // 0x802296F0: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x802296F4: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x802296F8: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802296FC: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x80229700: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x80229704: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229708: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022970C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80229710: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x80229714: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
    // 0x80229718: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8022971C: lw          $v0, 0x34($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X34);
    // 0x80229720: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80229724: lw          $v0, 0x34($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X34);
    // 0x80229728: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x8022972C: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x80229730: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80229734: lw          $v0, 0x38($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X38);
    // 0x80229738: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x8022973C: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x80229740: sh          $s3, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r19;
    // 0x80229744: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x80229748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022974C: jal         0x80036E48
    // 0x80229750: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_80036E48_12248(rdram, ctx);
        goto after_38;
    // 0x80229750: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_38:
L_80229754:
    // 0x80229754: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x80229758: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022975C: j           L_80229928
    // 0x80229760: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
        goto L_80229928;
    // 0x80229760: sb          $v0, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r2;
L_80229764:
    // 0x80229764: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229768: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022976C: bne         $v0, $zero, L_80229928
    if (ctx->r2 != 0) {
        // 0x80229770: nop
    
            goto L_80229928;
    }
    // 0x80229770: nop

    // 0x80229774: jal         0x8006036C
    // 0x80229778: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_39;
    // 0x80229778: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_39:
    // 0x8022977C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229780: jal         0x80070050
    // 0x80229784: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_40;
    // 0x80229784: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_40:
    // 0x80229788: jal         0x8004F418
    // 0x8022978C: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    func_8004F418_2A818(rdram, ctx);
        goto after_41;
    // 0x8022978C: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    after_41:
    // 0x80229790: jal         0x8004F418
    // 0x80229794: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    func_8004F418_2A818(rdram, ctx);
        goto after_42;
    // 0x80229794: lw          $a0, 0x38($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X38);
    after_42:
    // 0x80229798: jal         0x8004F418
    // 0x8022979C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_43;
    // 0x8022979C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    after_43:
    // 0x802297A0: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802297A4: addiu       $s0, $s0, 0x49E0
    ctx->r16 = ADD32(ctx->r16, 0X49E0);
    // 0x802297A8: jal         0x8005FA7C
    // 0x802297AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_44;
    // 0x802297AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_44:
    // 0x802297B0: jal         0x8005FA7C
    // 0x802297B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_45;
    // 0x802297B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_45:
    // 0x802297B8: j           L_80229914
    // 0x802297BC: nop

        goto L_80229914;
    // 0x802297BC: nop

L_802297C0:
    // 0x802297C0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802297C4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802297C8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802297CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802297D0: jal         0x80054578
    // 0x802297D4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_80054578_2F978(rdram, ctx);
        goto after_46;
    // 0x802297D4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_46:
    // 0x802297D8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802297DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297E0: jal         0x80034844
    // 0x802297E4: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80034844_FC44(rdram, ctx);
        goto after_47;
    // 0x802297E4: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_47:
    // 0x802297E8: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802297EC: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x802297F0: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x802297F4: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802297F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802297FC: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80229800: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229804: addiu       $v0, $zero, -0x65
    ctx->r2 = ADD32(0, -0X65);
    // 0x80229808: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022980C: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229810: lui         $v0, 0x6F
    ctx->r2 = S32(0X6F << 16);
    // 0x80229814: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229818: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x8022981C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80229820: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80229824: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229828: lui         $v0, 0xFF9B
    ctx->r2 = S32(0XFF9B << 16);
    // 0x8022982C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80229830: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x80229834: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80229838: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x8022983C: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80229840: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x80229844: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    // 0x80229848: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x8022984C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x80229850: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x80229854: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x80229858: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x8022985C: sb          $s0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r16;
    // 0x80229860: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x80229864: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x80229868: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022986C: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80229870: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x80229874: addiu       $v0, $zero, -0x13D
    ctx->r2 = ADD32(0, -0X13D);
    // 0x80229878: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022987C: jal         0x8004F418
    // 0x80229880: lw          $a0, 0x28($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_48;
    // 0x80229880: lw          $a0, 0x28($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X28);
    after_48:
    // 0x80229884: jal         0x8004F418
    // 0x80229888: lw          $a0, 0x2C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_49;
    // 0x80229888: lw          $a0, 0x2C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2C);
    after_49:
    // 0x8022988C: jal         0x8004F418
    // 0x80229890: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_50;
    // 0x80229890: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    after_50:
    // 0x80229894: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80229898: addiu       $s0, $s0, 0x49E0
    ctx->r16 = ADD32(ctx->r16, 0X49E0);
    // 0x8022989C: jal         0x8005FA7C
    // 0x802298A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_51;
    // 0x802298A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_51:
    // 0x802298A4: jal         0x8005FA7C
    // 0x802298A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_52;
    // 0x802298A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_52:
    // 0x802298AC: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x802298B0: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802298B4: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x802298B8: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x802298BC: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802298C0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802298C4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802298C8: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x802298CC: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
    // 0x802298D0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802298D4: lw          $v1, 0x30($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X30);
    // 0x802298D8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802298DC: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802298E0: lw          $v0, 0x30($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X30);
    // 0x802298E4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x802298E8: jal         0x8006036C
    // 0x802298EC: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_53;
    // 0x802298EC: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_53:
    // 0x802298F0: jal         0x80070050
    // 0x802298F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_54;
    // 0x802298F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_54:
    // 0x802298F8: lw          $a0, 0x28($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X28);
    // 0x802298FC: jal         0x8004F418
    // 0x80229900: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_55;
    // 0x80229900: nop

    after_55:
    // 0x80229904: jal         0x8004F418
    // 0x80229908: lw          $a0, 0x2C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_56;
    // 0x80229908: lw          $a0, 0x2C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X2C);
    after_56:
    // 0x8022990C: jal         0x8004F418
    // 0x80229910: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_57;
    // 0x80229910: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    after_57:
L_80229914:
    // 0x80229914: jal         0x80060590
    // 0x80229918: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_80060590_3B990(rdram, ctx);
        goto after_58;
    // 0x80229918: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_58:
    // 0x8022991C: jal         0x8006027C
    // 0x80229920: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_59;
    // 0x80229920: nop

    after_59:
    // 0x80229924: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
L_80229928:
    // 0x80229928: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022992C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80229930: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80229934: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80229938: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022993C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229940: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229944: jr          $ra
    // 0x80229948: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80229948: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802287FC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287FC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80228800: bne         $v0, $zero, L_80228814
    if (ctx->r2 != 0) {
        // 0x80228804: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80228814;
    }
    // 0x80228804: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228808: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8022880C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80228810: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80228814:
    // 0x80228814: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228818: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022881C: bne         $v1, $v0, L_8022882C
    if (ctx->r3 != ctx->r2) {
        // 0x80228820: nop
    
            goto L_8022882C;
    }
    // 0x80228820: nop

    // 0x80228824: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80228828: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_8022882C:
    // 0x8022882C: jr          $ra
    // 0x80228830: nop

    TRACE_RETURN()
    return;
    // 0x80228830: nop

;}
RECOMP_FUNC void func_80227F80_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227F8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227F90: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F98: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x80227F9C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227FA0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80227FA4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80227FA8: beq         $v0, $zero, L_802282A4
    if (ctx->r2 == 0) {
        // 0x80227FAC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802282A4;
    }
    // 0x80227FAC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227FB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227FB4: addu        $at, $at, $v0
    gpr jr_addend_80227FBC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227FB8: lw          $v0, 0x6FA0($at)
    ctx->r2 = ADD32(ctx->r1, 0X6FA0);
    // 0x80227FBC: jr          $v0
    // 0x80227FC0: nop

    switch (jr_addend_80227FBC >> 2) {
        case 0: goto L_80227FC4; break;
        case 1: goto L_80228020; break;
        case 2: goto L_80228070; break;
        case 3: goto L_8022809C; break;
        case 4: goto L_802280E4; break;
        case 5: goto L_80228180; break;
        case 6: goto L_80228204; break;
        default: switch_error(__func__, 0x80227FBC, 0x80246FA0);
    }
    // 0x80227FC0: nop

L_80227FC4:
    // 0x80227FC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227FC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227FCC: jal         0x8005F6B4
    // 0x80227FD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80227FD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227FD4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80227FD8: jal         0x8004CB2C
    // 0x80227FDC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80227FDC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x80227FE0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80227FE4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227FE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227FEC: addiu       $v0, $v0, 0x43CC
    ctx->r2 = ADD32(ctx->r2, 0X43CC);
    // 0x80227FF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227FF4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80227FF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227FFC: addiu       $v0, $v0, 0x4448
    ctx->r2 = ADD32(ctx->r2, 0X4448);
    // 0x80228000: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80228004: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80228008: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022800C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80228010: jal         0x8004CB2C
    // 0x80228014: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80228014: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_2:
    // 0x80228018: j           L_80228138
    // 0x8022801C: nop

        goto L_80228138;
    // 0x8022801C: nop

L_80228020:
    // 0x80228020: jal         0x8006FF84
    // 0x80228024: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x80228024: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80228028: beq         $v0, $zero, L_802282A4
    if (ctx->r2 == 0) {
        // 0x8022802C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802282A4;
    }
    // 0x8022802C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228030: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228034: addiu       $s0, $s0, 0x4390
    ctx->r16 = ADD32(ctx->r16, 0X4390);
    // 0x80228038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022803C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228040: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80228044: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228048: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022804C: jal         0x8005FA7C
    // 0x80228050: sb          $zero, 0x448($s2)
    MEM_B(0X448, ctx->r18) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80228050: sb          $zero, 0x448($s2)
    MEM_B(0X448, ctx->r18) = 0;
    after_4:
    // 0x80228054: jal         0x8005FA7C
    // 0x80228058: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80228058: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_5:
    // 0x8022805C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80228060: jal         0x80036B1C
    // 0x80228064: ori         $a0, $a0, 0x2F00
    ctx->r4 = ctx->r4 | 0X2F00;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_6;
    // 0x80228064: ori         $a0, $a0, 0x2F00
    ctx->r4 = ctx->r4 | 0X2F00;
    after_6:
    // 0x80228068: j           L_80228138
    // 0x8022806C: nop

        goto L_80228138;
    // 0x8022806C: nop

L_80228070:
    // 0x80228070: jal         0x80036B7C
    // 0x80228074: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_7;
    // 0x80228074: nop

    after_7:
    // 0x80228078: beq         $v0, $zero, L_802282A4
    if (ctx->r2 == 0) {
        // 0x8022807C: nop
    
            goto L_802282A4;
    }
    // 0x8022807C: nop

    // 0x80228080: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228084: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228088: jal         0x8004A1AC
    // 0x8022808C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8004A1AC_255AC(rdram, ctx);
        goto after_8;
    // 0x8022808C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_8:
    // 0x80228090: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80228094: j           L_8022813C
    // 0x80228098: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_8022813C;
    // 0x80228098: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022809C:
    // 0x8022809C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802280A0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802280A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280A8: bne         $v0, $v1, L_802282A4
    if (ctx->r2 != ctx->r3) {
        // 0x802280AC: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_802282A4;
    }
    // 0x802280AC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x802280B0: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x802280B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802280B8: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x802280BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280C0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x802280C4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802280C8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802280CC: addiu       $a0, $a0, 0x43A4
    ctx->r4 = ADD32(ctx->r4, 0X43A4);
    // 0x802280D0: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x802280D4: jal         0x8005FA7C
    // 0x802280D8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_9;
    // 0x802280D8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_9:
    // 0x802280DC: j           L_802282A4
    // 0x802280E0: nop

        goto L_802282A4;
    // 0x802280E0: nop

L_802280E4:
    // 0x802280E4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802280E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802280EC: beq         $v1, $v0, L_80228138
    if (ctx->r3 == ctx->r2) {
        // 0x802280F0: nop
    
            goto L_80228138;
    }
    // 0x802280F0: nop

    // 0x802280F4: jal         0x8006072C
    // 0x802280F8: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_10;
    // 0x802280F8: nop

    after_10:
    // 0x802280FC: beq         $v0, $zero, L_80228148
    if (ctx->r2 == 0) {
        // 0x80228100: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228148;
    }
    // 0x80228100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228104: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80228108: bne         $v1, $v0, L_80228148
    if (ctx->r3 != ctx->r2) {
        // 0x8022810C: nop
    
            goto L_80228148;
    }
    // 0x8022810C: nop

    // 0x80228110: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228114: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80228118: bne         $v0, $zero, L_80228148
    if (ctx->r2 != 0) {
        // 0x8022811C: nop
    
            goto L_80228148;
    }
    // 0x8022811C: nop

    // 0x80228120: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80228124: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80228128: bne         $v0, $zero, L_80228148
    if (ctx->r2 != 0) {
        // 0x8022812C: nop
    
            goto L_80228148;
    }
    // 0x8022812C: nop

    // 0x80228130: jal         0x80036E48
    // 0x80228134: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_11;
    // 0x80228134: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_11:
L_80228138:
    // 0x80228138: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_8022813C:
    // 0x8022813C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228140: j           L_802282A4
    // 0x80228144: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_802282A4;
    // 0x80228144: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80228148:
    // 0x80228148: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022814C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228150: beq         $v1, $v0, L_80228168
    if (ctx->r3 == ctx->r2) {
        // 0x80228154: nop
    
            goto L_80228168;
    }
    // 0x80228154: nop

    // 0x80228158: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x8022815C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80228160: jalr        $v0
    // 0x80228164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x80228164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
L_80228168:
    // 0x80228168: jal         0x8005FB90
    // 0x8022816C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_13;
    // 0x8022816C: nop

    after_13:
    // 0x80228170: jal         0x80060018
    // 0x80228174: nop

    func_80060018_3B418(rdram, ctx);
        goto after_14;
    // 0x80228174: nop

    after_14:
    // 0x80228178: j           L_802282A4
    // 0x8022817C: nop

        goto L_802282A4;
    // 0x8022817C: nop

L_80228180:
    // 0x80228180: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80228184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228188: bne         $v1, $v0, L_802281AC
    if (ctx->r3 != ctx->r2) {
        // 0x8022818C: addiu       $v1, $zero, 0x58
        ctx->r3 = ADD32(0, 0X58);
            goto L_802281AC;
    }
    // 0x8022818C: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
    // 0x80228190: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80228194: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228198: bne         $v0, $v1, L_802281AC
    if (ctx->r2 != ctx->r3) {
        // 0x8022819C: sw          $v0, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->r2;
            goto L_802281AC;
    }
    // 0x8022819C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x802281A0: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x802281A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802281A8: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_802281AC:
    // 0x802281AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802281B0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802281B4: bne         $v0, $zero, L_802282A4
    if (ctx->r2 != 0) {
        // 0x802281B8: nop
    
            goto L_802282A4;
    }
    // 0x802281B8: nop

    // 0x802281BC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802281C0: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x802281C4: bne         $v0, $zero, L_802282A4
    if (ctx->r2 != 0) {
        // 0x802281C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282A4;
    }
    // 0x802281C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802281CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281D0: jal         0x80034844
    // 0x802281D4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_15;
    // 0x802281D4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_15:
    // 0x802281D8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x802281DC: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    // 0x802281E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281E4: jal         0x8006033C
    // 0x802281E8: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x802281E8: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    after_16:
    // 0x802281EC: bne         $v0, $zero, L_802282A4
    if (ctx->r2 != 0) {
        // 0x802281F0: nop
    
            goto L_802282A4;
    }
    // 0x802281F0: nop

    // 0x802281F4: jal         0x80060D38
    // 0x802281F8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80060D38_3C138(rdram, ctx);
        goto after_17;
    // 0x802281F8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_17:
    // 0x802281FC: j           L_802282A4
    // 0x80228200: nop

        goto L_802282A4;
    // 0x80228200: nop

L_80228204:
    // 0x80228204: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228208: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022820C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228210: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228214: bne         $v0, $zero, L_802282A4
    if (ctx->r2 != 0) {
        // 0x80228218: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802282A4;
    }
    // 0x80228218: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022821C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228220: jal         0x80036B00
    // 0x80228224: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_18;
    // 0x80228224: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80228228: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022822C: addiu       $s0, $s0, 0x49B9
    ctx->r16 = ADD32(ctx->r16, 0X49B9);
    // 0x80228230: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228234: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228238: jal         0x80034844
    // 0x8022823C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_19;
    // 0x8022823C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_19:
    // 0x80228240: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80228244: jal         0x8004CB2C
    // 0x80228248: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_20;
    // 0x80228248: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_20:
    // 0x8022824C: lbu         $v1, -0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0X9);
    // 0x80228250: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228254: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228258: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022825C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228260: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228264: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80228268: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022826C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228270: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80228274: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228278: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022827C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228280: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228284: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228288: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022828C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228290: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80228294: sb          $zero, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = 0;
    // 0x80228298: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x8022829C: sb          $v1, -0x9($s0)
    MEM_B(-0X9, ctx->r16) = ctx->r3;
    // 0x802282A0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_802282A4:
    // 0x802282A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802282A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802282AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802282B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282B4: jr          $ra
    // 0x802282B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802282B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802385C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802385C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802385C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802385CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802385D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802385D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802385D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802385DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802385E0: jal         0x8004D5D4
    // 0x802385E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802385E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802385E8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802385EC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802385F0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802385F4: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802385F8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802385FC: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x80238600: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x80238604: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80238608: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x8023860C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238610: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80238614: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x80238618: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023861C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80238620: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80238624: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80238628: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8023862C: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x80238630: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80238634: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80238638: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023863C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80238640: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80238644: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80238648: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023864C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80238650: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80238654: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80238658: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023865C: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x80238660: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80238664: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x80238668: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x8023866C: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x80238670: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80238674: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x80238678: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x8023867C: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x80238680: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80238684: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80238688: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023868C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238690: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80238694: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80238698: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023869C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802386A0: jal         0x80050294
    // 0x802386A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802386A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_1:
    // 0x802386A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802386AC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802386B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802386B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802386B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802386BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802386C0: jr          $ra
    // 0x802386C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802386C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FDB0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FDB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FDB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FDBC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022FDC0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FDC8: jal         0x8009A3B4
    // 0x8022FDCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FDCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022FDD0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022FDD4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022FDD8: jal         0x8009A3B4
    // 0x8022FDDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022FDDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022FDE0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022FDE4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022FDE8: jal         0x8009A3B4
    // 0x8022FDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022FDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022FDF0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FDF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FDF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FDFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FE00: lw          $v0, 0x5C5C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C5C);
    // 0x8022FE04: jalr        $v0
    // 0x8022FE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022FE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022FE0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FE10: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022FE14: beq         $v0, $zero, L_8022FE2C
    if (ctx->r2 == 0) {
        // 0x8022FE18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE2C;
    }
    // 0x8022FE18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE1C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022FE20: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022FE24: jal         0x8003B564
    // 0x8022FE28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022FE28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022FE2C:
    // 0x8022FE2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE34: jr          $ra
    // 0x8022FE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228918_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022891C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228920: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228928: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022892C: bne         $v0, $zero, L_8022897C
    if (ctx->r2 != 0) {
        // 0x80228930: nop
    
            goto L_8022897C;
    }
    // 0x80228930: nop

    // 0x80228934: jal         0x8004F418
    // 0x80228938: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80228938: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x8022893C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80228940: addiu       $v1, $zero, 0x38
    ctx->r3 = ADD32(0, 0X38);
L_80228944:
    // 0x80228944: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228948: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022894C: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x80228950: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80228954: slti        $v0, $a0, 0x5
    ctx->r2 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x80228958: bne         $v0, $zero, L_80228944
    if (ctx->r2 != 0) {
        // 0x8022895C: addiu       $v1, $v1, 0x38
        ctx->r3 = ADD32(ctx->r3, 0X38);
            goto L_80228944;
    }
    // 0x8022895C: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x80228960: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80228964: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x80228968: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022896C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80228970: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80228974: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228978: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
L_8022897C:
    // 0x8022897C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80228980: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80228984: bne         $v1, $v0, L_80228998
    if (ctx->r3 != ctx->r2) {
        // 0x80228988: addiu       $v0, $zero, 0xBE
        ctx->r2 = ADD32(0, 0XBE);
            goto L_80228998;
    }
    // 0x80228988: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x8022898C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80228990: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80228994: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_80228998:
    // 0x80228998: bne         $v1, $v0, L_802289B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022899C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802289B0;
    }
    // 0x8022899C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802289A0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802289A4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802289A8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802289AC: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
L_802289B0:
    // 0x802289B0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802289B4: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x802289B8: bne         $v1, $v0, L_802289D0
    if (ctx->r3 != ctx->r2) {
        // 0x802289BC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_802289D0;
    }
    // 0x802289BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802289C0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802289C4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802289C8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802289CC: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
L_802289D0:
    // 0x802289D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802289D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289D8: jr          $ra
    // 0x802289DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802289DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802307AC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802307AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802307B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802307B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802307B8: beq         $a1, $zero, L_80230808
    if (ctx->r5 == 0) {
        // 0x802307BC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80230808;
    }
    // 0x802307BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802307C0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802307C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802307C8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802307CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802307D0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802307D4: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x802307D8: bne         $v0, $zero, L_80230808
    if (ctx->r2 != 0) {
        // 0x802307DC: nop
    
            goto L_80230808;
    }
    // 0x802307DC: nop

    // 0x802307E0: jal         0x800A3450
    // 0x802307E4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802307E4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x802307E8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802307EC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802307F0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802307F4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802307F8: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x802307FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230800: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230804: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_80230808:
    // 0x80230808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023080C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230810: jr          $ra
    // 0x80230814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DF7C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DF80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DF84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DF88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DF8C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x8022DF90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022DF94: jal         0x8004FA7C
    // 0x8022DF98: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022DF98: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022DF9C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022DFA0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022DFA4: bne         $v0, $zero, L_8022DFF0
    if (ctx->r2 != 0) {
        // 0x8022DFA8: nop
    
            goto L_8022DFF0;
    }
    // 0x8022DFA8: nop

    // 0x8022DFAC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022DFB0: beq         $v0, $zero, L_8022DFC4
    if (ctx->r2 == 0) {
        // 0x8022DFB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DFC4;
    }
    // 0x8022DFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFB8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022DFBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DFC0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022DFC4:
    // 0x8022DFC4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022DFC8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022DFCC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x8022DFD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DFD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFDC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022DFE0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022DFE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DFE8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022DFEC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_8022DFF0:
    // 0x8022DFF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DFF4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022DFF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DFFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E008: jr          $ra
    // 0x8022E00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E170_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E174: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023E178: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023E17C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E180: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023E184: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023E188: lw          $v0, 0x6C2C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C2C);
    // 0x8023E18C: jalr        $v0
    // 0x8023E190: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023E190: nop

    after_0:
    // 0x8023E194: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023E198: jr          $ra
    // 0x8023E19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023E19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DAC0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DAC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DAC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DAD0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022DAD4: bgez        $v0, L_8022DAEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DAD8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022DAEC;
    }
    // 0x8022DAD8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DADC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DAE0: jal         0x8022F588
    // 0x8022DAE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022F588_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022DAE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DAE8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022DAEC:
    // 0x8022DAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAF4: jr          $ra
    // 0x8022DAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4A4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4A4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022D4A8: bltzl       $v0, L_8022D4B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D4AC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022D4B0;
    }
    goto skip_0;
    // 0x8022D4AC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022D4B0:
    // 0x8022D4B0: jr          $ra
    // 0x8022D4B4: nop

    TRACE_RETURN()
    return;
    // 0x8022D4B4: nop

;}
RECOMP_FUNC void func_80226B10_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226B20: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80226B24: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226B28: lw          $a0, 0x7958($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7958);
    // 0x80226B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B30: beq         $v1, $v0, L_80226B70
    if (ctx->r3 == ctx->r2) {
        // 0x80226B34: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226B70;
    }
    // 0x80226B34: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226B38: beql        $v0, $zero, L_80226B50
    if (ctx->r2 == 0) {
        // 0x80226B3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226B50;
    }
    goto skip_0;
    // 0x80226B3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226B40: beq         $v1, $zero, L_80226B60
    if (ctx->r3 == 0) {
        // 0x80226B44: addiu       $v1, $zero, 0x258
        ctx->r3 = ADD32(0, 0X258);
            goto L_80226B60;
    }
    // 0x80226B44: addiu       $v1, $zero, 0x258
    ctx->r3 = ADD32(0, 0X258);
    // 0x80226B48: j           L_80226BB8
    // 0x80226B4C: nop

        goto L_80226BB8;
    // 0x80226B4C: nop

L_80226B50:
    // 0x80226B50: beq         $v1, $v0, L_80226B94
    if (ctx->r3 == ctx->r2) {
        // 0x80226B54: nop
    
            goto L_80226B94;
    }
    // 0x80226B54: nop

    // 0x80226B58: j           L_80226BB8
    // 0x80226B5C: nop

        goto L_80226BB8;
    // 0x80226B5C: nop

L_80226B60:
    // 0x80226B60: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226B64: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80226B68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226B6C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80226B70:
    // 0x80226B70: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80226B74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226B78: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226B7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226B80: bne         $v0, $zero, L_80226BB8
    if (ctx->r2 != 0) {
        // 0x80226B84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226BB8;
    }
    // 0x80226B84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226B88: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80226B8C: j           L_80226BAC
    // 0x80226B90: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
        goto L_80226BAC;
    // 0x80226B90: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_80226B94:
    // 0x80226B94: jal         0x8006033C
    // 0x80226B98: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80226B98: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_0:
    // 0x80226B9C: beq         $v0, $zero, L_80226BB8
    if (ctx->r2 == 0) {
        // 0x80226BA0: nop
    
            goto L_80226BB8;
    }
    // 0x80226BA0: nop

    // 0x80226BA4: jal         0x80060590
    // 0x80226BA8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80226BA8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
L_80226BAC:
    // 0x80226BAC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226BB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226BB4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80226BB8:
    // 0x80226BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226BBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BC0: jr          $ra
    // 0x80226BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023ED58_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ED58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023ED5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023ED60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ED64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023ED68: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023ED6C: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8023ED70: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023ED74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023ED78: beq         $a1, $zero, L_8023EE6C
    if (ctx->r5 == 0) {
        // 0x8023ED7C: sw          $s2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r18;
            goto L_8023EE6C;
    }
    // 0x8023ED7C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023ED80: lhu         $a3, 0x14($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X14);
    // 0x8023ED84: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023ED88: sh          $a3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r7;
    // 0x8023ED8C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023ED90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023ED94: sra         $v1, $v1, 26
    ctx->r3 = S32(SIGNED(ctx->r3) >> 26);
    // 0x8023ED98: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8023ED9C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023EDA0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8023EDA4: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x8023EDA8: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023EDAC: beq         $v1, $zero, L_8023EDE0
    if (ctx->r3 == 0) {
        // 0x8023EDB0: sh          $a2, 0x14($sp)
        MEM_H(0X14, ctx->r29) = ctx->r6;
            goto L_8023EDE0;
    }
    // 0x8023EDB0: sh          $a2, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r6;
    // 0x8023EDB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023EDB8: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
    // 0x8023EDBC: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x8023EDC0: jal         0x8003ECF0
    // 0x8023EDC4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_0;
    // 0x8023EDC4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023EDC8: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8023EDCC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023EDD0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023EDD4: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8023EDD8: j           L_8023EE08
    // 0x8023EDDC: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
        goto L_8023EE08;
    // 0x8023EDDC: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
L_8023EDE0:
    // 0x8023EDE0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023EDE4: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
    // 0x8023EDE8: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8023EDEC: jal         0x8003ECF0
    // 0x8023EDF0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_1;
    // 0x8023EDF0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8023EDF4: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8023EDF8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023EDFC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023EE00: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8023EE04: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
L_8023EE08:
    // 0x8023EE08: jal         0x8003ECF0
    // 0x8023EE0C: nop

    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_2;
    // 0x8023EE0C: nop

    after_2:
    // 0x8023EE10: andi        $a0, $s3, 0x2
    ctx->r4 = ctx->r19 & 0X2;
    // 0x8023EE14: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8023EE18: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8023EE1C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023EE20: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8023EE24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023EE28: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023EE2C: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EE30: mflo        $a0
    ctx->r4 = lo;
    // 0x8023EE34: lhu         $a1, 0x4C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4C);
    // 0x8023EE38: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x8023EE3C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023EE40: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023EE44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023EE48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023EE4C: sra         $v0, $a1, 16
    ctx->r2 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023EE50: blez        $v0, L_8023EE60
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023EE54: sh          $v1, 0x54($s0)
        MEM_H(0X54, ctx->r16) = ctx->r3;
            goto L_8023EE60;
    }
    // 0x8023EE54: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x8023EE58: j           L_8023EE64
    // 0x8023EE5C: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
        goto L_8023EE64;
    // 0x8023EE5C: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
L_8023EE60:
    // 0x8023EE60: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_8023EE64:
    // 0x8023EE64: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8023EE68: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_8023EE6C:
    // 0x8023EE6C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023EE70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023EE74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023EE78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023EE7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023EE80: jr          $ra
    // 0x8023EE84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023EE84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80238440_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238448: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023844C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238450: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238458: lw          $v0, 0x60F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X60F0);
    // 0x8023845C: jalr        $v0
    // 0x80238460: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238460: nop

    after_0:
    // 0x80238464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238468: jr          $ra
    // 0x8023846C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023846C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240588_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024058C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240590: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240594: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240598: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8024059C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802405A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802405A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802405A8: jal         0x8009A3B4
    // 0x802405AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802405AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802405B0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802405B4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802405B8: jal         0x8009A3B4
    // 0x802405BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802405BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802405C0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802405C4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802405C8: jal         0x8009A3B4
    // 0x802405CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802405CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802405D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802405D4: jal         0x80240958
    // 0x802405D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80240958_ovl5(rdram, ctx);
        goto after_3;
    // 0x802405D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x802405DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802405E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802405E4: beq         $v1, $v0, L_80240628
    if (ctx->r3 == ctx->r2) {
        // 0x802405E8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80240628;
    }
    // 0x802405E8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802405EC: beql        $v0, $zero, L_80240604
    if (ctx->r2 == 0) {
        // 0x802405F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80240604;
    }
    goto skip_0;
    // 0x802405F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802405F4: beq         $v1, $zero, L_8024061C
    if (ctx->r3 == 0) {
        // 0x802405F8: addiu       $v1, $zero, -0xC00
        ctx->r3 = ADD32(0, -0XC00);
            goto L_8024061C;
    }
    // 0x802405F8: addiu       $v1, $zero, -0xC00
    ctx->r3 = ADD32(0, -0XC00);
    // 0x802405FC: j           L_802407C0
    // 0x80240600: nop

        goto L_802407C0;
    // 0x80240600: nop

L_80240604:
    // 0x80240604: beq         $v1, $v0, L_80240680
    if (ctx->r3 == ctx->r2) {
        // 0x80240608: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80240680;
    }
    // 0x80240608: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024060C: beq         $v1, $v0, L_80240738
    if (ctx->r3 == ctx->r2) {
        // 0x80240610: nop
    
            goto L_80240738;
    }
    // 0x80240610: nop

    // 0x80240614: j           L_802407C0
    // 0x80240618: nop

        goto L_802407C0;
    // 0x80240618: nop

L_8024061C:
    // 0x8024061C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80240620: j           L_8024072C
    // 0x80240624: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
        goto L_8024072C;
    // 0x80240624: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
L_80240628:
    // 0x80240628: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8024062C: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
    // 0x80240630: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80240634: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80240638: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024063C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80240640: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240644: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x80240648: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8024064C: addiu       $v0, $v0, -0xC00
    ctx->r2 = ADD32(ctx->r2, -0XC00);
    // 0x80240650: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80240654: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80240658: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024065C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240660: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80240664: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80240668: bgez        $v0, L_802407C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024066C: nop
    
            goto L_802407C4;
    }
    // 0x8024066C: nop

    // 0x80240670: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80240674: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80240678: j           L_80240728
    // 0x8024067C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80240728;
    // 0x8024067C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_80240680:
    // 0x80240680: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80240684: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80240688: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8024068C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80240690: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80240694: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80240698: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8024069C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802406A0: jal         0x800324B4
    // 0x802406A4: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x802406A4: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    after_4:
    // 0x802406A8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802406AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802406B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802406B4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802406B8: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x802406BC: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802406C0: jal         0x80032498
    // 0x802406C4: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x802406C4: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    after_5:
    // 0x802406C8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802406CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802406D0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802406D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802406D8: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802406DC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802406E0: addiu       $v1, $v1, 0x7D8
    ctx->r3 = ADD32(ctx->r3, 0X7D8);
    // 0x802406E4: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x802406E8: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802406EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802406F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802406F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802406F8: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x802406FC: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80240700: addiu       $v0, $v0, -0xC00
    ctx->r2 = ADD32(ctx->r2, -0XC00);
    // 0x80240704: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80240708: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8024070C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240710: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240714: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80240718: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8024071C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80240720: bne         $v1, $v0, L_802407C0
    if (ctx->r3 != ctx->r2) {
        // 0x80240724: nop
    
            goto L_802407C0;
    }
    // 0x80240724: nop

L_80240728:
    // 0x80240728: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_8024072C:
    // 0x8024072C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240730: j           L_802407C0
    // 0x80240734: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802407C0;
    // 0x80240734: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80240738:
    // 0x80240738: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8024073C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80240740: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80240744: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80240748: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024074C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80240750: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240754: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x80240758: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8024075C: addiu       $v0, $v0, -0xC00
    ctx->r2 = ADD32(ctx->r2, -0XC00);
    // 0x80240760: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80240764: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80240768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024076C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240770: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80240774: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80240778: slti        $v0, $v0, 0x1001
    ctx->r2 = SIGNED(ctx->r2) < 0X1001 ? 1 : 0;
    // 0x8024077C: bne         $v0, $zero, L_802407C0
    if (ctx->r2 != 0) {
        // 0x80240780: addiu       $v0, $zero, -0xB00
        ctx->r2 = ADD32(0, -0XB00);
            goto L_802407C0;
    }
    // 0x80240780: addiu       $v0, $zero, -0xB00
    ctx->r2 = ADD32(0, -0XB00);
    // 0x80240784: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80240788: addiu       $v0, $zero, -0xC00
    ctx->r2 = ADD32(0, -0XC00);
    // 0x8024078C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80240790: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80240794: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80240798: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8024079C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802407A0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802407A4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802407A8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802407AC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x802407B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802407B4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802407B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802407BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802407C0:
    // 0x802407C0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
L_802407C4:
    // 0x802407C4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802407C8: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x802407CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802407D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802407D4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802407D8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802407DC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802407E0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802407E4: jal         0x80240C2C
    // 0x802407E8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_80240C2C_ovl5(rdram, ctx);
        goto after_6;
    // 0x802407E8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_6:
    // 0x802407EC: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x802407F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802407F4: jal         0x8009A3B4
    // 0x802407F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802407F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802407FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80240800: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80240804: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240808: jr          $ra
    // 0x8024080C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024080C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ECB4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ECB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022ECB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ECBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ECC0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022ECC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022ECC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ECCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ECD0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ECD4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ECD8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022ECDC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022ECE0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022ECE4: jal         0x8022F614
    // 0x8022ECE8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022F614_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022ECE8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022ECEC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022ECF0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022ECF4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022ECF8: beq         $v0, $zero, L_8022ED8C
    if (ctx->r2 == 0) {
        // 0x8022ECFC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022ED8C;
    }
    // 0x8022ECFC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022ED00: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ED04: jal         0x8022F578
    // 0x8022ED08: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022F578_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022ED08: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022ED0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ED10: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED14: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022ED18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ED1C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022ED20: jal         0x8004F820
    // 0x8022ED24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022ED24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022ED28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ED2C: bgez        $v0, L_8022ED58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022ED30: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022ED58;
    }
    // 0x8022ED30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ED34: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ED3C: jal         0x8004F820
    // 0x8022ED40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022ED40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022ED44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ED48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022ED4C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022ED50: j           L_8022ED70
    // 0x8022ED54: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022ED70;
    // 0x8022ED54: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022ED58:
    // 0x8022ED58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ED60: jal         0x8004F820
    // 0x8022ED64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022ED64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022ED68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ED6C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022ED70:
    // 0x8022ED70: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022ED74: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022ED78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ED7C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022ED80: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022ED84: j           L_8022EDD4
    // 0x8022ED88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022EDD4;
    // 0x8022ED88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022ED8C:
    // 0x8022ED8C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022ED90: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED94: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022ED98: jal         0x8004F820
    // 0x8022ED9C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022ED9C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022EDA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDA4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022EDA8: beq         $v0, $zero, L_8022EDB8
    if (ctx->r2 == 0) {
        // 0x8022EDAC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022EDB8;
    }
    // 0x8022EDAC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022EDB0: j           L_8022EDBC
    // 0x8022EDB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022EDBC;
    // 0x8022EDB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022EDB8:
    // 0x8022EDB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022EDBC:
    // 0x8022EDBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EDC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EDC4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022EDC8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022EDCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EDD0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022EDD4:
    // 0x8022EDD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EDD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EDDC: jal         0x800610AC
    // 0x8022EDE0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022EDE0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022EDE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022EDE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EDEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EDF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EDF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EDF8: jr          $ra
    // 0x8022EDFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EDFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E0C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E0C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E0D4: jal         0x8022F5C8
    // 0x8022E0D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022E0D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022E0DC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E0E0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E0E4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022E0E8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E0EC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022E0F0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022E0F4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022E0F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E0FC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022E100: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022E104: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x8022E108: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022E10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E110: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E114: jr          $ra
    // 0x8022E118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C0F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C0F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023C0F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023C0FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C100: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C104: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C108: lw          $v0, 0x6618($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6618);
    // 0x8023C10C: jalr        $v0
    // 0x8023C110: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023C110: nop

    after_0:
    // 0x8023C114: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023C118: jr          $ra
    // 0x8023C11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AA74_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA74: jr          $ra
    // 0x8022AA78: nop

    TRACE_RETURN()
    return;
    // 0x8022AA78: nop

;}
