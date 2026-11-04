#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023B4B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4B8: lbu         $v1, 0x48($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X48);
    // 0x8023B4BC: sltiu       $v0, $v1, 0xA0
    ctx->r2 = ctx->r3 < 0XA0 ? 1 : 0;
    // 0x8023B4C0: bne         $v0, $zero, L_8023B4D0
    if (ctx->r2 != 0) {
        // 0x8023B4C4: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_8023B4D0;
    }
    // 0x8023B4C4: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8023B4C8: j           L_8023B4D4
    // 0x8023B4CC: sb          $zero, 0x48($a0)
    MEM_B(0X48, ctx->r4) = 0;
        goto L_8023B4D4;
    // 0x8023B4CC: sb          $zero, 0x48($a0)
    MEM_B(0X48, ctx->r4) = 0;
L_8023B4D0:
    // 0x8023B4D0: sb          $v0, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r2;
L_8023B4D4:
    // 0x8023B4D4: jr          $ra
    // 0x8023B4D8: sb          $zero, 0x49($a0)
    MEM_B(0X49, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8023B4D8: sb          $zero, 0x49($a0)
    MEM_B(0X49, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8023F31C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F31C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023F320: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023F324: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023F328: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023F32C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023F330: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x8023F334: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023F338: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023F33C: beq         $v0, $zero, L_8023F394
    if (ctx->r2 == 0) {
        // 0x8023F340: nop
    
            goto L_8023F394;
    }
    // 0x8023F340: nop

    // 0x8023F344: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023F348: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x8023F34C: jal         0x800324B4
    // 0x8023F350: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8023F350: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x8023F354: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F358: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023F35C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023F360: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8023F364: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8023F368: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8023F36C: jal         0x80032498
    // 0x8023F370: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023F370: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x8023F374: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F378: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023F37C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023F380: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8023F384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F388: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023F38C: j           L_8023F3C4
    // 0x8023F390: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_8023F3C4;
    // 0x8023F390: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_8023F394:
    // 0x8023F394: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023F398: beq         $v0, $zero, L_8023F3B4
    if (ctx->r2 == 0) {
        // 0x8023F39C: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8023F3B4;
    }
    // 0x8023F39C: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x8023F3A0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023F3A4: beq         $v0, $zero, L_8023F3C4
    if (ctx->r2 == 0) {
        // 0x8023F3A8: nop
    
            goto L_8023F3C4;
    }
    // 0x8023F3A8: nop

    // 0x8023F3AC: j           L_8023F3E0
    // 0x8023F3B0: nop

        goto L_8023F3E0;
    // 0x8023F3B0: nop

L_8023F3B4:
    // 0x8023F3B4: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x8023F3B8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023F3BC: bne         $v0, $zero, L_8023F3E0
    if (ctx->r2 != 0) {
        // 0x8023F3C0: nop
    
            goto L_8023F3E0;
    }
    // 0x8023F3C0: nop

L_8023F3C4:
    // 0x8023F3C4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023F3C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023F3CC: bne         $v0, $zero, L_8023F40C
    if (ctx->r2 != 0) {
        // 0x8023F3D0: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_8023F40C;
    }
    // 0x8023F3D0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x8023F3D4: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x8023F3D8: beq         $v0, $zero, L_8023F414
    if (ctx->r2 == 0) {
        // 0x8023F3DC: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_8023F414;
    }
    // 0x8023F3DC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_8023F3E0:
    // 0x8023F3E0: jal         0x8004F144
    // 0x8023F3E4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8023F3E4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x8023F3E8: beq         $v0, $zero, L_8023F3F8
    if (ctx->r2 == 0) {
        // 0x8023F3EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023F3F8;
    }
    // 0x8023F3EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023F3F0: jal         0x8023FC60
    // 0x8023F3F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8023FC60_ovl5(rdram, ctx);
        goto after_3;
    // 0x8023F3F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_8023F3F8:
    // 0x8023F3F8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8023F3FC: jal         0x8004F4F8
    // 0x8023F400: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x8023F400: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023F404: j           L_8023F52C
    // 0x8023F408: nop

        goto L_8023F52C;
    // 0x8023F408: nop

L_8023F40C:
    // 0x8023F40C: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x8023F410: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_8023F414:
    // 0x8023F414: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8023F418: jal         0x8009A3B4
    // 0x8023F41C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023F41C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8023F420: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8023F424: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023F428: jal         0x8009A3B4
    // 0x8023F42C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023F42C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8023F430: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023F434: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8023F438: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023F43C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023F440: beq         $v0, $zero, L_8023F47C
    if (ctx->r2 == 0) {
        // 0x8023F444: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_8023F47C;
    }
    // 0x8023F444: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x8023F448: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023F44C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F450: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F458: lhu         $v1, 0x6C68($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C68);
    // 0x8023F45C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023F460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F464: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x8023F468: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F46C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F470: lhu         $v0, 0x6C6A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C6A);
    // 0x8023F474: j           L_8023F4AC
    // 0x8023F478: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_8023F4AC;
    // 0x8023F478: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023F47C:
    // 0x8023F47C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023F480: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F484: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F488: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F48C: lhu         $v1, 0x6C50($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C50);
    // 0x8023F490: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023F494: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F498: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x8023F49C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F4A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F4A4: lhu         $v0, 0x6C52($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C52);
    // 0x8023F4A8: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023F4AC:
    // 0x8023F4AC: jal         0x8023FB70
    // 0x8023F4B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023FB70_ovl5(rdram, ctx);
        goto after_7;
    // 0x8023F4B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8023F4B4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8023F4B8: jal         0x8004DD04
    // 0x8023F4BC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x8023F4BC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x8023F4C0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8023F4C4: jal         0x8004DD04
    // 0x8023F4C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x8023F4C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x8023F4CC: jal         0x8023F9B8
    // 0x8023F4D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023F9B8_ovl5(rdram, ctx);
        goto after_10;
    // 0x8023F4D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8023F4D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F4D8: beq         $v0, $zero, L_8023F4E8
    if (ctx->r2 == 0) {
        // 0x8023F4DC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023F4E8;
    }
    // 0x8023F4DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F4E0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023F4E4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_8023F4E8:
    // 0x8023F4E8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8023F4EC: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x8023F4F0: bne         $v0, $zero, L_8023F508
    if (ctx->r2 != 0) {
        // 0x8023F4F4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023F508;
    }
    // 0x8023F4F4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023F4F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F4FC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023F500: j           L_8023F50C
    // 0x8023F504: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_8023F50C;
    // 0x8023F504: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_8023F508:
    // 0x8023F508: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8023F50C:
    // 0x8023F50C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023F510: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8023F514: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x8023F518: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x8023F51C: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x8023F520: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x8023F524: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x8023F528: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_8023F52C:
    // 0x8023F52C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023F530: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F534: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023F538: jr          $ra
    // 0x8023F53C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023F53C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234B9C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234BA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234BA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234BAC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234BB0: bne         $v0, $zero, L_80234C08
    if (ctx->r2 != 0) {
        // 0x80234BB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234C08;
    }
    // 0x80234BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234BBC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234BC0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80234BC4: jal         0x8004F144
    // 0x80234BC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80234BC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234BCC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234BD0: beq         $v1, $zero, L_80234C6C
    if (ctx->r3 == 0) {
        // 0x80234BD4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80234C6C;
    }
    // 0x80234BD4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234BD8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80234BDC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234BE0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80234BE4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80234BE8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80234BEC: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x80234BF0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80234BF4: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80234BF8: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80234BFC: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x80234C00: j           L_80234C6C
    // 0x80234C04: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
        goto L_80234C6C;
    // 0x80234C04: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80234C08:
    // 0x80234C08: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80234C0C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234C10: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234C14: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80234C18: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80234C1C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80234C20: jal         0x8004DA90
    // 0x80234C24: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80234C24: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_1:
    // 0x80234C28: jal         0x8003E934
    // 0x80234C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80234C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234C30: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80234C34: addiu       $v1, $v1, -0x140
    ctx->r3 = ADD32(ctx->r3, -0X140);
    // 0x80234C38: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234C3C: beq         $v0, $zero, L_80234C6C
    if (ctx->r2 == 0) {
        // 0x80234C40: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80234C6C;
    }
    // 0x80234C40: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80234C44: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80234C48: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80234C4C: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    // 0x80234C50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234C54: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234C58: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234C5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234C60: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234C64: jal         0x8003491C
    // 0x80234C68: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_3;
    // 0x80234C68: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_80234C6C:
    // 0x80234C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234C70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234C74: jr          $ra
    // 0x80234C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E798_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E79C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E7A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E7A8: lbu         $v0, 0xDF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDF);
    // 0x8023E7AC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8023E7B0: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x8023E7B4: bne         $v0, $v1, L_8023E7D8
    if (ctx->r2 != ctx->r3) {
        // 0x8023E7B8: addiu       $a1, $s0, 0xD0
        ctx->r5 = ADD32(ctx->r16, 0XD0);
            goto L_8023E7D8;
    }
    // 0x8023E7B8: addiu       $a1, $s0, 0xD0
    ctx->r5 = ADD32(ctx->r16, 0XD0);
    // 0x8023E7BC: jal         0x8023EE88
    // 0x8023E7C0: nop

    func_8023EE88_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023E7C0: nop

    after_0:
    // 0x8023E7C4: lbu         $v1, 0xDF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDF);
    // 0x8023E7C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023E7CC: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x8023E7D0: j           L_8023E944
    // 0x8023E7D4: sb          $v1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r3;
        goto L_8023E944;
    // 0x8023E7D4: sb          $v1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r3;
L_8023E7D8:
    // 0x8023E7D8: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8023E7DC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8023E7E0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E7E4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E7E8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023E7EC: sra         $a0, $a0, 26
    ctx->r4 = S32(SIGNED(ctx->r4) >> 26);
    // 0x8023E7F0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023E7F4: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023E7F8: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8023E7FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E800: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023E804: sb          $a0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r4;
    // 0x8023E808: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8023E80C: bne         $a0, $zero, L_8023E81C
    if (ctx->r4 != 0) {
        // 0x8023E810: addiu       $a2, $v0, 0x40
        ctx->r6 = ADD32(ctx->r2, 0X40);
            goto L_8023E81C;
    }
    // 0x8023E810: addiu       $a2, $v0, 0x40
    ctx->r6 = ADD32(ctx->r2, 0X40);
    // 0x8023E814: j           L_8023E828
    // 0x8023E818: addiu       $a2, $v0, 0x41
    ctx->r6 = ADD32(ctx->r2, 0X41);
        goto L_8023E828;
    // 0x8023E818: addiu       $a2, $v0, 0x41
    ctx->r6 = ADD32(ctx->r2, 0X41);
L_8023E81C:
    // 0x8023E81C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E820: beql        $a0, $v0, L_8023E828
    if (ctx->r4 == ctx->r2) {
        // 0x8023E824: addiu       $a3, $v1, 0x41
        ctx->r7 = ADD32(ctx->r3, 0X41);
            goto L_8023E828;
    }
    goto skip_0;
    // 0x8023E824: addiu       $a3, $v1, 0x41
    ctx->r7 = ADD32(ctx->r3, 0X41);
    skip_0:
L_8023E828:
    // 0x8023E828: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x8023E82C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8023E830: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023E834: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E838: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8023E83C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023E840: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E844: bne         $v0, $v1, L_8023E944
    if (ctx->r2 != ctx->r3) {
        // 0x8023E848: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_8023E944;
    }
    // 0x8023E848: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x8023E84C: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8023E850: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023E854: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E858: bne         $v0, $v1, L_8023E944
    if (ctx->r2 != ctx->r3) {
        // 0x8023E85C: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_8023E944;
    }
    // 0x8023E85C: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x8023E860: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8023E864: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023E868: lbu         $v1, 0xC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC);
    // 0x8023E86C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023E870: srl         $t0, $v0, 4
    ctx->r8 = S32(U32(ctx->r2) >> 4);
    // 0x8023E874: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023E878: andi        $a0, $a0, 0x1FF
    ctx->r4 = ctx->r4 & 0X1FF;
    // 0x8023E87C: sltiu       $v1, $v1, 0x2
    ctx->r3 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8023E880: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8023E884: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023E888: beq         $v1, $zero, L_8023E89C
    if (ctx->r3 == 0) {
        // 0x8023E88C: sh          $a0, 0x12($a1)
        MEM_H(0X12, ctx->r5) = ctx->r4;
            goto L_8023E89C;
    }
    // 0x8023E88C: sh          $a0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r4;
    // 0x8023E890: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023E894: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023E898: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
L_8023E89C:
    // 0x8023E89C: lbu         $a0, 0xC($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XC);
    // 0x8023E8A0: addiu       $v0, $a3, -0x40
    ctx->r2 = ADD32(ctx->r7, -0X40);
    // 0x8023E8A4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8023E8A8: addiu       $v0, $a2, -0x40
    ctx->r2 = ADD32(ctx->r6, -0X40);
    // 0x8023E8AC: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8023E8B0: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8023E8B4: beq         $v0, $zero, L_8023E8E0
    if (ctx->r2 == 0) {
        // 0x8023E8B8: srl         $v0, $a0, 1
        ctx->r2 = S32(U32(ctx->r4) >> 1);
            goto L_8023E8E0;
    }
    // 0x8023E8B8: srl         $v0, $a0, 1
    ctx->r2 = S32(U32(ctx->r4) >> 1);
    // 0x8023E8BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E8C0: addiu       $v1, $a2, -0x41
    ctx->r3 = ADD32(ctx->r6, -0X41);
    // 0x8023E8C4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8023E8C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E8CC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E8D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023E8D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E8D8: j           L_8023E900
    // 0x8023E8DC: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
        goto L_8023E900;
    // 0x8023E8DC: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
L_8023E8E0:
    // 0x8023E8E0: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x8023E8E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E8E8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8023E8EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E8F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023E8F4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8023E8F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E8FC: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
L_8023E900:
    // 0x8023E900: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x8023E904: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x8023E908: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023E90C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8023E910: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8023E914: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x8023E918: beq         $v0, $zero, L_8023E92C
    if (ctx->r2 == 0) {
        // 0x8023E91C: sh          $v1, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r3;
            goto L_8023E92C;
    }
    // 0x8023E91C: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
    // 0x8023E920: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x8023E924: j           L_8023E934
    // 0x8023E928: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
        goto L_8023E934;
    // 0x8023E928: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
L_8023E92C:
    // 0x8023E92C: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x8023E930: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023E934:
    // 0x8023E934: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E938: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8023E93C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8023E940: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8023E944:
    // 0x8023E944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E948: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E94C: jr          $ra
    // 0x8023E950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023E950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A0C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A0C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80228A10: bne         $v0, $zero, L_80228A28
    if (ctx->r2 != 0) {
        // 0x80228A14: addiu       $v1, $zero, 0xD
        ctx->r3 = ADD32(0, 0XD);
            goto L_80228A28;
    }
    // 0x80228A14: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x80228A18: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80228A1C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80228A20: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80228A24: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80228A28:
    // 0x80228A28: jr          $ra
    // 0x80228A2C: nop

    TRACE_RETURN()
    return;
    // 0x80228A2C: nop

;}
RECOMP_FUNC void func_8022A290_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A29C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A2A0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A2A4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A2A8: bne         $v1, $v0, L_8022A2D0
    if (ctx->r3 != ctx->r2) {
        // 0x8022A2AC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022A2D0;
    }
    // 0x8022A2AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A2B0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022A2B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A2B8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022A2BC: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022A2C0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022A2C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A2C8: jal         0x800616FC
    // 0x8022A2CC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A2CC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_8022A2D0:
    // 0x8022A2D0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A2D4: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022A2D8: bne         $v0, $zero, L_8022A2FC
    if (ctx->r2 != 0) {
        // 0x8022A2DC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A2FC;
    }
    // 0x8022A2DC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A2E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A2E4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A2E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A2EC: bne         $v0, $zero, L_8022A2FC
    if (ctx->r2 != 0) {
        // 0x8022A2F0: nop
    
            goto L_8022A2FC;
    }
    // 0x8022A2F0: nop

    // 0x8022A2F4: jal         0x800600F8
    // 0x8022A2F8: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A2F8: nop

    after_1:
L_8022A2FC:
    // 0x8022A2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A300: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A304: jr          $ra
    // 0x8022A308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254B4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254C4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802254C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254CC: beq         $v1, $v0, L_80225554
    if (ctx->r3 == ctx->r2) {
        // 0x802254D0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225554;
    }
    // 0x802254D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802254D4: beql        $v0, $zero, L_802254EC
    if (ctx->r2 == 0) {
        // 0x802254D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802254EC;
    }
    goto skip_0;
    // 0x802254D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802254DC: beq         $v1, $zero, L_802254FC
    if (ctx->r3 == 0) {
        // 0x802254E0: nop
    
            goto L_802254FC;
    }
    // 0x802254E0: nop

    // 0x802254E4: j           L_802255BC
    // 0x802254E8: nop

        goto L_802255BC;
    // 0x802254E8: nop

L_802254EC:
    // 0x802254EC: beq         $v1, $v0, L_80225594
    if (ctx->r3 == ctx->r2) {
        // 0x802254F0: nop
    
            goto L_80225594;
    }
    // 0x802254F0: nop

    // 0x802254F4: j           L_802255BC
    // 0x802254F8: nop

        goto L_802255BC;
    // 0x802254F8: nop

L_802254FC:
    // 0x802254FC: jal         0x8006033C
    // 0x80225500: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225500: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_0:
    // 0x80225504: beq         $v0, $zero, L_8022551C
    if (ctx->r2 == 0) {
        // 0x80225508: nop
    
            goto L_8022551C;
    }
    // 0x80225508: nop

    // 0x8022550C: jal         0x80226BEC
    // 0x80225510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_1;
    // 0x80225510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80225514: j           L_802255B8
    // 0x80225518: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_802255B8;
    // 0x80225518: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022551C:
    // 0x8022551C: jal         0x8006033C
    // 0x80225520: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225520: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80225524: beq         $v0, $zero, L_80225544
    if (ctx->r2 == 0) {
        // 0x80225528: nop
    
            goto L_80225544;
    }
    // 0x80225528: nop

    // 0x8022552C: jal         0x80060690
    // 0x80225530: addiu       $a0, $zero, 0x62
    ctx->r4 = ADD32(0, 0X62);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x80225530: addiu       $a0, $zero, 0x62
    ctx->r4 = ADD32(0, 0X62);
    after_3:
    // 0x80225534: jal         0x8006036C
    // 0x80225538: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225538: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_4:
    // 0x8022553C: j           L_802255B8
    // 0x80225540: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_802255B8;
    // 0x80225540: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225544:
    // 0x80225544: jal         0x80226BEC
    // 0x80225548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_5;
    // 0x80225548: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x8022554C: j           L_802255B8
    // 0x80225550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802255B8;
    // 0x80225550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225554:
    // 0x80225554: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225558: lw          $v1, 0x7954($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7954);
    // 0x8022555C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225560: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80225564: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225568: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022556C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80225570: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80225574: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225578: lw          $v1, 0x7958($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7958);
    // 0x8022557C: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80225580: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225584: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80225588: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x8022558C: j           L_802255B8
    // 0x80225590: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
        goto L_802255B8;
    // 0x80225590: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_80225594:
    // 0x80225594: jal         0x8006033C
    // 0x80225598: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225598: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_6:
    // 0x8022559C: beq         $v0, $zero, L_802255BC
    if (ctx->r2 == 0) {
        // 0x802255A0: nop
    
            goto L_802255BC;
    }
    // 0x802255A0: nop

    // 0x802255A4: jal         0x80060690
    // 0x802255A8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80060690_3BA90(rdram, ctx);
        goto after_7;
    // 0x802255A8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_7:
    // 0x802255AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802255B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802255B4: sb          $zero, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = 0;
L_802255B8:
    // 0x802255B8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255BC:
    // 0x802255BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255C4: jr          $ra
    // 0x802255C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239188_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239188: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023918C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80239190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239194: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80239198: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023919C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802391A0: bne         $v0, $zero, L_802391E0
    if (ctx->r2 != 0) {
        // 0x802391A4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802391E0;
    }
    // 0x802391A4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802391A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802391AC: jal         0x80050294
    // 0x802391B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802391B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802391B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802391B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802391BC: jal         0x80239590
    // 0x802391C0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x802391C0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x802391C4: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x802391C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802391CC: sh          $v1, 0x7510($at)
    MEM_H(0X7510, ctx->r1) = ctx->r3;
    // 0x802391D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802391D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802391D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802391DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802391E0:
    // 0x802391E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802391E4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802391E8: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x802391EC: beq         $v1, $v0, L_80239204
    if (ctx->r3 == ctx->r2) {
        // 0x802391F0: addiu       $v0, $zero, 0x15E
        ctx->r2 = ADD32(0, 0X15E);
            goto L_80239204;
    }
    // 0x802391F0: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x802391F4: beq         $v1, $v0, L_80239214
    if (ctx->r3 == ctx->r2) {
        // 0x802391F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239214;
    }
    // 0x802391F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802391FC: j           L_80239224
    // 0x80239200: nop

        goto L_80239224;
    // 0x80239200: nop

L_80239204:
    // 0x80239204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239208: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023920C: j           L_8023921C
    // 0x80239210: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_8023921C;
    // 0x80239210: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_80239214:
    // 0x80239214: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239218: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8023921C:
    // 0x8023921C: jal         0x80239590
    // 0x80239220: nop

    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80239220: nop

    after_2:
L_80239224:
    // 0x80239224: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x80239228: bne         $v0, $zero, L_80239238
    if (ctx->r2 != 0) {
        // 0x8023922C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80239238;
    }
    // 0x8023922C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239230: j           L_8023923C
    // 0x80239234: addiu       $v0, $zero, 0xFF0
    ctx->r2 = ADD32(0, 0XFF0);
        goto L_8023923C;
    // 0x80239234: addiu       $v0, $zero, 0xFF0
    ctx->r2 = ADD32(0, 0XFF0);
L_80239238:
    // 0x80239238: addiu       $v0, $v1, -0x10
    ctx->r2 = ADD32(ctx->r3, -0X10);
L_8023923C:
    // 0x8023923C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80239240: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239244: lh          $v1, 0x7510($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7510);
    // 0x80239248: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8023924C: bne         $v1, $v0, L_80239260
    if (ctx->r3 != ctx->r2) {
        // 0x80239250: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80239260;
    }
    // 0x80239250: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80239254: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239258: j           L_8023926C
    // 0x8023925C: sh          $zero, 0x7510($at)
    MEM_H(0X7510, ctx->r1) = 0;
        goto L_8023926C;
    // 0x8023925C: sh          $zero, 0x7510($at)
    MEM_H(0X7510, ctx->r1) = 0;
L_80239260:
    // 0x80239260: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80239264: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239268: sh          $v0, 0x7510($at)
    MEM_H(0X7510, ctx->r1) = ctx->r2;
L_8023926C:
    // 0x8023926C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80239270: jal         0x80032498
    // 0x80239274: lh          $a0, 0x7510($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7510);
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80239274: lh          $a0, 0x7510($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7510);
    after_3:
    // 0x80239278: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023927C: lh          $a0, 0x7510($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7510);
    // 0x80239280: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80239284: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80239288: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x8023928C: jal         0x800324B4
    // 0x80239290: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x80239290: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_4:
    // 0x80239294: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80239298: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023929C: addiu       $v0, $v0, -0xFA
    ctx->r2 = ADD32(ctx->r2, -0XFA);
    // 0x802392A0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802392A4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802392A8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802392AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802392B0: jr          $ra
    // 0x802392B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802392B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235A78_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235A7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235A80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235A88: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80235A8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235A90: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80235A94: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80235A98: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235A9C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235AA0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80235AA4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80235AA8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80235AAC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80235AB0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80235AB4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80235AB8: jal         0x8004D5D4
    // 0x80235ABC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235ABC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80235AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235AC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235AC8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80235ACC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80235AD0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80235AD4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235AD8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80235ADC: jal         0x8003E934
    // 0x80235AE0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80235AE0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80235AE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235AE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235AEC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80235AF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235AF4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235AF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235AFC: addiu       $v0, $v0, 0x5EF8
    ctx->r2 = ADD32(ctx->r2, 0X5EF8);
    // 0x80235B00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235B04: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80235B08: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80235B0C: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80235B10: jal         0x80050294
    // 0x80235B14: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80235B14: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x80235B18: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235B20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235B24: jr          $ra
    // 0x80235B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CDA8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CDAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CDB0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CDB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022CDB8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022CDBC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022CDC0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CDC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CDC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CDCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CDD0: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x8022CDD4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022CDD8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022CDDC: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x8022CDE0: beq         $s2, $zero, L_8022CFCC
    if (ctx->r18 == 0) {
        // 0x8022CDE4: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_8022CFCC;
    }
    // 0x8022CDE4: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x8022CDE8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022CDEC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022CDF0: beql        $v0, $zero, L_8022CFC4
    if (ctx->r2 == 0) {
        // 0x8022CDF4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022CFC4;
    }
    goto skip_0;
    // 0x8022CDF4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022CDF8: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022CDFC: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022CE00: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8022CE04: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8022CE08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE0C: bgtz        $v0, L_8022CF04
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022CE10: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_8022CF04;
    }
    // 0x8022CE10: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x8022CE14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CE18: lhu         $a0, 0x348($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X348);
    // 0x8022CE1C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x8022CE20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8022CE24: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8022CE28: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022CE2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022CE30: sh          $v0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r2;
    // 0x8022CE34: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8022CE38: andi        $a0, $a0, 0xFFF3
    ctx->r4 = ctx->r4 & 0XFFF3;
    // 0x8022CE3C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CE40: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022CE44: sh          $a0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r4;
    // 0x8022CE48: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022CE4C: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x8022CE50: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8022CE54: lbu         $s2, 0x19($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X19);
L_8022CE58:
    // 0x8022CE58: jal         0x8004F144
    // 0x8022CE5C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022CE5C: nop

    after_0:
    // 0x8022CE60: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022CE64: beq         $a1, $zero, L_8022CEF8
    if (ctx->r5 == 0) {
        // 0x8022CE68: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_8022CEF8;
    }
    // 0x8022CE68: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8022CE6C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022CE70: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x8022CE74: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x8022CE78: sb          $s4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r20;
    // 0x8022CE7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CE80: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CE84: lbu         $v0, 0x5450($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5450);
    // 0x8022CE88: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CE8C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022CE90: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x8022CE94: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x8022CE98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CE9C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CEA0: lbu         $v0, 0x5450($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5450);
    // 0x8022CEA4: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022CEA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CEAC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022CEB0: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8022CEB4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022CEB8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CEBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CEC0: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8022CEC4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CEC8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CECC: lbu         $v0, 0x5450($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5450);
    // 0x8022CED0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CED4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022CED8: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x8022CEDC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8022CEE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022CEE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CEE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CEEC: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022CEF0: bne         $v0, $zero, L_8022CE58
    if (ctx->r2 != 0) {
        // 0x8022CEF4: sh          $v1, 0x20($a1)
        MEM_H(0X20, ctx->r5) = ctx->r3;
            goto L_8022CE58;
    }
    // 0x8022CEF4: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
L_8022CEF8:
    // 0x8022CEF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CEFC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022CF00: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022CF04:
    // 0x8022CF04: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8022CF08: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022CF0C: beq         $v0, $zero, L_8022CFB0
    if (ctx->r2 == 0) {
        // 0x8022CF10: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022CFB0;
    }
    // 0x8022CF10: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022CF14: lhu         $v0, 0xA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XA);
    // 0x8022CF18: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x8022CF1C: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8022CF20: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022CF24: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022CF28: bne         $v1, $zero, L_8022CF60
    if (ctx->r3 != 0) {
        // 0x8022CF2C: sh          $a0, 0xA($s3)
        MEM_H(0XA, ctx->r19) = ctx->r4;
            goto L_8022CF60;
    }
    // 0x8022CF2C: sh          $a0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r4;
    // 0x8022CF30: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022CF34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022CF38: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022CF3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CF40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CF44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022CF48: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x8022CF4C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022CF50: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CF54: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022CF58: bnel        $v0, $zero, L_8022CFB8
    if (ctx->r2 != 0) {
        // 0x8022CF5C: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_8022CFB8;
    }
    goto skip_1;
    // 0x8022CF5C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_1:
L_8022CF60:
    // 0x8022CF60: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022CF64: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022CF68: jal         0x8002A33C
    // 0x8022CF6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022CF6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF74: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022CF78: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022CF7C: jal         0x8004FEA0
    // 0x8022CF80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x8022CF80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022CF84: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x8022CF88: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022CF8C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022CF90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CF94: bne         $v0, $zero, L_8022CFA0
    if (ctx->r2 != 0) {
        // 0x8022CF98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CFA0;
    }
    // 0x8022CF98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CFA0:
    // 0x8022CFA0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022CFA4: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x8022CFA8: j           L_8022CFB8
    // 0x8022CFAC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022CFB8;
    // 0x8022CFAC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022CFB0:
    // 0x8022CFB0: jal         0x8002A33C
    // 0x8022CFB4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022CFB4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
L_8022CFB8:
    // 0x8022CFB8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022CFBC: j           L_8022CFCC
    // 0x8022CFC0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
        goto L_8022CFCC;
    // 0x8022CFC0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_8022CFC4:
    // 0x8022CFC4: jal         0x8002A33C
    // 0x8022CFC8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022CFC8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_8022CFCC:
    // 0x8022CFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CFD4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022CFD8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022CFDC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022CFE0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CFE4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CFE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CFEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CFF0: jr          $ra
    // 0x8022CFF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CFF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022CFF8: nop

    // 0x8022CFFC: nop

;}
RECOMP_FUNC void func_80227908_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022790C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227910: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227914: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227918: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022791C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80227920: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227924: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80227928: beq         $v1, $zero, L_80227940
    if (ctx->r3 == 0) {
        // 0x8022792C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227940;
    }
    // 0x8022792C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227930: beq         $v1, $v0, L_80227968
    if (ctx->r3 == ctx->r2) {
        // 0x80227934: nop
    
            goto L_80227968;
    }
    // 0x80227934: nop

    // 0x80227938: j           L_802279FC
    // 0x8022793C: nop

        goto L_802279FC;
    // 0x8022793C: nop

L_80227940:
    // 0x80227940: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227944: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227948: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022794C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80227950: jal         0x80036B1C
    // 0x80227954: lw          $a0, 0x4364($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4364);
    func_80036B1C_11F1C(rdram, ctx);
        goto after_0;
    // 0x80227954: lw          $a0, 0x4364($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4364);
    after_0:
    // 0x80227958: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022795C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227960: j           L_802279FC
    // 0x80227964: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802279FC;
    // 0x80227964: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227968:
    // 0x80227968: jal         0x80036B7C
    // 0x8022796C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x8022796C: nop

    after_1:
    // 0x80227970: beq         $v0, $zero, L_802279FC
    if (ctx->r2 == 0) {
        // 0x80227974: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802279FC;
    }
    // 0x80227974: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227978: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022797C: jal         0x8005F6B4
    // 0x80227980: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80227980: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80227984: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227988: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022798C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227990: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227994: lw          $v0, 0x433C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X433C);
    // 0x80227998: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022799C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802279A0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802279A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802279A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802279AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802279B0: lw          $v0, 0x4350($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4350);
    // 0x802279B4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x802279B8: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x802279BC: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802279C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802279C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279C8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802279CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279D0: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802279D4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802279D8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x802279DC: jal         0x8005FB90
    // 0x802279E0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x802279E0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_3:
    // 0x802279E4: jal         0x80060018
    // 0x802279E8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x802279E8: nop

    after_4:
    // 0x802279EC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802279F0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802279F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279F8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802279FC:
    // 0x802279FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227A00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227A04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A08: jr          $ra
    // 0x80227A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229A18_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A28: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229A2C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80229A30: bne         $v1, $v0, L_80229A70
    if (ctx->r3 != ctx->r2) {
        // 0x80229A34: nop
    
            goto L_80229A70;
    }
    // 0x80229A34: nop

    // 0x80229A38: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80229A3C: jal         0x8005FA7C
    // 0x80229A40: addiu       $a0, $a0, 0x4990
    ctx->r4 = ADD32(ctx->r4, 0X4990);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80229A40: addiu       $a0, $a0, 0x4990
    ctx->r4 = ADD32(ctx->r4, 0X4990);
    after_0:
    // 0x80229A44: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229A48: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80229A4C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80229A50: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80229A54: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229A58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A5C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80229A60: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229A64: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229A68: jal         0x800600F8
    // 0x80229A6C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229A6C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    after_1:
L_80229A70:
    // 0x80229A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229A74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A78: jr          $ra
    // 0x80229A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257C0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257D0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257D4: bne         $v0, $zero, L_80225810
    if (ctx->r2 != 0) {
        // 0x802257D8: nop
    
            goto L_80225810;
    }
    // 0x802257D8: nop

    // 0x802257DC: jal         0x80226BEC
    // 0x802257E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_0;
    // 0x802257E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x802257E4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257E8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802257EC: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    // 0x802257F0: jal         0x8003E87C
    // 0x802257F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_8003E87C_19C7C(rdram, ctx);
        goto after_1;
    // 0x802257F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_1:
    // 0x802257F8: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x802257FC: bne         $v0, $v1, L_80225808
    if (ctx->r2 != ctx->r3) {
        // 0x80225800: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80225808;
    }
    // 0x80225800: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80225804: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80225808:
    // 0x80225808: jal         0x80226D28
    // 0x8022580C: nop

    func_80226D28_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022580C: nop

    after_2:
L_80225810:
    // 0x80225810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225814: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225818: jr          $ra
    // 0x8022581C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022581C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A440_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A44C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A450: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A454: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8022A458: bne         $v1, $v0, L_8022A480
    if (ctx->r3 != ctx->r2) {
        // 0x8022A45C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022A480;
    }
    // 0x8022A45C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A460: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A464: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A468: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022A46C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022A470: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022A474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A478: jal         0x800616FC
    // 0x8022A47C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A47C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_8022A480:
    // 0x8022A480: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A484: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022A488: bne         $v0, $zero, L_8022A4AC
    if (ctx->r2 != 0) {
        // 0x8022A48C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A4AC;
    }
    // 0x8022A48C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A490: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A494: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A49C: bne         $v0, $zero, L_8022A4AC
    if (ctx->r2 != 0) {
        // 0x8022A4A0: nop
    
            goto L_8022A4AC;
    }
    // 0x8022A4A0: nop

    // 0x8022A4A4: jal         0x800600F8
    // 0x8022A4A8: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A4A8: nop

    after_1:
L_8022A4AC:
    // 0x8022A4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4B4: jr          $ra
    // 0x8022A4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B530_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B538: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B53C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B540: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B544: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B548: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023B54C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8023B550: jal         0x8004D5D4
    // 0x8023B554: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023B554: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B558: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023B55C: jal         0x8002C678
    // 0x8023B560: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8023B560: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023B564: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8023B568: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023B56C: jal         0x800319B4
    // 0x8023B570: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8023B570: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8023B574: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B578: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023B57C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023B580: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8023B584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B588: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B58C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B590: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B594: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B598: jr          $ra
    // 0x8023B59C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B59C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237C98_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80237C9C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80237CA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237CA4: lui         $v1, 0x6400
    ctx->r3 = S32(0X6400 << 16);
    // 0x80237CA8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80237CAC: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80237CB0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80237CB4: addiu       $v0, $s0, 0x2D0
    ctx->r2 = ADD32(ctx->r16, 0X2D0);
    // 0x80237CB8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80237CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237CC0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80237CC4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80237CC8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80237CCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80237CD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80237CD4: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80237CD8: jal         0x80051E18
    // 0x80237CDC: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80237CDC: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
    after_0:
    // 0x80237CE0: sw          $zero, 0x2D0($s0)
    MEM_W(0X2D0, ctx->r16) = 0;
    // 0x80237CE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80237CE8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80237CEC: jr          $ra
    // 0x80237CF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237CF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C130_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C134: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C138: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C13C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C140: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C144: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C148: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C14C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C150: lw          $v0, 0x5410($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5410);
    // 0x8022C154: jalr        $v0
    // 0x8022C158: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C158: nop

    after_0:
    // 0x8022C15C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022C160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C164: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C168: jr          $ra
    // 0x8022C16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B070_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B070: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023B074: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023B078: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B07C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023B080: jal         0x8004EF48
    // 0x8023B084: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x8023B084: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023B088: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023B08C: bne         $s0, $zero, L_8023B09C
    if (ctx->r16 != 0) {
        // 0x8023B090: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023B09C;
    }
    // 0x8023B090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023B094: j           L_8023B120
    // 0x8023B098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023B120;
    // 0x8023B098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023B09C:
    // 0x8023B09C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023B0A0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023B0A4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023B0A8: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x8023B0AC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8023B0B0: lbu         $v0, 0xA4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA4);
    // 0x8023B0B4: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8023B0B8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023B0BC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8023B0C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B0C4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023B0C8: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8023B0CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B0D0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023B0D4: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8023B0D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B0DC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8023B0E0: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8023B0E4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023B0E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B0EC: jal         0x8004DD04
    // 0x8023B0F0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023B0F0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023B0F4: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x8023B0F8: ori         $v0, $v0, 0x5880
    ctx->r2 = ctx->r2 | 0X5880;
    // 0x8023B0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B100: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B108: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8023B10C: sh          $zero, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = 0;
    // 0x8023B110: sh          $zero, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = 0;
    // 0x8023B114: jal         0x8004A00C
    // 0x8023B118: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_2;
    // 0x8023B118: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8023B11C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023B120:
    // 0x8023B120: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023B124: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B128: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023B12C: jr          $ra
    // 0x8023B130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023B130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802390A4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802390A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802390A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802390AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802390B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802390B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802390B8: bne         $v0, $zero, L_802390DC
    if (ctx->r2 != 0) {
        // 0x802390BC: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_802390DC;
    }
    // 0x802390BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802390C0: jal         0x80050294
    // 0x802390C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802390C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802390C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802390CC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802390D0: sb          $v1, 0x118($s0)
    MEM_B(0X118, ctx->r16) = ctx->r3;
    // 0x802390D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802390D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802390DC:
    // 0x802390DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802390E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802390E4: jr          $ra
    // 0x802390E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802390E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802312A4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802312A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802312A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802312AC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802312B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802312B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802312B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802312BC: lw          $v0, 0x5C90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C90);
    // 0x802312C0: jalr        $v0
    // 0x802312C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802312C4: nop

    after_0:
    // 0x802312C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802312CC: jr          $ra
    // 0x802312D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802312D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236D4C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236D4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236D50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236D54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236D58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236D5C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80236D60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236D64: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236D68: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80236D6C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236D70: jal         0x8004D5D4
    // 0x80236D74: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80236D74: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80236D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D7C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236D80: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236D84: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236D88: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236D8C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236D90: jal         0x8003E934
    // 0x80236D94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80236D94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80236D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236DA0: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80236DA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236DA8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80236DAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236DB0: addiu       $v0, $v0, 0x5FBC
    ctx->r2 = ADD32(ctx->r2, 0X5FBC);
    // 0x80236DB4: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x80236DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236DBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236DC0: sh          $zero, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = 0;
    // 0x80236DC4: sh          $zero, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = 0;
    // 0x80236DC8: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x80236DCC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80236DD0: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x80236DD4: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x80236DD8: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x80236DDC: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x80236DE0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80236DE4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80236DE8: jal         0x80050294
    // 0x80236DEC: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80236DEC: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    after_2:
    // 0x80236DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80236DF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236DF8: jr          $ra
    // 0x80236DFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236DFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225AE8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225AF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225AF8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225AFC: bne         $v0, $zero, L_80225B58
    if (ctx->r2 != 0) {
        // 0x80225B00: nop
    
            goto L_80225B58;
    }
    // 0x80225B00: nop

    // 0x80225B04: jal         0x80226BEC
    // 0x80225B08: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225B08: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x80225B0C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225B10: jal         0x8003E87C
    // 0x80225B14: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_1;
    // 0x80225B14: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    after_1:
    // 0x80225B18: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225B1C: bne         $v0, $v1, L_80225B28
    if (ctx->r2 != ctx->r3) {
        // 0x80225B20: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225B28;
    }
    // 0x80225B20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225B24: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80225B28:
    // 0x80225B28: jal         0x80226D28
    // 0x80225B2C: nop

    func_80226D28_ovl5(rdram, ctx);
        goto after_2;
    // 0x80225B2C: nop

    after_2:
    // 0x80225B30: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225B34: jal         0x8003E87C
    // 0x80225B38: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_3;
    // 0x80225B38: addiu       $a0, $a0, 0x30D8
    ctx->r4 = ADD32(ctx->r4, 0X30D8);
    after_3:
    // 0x80225B3C: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225B40: beq         $v0, $v1, L_80225B54
    if (ctx->r2 == ctx->r3) {
        // 0x80225B44: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225B54;
    }
    // 0x80225B44: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B48: jal         0x80226D28
    // 0x80225B4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D28_ovl5(rdram, ctx);
        goto after_4;
    // 0x80225B4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x80225B50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225B54:
    // 0x80225B54: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225B58:
    // 0x80225B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B60: jr          $ra
    // 0x80225B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE48_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EE4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EE54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EE58: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022EE5C: bgez        $v0, L_8022EE90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EE60: nop
    
            goto L_8022EE90;
    }
    // 0x8022EE60: nop

    // 0x8022EE64: jal         0x8022F578
    // 0x8022EE68: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022EE68: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022EE6C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022EE70: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022EE74: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EE78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EE7C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022EE80: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022EE84: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EE88: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022EE8C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022EE90:
    // 0x8022EE90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE98: jr          $ra
    // 0x8022EE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229BB0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229BB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229BB8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80229BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BC0: bne         $v1, $v0, L_80229BD0
    if (ctx->r3 != ctx->r2) {
        // 0x80229BC4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80229BD0;
    }
    // 0x80229BC4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229BC8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80229BCC: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
L_80229BD0:
    // 0x80229BD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229BD4: lw          $v0, 0x4DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4DE0);
    // 0x80229BD8: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x80229BDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229BE4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80229BE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229BEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229BF0: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80229BF4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80229BF8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80229BFC: bne         $v1, $v0, L_80229C4C
    if (ctx->r3 != ctx->r2) {
        // 0x80229C00: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80229C4C;
    }
    // 0x80229C00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229C04: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229C0C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80229C10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229C14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229C18: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80229C1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229C20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229C24: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80229C28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229C2C: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80229C30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229C34: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80229C38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229C3C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80229C40: sb          $v1, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r3;
    // 0x80229C44: jal         0x800600F8
    // 0x80229C48: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80229C48: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    after_0:
L_80229C4C:
    // 0x80229C4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229C50: jr          $ra
    // 0x80229C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F5C8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5C8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022F5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F5D0: beq         $a1, $v0, L_8022F5FC
    if (ctx->r5 == ctx->r2) {
        // 0x8022F5D4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022F5FC;
    }
    // 0x8022F5D4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022F5D8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022F5DC: bne         $a0, $v0, L_8022F5EC
    if (ctx->r4 != ctx->r2) {
        // 0x8022F5E0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022F5EC;
    }
    // 0x8022F5E0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022F5E4: j           L_8022F60C
    // 0x8022F5E8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022F60C;
    // 0x8022F5E8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022F5EC:
    // 0x8022F5EC: bne         $a0, $v1, L_8022F60C
    if (ctx->r4 != ctx->r3) {
        // 0x8022F5F0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022F60C;
    }
    // 0x8022F5F0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022F5F4: j           L_8022F60C
    // 0x8022F5F8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022F60C;
    // 0x8022F5F8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022F5FC:
    // 0x8022F5FC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022F600: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F604: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F608: lbu         $v0, 0x5940($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5940);
L_8022F60C:
    // 0x8022F60C: jr          $ra
    // 0x8022F610: nop

    TRACE_RETURN()
    return;
    // 0x8022F610: nop

;}
RECOMP_FUNC void func_802371A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802371A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802371A4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802371A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802371AC: lbu         $v1, 0x9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X9);
    // 0x802371B0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802371B4: beq         $v0, $zero, L_802372F0
    if (ctx->r2 == 0) {
        // 0x802371B8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802372F0;
    }
    // 0x802371B8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802371BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802371C0: addu        $at, $at, $v0
    gpr jr_addend_802371C8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802371C4: lw          $v0, 0x7338($at)
    ctx->r2 = ADD32(ctx->r1, 0X7338);
    // 0x802371C8: jr          $v0
    // 0x802371CC: nop

    switch (jr_addend_802371C8 >> 2) {
        case 0: goto L_802371D0; break;
        case 1: goto L_802371EC; break;
        case 2: goto L_80237224; break;
        case 3: goto L_80237258; break;
        case 4: goto L_802372CC; break;
        default: switch_error(__func__, 0x802371C8, 0x80247338);
    }
    // 0x802371CC: nop

L_802371D0:
    // 0x802371D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802371D4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802371D8: bne         $v0, $zero, L_802372F4
    if (ctx->r2 != 0) {
        // 0x802371DC: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_802372F4;
    }
    // 0x802371DC: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x802371E0: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x802371E4: j           L_8023721C
    // 0x802371E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023721C;
    // 0x802371E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802371EC:
    // 0x802371EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802371F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802371F4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802371F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802371FC: bne         $v0, $zero, L_802372F4
    if (ctx->r2 != 0) {
        // 0x80237200: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_802372F4;
    }
    // 0x80237200: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80237204: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x80237208: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8023720C: sh          $v1, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r3;
    // 0x80237210: addiu       $v1, $zero, -0x60
    ctx->r3 = ADD32(0, -0X60);
    // 0x80237214: sb          $v1, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r3;
    // 0x80237218: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023721C:
    // 0x8023721C: j           L_802372F0
    // 0x80237220: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
        goto L_802372F0;
    // 0x80237220: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
L_80237224:
    // 0x80237224: lbu         $v0, 0xC($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XC);
    // 0x80237228: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023722C: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80237230: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237234: bne         $v0, $zero, L_802372F4
    if (ctx->r2 != 0) {
        // 0x80237238: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_802372F4;
    }
    // 0x80237238: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8023723C: lbu         $v1, 0x9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X9);
    // 0x80237240: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237244: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80237248: sh          $zero, 0x44($a2)
    MEM_H(0X44, ctx->r6) = 0;
    // 0x8023724C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80237250: j           L_802372F4
    // 0x80237254: sb          $v1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r3;
        goto L_802372F4;
    // 0x80237254: sb          $v1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r3;
L_80237258:
    // 0x80237258: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023725C: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x80237260: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237264: bne         $v1, $v0, L_802372F4
    if (ctx->r3 != ctx->r2) {
        // 0x80237268: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_802372F4;
    }
    // 0x80237268: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8023726C: addiu       $v0, $zero, 0x1EA
    ctx->r2 = ADD32(0, 0X1EA);
    // 0x80237270: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80237274: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237278: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x8023727C: addiu       $v0, $zero, -0x130D
    ctx->r2 = ADD32(0, -0X130D);
    // 0x80237280: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80237284: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80237288: sh          $v0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r2;
    // 0x8023728C: addiu       $v0, $zero, -0x22
    ctx->r2 = ADD32(0, -0X22);
    // 0x80237290: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80237294: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x80237298: lbu         $a1, 0x9($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X9);
    // 0x8023729C: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x802372A0: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x802372A4: sh          $zero, 0x56($a2)
    MEM_H(0X56, ctx->r6) = 0;
    // 0x802372A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802372AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802372B0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802372B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802372B8: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x802372BC: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x802372C0: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    // 0x802372C4: j           L_802372F0
    // 0x802372C8: sb          $a1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r5;
        goto L_802372F0;
    // 0x802372C8: sb          $a1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r5;
L_802372CC:
    // 0x802372CC: lbu         $v0, 0xC($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XC);
    // 0x802372D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802372D4: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x802372D8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802372DC: bne         $v0, $zero, L_802372F4
    if (ctx->r2 != 0) {
        // 0x802372E0: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_802372F4;
    }
    // 0x802372E0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x802372E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802372E8: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
    // 0x802372EC: sb          $zero, 0x9($a2)
    MEM_B(0X9, ctx->r6) = 0;
L_802372F0:
    // 0x802372F0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
L_802372F4:
    // 0x802372F4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802372F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802372FC: jal         0x8004DA90
    // 0x80237300: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80237300: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80237304: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237308: jr          $ra
    // 0x8023730C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023730C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D34C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D34C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D350: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D354: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D358: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D35C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D360: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D364: lw          $v0, 0x59EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X59EC);
    // 0x8022D368: jalr        $v0
    // 0x8022D36C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D36C: nop

    after_0:
    // 0x8022D370: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D374: jr          $ra
    // 0x8022D378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A814_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A818: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A81C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A820: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A824: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A82C: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022A830: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8022A834: beq         $v0, $zero, L_8022AA24
    if (ctx->r2 == 0) {
        // 0x8022A838: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022AA24;
    }
    // 0x8022A838: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A83C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A840: addu        $at, $at, $v0
    gpr jr_addend_8022A848 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A844: lw          $v0, 0x7028($at)
    ctx->r2 = ADD32(ctx->r1, 0X7028);
    // 0x8022A848: jr          $v0
    // 0x8022A84C: nop

    switch (jr_addend_8022A848 >> 2) {
        case 0: goto L_8022A850; break;
        case 1: goto L_8022A9D8; break;
        case 2: goto L_8022A9D8; break;
        case 3: goto L_8022A8E8; break;
        case 4: goto L_8022A91C; break;
        case 5: goto L_8022AA24; break;
        case 6: goto L_8022AA24; break;
        case 7: goto L_8022AA24; break;
        case 8: goto L_8022AA24; break;
        case 9: goto L_8022AA24; break;
        case 10: goto L_8022A9A8; break;
        case 11: goto L_8022A9E8; break;
        default: switch_error(__func__, 0x8022A848, 0x80247028);
    }
    // 0x8022A84C: nop

L_8022A850:
    // 0x8022A850: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A854: jal         0x8006FF84
    // 0x8022A858: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022A858: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8022A85C: beq         $v0, $zero, L_8022AA24
    if (ctx->r2 == 0) {
        // 0x8022A860: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022AA24;
    }
    // 0x8022A860: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A864: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A868: jal         0x8005F6B4
    // 0x8022A86C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8022A86C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022A870: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022A874: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022A878: addiu       $s0, $s0, 0x4ED0
    ctx->r16 = ADD32(ctx->r16, 0X4ED0);
    // 0x8022A87C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A880: addiu       $v0, $v0, 0x4F20
    ctx->r2 = ADD32(ctx->r2, 0X4F20);
    // 0x8022A884: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022A888: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022A88C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A890: addiu       $v0, $v0, 0x504C
    ctx->r2 = ADD32(ctx->r2, 0X504C);
    // 0x8022A894: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
L_8022A898:
    // 0x8022A898: jal         0x8005FA7C
    // 0x8022A89C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8022A89C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A8A0: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x8022A8A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022A8A8: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x8022A8AC: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x8022A8B0: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8022A8B4: bne         $v0, $zero, L_8022A898
    if (ctx->r2 != 0) {
        // 0x8022A8B8: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_8022A898;
    }
    // 0x8022A8B8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022A8BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A8C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8C4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022A8C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A8CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8D0: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022A8D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A8D8: jal         0x8005FB90
    // 0x8022A8DC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x8022A8DC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    after_3:
    // 0x8022A8E0: j           L_8022A9D8
    // 0x8022A8E4: nop

        goto L_8022A9D8;
    // 0x8022A8E4: nop

L_8022A8E8:
    // 0x8022A8E8: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x8022A8EC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A8F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A8F4: bne         $v1, $v0, L_8022A908
    if (ctx->r3 != ctx->r2) {
        // 0x8022A8F8: nop
    
            goto L_8022A908;
    }
    // 0x8022A8F8: nop

    // 0x8022A8FC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022A900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A904: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022A908:
    // 0x8022A908: jal         0x8006072C
    // 0x8022A90C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_4;
    // 0x8022A90C: nop

    after_4:
    // 0x8022A910: beq         $v0, $zero, L_8022A91C
    if (ctx->r2 == 0) {
        // 0x8022A914: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022A91C;
    }
    // 0x8022A914: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A918: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022A91C:
    // 0x8022A91C: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022A920: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A924: beq         $v1, $v0, L_8022A93C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A928: nop
    
            goto L_8022A93C;
    }
    // 0x8022A928: nop

    // 0x8022A92C: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x8022A930: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022A934: jalr        $v0
    // 0x8022A938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022A938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
L_8022A93C:
    // 0x8022A93C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A940: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x8022A944: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A948: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A94C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A950: lw          $v0, 0x5048($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5048);
    // 0x8022A954: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A958: jalr        $v0
    // 0x8022A95C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8022A95C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_6:
    // 0x8022A960: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A964: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x8022A968: jal         0x8004DD04
    // 0x8022A96C: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x8022A96C: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_7:
    // 0x8022A970: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A974: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x8022A978: jal         0x8004DD04
    // 0x8022A97C: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x8022A97C: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_8:
    // 0x8022A980: jal         0x8005FB90
    // 0x8022A984: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_9;
    // 0x8022A984: nop

    after_9:
    // 0x8022A988: jal         0x80060018
    // 0x8022A98C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x8022A98C: nop

    after_10:
    // 0x8022A990: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022A994: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A998: bne         $v1, $v0, L_8022AA24
    if (ctx->r3 != ctx->r2) {
        // 0x8022A99C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022AA24;
    }
    // 0x8022A99C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022A9A0: j           L_8022AA24
    // 0x8022A9A4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_8022AA24;
    // 0x8022A9A4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022A9A8:
    // 0x8022A9A8: jal         0x80061724
    // 0x8022A9AC: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_11;
    // 0x8022A9AC: nop

    after_11:
    // 0x8022A9B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A9B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A9B8: jal         0x80036B00
    // 0x8022A9BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_12;
    // 0x8022A9BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x8022A9C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A9C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A9C8: jal         0x80034844
    // 0x8022A9CC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_13;
    // 0x8022A9CC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_13:
    // 0x8022A9D0: jal         0x8006036C
    // 0x8022A9D4: addiu       $a0, $zero, 0x52B
    ctx->r4 = ADD32(0, 0X52B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x8022A9D4: addiu       $a0, $zero, 0x52B
    ctx->r4 = ADD32(0, 0X52B);
    after_14:
L_8022A9D8:
    // 0x8022A9D8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022A9DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A9E0: j           L_8022AA24
    // 0x8022A9E4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_8022AA24;
    // 0x8022A9E4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022A9E8:
    // 0x8022A9E8: jal         0x80061724
    // 0x8022A9EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_80061724_3CB24(rdram, ctx);
        goto after_15;
    // 0x8022A9EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_15:
    // 0x8022A9F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A9F4: jal         0x80070050
    // 0x8022A9F8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x8022A9F8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_16:
    // 0x8022A9FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AA00: jal         0x80035288
    // 0x8022AA04: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80035288_10688(rdram, ctx);
        goto after_17;
    // 0x8022AA04: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_17:
    // 0x8022AA08: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x8022AA0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022AA10: sb          $s0, -0x359B($at)
    MEM_B(-0X359B, ctx->r1) = ctx->r16;
    // 0x8022AA14: jal         0x80060D38
    // 0x8022AA18: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80060D38_3C138(rdram, ctx);
        goto after_18;
    // 0x8022AA18: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_18:
    // 0x8022AA1C: jal         0x8006027C
    // 0x8022AA20: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_19;
    // 0x8022AA20: nop

    after_19:
L_8022AA24:
    // 0x8022AA24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AA28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AA2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA34: jr          $ra
    // 0x8022AA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236CA0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236CA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236CA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236CAC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236CB0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236CB8: jal         0x8009A3B4
    // 0x80236CBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236CBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80236CC0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236CC4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236CC8: jal         0x8009A3B4
    // 0x80236CCC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236CCC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80236CD0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80236CD4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80236CD8: jal         0x8009A3B4
    // 0x80236CDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236CDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80236CE0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236CE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236CE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236CEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236CF0: lw          $v0, 0x5FB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5FB0);
    // 0x80236CF4: jalr        $v0
    // 0x80236CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80236CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80236CFC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236D00: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80236D04: beq         $v0, $zero, L_80236D1C
    if (ctx->r2 == 0) {
        // 0x80236D08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D1C;
    }
    // 0x80236D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D0C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80236D10: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80236D14: jal         0x8003B564
    // 0x80236D18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80236D18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80236D1C:
    // 0x80236D1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236D20: beq         $v0, $zero, L_80236D38
    if (ctx->r2 == 0) {
        // 0x80236D24: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80236D38;
    }
    // 0x80236D24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236D28: jal         0x8005044C
    // 0x80236D2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80236D2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80236D30: j           L_80236D3C
    // 0x80236D34: nop

        goto L_80236D3C;
    // 0x80236D34: nop

L_80236D38:
    // 0x80236D38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236D3C:
    // 0x80236D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236D40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236D44: jr          $ra
    // 0x80236D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237E4C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237E50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237E54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237E5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237E60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237E64: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80237E68: jal         0x8004D5D4
    // 0x80237E6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80237E6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237E70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237E74: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80237E78: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80237E7C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80237E80: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80237E84: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80237E88: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80237E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237E90: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80237E94: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80237E98: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80237E9C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80237EA0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80237EA4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80237EA8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80237EAC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80237EB0: jal         0x80050294
    // 0x80237EB4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80237EB4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    after_1:
    // 0x80237EB8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80237EBC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237EC0: beql        $v1, $v0, L_80237ED4
    if (ctx->r3 == ctx->r2) {
        // 0x80237EC4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80237ED4;
    }
    goto skip_0;
    // 0x80237EC4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    skip_0:
    // 0x80237EC8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237ECC: j           L_80237ED8
    // 0x80237ED0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80237ED8;
    // 0x80237ED0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80237ED4:
    // 0x80237ED4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_80237ED8:
    // 0x80237ED8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237EDC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80237EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237EE8: jr          $ra
    // 0x80237EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241420_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241424: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80241428: jal         0x8004F4F8
    // 0x8024142C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8024142C: nop

    after_0:
    // 0x80241430: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80241434: jr          $ra
    // 0x80241438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024143C: nop

;}
RECOMP_FUNC void func_80235C60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235C64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235C68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235C70: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235C74: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80235C78: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80235C7C: beq         $v0, $zero, L_80235C94
    if (ctx->r2 == 0) {
        // 0x80235C80: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80235C94;
    }
    // 0x80235C80: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80235C84: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80235C88: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80235C8C: jal         0x8003B564
    // 0x80235C90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x80235C90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80235C94:
    // 0x80235C94: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235C98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235C9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235CA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235CA4: lw          $v0, 0x5F30($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F30);
    // 0x80235CA8: jalr        $v0
    // 0x80235CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80235CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235CB0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235CB4: beq         $v0, $zero, L_80235CC4
    if (ctx->r2 == 0) {
        // 0x80235CB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235CC4;
    }
    // 0x80235CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235CBC: j           L_80235CC8
    // 0x80235CC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_80235CC8;
    // 0x80235CC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80235CC4:
    // 0x80235CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80235CC8:
    // 0x80235CC8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80235CCC: jal         0x80047284
    // 0x80235CD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x80235CD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80235CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235CD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235CDC: jr          $ra
    // 0x80235CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DB60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DB64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DB68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DB6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DB70: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022DB74: addiu       $s1, $s1, 0x5B04
    ctx->r17 = ADD32(ctx->r17, 0X5B04);
    // 0x8022DB78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DB7C: jal         0x800A3450
    // 0x8022DB80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022DB80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022DB84: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DB88: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022DB8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DB90: lbu         $v1, 0x5AF4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5AF4);
    // 0x8022DB94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB98: beq         $v1, $v0, L_8022DC38
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB9C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022DC38;
    }
    // 0x8022DB9C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022DBA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DBA4: beql        $v0, $zero, L_8022DBBC
    if (ctx->r2 == 0) {
        // 0x8022DBA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DBBC;
    }
    goto skip_0;
    // 0x8022DBA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DBAC: beq         $v1, $zero, L_8022DBCC
    if (ctx->r3 == 0) {
        // 0x8022DBB0: nop
    
            goto L_8022DBCC;
    }
    // 0x8022DBB0: nop

    // 0x8022DBB4: j           L_8022DC84
    // 0x8022DBB8: nop

        goto L_8022DC84;
    // 0x8022DBB8: nop

L_8022DBBC:
    // 0x8022DBBC: beq         $v1, $v0, L_8022DC58
    if (ctx->r3 == ctx->r2) {
        // 0x8022DBC0: nop
    
            goto L_8022DC58;
    }
    // 0x8022DBC0: nop

    // 0x8022DBC4: j           L_8022DC84
    // 0x8022DBC8: nop

        goto L_8022DC84;
    // 0x8022DBC8: nop

L_8022DBCC:
    // 0x8022DBCC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022DBD0: bne         $v0, $zero, L_8022DBE4
    if (ctx->r2 != 0) {
        // 0x8022DBD4: nop
    
            goto L_8022DBE4;
    }
    // 0x8022DBD4: nop

    // 0x8022DBD8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DBDC: j           L_8022DBEC
    // 0x8022DBE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022DBEC;
    // 0x8022DBE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022DBE4:
    // 0x8022DBE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DBE8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022DBEC:
    // 0x8022DBEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DBF0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DBF4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022DBF8: beq         $v0, $zero, L_8022DC14
    if (ctx->r2 == 0) {
        // 0x8022DBFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DC14;
    }
    // 0x8022DBFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC00: jal         0x8022F5C8
    // 0x8022DC04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022DC04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8022DC08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DC0C: j           L_8022DC28
    // 0x8022DC10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022DC28;
    // 0x8022DC10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022DC14:
    // 0x8022DC14: jal         0x8022F5C8
    // 0x8022DC18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022F5C8_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022DC18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022DC1C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DC20: jal         0x8022F588
    // 0x8022DC24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022F588_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022DC24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_8022DC28:
    // 0x8022DC28: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022DC2C: addiu       $s1, $s1, 0x5B04
    ctx->r17 = ADD32(ctx->r17, 0X5B04);
    // 0x8022DC30: j           L_8022DC84
    // 0x8022DC34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022DC84;
    // 0x8022DC34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022DC38:
    // 0x8022DC38: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DC3C: jal         0x8022F578
    // 0x8022DC40: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022F578_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022DC40: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x8022DC44: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DC48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DC4C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022DC50: j           L_8022DC84
    // 0x8022DC54: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022DC84;
    // 0x8022DC54: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022DC58:
    // 0x8022DC58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DC5C: jal         0x8022F588
    // 0x8022DC60: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022F588_ovl5(rdram, ctx);
        goto after_5;
    // 0x8022DC60: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x8022DC64: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DC68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DC6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DC70: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022DC74: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DC78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022DC7C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x8022DC80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DC84:
    // 0x8022DC84: jal         0x800A3450
    // 0x8022DC88: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022DC88: nop

    after_6:
    // 0x8022DC8C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DC90: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022DC94: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022DC98: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022DC9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DCA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DCA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DCA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DCAC: jr          $ra
    // 0x8022DCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234788_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234788: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023478C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80234790: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234794: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80234798: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023479C: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x802347A0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802347A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802347A8: bne         $v0, $zero, L_802347D4
    if (ctx->r2 != 0) {
        // 0x802347AC: sh          $zero, 0x46($s0)
        MEM_H(0X46, ctx->r16) = 0;
            goto L_802347D4;
    }
    // 0x802347AC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802347B0: lw          $a1, 0x364($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X364);
    // 0x802347B4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802347B8: jal         0x8009A3B4
    // 0x802347BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802347BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802347C0: lw          $a1, 0x364($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X364);
    // 0x802347C4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802347C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802347CC: j           L_802347F4
    // 0x802347D0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
        goto L_802347F4;
    // 0x802347D0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_802347D4:
    // 0x802347D4: lw          $a1, 0x364($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X364);
    // 0x802347D8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802347DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802347E0: jal         0x8009A3B4
    // 0x802347E4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802347E4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_1:
    // 0x802347E8: lw          $a1, 0x364($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X364);
    // 0x802347EC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802347F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_802347F4:
    // 0x802347F4: jal         0x8009A3B4
    // 0x802347F8: nop

    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802347F8: nop

    after_2:
    // 0x802347FC: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80234800: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80234804: beq         $v0, $zero, L_80234B74
    if (ctx->r2 == 0) {
        // 0x80234808: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80234B74;
    }
    // 0x80234808: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023480C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234810: addu        $at, $at, $v0
    gpr jr_addend_80234818 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234814: lw          $v0, 0x7298($at)
    ctx->r2 = ADD32(ctx->r1, 0X7298);
    // 0x80234818: jr          $v0
    // 0x8023481C: nop

    switch (jr_addend_80234818 >> 2) {
        case 0: goto L_80234820; break;
        case 1: goto L_802348C0; break;
        case 2: goto L_80234950; break;
        case 3: goto L_80234988; break;
        case 4: goto L_802349E8; break;
        case 5: goto L_80234A1C; break;
        case 6: goto L_80234A54; break;
        case 7: goto L_80234AC8; break;
        case 8: goto L_80234B30; break;
        case 9: goto L_80234B50; break;
        default: switch_error(__func__, 0x80234818, 0x80247298);
    }
    // 0x8023481C: nop

L_80234820:
    // 0x80234820: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234824: jal         0x8004EC38
    // 0x80234828: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80234828: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x8023482C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80234830: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80234834: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80234838: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8023483C: bne         $v0, $zero, L_80234878
    if (ctx->r2 != 0) {
        // 0x80234840: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234878;
    }
    // 0x80234840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234844: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234848: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x8023484C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80234850: bne         $v0, $zero, L_80234864
    if (ctx->r2 != 0) {
        // 0x80234854: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80234864;
    }
    // 0x80234854: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80234858: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023485C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234860: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80234864:
    // 0x80234864: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234868: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x8023486C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80234870: j           L_802348A0
    // 0x80234874: sb          $v0, 0x43($s1)
    MEM_B(0X43, ctx->r17) = ctx->r2;
        goto L_802348A0;
    // 0x80234874: sb          $v0, 0x43($s1)
    MEM_B(0X43, ctx->r17) = ctx->r2;
L_80234878:
    // 0x80234878: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023487C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234880: lbu         $v0, 0x42($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X42);
    // 0x80234884: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80234888: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023488C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234890: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80234894: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x80234898: sb          $v0, 0x43($s1)
    MEM_B(0X43, ctx->r17) = ctx->r2;
    // 0x8023489C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
L_802348A0:
    // 0x802348A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802348A4: addiu       $a0, $zero, 0xE6
    ctx->r4 = ADD32(0, 0XE6);
    // 0x802348A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802348AC: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x802348B0: jal         0x8002A33C
    // 0x802348B4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802348B4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x802348B8: j           L_80234B74
    // 0x802348BC: nop

        goto L_80234B74;
    // 0x802348BC: nop

L_802348C0:
    // 0x802348C0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x802348C4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802348C8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802348CC: bne         $v0, $zero, L_802348E4
    if (ctx->r2 != 0) {
        // 0x802348D0: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_802348E4;
    }
    // 0x802348D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802348D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802348D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802348DC: j           L_80234B70
    // 0x802348E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80234B70;
    // 0x802348E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802348E4:
    // 0x802348E4: lbu         $a1, 0x43($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X43);
    // 0x802348E8: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x802348EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802348F0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802348F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802348F8: jal         0x8009A3B4
    // 0x802348FC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802348FC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_5:
    // 0x80234900: lbu         $v0, 0x42($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X42);
    // 0x80234904: bne         $v0, $zero, L_8023491C
    if (ctx->r2 != 0) {
        // 0x80234908: nop
    
            goto L_8023491C;
    }
    // 0x80234908: nop

    // 0x8023490C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80234910: lh          $v1, 0x20($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X20);
    // 0x80234914: j           L_80234928
    // 0x80234918: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_80234928;
    // 0x80234918: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8023491C:
    // 0x8023491C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80234920: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80234924: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_80234928:
    // 0x80234928: bne         $v0, $zero, L_80234B74
    if (ctx->r2 != 0) {
        // 0x8023492C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234B74;
    }
    // 0x8023492C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234930: lhu         $a0, 0x18($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X18);
    // 0x80234934: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80234938: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023493C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234940: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234944: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80234948: j           L_80234B74
    // 0x8023494C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
        goto L_80234B74;
    // 0x8023494C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
L_80234950:
    // 0x80234950: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80234954: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80234958: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023495C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80234960: bne         $v0, $v1, L_80234B74
    if (ctx->r2 != ctx->r3) {
        // 0x80234964: addiu       $a0, $zero, 0xE5
        ctx->r4 = ADD32(0, 0XE5);
            goto L_80234B74;
    }
    // 0x80234964: addiu       $a0, $zero, 0xE5
    ctx->r4 = ADD32(0, 0XE5);
    // 0x80234968: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023496C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234970: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80234974: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80234978: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023497C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80234980: j           L_80234A44
    // 0x80234984: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234A44;
    // 0x80234984: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80234988:
    // 0x80234988: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023498C: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
    // 0x80234990: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80234994: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80234998: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023499C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802349A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802349A4: bne         $v1, $v0, L_80234B74
    if (ctx->r3 != ctx->r2) {
        // 0x802349A8: nop
    
            goto L_80234B74;
    }
    // 0x802349A8: nop

    // 0x802349AC: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x802349B0: lbu         $v1, 0x44($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X44);
    // 0x802349B4: andi        $a0, $v0, 0x7
    ctx->r4 = ctx->r2 & 0X7;
    // 0x802349B8: bne         $a0, $v1, L_802349CC
    if (ctx->r4 != ctx->r3) {
        // 0x802349BC: sb          $a0, 0x43($s1)
        MEM_B(0X43, ctx->r17) = ctx->r4;
            goto L_802349CC;
    }
    // 0x802349BC: sb          $a0, 0x43($s1)
    MEM_B(0X43, ctx->r17) = ctx->r4;
    // 0x802349C0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802349C4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802349C8: sb          $v0, 0x43($s1)
    MEM_B(0X43, ctx->r17) = ctx->r2;
L_802349CC:
    // 0x802349CC: lbu         $v0, 0x43($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X43);
    // 0x802349D0: sb          $v0, 0x44($s1)
    MEM_B(0X44, ctx->r17) = ctx->r2;
    // 0x802349D4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802349D8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802349DC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802349E0: j           L_80234B70
    // 0x802349E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234B70;
    // 0x802349E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802349E8:
    // 0x802349E8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802349EC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802349F0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802349F4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802349F8: bne         $v0, $v1, L_80234B74
    if (ctx->r2 != ctx->r3) {
        // 0x802349FC: nop
    
            goto L_80234B74;
    }
    // 0x802349FC: nop

    // 0x80234A00: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80234A04: andi        $v0, $v0, 0xFDFF
    ctx->r2 = ctx->r2 & 0XFDFF;
    // 0x80234A08: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234A0C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80234A10: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234A14: j           L_80234B70
    // 0x80234A18: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_80234B70;
    // 0x80234A18: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80234A1C:
    // 0x80234A1C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80234A20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80234A24: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80234A28: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80234A2C: bne         $v0, $v1, L_80234B74
    if (ctx->r2 != ctx->r3) {
        // 0x80234A30: addiu       $a0, $zero, 0xE5
        ctx->r4 = ADD32(0, 0XE5);
            goto L_80234B74;
    }
    // 0x80234A30: addiu       $a0, $zero, 0xE5
    ctx->r4 = ADD32(0, 0XE5);
    // 0x80234A34: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234A38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234A3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234A40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80234A44:
    // 0x80234A44: jal         0x8002A33C
    // 0x80234A48: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80234A48: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_6:
    // 0x80234A4C: j           L_80234B74
    // 0x80234A50: nop

        goto L_80234B74;
    // 0x80234A50: nop

L_80234A54:
    // 0x80234A54: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80234A58: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80234A5C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80234A60: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80234A64: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80234A68: lbu         $v0, 0x42($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X42);
    // 0x80234A6C: bne         $v0, $zero, L_80234A9C
    if (ctx->r2 != 0) {
        // 0x80234A70: nop
    
            goto L_80234A9C;
    }
    // 0x80234A70: nop

    // 0x80234A74: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x80234A78: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80234A7C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234A80: bne         $v0, $zero, L_80234B74
    if (ctx->r2 != 0) {
        // 0x80234A84: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80234B74;
    }
    // 0x80234A84: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80234A88: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234A8C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80234A90: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234A94: j           L_80234B70
    // 0x80234A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234B70;
    // 0x80234A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80234A9C:
    // 0x80234A9C: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x80234AA0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80234AA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234AA8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234AAC: bne         $v0, $zero, L_80234B74
    if (ctx->r2 != 0) {
        // 0x80234AB0: nop
    
            goto L_80234B74;
    }
    // 0x80234AB0: nop

    // 0x80234AB4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234AB8: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80234ABC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234AC0: j           L_80234B70
    // 0x80234AC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234B70;
    // 0x80234AC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80234AC8:
    // 0x80234AC8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80234ACC: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x80234AD0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80234AD4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80234AD8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80234ADC: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x80234AE0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80234AE4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234AE8: bne         $v0, $zero, L_80234B74
    if (ctx->r2 != 0) {
        // 0x80234AEC: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80234B74;
    }
    // 0x80234AEC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80234AF0: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x80234AF4: lbu         $v0, 0x42($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X42);
    // 0x80234AF8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80234AFC: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80234B00: bne         $v1, $zero, L_80234B24
    if (ctx->r3 != 0) {
        // 0x80234B04: sb          $v0, 0x42($s1)
        MEM_B(0X42, ctx->r17) = ctx->r2;
            goto L_80234B24;
    }
    // 0x80234B04: sb          $v0, 0x42($s1)
    MEM_B(0X42, ctx->r17) = ctx->r2;
    // 0x80234B08: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80234B0C: addiu       $a0, $zero, 0xE7
    ctx->r4 = ADD32(0, 0XE7);
    // 0x80234B10: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234B14: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80234B18: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80234B1C: jal         0x8002A33C
    // 0x80234B20: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80234B20: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_7:
L_80234B24:
    // 0x80234B24: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234B28: j           L_80234B70
    // 0x80234B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234B70;
    // 0x80234B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80234B30:
    // 0x80234B30: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234B34: jal         0x8004EC38
    // 0x80234B38: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8004EC38_2A038(rdram, ctx);
        goto after_8;
    // 0x80234B38: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_8:
    // 0x80234B3C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80234B40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80234B44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234B48: j           L_80234B74
    // 0x80234B4C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
        goto L_80234B74;
    // 0x80234B4C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
L_80234B50:
    // 0x80234B50: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80234B54: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80234B58: slti        $v0, $v0, -0x63F
    ctx->r2 = SIGNED(ctx->r2) < -0X63F ? 1 : 0;
    // 0x80234B5C: beq         $v0, $zero, L_80234B74
    if (ctx->r2 == 0) {
        // 0x80234B60: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_80234B74;
    }
    // 0x80234B60: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80234B64: addiu       $v0, $zero, -0x640
    ctx->r2 = ADD32(0, -0X640);
    // 0x80234B68: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234B70:
    // 0x80234B70: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80234B74:
    // 0x80234B74: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234B78: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80234B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234B80: jal         0x8004DA90
    // 0x80234B84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x80234B84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80234B88: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80234B8C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80234B90: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80234B94: jr          $ra
    // 0x80234B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80234B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8023CE80_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CE80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CE84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023CE88: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023CE8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CE90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CE94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CE98: lw          $v0, 0x6630($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6630);
    // 0x8023CE9C: jalr        $v0
    // 0x8023CEA0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023CEA0: nop

    after_0:
    // 0x8023CEA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023CEA8: jr          $ra
    // 0x8023CEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023CEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802374CC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802374CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802374D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802374D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802374D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802374DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802374E0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802374E4: bnel        $v0, $zero, L_80237524
    if (ctx->r2 != 0) {
        // 0x802374E8: addiu       $a0, $s1, 0x2C
        ctx->r4 = ADD32(ctx->r17, 0X2C);
            goto L_80237524;
    }
    goto skip_0;
    // 0x802374E8: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    skip_0:
    // 0x802374EC: lbu         $s0, 0x8($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X8);
    // 0x802374F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802374F4: addiu       $v0, $v0, 0x6018
    ctx->r2 = ADD32(ctx->r2, 0X6018);
    // 0x802374F8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x802374FC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80237500: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80237504: jal         0x80050294
    // 0x80237508: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237508: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x8023750C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80237510: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80237514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237518: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
    // 0x8023751C: j           L_802375AC
    // 0x80237520: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_802375AC;
    // 0x80237520: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80237524:
    // 0x80237524: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80237528: jal         0x8009A3B4
    // 0x8023752C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023752C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80237530: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80237534: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80237538: jal         0x8009A3B4
    // 0x8023753C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023753C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80237540: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80237544: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80237548: jal         0x8009A3B4
    // 0x8023754C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023754C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80237550: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80237554: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237558: bne         $v1, $v0, L_80237570
    if (ctx->r3 != ctx->r2) {
        // 0x8023755C: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_80237570;
    }
    // 0x8023755C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80237560: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x80237564: bne         $v1, $v0, L_80237570
    if (ctx->r3 != ctx->r2) {
        // 0x80237568: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80237570;
    }
    // 0x80237568: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023756C: sb          $v0, 0x10C($s1)
    MEM_B(0X10C, ctx->r17) = ctx->r2;
L_80237570:
    // 0x80237570: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x80237574: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237578: bne         $v1, $v0, L_802375A4
    if (ctx->r3 != ctx->r2) {
        // 0x8023757C: nop
    
            goto L_802375A4;
    }
    // 0x8023757C: nop

    // 0x80237580: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80237584: bne         $v0, $zero, L_802375A0
    if (ctx->r2 != 0) {
        // 0x80237588: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802375A0;
    }
    // 0x80237588: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023758C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80237590: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80237594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237598: j           L_802375A4
    // 0x8023759C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802375A4;
    // 0x8023759C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_802375A0:
    // 0x802375A0: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802375A4:
    // 0x802375A4: jal         0x8005044C
    // 0x802375A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802375A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_802375AC:
    // 0x802375AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802375B0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802375B4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802375B8: jal         0x8003B564
    // 0x802375BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x802375BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x802375C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802375C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802375C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802375CC: jr          $ra
    // 0x802375D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802375D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228834_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228834: jr          $ra
    // 0x80228838: nop

    TRACE_RETURN()
    return;
    // 0x80228838: nop

;}
RECOMP_FUNC void func_8022D330_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D338: jal         0x8004F418
    // 0x8022D33C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022D33C: nop

    after_0:
    // 0x8022D340: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D344: jr          $ra
    // 0x8022D348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E4E4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E4E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E4EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E4F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E4F8: jal         0x8022F614
    // 0x8022E4FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022F614_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022E4FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022E500: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E504: beq         $v0, $zero, L_8022E530
    if (ctx->r2 == 0) {
        // 0x8022E508: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022E530;
    }
    // 0x8022E508: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022E50C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E510: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E514: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E518: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E51C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022E520: jal         0x8022F578
    // 0x8022E524: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022F578_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022E524: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022E528: j           L_8022E570
    // 0x8022E52C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022E570;
    // 0x8022E52C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E530:
    // 0x8022E530: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E534: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E538: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E53C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E540: bne         $v0, $zero, L_8022E550
    if (ctx->r2 != 0) {
        // 0x8022E544: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E550;
    }
    // 0x8022E544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E54C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E550:
    // 0x8022E550: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E558: jal         0x8004DA90
    // 0x8022E55C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022E55C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022E560: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E564: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022E568: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E56C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022E570:
    // 0x8022E570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E574: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E578: jr          $ra
    // 0x8022E57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236280_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236284: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236288: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023628C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236290: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236298: jal         0x8009A3B4
    // 0x8023629C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023629C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802362A0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802362A4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802362A8: jal         0x8009A3B4
    // 0x802362AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802362AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802362B0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802362B4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802362B8: jal         0x8009A3B4
    // 0x802362BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802362BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802362C0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802362C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802362C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802362CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802362D0: lw          $v0, 0x5F50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5F50);
    // 0x802362D4: jalr        $v0
    // 0x802362D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802362D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802362DC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802362E0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802362E4: beq         $v0, $a1, L_802362FC
    if (ctx->r2 == ctx->r5) {
        // 0x802362E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802362FC;
    }
    // 0x802362E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802362EC: jal         0x80050294
    // 0x802362F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802362F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802362F4: j           L_80236304
    // 0x802362F8: nop

        goto L_80236304;
    // 0x802362F8: nop

L_802362FC:
    // 0x802362FC: jal         0x8005044C
    // 0x80236300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80236300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80236304:
    // 0x80236304: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236308: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023630C: beq         $v0, $zero, L_80236324
    if (ctx->r2 == 0) {
        // 0x80236310: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236324;
    }
    // 0x80236310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236314: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80236318: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023631C: jal         0x8003B564
    // 0x80236320: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x80236320: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_80236324:
    // 0x80236324: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80236328: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023632C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236334: jr          $ra
    // 0x80236338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241034_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024103C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241040: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80241044: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80241048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024104C: jal         0x8009A3B4
    // 0x80241050: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80241050: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80241054: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80241058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024105C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80241060: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80241064: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80241068: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8024106C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80241070: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80241074: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80241078: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8024107C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80241080: jal         0x8004D5D4
    // 0x80241084: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80241084: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80241088: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8024108C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80241090: addiu       $v0, $v0, 0x6E38
    ctx->r2 = ADD32(ctx->r2, 0X6E38);
    // 0x80241094: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80241098: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8024109C: addiu       $v0, $v0, 0x6E44
    ctx->r2 = ADD32(ctx->r2, 0X6E44);
    // 0x802410A0: beq         $v1, $zero, L_802410B0
    if (ctx->r3 == 0) {
        // 0x802410A4: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_802410B0;
    }
    // 0x802410A4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802410A8: j           L_802410B4
    // 0x802410AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802410B4;
    // 0x802410AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802410B0:
    // 0x802410B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802410B4:
    // 0x802410B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802410B8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802410BC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802410C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802410C4: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x802410C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802410CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802410D0: jr          $ra
    // 0x802410D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802410D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802345BC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802345BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802345C0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802345C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802345C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802345CC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802345D0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802345D4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802345D8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802345DC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802345E0: beq         $v1, $zero, L_802345FC
    if (ctx->r3 == 0) {
        // 0x802345E4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802345FC;
    }
    // 0x802345E4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802345E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345EC: beq         $v1, $v0, L_80234644
    if (ctx->r3 == ctx->r2) {
        // 0x802345F0: addiu       $a0, $s0, 0xC4
        ctx->r4 = ADD32(ctx->r16, 0XC4);
            goto L_80234644;
    }
    // 0x802345F0: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x802345F4: j           L_80234770
    // 0x802345F8: nop

        goto L_80234770;
    // 0x802345F8: nop

L_802345FC:
    // 0x802345FC: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234600: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234604: beq         $v1, $v0, L_80234624
    if (ctx->r3 == ctx->r2) {
        // 0x80234608: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80234624;
    }
    // 0x80234608: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023460C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234610: addiu       $a0, $zero, 0xE9
    ctx->r4 = ADD32(0, 0XE9);
    // 0x80234614: jal         0x8002A33C
    // 0x80234618: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80234618: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023461C: j           L_80234770
    // 0x80234620: nop

        goto L_80234770;
    // 0x80234620: nop

L_80234624:
    // 0x80234624: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80234628: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023462C: bne         $v1, $v0, L_80234770
    if (ctx->r3 != ctx->r2) {
        // 0x80234630: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80234770;
    }
    // 0x80234630: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234634: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023463C: j           L_80234770
    // 0x80234640: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80234770;
    // 0x80234640: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80234644:
    // 0x80234644: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80234648: jal         0x8009A3B4
    // 0x8023464C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023464C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234650: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x80234654: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80234658: jal         0x8009A3B4
    // 0x8023465C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023465C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80234660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234664: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234668: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8023466C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80234670: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234674: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80234678: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023467C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80234680: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234684: jal         0x8004DF78
    // 0x80234688: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_3;
    // 0x80234688: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023468C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234690: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80234694: beq         $v0, $zero, L_802346B8
    if (ctx->r2 == 0) {
        // 0x80234698: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_802346B8;
    }
    // 0x80234698: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8023469C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802346A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802346A4: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x802346A8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802346AC: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x802346B0: j           L_802346D8
    // 0x802346B4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
        goto L_802346D8;
    // 0x802346B4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_802346B8:
    // 0x802346B8: bne         $v0, $zero, L_802346E0
    if (ctx->r2 != 0) {
        // 0x802346BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802346E0;
    }
    // 0x802346BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346C0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802346C4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802346C8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x802346CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802346D0: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x802346D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_802346D8:
    // 0x802346D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802346DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802346E0:
    // 0x802346E0: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x802346E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802346E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802346EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802346F0: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x802346F4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802346F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802346FC: jal         0x8004DA90
    // 0x80234700: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80234700: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_4:
    // 0x80234704: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x80234708: beq         $v0, $zero, L_8023471C
    if (ctx->r2 == 0) {
        // 0x8023470C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023471C;
    }
    // 0x8023470C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234710: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80234714: j           L_8023475C
    // 0x80234718: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
        goto L_8023475C;
    // 0x80234718: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8023471C:
    // 0x8023471C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80234720: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80234724: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80234728: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8023472C: sltiu       $v1, $v1, 0x400
    ctx->r3 = ctx->r3 < 0X400 ? 1 : 0;
    // 0x80234730: beq         $v1, $zero, L_8023475C
    if (ctx->r3 == 0) {
        // 0x80234734: sh          $v0, 0x8($s1)
        MEM_H(0X8, ctx->r17) = ctx->r2;
            goto L_8023475C;
    }
    // 0x80234734: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80234738: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023473C: bne         $v0, $zero, L_8023475C
    if (ctx->r2 != 0) {
        // 0x80234740: nop
    
            goto L_8023475C;
    }
    // 0x80234740: nop

    // 0x80234744: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80234748: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8023474C: bne         $v0, $zero, L_8023475C
    if (ctx->r2 != 0) {
        // 0x80234750: nop
    
            goto L_8023475C;
    }
    // 0x80234750: nop

    // 0x80234754: jal         0x80234E28
    // 0x80234758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234E28_ovl5(rdram, ctx);
        goto after_5;
    // 0x80234758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8023475C:
    // 0x8023475C: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80234760: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x80234764: beq         $v0, $zero, L_80234770
    if (ctx->r2 == 0) {
        // 0x80234768: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80234770;
    }
    // 0x80234768: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8023476C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80234770:
    // 0x80234770: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80234774: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80234778: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8023477C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80234780: jr          $ra
    // 0x80234784: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80234784: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80237B40_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237B48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237B4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237B50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237B54: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80237B58: bgez        $v0, L_80237C10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237B5C: addiu       $s1, $s0, 0x2C8
        ctx->r17 = ADD32(ctx->r16, 0X2C8);
            goto L_80237C10;
    }
    // 0x80237B5C: addiu       $s1, $s0, 0x2C8
    ctx->r17 = ADD32(ctx->r16, 0X2C8);
    // 0x80237B60: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80237B64: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237B68: jal         0x8009A3B4
    // 0x80237B6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237B6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80237B70: lbu         $a1, 0xB($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB);
    // 0x80237B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B78: jal         0x80237D8C
    // 0x80237B7C: srl         $a1, $a1, 1
    ctx->r5 = S32(U32(ctx->r5) >> 1);
    func_80237D8C_ovl5(rdram, ctx);
        goto after_1;
    // 0x80237B7C: srl         $a1, $a1, 1
    ctx->r5 = S32(U32(ctx->r5) >> 1);
    after_1:
    // 0x80237B80: lbu         $a3, 0xB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XB);
    // 0x80237B84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80237B88: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80237B8C: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x80237B90: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80237B94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237B98: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80237B9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237BA0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237BA4: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237BA8: mflo        $a1
    ctx->r5 = lo;
    // 0x80237BAC: lh          $a0, 0x46($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X46);
    // 0x80237BB0: nop

    // 0x80237BB4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237BB8: mflo        $a0
    ctx->r4 = lo;
    // 0x80237BBC: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80237BC0: lhu         $v1, 0x2C8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C8);
    // 0x80237BC4: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237BC8: mflo        $a2
    ctx->r6 = lo;
    // 0x80237BCC: lhu         $v0, 0x2CA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2CA);
    // 0x80237BD0: sb          $a3, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r7;
    // 0x80237BD4: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x80237BD8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80237BDC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80237BE0: lhu         $v0, 0x2CC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2CC);
    // 0x80237BE4: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x80237BE8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80237BEC: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80237BF0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80237BF4: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80237BF8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237BFC: bne         $v1, $zero, L_80237C10
    if (ctx->r3 != 0) {
        // 0x80237C00: sh          $v0, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r2;
            goto L_80237C10;
    }
    // 0x80237C00: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80237C04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237C08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237C0C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237C10:
    // 0x80237C10: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80237C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237C18: jal         0x800504EC
    // 0x80237C1C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x80237C1C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    after_2:
    // 0x80237C20: jal         0x8005129C
    // 0x80237C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x80237C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80237C28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237C2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237C30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237C34: jr          $ra
    // 0x80237C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F290_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F290: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F29C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F2A0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022F2A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F2A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F2AC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F2B0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022F2B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F2B8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F2BC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022F2C0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F2C4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F2C8: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F2CC: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F2D0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F2D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F2D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F2DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F2E0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022F2E4: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022F2E8: jal         0x8004F820
    // 0x8022F2EC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F2EC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022F2F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F2F4: bgez        $v0, L_8022F324
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F2F8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022F324;
    }
    // 0x8022F2F8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022F2FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F300: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F304: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F308: jal         0x8004F820
    // 0x8022F30C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022F30C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022F310: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F314: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F318: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F31C: j           L_8022F340
    // 0x8022F320: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022F340;
    // 0x8022F320: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022F324:
    // 0x8022F324: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F328: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F32C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F330: jal         0x8004F820
    // 0x8022F334: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F334: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022F338: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F33C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022F340:
    // 0x8022F340: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F344: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022F348: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F34C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F350: jal         0x800610AC
    // 0x8022F354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022F354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022F358: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F35C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F360: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F36C: jr          $ra
    // 0x8022F370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237C3C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237C40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237C48: jal         0x8004F418
    // 0x80237C4C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80237C4C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    after_0:
    // 0x80237C50: jal         0x8002A46C
    // 0x80237C54: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8002A46C_586C(rdram, ctx);
        goto after_1;
    // 0x80237C54: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
    // 0x80237C58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237C5C: jr          $ra
    // 0x80237C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DEBC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DEBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023DEC0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023DEC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023DEC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023DECC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023DED0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DED4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DED8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DEDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DEE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DEE4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023DEE8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023DEEC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023DEF0: lbu         $a1, 0x66AF($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X66AF);
    // 0x8023DEF4: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8023DEF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023DEFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023DF00: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023DF04: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023DF08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023DF0C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DF10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DF14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DF18: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DF1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DF20: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023DF24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DF28: lbu         $v1, 0x66B1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X66B1);
    // 0x8023DF2C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023DF30: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023DF34: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023DF38: lui         $v0, 0x40A
    ctx->r2 = S32(0X40A << 16);
    // 0x8023DF3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023DF40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023DF44: jal         0x80051E18
    // 0x8023DF48: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8023DF48: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8023DF4C: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8023DF50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DF54: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023DF58: jr          $ra
    // 0x8023DF5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023DF5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80237A8C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237A8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237A90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237A94: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237A98: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237A9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237AA0: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80237AA4: bgez        $v0, L_80237B14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237AA8: nop
    
            goto L_80237B14;
    }
    // 0x80237AA8: nop

    // 0x80237AAC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80237AB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237AB4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80237AB8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237ABC: bne         $v0, $zero, L_80237B14
    if (ctx->r2 != 0) {
        // 0x80237AC0: addiu       $a0, $zero, 0x140
        ctx->r4 = ADD32(0, 0X140);
            goto L_80237B14;
    }
    // 0x80237AC0: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x80237AC4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80237AC8: jal         0x8002A33C
    // 0x80237ACC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80237ACC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80237AD0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80237AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80237AD8: jal         0x8009A3B4
    // 0x80237ADC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237ADC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80237AE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237AE4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80237AE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237AEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237AF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237AF4: jal         0x800502EC
    // 0x80237AF8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_2;
    // 0x80237AF8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_2:
    // 0x80237AFC: jal         0x8005129C
    // 0x80237B00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x80237B00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80237B04: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80237B08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237B0C: j           L_80237B2C
    // 0x80237B10: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
        goto L_80237B2C;
    // 0x80237B10: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_80237B14:
    // 0x80237B14: jal         0x800504EC
    // 0x80237B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x80237B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80237B1C: jal         0x8005129C
    // 0x80237B20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_5;
    // 0x80237B20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80237B24: jal         0x80237C98
    // 0x80237B28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80237C98_ovl5(rdram, ctx);
        goto after_6;
    // 0x80237B28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80237B2C:
    // 0x80237B2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237B30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237B34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237B38: jr          $ra
    // 0x80237B3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237B3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023FF4C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FF4C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8023FF50: beq         $v1, $zero, L_8023FF6C
    if (ctx->r3 == 0) {
        // 0x8023FF54: addiu       $a1, $a0, 0xC0
        ctx->r5 = ADD32(ctx->r4, 0XC0);
            goto L_8023FF6C;
    }
    // 0x8023FF54: addiu       $a1, $a0, 0xC0
    ctx->r5 = ADD32(ctx->r4, 0XC0);
    // 0x8023FF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FF5C: beq         $v1, $v0, L_8023FF88
    if (ctx->r3 == ctx->r2) {
        // 0x8023FF60: nop
    
            goto L_8023FF88;
    }
    // 0x8023FF60: nop

    // 0x8023FF64: j           L_8023FFAC
    // 0x8023FF68: nop

        goto L_8023FFAC;
    // 0x8023FF68: nop

L_8023FF6C:
    // 0x8023FF6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FF70: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023FF74: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023FF78: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x8023FF7C: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x8023FF80: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8023FF84: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
L_8023FF88:
    // 0x8023FF88: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8023FF8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023FF90: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8023FF94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FF98: bgez        $v0, L_8023FFAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023FF9C: nop
    
            goto L_8023FFAC;
    }
    // 0x8023FF9C: nop

    // 0x8023FFA0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8023FFA4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023FFA8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8023FFAC:
    // 0x8023FFAC: jr          $ra
    // 0x8023FFB0: nop

    TRACE_RETURN()
    return;
    // 0x8023FFB0: nop

;}
RECOMP_FUNC void func_802338AC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802338B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802338B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802338B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802338BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802338C0: bne         $v0, $zero, L_802338F0
    if (ctx->r2 != 0) {
        // 0x802338C4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802338F0;
    }
    // 0x802338C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802338C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802338CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802338D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802338D4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802338D8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802338DC: addiu       $v0, $zero, -0x301
    ctx->r2 = ADD32(0, -0X301);
    // 0x802338E0: sh          $v0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r2;
    // 0x802338E4: addiu       $v0, $zero, 0x1400
    ctx->r2 = ADD32(0, 0X1400);
    // 0x802338E8: j           L_80233924
    // 0x802338EC: sh          $v0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r2;
        goto L_80233924;
    // 0x802338EC: sh          $v0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r2;
L_802338F0:
    // 0x802338F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802338F4: addiu       $a1, $s0, 0x366
    ctx->r5 = ADD32(ctx->r16, 0X366);
    // 0x802338F8: jal         0x8004F820
    // 0x802338FC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802338FC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x80233900: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233904: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233908: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023390C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233910: bne         $v0, $zero, L_80233924
    if (ctx->r2 != 0) {
        // 0x80233914: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80233924;
    }
    // 0x80233914: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80233918: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8023391C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233920: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_80233924:
    // 0x80233924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233928: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023392C: jr          $ra
    // 0x80233930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227130_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227134: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227138: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022713C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227140: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80227144: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80227148: beq         $v0, $zero, L_802272A8
    if (ctx->r2 == 0) {
        // 0x8022714C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802272A8;
    }
    // 0x8022714C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227150: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227154: addu        $at, $at, $v0
    gpr jr_addend_8022715C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227158: lw          $v0, 0x6F88($at)
    ctx->r2 = ADD32(ctx->r1, 0X6F88);
    // 0x8022715C: jr          $v0
    // 0x80227160: nop

    switch (jr_addend_8022715C >> 2) {
        case 0: goto L_80227164; break;
        case 1: goto L_80227208; break;
        case 2: goto L_80227250; break;
        case 3: goto L_80227270; break;
        case 4: goto L_802272A4; break;
        default: switch_error(__func__, 0x8022715C, 0x80246F88);
    }
    // 0x80227160: nop

L_80227164:
    // 0x80227164: jal         0x80054578
    // 0x80227168: nop

    func_80054578_2F978(rdram, ctx);
        goto after_0;
    // 0x80227168: nop

    after_0:
    // 0x8022716C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227170: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80227174: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227178: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022717C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80227180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227184: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227188: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022718C: addiu       $v0, $zero, -0x72D
    ctx->r2 = ADD32(0, -0X72D);
    // 0x80227190: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227194: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80227198: addiu       $v0, $zero, -0x301
    ctx->r2 = ADD32(0, -0X301);
    // 0x8022719C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271A0: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802271A4: addiu       $v0, $zero, 0x9D
    ctx->r2 = ADD32(0, 0X9D);
    // 0x802271A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271AC: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x802271B0: lui         $v0, 0xF8D3
    ctx->r2 = S32(0XF8D3 << 16);
    // 0x802271B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271B8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802271BC: lui         $v0, 0xFCFF
    ctx->r2 = S32(0XFCFF << 16);
    // 0x802271C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271C4: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802271C8: lui         $v0, 0x9D
    ctx->r2 = S32(0X9D << 16);
    // 0x802271CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271D0: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802271D4: addiu       $v0, $zero, 0xA08
    ctx->r2 = ADD32(0, 0XA08);
    // 0x802271D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271DC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802271E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271E4: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x802271E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271EC: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802271F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271F4: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x802271F8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802271FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227200: j           L_80227294
    // 0x80227204: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
        goto L_80227294;
    // 0x80227204: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80227208:
    // 0x80227208: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022720C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227210: jal         0x80036B00
    // 0x80227214: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x80227214: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227218: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8022721C: jal         0x8004F418
    // 0x80227220: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80227220: nop

    after_2:
    // 0x80227224: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227228: jal         0x80070050
    // 0x8022722C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8022722C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_3:
    // 0x80227230: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227234: beq         $v0, $zero, L_80227294
    if (ctx->r2 == 0) {
        // 0x80227238: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227294;
    }
    // 0x80227238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022723C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227240: jal         0x80034844
    // 0x80227244: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80227244: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x80227248: j           L_80227294
    // 0x8022724C: nop

        goto L_80227294;
    // 0x8022724C: nop

L_80227250:
    // 0x80227250: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80227254: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80227258: bne         $v0, $zero, L_802272A8
    if (ctx->r2 != 0) {
        // 0x8022725C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802272A8;
    }
    // 0x8022725C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227260: jal         0x800616FC
    // 0x80227264: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80227264: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x80227268: j           L_80227294
    // 0x8022726C: nop

        goto L_80227294;
    // 0x8022726C: nop

L_80227270:
    // 0x80227270: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227274: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227278: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022727C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227280: bne         $v0, $zero, L_802272A8
    if (ctx->r2 != 0) {
        // 0x80227284: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_802272A8;
    }
    // 0x80227284: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80227288: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022728C: jal         0x8002A2F8
    // 0x80227290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80227290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
L_80227294:
    // 0x80227294: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227298: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022729C: j           L_802272A8
    // 0x802272A0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802272A8;
    // 0x802272A0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802272A4:
    // 0x802272A4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802272A8:
    // 0x802272A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802272AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802272B0: jr          $ra
    // 0x802272B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802272B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
