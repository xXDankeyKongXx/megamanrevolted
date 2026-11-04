#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228728_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228728: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022872C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228730: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80228734: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228738: bne         $v0, $zero, L_80228744
    if (ctx->r2 != 0) {
        // 0x8022873C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228744;
    }
    // 0x8022873C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228740: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228744:
    // 0x80228744: jr          $ra
    // 0x80228748: nop

    TRACE_RETURN()
    return;
    // 0x80228748: nop

;}
RECOMP_FUNC void func_8022F2B4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022F2B8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022F2BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F2C0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022F2C4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022F2C8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022F2CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F2D0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8022F2D4: jal         0x8009A3B4
    // 0x8022F2D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F2D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F2DC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022F2E0: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022F2E4: jal         0x8009A3B4
    // 0x8022F2E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F2E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F2EC: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022F2F0: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022F2F4: jal         0x8009A3B4
    // 0x8022F2F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F2F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F2FC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F300: lhu         $a1, 0x44($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X44);
    // 0x8022F304: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022F308: lhu         $a2, 0x46($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X46);
    // 0x8022F30C: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x8022F310: lhu         $a3, 0x48($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X48);
    // 0x8022F314: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022F318: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022F31C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022F320: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022F324: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022F328: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022F32C: sh          $a0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r4;
    // 0x8022F330: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x8022F334: lhu         $v0, 0x54($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X54);
    // 0x8022F338: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x8022F33C: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x8022F340: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x8022F344: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F348: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022F34C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F350: slti        $a2, $a2, 0x400
    ctx->r6 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
    // 0x8022F354: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x8022F358: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x8022F35C: sw          $a0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r4;
    // 0x8022F360: beq         $a2, $zero, L_8022F37C
    if (ctx->r6 == 0) {
        // 0x8022F364: sw          $a1, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r5;
            goto L_8022F37C;
    }
    // 0x8022F364: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x8022F368: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x8022F36C: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x8022F370: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F374: beql        $v0, $zero, L_8022F3CC
    if (ctx->r2 == 0) {
        // 0x8022F378: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022F3CC;
    }
    goto skip_0;
    // 0x8022F378: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    skip_0:
L_8022F37C:
    // 0x8022F37C: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x8022F380: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x8022F384: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F388: beq         $v0, $zero, L_8022F394
    if (ctx->r2 == 0) {
        // 0x8022F38C: addiu       $a0, $zero, 0x161
        ctx->r4 = ADD32(0, 0X161);
            goto L_8022F394;
    }
    // 0x8022F38C: addiu       $a0, $zero, 0x161
    ctx->r4 = ADD32(0, 0X161);
    // 0x8022F390: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
L_8022F394:
    // 0x8022F394: jal         0x8002A33C
    // 0x8022F398: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022F398: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022F39C: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022F3A0: bgez        $v0, L_8022F3AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F3A4: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022F3AC;
    }
    // 0x8022F3A4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022F3A8: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
L_8022F3AC:
    // 0x8022F3AC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022F3B0: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F3B4: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
    // 0x8022F3B8: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8022F3BC: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022F3C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F3C4: j           L_8022F418
    // 0x8022F3C8: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
        goto L_8022F418;
    // 0x8022F3C8: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_8022F3CC:
    // 0x8022F3CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F3D0: jal         0x8009A3B4
    // 0x8022F3D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F3D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022F3D8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022F3DC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8022F3E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F3E4: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022F3E8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F3EC: addiu       $v0, $s1, 0xC0
    ctx->r2 = ADD32(ctx->r17, 0XC0);
    // 0x8022F3F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F3F4: lui         $v0, 0xC80
    ctx->r2 = S32(0XC80 << 16);
    // 0x8022F3F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022F3FC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022F400: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F404: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F408: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F40C: jal         0x80051E18
    // 0x8022F410: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_5;
    // 0x8022F410: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022F414: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
L_8022F418:
    // 0x8022F418: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8022F41C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022F420: jal         0x8009A3B4
    // 0x8022F424: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022F424: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022F428: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x8022F42C: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022F430: jal         0x80031600
    // 0x8022F434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x8022F434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022F438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F43C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8022F440: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F444: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8022F448: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8022F44C: jal         0x80031DA8
    // 0x8022F450: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8022F450: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022F454: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F458: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022F45C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F460: jal         0x8003B564
    // 0x8022F464: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022F464: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022F468: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8022F46C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8022F470: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022F474: jr          $ra
    // 0x8022F478: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022F478: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022EF20_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022EF24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022EF28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022EF30: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022EF34: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022EF38: lbu         $a3, 0x0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EF3C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EF40: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x8022EF44: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022EF48: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022EF4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022EF50: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
    // 0x8022EF54: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022EF58: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022EF5C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022EF60: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x8022EF64: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022EF68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EF6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EF70: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022EF74: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022EF78: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022EF7C: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022EF80: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022EF84: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022EF88: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022EF8C: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022EF90: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022EF94: ori         $a3, $a3, 0x6
    ctx->r7 = ctx->r7 | 0X6;
    // 0x8022EF98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EF9C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EFA0: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022EFA4: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
    // 0x8022EFA8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8022EFAC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022EFB0: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x8022EFB4: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022EFB8: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x8022EFBC: jal         0x8009A3B4
    // 0x8022EFC0: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EFC0: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    after_0:
    // 0x8022EFC4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022EFC8: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x8022EFCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EFD0: jal         0x8009A3B4
    // 0x8022EFD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EFD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022EFD8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022EFDC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022EFE0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022EFE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EFE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EFEC: jal         0x8009A3B4
    // 0x8022EFF0: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EFF0: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022EFF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EFF8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022EFFC: jal         0x80031600
    // 0x8022F000: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022F000: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022F004: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F008: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F00C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F010: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F014: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F018: jal         0x80031DA8
    // 0x8022F01C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022F01C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022F020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F024: jal         0x8004D5D4
    // 0x8022F028: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_5;
    // 0x8022F028: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x8022F02C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F030: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022F034: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F038: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F03C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F040: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F044: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F048: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F04C: jr          $ra
    // 0x8022F050: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F050: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022BCC8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BCC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BCCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BCD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BCD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BCD8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BCDC: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022BCE0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BCE4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BCE8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BCEC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BCF0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022BCF4: jal         0x8004D5D4
    // 0x8022BCF8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022BCF8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022BCFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD00: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BD04: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BD08: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BD0C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BD10: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BD14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BD18: jal         0x8003E934
    // 0x8022BD1C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022BD1C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022BD20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022BD28: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BD2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BD34: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BD38: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022BD3C: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022BD40: jal         0x80050294
    // 0x8022BD44: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022BD44: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    after_2:
    // 0x8022BD48: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022BD4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD54: jr          $ra
    // 0x8022BD58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BD58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BD5C: nop

;}
RECOMP_FUNC void func_8022B924_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B928: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B92C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B930: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B934: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B93C: jal         0x8009A3B4
    // 0x8022B940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B940: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022B944: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B948: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B94C: jal         0x8009A3B4
    // 0x8022B950: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B950: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B954: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B958: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B95C: jal         0x8009A3B4
    // 0x8022B960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B964: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B968: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B96C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B970: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B974: lw          $v0, 0x65E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65E4);
    // 0x8022B978: jalr        $v0
    // 0x8022B97C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022B97C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B988: jr          $ra
    // 0x8022B98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802288EC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802288F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802288FC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228900: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228904: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228908: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022890C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228910: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80228914: bne         $v1, $v0, L_80228930
    if (ctx->r3 != ctx->r2) {
        // 0x80228918: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80228930;
    }
    // 0x80228918: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022891C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80228920: addiu       $s1, $s1, 0x6500
    ctx->r17 = ADD32(ctx->r17, 0X6500);
    // 0x80228924: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80228928: j           L_80228940
    // 0x8022892C: addiu       $s3, $s3, 0x6520
    ctx->r19 = ADD32(ctx->r19, 0X6520);
        goto L_80228940;
    // 0x8022892C: addiu       $s3, $s3, 0x6520
    ctx->r19 = ADD32(ctx->r19, 0X6520);
L_80228930:
    // 0x80228930: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80228934: addiu       $s1, $s1, 0x64F0
    ctx->r17 = ADD32(ctx->r17, 0X64F0);
    // 0x80228938: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022893C: addiu       $s3, $s3, 0x6510
    ctx->r19 = ADD32(ctx->r19, 0X6510);
L_80228940:
    // 0x80228940: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80228944: jal         0x800A3450
    // 0x80228948: addiu       $s4, $s4, 0x6530
    ctx->r20 = ADD32(ctx->r20, 0X6530);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80228948: addiu       $s4, $s4, 0x6530
    ctx->r20 = ADD32(ctx->r20, 0X6530);
    after_0:
    // 0x8022894C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228950: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228954: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80228958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022895C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80228960: beq         $v1, $v0, L_802289EC
    if (ctx->r3 == ctx->r2) {
        // 0x80228964: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802289EC;
    }
    // 0x80228964: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228968: beql        $v0, $zero, L_80228980
    if (ctx->r2 == 0) {
        // 0x8022896C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228980;
    }
    goto skip_0;
    // 0x8022896C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228970: beq         $v1, $zero, L_80228990
    if (ctx->r3 == 0) {
        // 0x80228974: nop
    
            goto L_80228990;
    }
    // 0x80228974: nop

    // 0x80228978: j           L_80228A7C
    // 0x8022897C: nop

        goto L_80228A7C;
    // 0x8022897C: nop

L_80228980:
    // 0x80228980: beq         $v1, $v0, L_80228A00
    if (ctx->r3 == ctx->r2) {
        // 0x80228984: nop
    
            goto L_80228A00;
    }
    // 0x80228984: nop

    // 0x80228988: j           L_80228A7C
    // 0x8022898C: nop

        goto L_80228A7C;
    // 0x8022898C: nop

L_80228990:
    // 0x80228990: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228994: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80228998: bne         $v0, $zero, L_802289BC
    if (ctx->r2 != 0) {
        // 0x8022899C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802289BC;
    }
    // 0x8022899C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289A0: jal         0x800A3450
    // 0x802289A4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802289A4: nop

    after_1:
    // 0x802289A8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802289AC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802289B0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802289B4: beq         $v0, $zero, L_802289C8
    if (ctx->r2 == 0) {
        // 0x802289B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802289C8;
    }
    // 0x802289B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802289BC:
    // 0x802289BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802289C0: j           L_802289DC
    // 0x802289C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802289DC;
    // 0x802289C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802289C8:
    // 0x802289C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802289CC: jal         0x80229D58
    // 0x802289D0: nop

    func_80229D58_ovl12(rdram, ctx);
        goto after_2;
    // 0x802289D0: nop

    after_2:
    // 0x802289D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802289DC:
    // 0x802289DC: jal         0x80229D98
    // 0x802289E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80229D98_ovl12(rdram, ctx);
        goto after_3;
    // 0x802289E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x802289E4: j           L_80228AA0
    // 0x802289E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80228AA0;
    // 0x802289E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_802289EC:
    // 0x802289EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802289F0: jal         0x80229D48
    // 0x802289F4: nop

    func_80229D48_ovl12(rdram, ctx);
        goto after_4;
    // 0x802289F4: nop

    after_4:
    // 0x802289F8: j           L_80228AA0
    // 0x802289FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80228AA0;
    // 0x802289FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228A00:
    // 0x80228A00: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80228A04: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80228A08: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x80228A0C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80228A10: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80228A14: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228A18: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80228A1C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80228A20: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80228A24: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80228A28: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228A2C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228A30: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80228A34: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80228A38: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80228A3C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80228A40: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80228A44: beq         $v1, $zero, L_80228A74
    if (ctx->r3 == 0) {
        // 0x80228A48: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80228A74;
    }
    // 0x80228A48: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80228A4C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80228A50: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80228A54: beq         $v0, $zero, L_80228A74
    if (ctx->r2 == 0) {
        // 0x80228A58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228A74;
    }
    // 0x80228A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A5C: jal         0x80229D98
    // 0x80228A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229D98_ovl12(rdram, ctx);
        goto after_5;
    // 0x80228A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80228A64: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228A68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228A6C: j           L_80228AA0
    // 0x80228A70: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80228AA0;
    // 0x80228A70: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228A74:
    // 0x80228A74: j           L_80228AA0
    // 0x80228A78: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_80228AA0;
    // 0x80228A78: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_80228A7C:
    // 0x80228A7C: jal         0x800A3450
    // 0x80228A80: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80228A80: nop

    after_6:
    // 0x80228A84: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228A88: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228A8C: jal         0x80229D58
    // 0x80228A90: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80229D58_ovl12(rdram, ctx);
        goto after_7;
    // 0x80228A90: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x80228A94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228A98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A9C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_80228AA0:
    // 0x80228AA0: jal         0x800A3450
    // 0x80228AA4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80228AA4: nop

    after_8:
    // 0x80228AA8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228AAC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80228AB0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228AB4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80228AB8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80228ABC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228AC0: beq         $v1, $v0, L_80228AD8
    if (ctx->r3 == ctx->r2) {
        // 0x80228AC4: nop
    
            goto L_80228AD8;
    }
    // 0x80228AC4: nop

    // 0x80228AC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228ACC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228AD0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228AD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228AD8:
    // 0x80228AD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80228ADC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228AE0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228AE4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228AE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228AEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228AF0: jr          $ra
    // 0x80228AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80234BC0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234BC0: lb          $v0, 0x77D0($at)
    ctx->r2 = MEM_B(ctx->r1, 0X77D0);
    // 0x80234BC4: lb          $v0, -0x529C($at)
    ctx->r2 = MEM_B(ctx->r1, -0X529C);
    // 0x80234BC8: lb          $v0, 0x77D0($at)
    ctx->r2 = MEM_B(ctx->r1, 0X77D0);
    // 0x80234BCC: nop

    // 0x80234BD0: lb          $v0, -0x4490($at)
    ctx->r2 = MEM_B(ctx->r1, -0X4490);
    // 0x80234BD4: lb          $v0, 0x77D0($at)
    ctx->r2 = MEM_B(ctx->r1, 0X77D0);
    // 0x80234BD8: lb          $v0, -0x42A0($at)
    ctx->r2 = MEM_B(ctx->r1, -0X42A0);
    // 0x80234BDC: lb          $v0, 0x77D0($at)
    ctx->r2 = MEM_B(ctx->r1, 0X77D0);
    // 0x80234BE0: lb          $v0, -0x35BC($at)
    ctx->r2 = MEM_B(ctx->r1, -0X35BC);
    // 0x80234BE4: lb          $v0, -0x3E30($at)
    ctx->r2 = MEM_B(ctx->r1, -0X3E30);
    // 0x80234BE8: lb          $v0, -0x34A0($at)
    ctx->r2 = MEM_B(ctx->r1, -0X34A0);
    // 0x80234BEC: lb          $v0, -0x51B0($at)
    ctx->r2 = MEM_B(ctx->r1, -0X51B0);
    // 0x80234BF0: nop

    // 0x80234BF4: nop

    // 0x80234BF8: nop

    // 0x80234BFC: nop

    // 0x80234C00: nop

    // 0x80234C04: nop

    // 0x80234C08: nop

    // 0x80234C0C: nop

    // 0x80234C10: lb          $v1, 0x4BC4($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC4);
    // 0x80234C14: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234C18: nop

    // 0x80234C1C: nop

    // 0x80234C20: nop

    // 0x80234C24: nop

    // 0x80234C28: nop

    // 0x80234C2C: nop

    // 0x80234C30: lb          $v1, 0x4BEC($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BEC);
    // 0x80234C34: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234C38: nop

    // 0x80234C3C: lb          $v1, 0x4BC8($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC8);
    // 0x80234C40: nop

    // 0x80234C44: nop

    // 0x80234C48: nop

    // 0x80234C4C: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234C50: nop

    // 0x80234C54: nop

    // 0x80234C58: nop

    // 0x80234C5C: lb          $v1, 0x4BD4($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BD4);
    // 0x80234C60: nop

    // 0x80234C64: nop

    // 0x80234C68: nop

    // 0x80234C6C: nop

    // 0x80234C70: nop

    // 0x80234C74: nop

    // 0x80234C78: nop

    // 0x80234C7C: nop

    // 0x80234C80: nop

    // 0x80234C84: nop

    // 0x80234C88: nop

    // 0x80234C8C: nop

    // 0x80234C90: nop

    // 0x80234C94: nop

    // 0x80234C98: nop

    // 0x80234C9C: nop

    // 0x80234CA0: nop

    // 0x80234CA4: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234CA8: nop

    // 0x80234CAC: nop

    // 0x80234CB0: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234CB4: nop

    // 0x80234CB8: nop

    // 0x80234CBC: nop

    // 0x80234CC0: nop

    // 0x80234CC4: nop

    // 0x80234CC8: nop

    // 0x80234CCC: nop

    // 0x80234CD0: nop

    // 0x80234CD4: nop

    // 0x80234CD8: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234CDC: nop

    // 0x80234CE0: nop

    // 0x80234CE4: nop

    // 0x80234CE8: nop

    // 0x80234CEC: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234CF0: nop

    // 0x80234CF4: nop

    // 0x80234CF8: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234CFC: nop

    // 0x80234D00: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234D04: nop

    // 0x80234D08: nop

    // 0x80234D0C: nop

    // 0x80234D10: nop

    // 0x80234D14: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234D18: lb          $v1, 0x4BDC($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BDC);
    // 0x80234D1C: nop

    // 0x80234D20: nop

    // 0x80234D24: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234D28: lb          $v1, 0x4BE4($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BE4);
    // 0x80234D2C: nop

    // 0x80234D30: lb          $v1, 0x4BC0($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BC0);
    // 0x80234D34: nop

    // 0x80234D38: nop

    // 0x80234D3C: nop

    // 0x80234D40: nop

    // 0x80234D44: nop

    // 0x80234D48: nop

    // 0x80234D4C: nop

    // 0x80234D50: nop

    // 0x80234D54: nop

    // 0x80234D58: nop

    // 0x80234D5C: nop

    // 0x80234D60: nop

    // 0x80234D64: nop

    // 0x80234D68: nop

    // 0x80234D6C: nop

    // 0x80234D70: nop

    // 0x80234D74: nop

    // 0x80234D78: lb          $v1, 0x4BE8($at)
    ctx->r3 = MEM_B(ctx->r1, 0X4BE8);
    // 0x80234D7C: nop

;}
RECOMP_FUNC void func_8022DD1C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022DD20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022DD24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DD28: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DD2C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022DD30: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022DD34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DD38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DD3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022DD40: jal         0x8009A3B4
    // 0x8022DD44: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DD44: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022DD48: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DD4C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DD50: jal         0x8009A3B4
    // 0x8022DD54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DD54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DD58: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DD5C: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x8022DD60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022DD64: jal         0x8009A3B4
    // 0x8022DD68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DD68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DD6C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DD70: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DD74: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DD78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DD7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DD80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DD84: lw          $v0, 0x6AEC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6AEC);
    // 0x8022DD88: jalr        $v0
    // 0x8022DD8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022DD8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DD90: jal         0x8003ECF0
    // 0x8022DD94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_4;
    // 0x8022DD94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022DD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD9C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022DDA0: jal         0x8022E688
    // 0x8022DDA4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8022E688_ovl12(rdram, ctx);
        goto after_5;
    // 0x8022DDA4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022DDA8: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022DDAC: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022DDB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DDB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DDB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDBC: jal         0x8009A3B4
    // 0x8022DDC0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022DDC0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_6:
    // 0x8022DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022DDC8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022DDCC: jal         0x80031600
    // 0x8022DDD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x8022DDD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8022DDD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DDD8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022DDDC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DDE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022DDE4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DDE8: jal         0x80031DA8
    // 0x8022DDEC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8022DDEC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022DDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DDF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DDF8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DDFC: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8022DE00: jal         0x80047284
    // 0x8022DE04: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022DE04: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_9:
    // 0x8022DE08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DE0C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022DE10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022DE14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022DE18: jr          $ra
    // 0x8022DE1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DE1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226E1C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E2C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226E30: bne         $v0, $zero, L_80226E60
    if (ctx->r2 != 0) {
        // 0x80226E34: nop
    
            goto L_80226E60;
    }
    // 0x80226E34: nop

    // 0x80226E38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226E3C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226E40: bne         $v0, $zero, L_80226E80
    if (ctx->r2 != 0) {
        // 0x80226E44: nop
    
            goto L_80226E80;
    }
    // 0x80226E44: nop

    // 0x80226E48: jal         0x80036E48
    // 0x80226E4C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80226E4C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80226E50: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226E54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E58: j           L_80226E80
    // 0x80226E5C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226E80;
    // 0x80226E5C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226E60:
    // 0x80226E60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226E64: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226E68: bne         $v0, $zero, L_80226E80
    if (ctx->r2 != 0) {
        // 0x80226E6C: nop
    
            goto L_80226E80;
    }
    // 0x80226E6C: nop

    // 0x80226E70: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226E74: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226E78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E7C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226E80:
    // 0x80226E80: jal         0x8005FB90
    // 0x80226E84: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_1;
    // 0x80226E84: nop

    after_1:
    // 0x80226E88: jal         0x80060018
    // 0x80226E8C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_2;
    // 0x80226E8C: nop

    after_2:
    // 0x80226E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E98: jr          $ra
    // 0x80226E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229FE4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229FE4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80229FE8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80229FEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229FF0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80229FF4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80229FF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229FFC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022A000: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022A004: jal         0x8009A3B4
    // 0x8022A008: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A008: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022A00C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022A010: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A014: jal         0x8009A3B4
    // 0x8022A018: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A018: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A01C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022A020: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x8022A024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A028: jal         0x8009A3B4
    // 0x8022A02C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A02C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A030: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022A034: lbu         $v1, -0x3A4C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4C);
    // 0x8022A038: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A03C: bne         $v1, $v0, L_8022A310
    if (ctx->r3 != ctx->r2) {
        // 0x8022A040: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022A310;
    }
    // 0x8022A040: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022A044: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8022A048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A04C: beq         $v1, $v0, L_8022A0AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A050: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022A0AC;
    }
    // 0x8022A050: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A054: beql        $v0, $zero, L_8022A06C
    if (ctx->r2 == 0) {
        // 0x8022A058: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A06C;
    }
    goto skip_0;
    // 0x8022A058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A05C: beq         $v1, $zero, L_8022A084
    if (ctx->r3 == 0) {
        // 0x8022A060: addiu       $a0, $s1, 0x54
        ctx->r4 = ADD32(ctx->r17, 0X54);
            goto L_8022A084;
    }
    // 0x8022A060: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x8022A064: j           L_8022A1F8
    // 0x8022A068: nop

        goto L_8022A1F8;
    // 0x8022A068: nop

L_8022A06C:
    // 0x8022A06C: beq         $v1, $v0, L_8022A138
    if (ctx->r3 == ctx->r2) {
        // 0x8022A070: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A138;
    }
    // 0x8022A070: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A074: beq         $v1, $v0, L_8022A16C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A078: nop
    
            goto L_8022A16C;
    }
    // 0x8022A078: nop

    // 0x8022A07C: j           L_8022A1F8
    // 0x8022A080: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
        goto L_8022A1F8;
    // 0x8022A080: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
L_8022A084:
    // 0x8022A084: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022A088: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022A08C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022A090: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A094: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A098: slti        $v0, $v0, -0x100
    ctx->r2 = SIGNED(ctx->r2) < -0X100 ? 1 : 0;
    // 0x8022A09C: beq         $v0, $zero, L_8022A1F8
    if (ctx->r2 == 0) {
        // 0x8022A0A0: nop
    
            goto L_8022A1F8;
    }
    // 0x8022A0A0: nop

    // 0x8022A0A4: j           L_8022A158
    // 0x8022A0A8: nop

        goto L_8022A158;
    // 0x8022A0A8: nop

L_8022A0AC:
    // 0x8022A0AC: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8022A0B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A0B4: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x8022A0B8: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022A0BC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    // 0x8022A0C0: jal         0x80032498
    // 0x8022A0C4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8022A0C4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022A0C8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022A0CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A0D0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A0D4: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8022A0D8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022A0DC: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
    // 0x8022A0E0: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x8022A0E4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8022A0E8: jal         0x800324B4
    // 0x8022A0EC: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x8022A0EC: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    after_4:
    // 0x8022A0F0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022A0F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A0F8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A0FC: lhu         $v0, 0x34A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X34A);
    // 0x8022A100: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8022A104: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022A108: addiu       $v1, $v1, 0x300
    ctx->r3 = ADD32(ctx->r3, 0X300);
    // 0x8022A10C: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x8022A110: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022A114: slti        $a0, $a0, 0x10
    ctx->r4 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8022A118: bne         $a0, $zero, L_8022A1F4
    if (ctx->r4 != 0) {
        // 0x8022A11C: sh          $v0, 0x34A($s1)
        MEM_H(0X34A, ctx->r17) = ctx->r2;
            goto L_8022A1F4;
    }
    // 0x8022A11C: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x8022A120: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022A124: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
    // 0x8022A128: sh          $v1, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r3;
    // 0x8022A12C: addiu       $v1, $zero, 0x2D8
    ctx->r3 = ADD32(0, 0X2D8);
    // 0x8022A130: j           L_8022A160
    // 0x8022A134: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
        goto L_8022A160;
    // 0x8022A134: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
L_8022A138:
    // 0x8022A138: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022A13C: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022A140: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022A144: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A148: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A14C: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x8022A150: bne         $v0, $zero, L_8022A1F8
    if (ctx->r2 != 0) {
        // 0x8022A154: addiu       $a0, $s1, 0x54
        ctx->r4 = ADD32(ctx->r17, 0X54);
            goto L_8022A1F8;
    }
    // 0x8022A154: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
L_8022A158:
    // 0x8022A158: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022A15C: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
L_8022A160:
    // 0x8022A160: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A164: j           L_8022A1F4
    // 0x8022A168: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
        goto L_8022A1F4;
    // 0x8022A168: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8022A16C:
    // 0x8022A16C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8022A170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A174: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x8022A178: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022A17C: addiu       $a0, $a0, 0xC00
    ctx->r4 = ADD32(ctx->r4, 0XC00);
    // 0x8022A180: jal         0x80032498
    // 0x8022A184: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x8022A184: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022A188: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022A18C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A190: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A194: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8022A198: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022A19C: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x8022A1A0: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x8022A1A4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x8022A1A8: jal         0x800324B4
    // 0x8022A1AC: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x8022A1AC: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    after_6:
    // 0x8022A1B0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022A1B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A1B8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A1BC: lhu         $v0, 0x34A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X34A);
    // 0x8022A1C0: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8022A1C4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022A1C8: addiu       $v1, $v1, 0x300
    ctx->r3 = ADD32(ctx->r3, 0X300);
    // 0x8022A1CC: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x8022A1D0: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022A1D4: slti        $a0, $a0, 0x10
    ctx->r4 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8022A1D8: bne         $a0, $zero, L_8022A1F4
    if (ctx->r4 != 0) {
        // 0x8022A1DC: sh          $v0, 0x34A($s1)
        MEM_H(0X34A, ctx->r17) = ctx->r2;
            goto L_8022A1F4;
    }
    // 0x8022A1DC: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x8022A1E0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022A1E4: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x8022A1E8: addiu       $v0, $zero, 0x328
    ctx->r2 = ADD32(0, 0X328);
    // 0x8022A1EC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022A1F0: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
L_8022A1F4:
    // 0x8022A1F4: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
L_8022A1F8:
    // 0x8022A1F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A1FC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A200: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022A204: lh          $a3, 0x16($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X16);
    // 0x8022A208: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A20C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A210: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A214: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022A218: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A21C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x8022A220: jal         0x8009A3B4
    // 0x8022A224: sw          $a3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022A224: sw          $a3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r7;
    after_7:
    // 0x8022A228: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022A22C: beq         $v0, $zero, L_8022A290
    if (ctx->r2 == 0) {
        // 0x8022A230: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A290;
    }
    // 0x8022A230: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A234: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A238: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022A23C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A240: beq         $v0, $zero, L_8022A26C
    if (ctx->r2 == 0) {
        // 0x8022A244: nop
    
            goto L_8022A26C;
    }
    // 0x8022A244: nop

    // 0x8022A248: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A24C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A250: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x8022A254: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022A258: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022A25C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A260: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A264: j           L_8022A28C
    // 0x8022A268: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8022A28C;
    // 0x8022A268: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8022A26C:
    // 0x8022A26C: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A270: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A274: addiu       $a0, $a0, -0x100
    ctx->r4 = ADD32(ctx->r4, -0X100);
    // 0x8022A278: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022A27C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022A280: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A284: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A288: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
L_8022A28C:
    // 0x8022A28C: sh          $a0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r4;
L_8022A290:
    // 0x8022A290: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8022A294: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A298: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A29C: beq         $v0, $zero, L_8022A328
    if (ctx->r2 == 0) {
        // 0x8022A2A0: addiu       $s0, $sp, 0x28
        ctx->r16 = ADD32(ctx->r29, 0X28);
            goto L_8022A328;
    }
    // 0x8022A2A0: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022A2A4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A2A8: bne         $v0, $zero, L_8022A2D4
    if (ctx->r2 != 0) {
        // 0x8022A2AC: nop
    
            goto L_8022A2D4;
    }
    // 0x8022A2AC: nop

    // 0x8022A2B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022A2B4: addiu       $v0, $v0, -0x3A46
    ctx->r2 = ADD32(ctx->r2, -0X3A46);
    // 0x8022A2B8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A2BC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022A2C0: lbu         $a0, -0x3A45($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3A45);
    // 0x8022A2C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A2C8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022A2CC: j           L_8022A304
    // 0x8022A2D0: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
        goto L_8022A304;
    // 0x8022A2D0: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
L_8022A2D4:
    // 0x8022A2D4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022A2D8: addiu       $a1, $a1, -0x3A46
    ctx->r5 = ADD32(ctx->r5, -0X3A46);
    // 0x8022A2DC: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x8022A2E0: sltiu       $v0, $a0, 0x2
    ctx->r2 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x8022A2E4: beq         $v0, $zero, L_8022A2F4
    if (ctx->r2 == 0) {
        // 0x8022A2E8: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_8022A2F4;
    }
    // 0x8022A2E8: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8022A2EC: j           L_8022A304
    // 0x8022A2F0: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_8022A304;
    // 0x8022A2F0: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8022A2F4:
    // 0x8022A2F4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022A2F8: lbu         $v1, -0x3A45($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A45);
    // 0x8022A2FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A300: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_8022A304:
    // 0x8022A304: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A308: j           L_8022A324
    // 0x8022A30C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_8022A324;
    // 0x8022A30C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_8022A310:
    // 0x8022A310: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x8022A314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A318: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A31C: jal         0x8009A3B4
    // 0x8022A320: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022A320: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
L_8022A324:
    // 0x8022A324: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8022A328:
    // 0x8022A328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A32C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022A330: jal         0x8009A3B4
    // 0x8022A334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022A334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022A338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A33C: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022A340: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x8022A344: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A348: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022A34C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022A350: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A354: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A358: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x8022A35C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A360: lui         $v0, 0x480
    ctx->r2 = S32(0X480 << 16);
    // 0x8022A364: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022A368: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A36C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022A370: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022A374: jal         0x80051E18
    // 0x8022A378: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x8022A378: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_10:
    // 0x8022A37C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A380: jal         0x8005044C
    // 0x8022A384: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    func_8005044C_2B84C(rdram, ctx);
        goto after_11;
    // 0x8022A384: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    after_11:
    // 0x8022A388: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A38C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022A390: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A394: jal         0x8003B564
    // 0x8022A398: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_12;
    // 0x8022A398: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_12:
    // 0x8022A39C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022A3A0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022A3A4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A3A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022A3AC: jr          $ra
    // 0x8022A3B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022A3B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80231914_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231914: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231918: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023191C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231920: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231924: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231928: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023192C: lbu         $s0, 0x9($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X9);
    // 0x80231930: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80231934: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80231938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023193C: beq         $s0, $v0, L_802319A4
    if (ctx->r16 == ctx->r2) {
        // 0x80231940: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_802319A4;
    }
    // 0x80231940: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80231944: beql        $v0, $zero, L_8023195C
    if (ctx->r2 == 0) {
        // 0x80231948: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023195C;
    }
    goto skip_0;
    // 0x80231948: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023194C: beq         $s0, $zero, L_8023196C
    if (ctx->r16 == 0) {
        // 0x80231950: nop
    
            goto L_8023196C;
    }
    // 0x80231950: nop

    // 0x80231954: j           L_80231AD4
    // 0x80231958: nop

        goto L_80231AD4;
    // 0x80231958: nop

L_8023195C:
    // 0x8023195C: beq         $s0, $v0, L_80231A98
    if (ctx->r16 == ctx->r2) {
        // 0x80231960: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80231A98;
    }
    // 0x80231960: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80231964: j           L_80231AD4
    // 0x80231968: nop

        goto L_80231AD4;
    // 0x80231968: nop

L_8023196C:
    // 0x8023196C: jal         0x8006FF84
    // 0x80231970: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80231970: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80231974: beq         $v0, $zero, L_80231AD4
    if (ctx->r2 == 0) {
        // 0x80231978: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231AD4;
    }
    // 0x80231978: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023197C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231980: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80231984: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80231988: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023198C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80231990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231994: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80231998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023199C: j           L_80231A88
    // 0x802319A0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_80231A88;
    // 0x802319A0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_802319A4:
    // 0x802319A4: jal         0x80231B5C
    // 0x802319A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80231B5C_ovl12(rdram, ctx);
        goto after_1;
    // 0x802319A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802319AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802319B0: beql        $v0, $zero, L_80231A78
    if (ctx->r2 == 0) {
        // 0x802319B4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80231A78;
    }
    goto skip_1;
    // 0x802319B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x802319B8: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x802319BC: bne         $v0, $zero, L_802319E0
    if (ctx->r2 != 0) {
        // 0x802319C0: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_802319E0;
    }
    // 0x802319C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802319C4: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x802319C8: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x802319CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802319D0: jal         0x800610AC
    // 0x802319D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x802319D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802319D8: j           L_80231A88
    // 0x802319DC: nop

        goto L_80231A88;
    // 0x802319DC: nop

L_802319E0:
    // 0x802319E0: beq         $v0, $s0, L_80231A88
    if (ctx->r2 == ctx->r16) {
        // 0x802319E4: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_80231A88;
    }
    // 0x802319E4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802319E8: beq         $v0, $zero, L_80231A38
    if (ctx->r2 == 0) {
        // 0x802319EC: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_80231A38;
    }
    // 0x802319EC: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x802319F0: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x802319F4: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x802319F8: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x802319FC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231A00: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231A04: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80231A08: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80231A0C: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80231A10: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231A18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231A1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80231A20: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80231A24: mfhi        $t0
    ctx->r8 = hi;
    // 0x80231A28: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80231A2C: nop

    // 0x80231A30: j           L_80231A58
    // 0x80231A34: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
        goto L_80231A58;
    // 0x80231A34: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_80231A38:
    // 0x80231A38: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80231A3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231A40: beq         $v1, $v0, L_80231A74
    if (ctx->r3 == ctx->r2) {
        // 0x80231A44: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80231A74;
    }
    // 0x80231A44: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80231A48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80231A4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231A50: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80231A54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80231A58:
    // 0x80231A58: jal         0x80069754
    // 0x80231A5C: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x80231A5C: nop

    after_3:
    // 0x80231A60: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80231A64: jal         0x8006036C
    // 0x80231A68: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80231A68: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x80231A6C: j           L_80231A88
    // 0x80231A70: nop

        goto L_80231A88;
    // 0x80231A70: nop

L_80231A74:
    // 0x80231A74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80231A78:
    // 0x80231A78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80231A7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231A80: jal         0x80069754
    // 0x80231A84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x80231A84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_80231A88:
    // 0x80231A88: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80231A8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A90: j           L_80231AD4
    // 0x80231A94: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80231AD4;
    // 0x80231A94: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80231A98:
    // 0x80231A98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231A9C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231AA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231AA4: bne         $v0, $zero, L_80231AD4
    if (ctx->r2 != 0) {
        // 0x80231AA8: nop
    
            goto L_80231AD4;
    }
    // 0x80231AA8: nop

    // 0x80231AAC: jal         0x80070050
    // 0x80231AB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80231AB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80231AB4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80231AB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231ABC: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80231AC0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231AC4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80231AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231ACC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80231AD0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80231AD4:
    // 0x80231AD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80231AD8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80231ADC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231AE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231AE4: jr          $ra
    // 0x80231AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229454_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229458: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022945C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80229460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229464: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229468: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022946C: lw          $v0, 0x655C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X655C);
    // 0x80229470: jalr        $v0
    // 0x80229474: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229474: nop

    after_0:
    // 0x80229478: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022947C: jr          $ra
    // 0x80229480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F44_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227F54: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227F58: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227F5C: jal         0x8004FA7C
    // 0x80227F60: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227F60: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227F64: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80227F68: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80227F6C: bne         $v0, $zero, L_80227F98
    if (ctx->r2 != 0) {
        // 0x80227F70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F98;
    }
    // 0x80227F70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F74: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80227F78: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80227F7C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80227F80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F88: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80227F8C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80227F90: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80227F94: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80227F98:
    // 0x80227F98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227F9C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227FA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227FA4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227FAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227FB0: jr          $ra
    // 0x80227FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232950_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232954: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232958: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023295C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232960: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232964: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232968: lw          $v0, 0x6CD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CD0);
    // 0x8023296C: jalr        $v0
    // 0x80232970: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232970: nop

    after_0:
    // 0x80232974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232978: jr          $ra
    // 0x8023297C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023297C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D75C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D760: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D764: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D76C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022D770: bne         $a1, $zero, L_8022D7A0
    if (ctx->r5 != 0) {
        // 0x8022D774: andi        $v0, $a1, 0x500
        ctx->r2 = ctx->r5 & 0X500;
            goto L_8022D7A0;
    }
    // 0x8022D774: andi        $v0, $a1, 0x500
    ctx->r2 = ctx->r5 & 0X500;
    // 0x8022D778: jal         0x800A3450
    // 0x8022D77C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D77C: nop

    after_0:
    // 0x8022D780: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022D784: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022D788: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D78C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D790: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D794: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022D798: j           L_8022D7BC
    // 0x8022D79C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022D7BC;
    // 0x8022D79C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022D7A0:
    // 0x8022D7A0: bnel        $v0, $zero, L_8022D7A8
    if (ctx->r2 != 0) {
        // 0x8022D7A4: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022D7A8;
    }
    goto skip_0;
    // 0x8022D7A4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022D7A8:
    // 0x8022D7A8: andi        $v0, $a1, 0xA00
    ctx->r2 = ctx->r5 & 0XA00;
    // 0x8022D7AC: beq         $v0, $zero, L_8022D7BC
    if (ctx->r2 == 0) {
        // 0x8022D7B0: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022D7BC;
    }
    // 0x8022D7B0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D7B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D7B8: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022D7BC:
    // 0x8022D7BC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022D7C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7C8: jr          $ra
    // 0x8022D7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282CC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802282D4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802282D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802282DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802282E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802282E4: lw          $v0, 0x6478($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6478);
    // 0x802282E8: jalr        $v0
    // 0x802282EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802282EC: nop

    after_0:
    // 0x802282F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802282F4: jr          $ra
    // 0x802282F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802282F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022802C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022802C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228030: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228034: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022803C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228040: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228044: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228048: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022804C: bne         $v0, $zero, L_80228074
    if (ctx->r2 != 0) {
        // 0x80228050: nop
    
            goto L_80228074;
    }
    // 0x80228050: nop

    // 0x80228054: jal         0x80229CB0
    // 0x80228058: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229CB0_ovl12(rdram, ctx);
        goto after_0;
    // 0x80228058: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022805C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228060: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228064: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80228068: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022806C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228070: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80228074:
    // 0x80228074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228078: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022807C: jr          $ra
    // 0x80228080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802281F4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228204: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228208: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022820C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228210: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228214: bne         $v0, $zero, L_80228280
    if (ctx->r2 != 0) {
        // 0x80228218: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80228280;
    }
    // 0x80228218: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022821C: jal         0x80229DE4
    // 0x80228220: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x80228220: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80228224: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228228: beq         $v0, $zero, L_8022827C
    if (ctx->r2 == 0) {
        // 0x8022822C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022827C;
    }
    // 0x8022822C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228230: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80228234: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80228238: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022823C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228240: bne         $v1, $zero, L_80228250
    if (ctx->r3 != 0) {
        // 0x80228244: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80228250;
    }
    // 0x80228244: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80228248: j           L_80228280
    // 0x8022824C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80228280;
    // 0x8022824C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80228250:
    // 0x80228250: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228254: jal         0x80229D58
    // 0x80228258: nop

    func_80229D58_ovl12(rdram, ctx);
        goto after_1;
    // 0x80228258: nop

    after_1:
    // 0x8022825C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228260: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228264: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228268: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022826C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80228270: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228274: j           L_80228280
    // 0x80228278: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80228280;
    // 0x80228278: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022827C:
    // 0x8022827C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228280:
    // 0x80228280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228288: jr          $ra
    // 0x8022828C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022828C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE0C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BE10: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022BE14: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022BE18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022BE1C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022BE20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BE24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BE28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BE2C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8022BE30: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8022BE34: addiu       $s0, $s0, 0x9D0
    ctx->r16 = ADD32(ctx->r16, 0X9D0);
    // 0x8022BE38: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022BE3C: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022BE40: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022BE44: beq         $v0, $zero, L_8022C11C
    if (ctx->r2 == 0) {
        // 0x8022BE48: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C11C;
    }
    // 0x8022BE48: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BE4C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BE50: addu        $at, $at, $v0
    gpr jr_addend_8022BE58 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BE54: lw          $v0, 0x7420($at)
    ctx->r2 = ADD32(ctx->r1, 0X7420);
    // 0x8022BE58: jr          $v0
    // 0x8022BE5C: nop

    switch (jr_addend_8022BE58 >> 2) {
        case 0: goto L_8022BE60; break;
        case 1: goto L_8022BEB4; break;
        case 2: goto L_8022BEDC; break;
        case 3: goto L_8022BF34; break;
        case 4: goto L_8022BF58; break;
        case 5: goto L_8022BFF4; break;
        case 6: goto L_8022C034; break;
        case 7: goto L_8022C0AC; break;
        default: switch_error(__func__, 0x8022BE58, 0x80237420);
    }
    // 0x8022BE5C: nop

L_8022BE60:
    // 0x8022BE60: jal         0x8022C13C
    // 0x8022BE64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8022C13C_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022BE64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x8022BE68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BE6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BE70: jal         0x8005F6B4
    // 0x8022BE74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8022BE74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022BE78: lui         $v0, 0xFF6D
    ctx->r2 = S32(0XFF6D << 16);
    // 0x8022BE7C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022BE80: lui         $v0, 0xFF20
    ctx->r2 = S32(0XFF20 << 16);
    // 0x8022BE84: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8022BE88: lui         $v0, 0x18A
    ctx->r2 = S32(0X18A << 16);
    // 0x8022BE8C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8022BE90: lui         $v0, 0x6F2
    ctx->r2 = S32(0X6F2 << 16);
    // 0x8022BE94: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8022BE98: lui         $v0, 0xB6
    ctx->r2 = S32(0XB6 << 16);
    // 0x8022BE9C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8022BEA0: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022BEA4: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x8022BEA8: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8022BEAC: j           L_8022C0A4
    // 0x8022BEB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C0A4;
    // 0x8022BEB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022BEB4:
    // 0x8022BEB4: jal         0x8006FF84
    // 0x8022BEB8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_2;
    // 0x8022BEB8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8022BEBC: beq         $v0, $zero, L_8022C11C
    if (ctx->r2 == 0) {
        // 0x8022BEC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C11C;
    }
    // 0x8022BEC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BEC4: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x8022BEC8: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022BECC: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x8022BED0: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8022BED4: j           L_8022C0A4
    // 0x8022BED8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C0A4;
    // 0x8022BED8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022BEDC:
    // 0x8022BEDC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022BEE0: sh          $v0, 0x438($s4)
    MEM_H(0X438, ctx->r20) = ctx->r2;
    // 0x8022BEE4: lh          $v1, 0x438($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X438);
    // 0x8022BEE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BEEC: sh          $v0, 0x43A($s4)
    MEM_H(0X43A, ctx->r20) = ctx->r2;
    // 0x8022BEF0: lh          $a0, 0x43A($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X43A);
    // 0x8022BEF4: addiu       $v0, $zero, -0xDE
    ctx->r2 = ADD32(0, -0XDE);
    // 0x8022BEF8: sh          $v0, 0x43C($s4)
    MEM_H(0X43C, ctx->r20) = ctx->r2;
    // 0x8022BEFC: lh          $a1, 0x43C($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X43C);
    // 0x8022BF00: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022BF04: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x8022BF08: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022BF0C: sh          $v0, 0x442($s4)
    MEM_H(0X442, ctx->r20) = ctx->r2;
    // 0x8022BF10: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BF14: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022BF18: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022BF1C: sw          $v1, 0x428($s4)
    MEM_W(0X428, ctx->r20) = ctx->r3;
    // 0x8022BF20: sw          $a0, 0x42C($s4)
    MEM_W(0X42C, ctx->r20) = ctx->r4;
    // 0x8022BF24: sw          $a1, 0x430($s4)
    MEM_W(0X430, ctx->r20) = ctx->r5;
    // 0x8022BF28: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8022BF2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BF30: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8022BF34:
    // 0x8022BF34: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BF38: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022BF3C: bne         $v0, $zero, L_8022C11C
    if (ctx->r2 != 0) {
        // 0x8022BF40: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022C11C;
    }
    // 0x8022BF40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BF44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BF48: jal         0x80050294
    // 0x8022BF4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022BF4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022BF50: j           L_8022C098
    // 0x8022BF54: nop

        goto L_8022C098;
    // 0x8022BF54: nop

L_8022BF58:
    // 0x8022BF58: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022BF5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BF60: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8022BF64: lh          $a3, 0x64($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X64);
    // 0x8022BF68: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x8022BF6C: jal         0x8004F820
    // 0x8022BF70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022BF70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022BF74: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x8022BF78: lh          $a3, 0x64($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X64);
    // 0x8022BF7C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022BF80: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022BF84: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BF88: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
    // 0x8022BF8C: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022BF90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BF94: jal         0x8004F820
    // 0x8022BF98: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022BF98: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8022BF9C: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x8022BFA0: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022BFA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BFA8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BFAC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022BFB0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022BFB4: bne         $s0, $zero, L_8022C11C
    if (ctx->r16 != 0) {
        // 0x8022BFB8: sh          $v1, 0x442($s4)
        MEM_H(0X442, ctx->r20) = ctx->r3;
            goto L_8022C11C;
    }
    // 0x8022BFB8: sh          $v1, 0x442($s4)
    MEM_H(0X442, ctx->r20) = ctx->r3;
    // 0x8022BFBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BFC0: jal         0x800616FC
    // 0x8022BFC4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8022BFC4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_6:
    // 0x8022BFC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BFCC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022BFD0: jal         0x80050294
    // 0x8022BFD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022BFD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022BFD8: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8022BFDC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022BFE0: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
    // 0x8022BFE4: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
    // 0x8022BFE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BFEC: j           L_8022C11C
    // 0x8022BFF0: sb          $v1, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r3;
        goto L_8022C11C;
    // 0x8022BFF0: sb          $v1, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r3;
L_8022BFF4:
    // 0x8022BFF4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BFF8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022BFFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C000: jal         0x8004DA90
    // 0x8022C004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x8022C004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x8022C008: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x8022C00C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C010: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
    // 0x8022C014: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C018: bne         $v0, $zero, L_8022C11C
    if (ctx->r2 != 0) {
        // 0x8022C01C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022C11C;
    }
    // 0x8022C01C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022C020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C024: jal         0x80050294
    // 0x8022C028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022C028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022C02C: j           L_8022C098
    // 0x8022C030: nop

        goto L_8022C098;
    // 0x8022C030: nop

L_8022C034:
    // 0x8022C034: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C038: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C03C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022C040: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C044: bne         $v0, $zero, L_8022C11C
    if (ctx->r2 != 0) {
        // 0x8022C048: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022C11C;
    }
    // 0x8022C048: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C04C: jal         0x800616FC
    // 0x8022C050: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x8022C050: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_10:
    // 0x8022C054: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022C058: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022C05C: jal         0x80050294
    // 0x8022C060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8022C060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8022C064: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x8022C068: lui         $v0, 0xFF9C
    ctx->r2 = S32(0XFF9C << 16);
    // 0x8022C06C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8022C070: lui         $v0, 0xEEE
    ctx->r2 = S32(0XEEE << 16);
    // 0x8022C074: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8022C078: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x8022C07C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8022C080: lui         $v0, 0xFA
    ctx->r2 = S32(0XFA << 16);
    // 0x8022C084: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022C088: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8022C08C: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x8022C090: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022C094: sb          $v1, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r3;
L_8022C098:
    // 0x8022C098: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8022C09C: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
    // 0x8022C0A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022C0A4:
    // 0x8022C0A4: j           L_8022C11C
    // 0x8022C0A8: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
        goto L_8022C11C;
    // 0x8022C0A8: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8022C0AC:
    // 0x8022C0AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C0B0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C0B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022C0B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C0BC: bne         $v0, $zero, L_8022C11C
    if (ctx->r2 != 0) {
        // 0x8022C0C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C11C;
    }
    // 0x8022C0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C0C8: jal         0x80034844
    // 0x8022C0CC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_12;
    // 0x8022C0CC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_12:
    // 0x8022C0D0: jal         0x80070050
    // 0x8022C0D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x8022C0D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
    // 0x8022C0D8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022C0DC: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    // 0x8022C0E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C0E4: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    // 0x8022C0E8: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8022C0EC: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x8022C0F0: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
    // 0x8022C0F4: sb          $zero, 0xD($s3)
    MEM_B(0XD, ctx->r19) = 0;
    // 0x8022C0F8: sb          $zero, 0xE($s3)
    MEM_B(0XE, ctx->r19) = 0;
    // 0x8022C0FC: sb          $zero, 0xF($s3)
    MEM_B(0XF, ctx->r19) = 0;
    // 0x8022C100: sb          $zero, 0x8($s3)
    MEM_B(0X8, ctx->r19) = 0;
    // 0x8022C104: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8022C108: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
    // 0x8022C10C: jal         0x8006036C
    // 0x8022C110: sb          $zero, 0xB($s3)
    MEM_B(0XB, ctx->r19) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x8022C110: sb          $zero, 0xB($s3)
    MEM_B(0XB, ctx->r19) = 0;
    after_14:
    // 0x8022C114: jal         0x80060C1C
    // 0x8022C118: addiu       $a0, $zero, 0x2E9
    ctx->r4 = ADD32(0, 0X2E9);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_15;
    // 0x8022C118: addiu       $a0, $zero, 0x2E9
    ctx->r4 = ADD32(0, 0X2E9);
    after_15:
L_8022C11C:
    // 0x8022C11C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022C120: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022C124: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C128: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C12C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C134: jr          $ra
    // 0x8022C138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802287E0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802287E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802287F0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802287F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802287F8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802287FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228800: bne         $v0, $zero, L_80228854
    if (ctx->r2 != 0) {
        // 0x80228804: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80228854;
    }
    // 0x80228804: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228808: jal         0x80229DE4
    // 0x8022880C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022880C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80228810: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228814: beq         $v0, $zero, L_80228850
    if (ctx->r2 == 0) {
        // 0x80228818: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228850;
    }
    // 0x80228818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022881C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228820: jal         0x80229D58
    // 0x80228824: nop

    func_80229D58_ovl12(rdram, ctx);
        goto after_1;
    // 0x80228824: nop

    after_1:
    // 0x80228828: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022882C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228830: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80228834: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228838: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022883C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228840: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80228844: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228848: j           L_80228854
    // 0x8022884C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80228854;
    // 0x8022884C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80228850:
    // 0x80228850: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228854:
    // 0x80228854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228858: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022885C: jr          $ra
    // 0x80228860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C5D0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C5D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C5D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C5E0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C5E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C5E8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C5EC: jal         0x8004D5D4
    // 0x8022C5F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C5F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C5F4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C5F8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C5FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C600: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C604: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C608: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C60C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C610: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C614: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C618: sh          $zero, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = 0;
    // 0x8022C61C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C620: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022C624: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x8022C628: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022C62C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022C630: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C634: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022C638: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022C63C: jal         0x8009A3B4
    // 0x8022C640: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C640: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C644: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C648: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C64C: jal         0x8009A3B4
    // 0x8022C650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C654: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C658: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022C65C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C660: sb          $zero, 0x35A($s0)
    MEM_B(0X35A, ctx->r16) = 0;
    // 0x8022C664: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C668: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C66C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C670: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8022C674: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C678: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x8022C67C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022C680: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x8022C684: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022C688: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C68C: lbu         $v1, 0x6630($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6630);
    // 0x8022C690: lbu         $v0, 0x35A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35A);
    // 0x8022C694: sb          $v1, 0x358($s0)
    MEM_B(0X358, ctx->r16) = ctx->r3;
    // 0x8022C698: lbu         $a1, 0x358($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X358);
    // 0x8022C69C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022C6A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C6A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C6A8: lbu         $v0, 0x6631($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X6631);
    // 0x8022C6AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C6B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6B4: jal         0x80050294
    // 0x8022C6B8: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022C6B8: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C6BC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C6C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C6C4: addiu       $v0, $v0, 0x6638
    ctx->r2 = ADD32(ctx->r2, 0X6638);
    // 0x8022C6C8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022C6CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022C6D0: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022C6D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C6D8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022C6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C6E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C6E4: jr          $ra
    // 0x8022C6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CB60_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CB64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB6C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022CB70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CB74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CB78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CB7C: jal         0x8009A3B4
    // 0x8022CB80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CB80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022CB84: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022CB88: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CB8C: jal         0x8009A3B4
    // 0x8022CB90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CB90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022CB94: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022CB98: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022CB9C: jal         0x8009A3B4
    // 0x8022CBA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CBA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022CBA4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CBA8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CBAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CBB0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022CBB4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CBB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CBBC: lw          $v0, 0x6660($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6660);
    // 0x8022CBC0: jalr        $v0
    // 0x8022CBC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022CBC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CBC8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CBCC: beq         $v0, $zero, L_8022CBE4
    if (ctx->r2 == 0) {
        // 0x8022CBD0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CBE4;
    }
    // 0x8022CBD0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CBD4: jal         0x8005044C
    // 0x8022CBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022CBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CBDC: j           L_8022CBEC
    // 0x8022CBE0: nop

        goto L_8022CBEC;
    // 0x8022CBE0: nop

L_8022CBE4:
    // 0x8022CBE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CBE8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022CBEC:
    // 0x8022CBEC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CBF0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CBF4: beq         $v0, $zero, L_8022CC0C
    if (ctx->r2 == 0) {
        // 0x8022CBF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CC0C;
    }
    // 0x8022CBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBFC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022CC00: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022CC04: jal         0x8003B564
    // 0x8022CC08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x8022CC08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022CC0C:
    // 0x8022CC0C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CC10: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CC14: beq         $v1, $v0, L_8022CC30
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CC30;
    }
    // 0x8022CC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CC20: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022CC24: jal         0x80047284
    // 0x8022CC28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022CC28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8022CC2C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
L_8022CC30:
    // 0x8022CC30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC34: bnel        $v1, $v0, L_8022CC5C
    if (ctx->r3 != ctx->r2) {
        // 0x8022CC38: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8022CC5C;
    }
    goto skip_0;
    // 0x8022CC38: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    skip_0:
    // 0x8022CC3C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CC40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CC44: jal         0x8009A3B4
    // 0x8022CC48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022CC48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022CC4C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022CC50: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x8022CC54: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CC58: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022CC5C:
    // 0x8022CC5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC68: jr          $ra
    // 0x8022CC6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CC6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226D9C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226DA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226DA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226DAC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226DB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226DB4: beq         $v1, $v0, L_80226DEC
    if (ctx->r3 == ctx->r2) {
        // 0x80226DB8: nop
    
            goto L_80226DEC;
    }
    // 0x80226DB8: nop

    // 0x80226DBC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226DC0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226DC4: jalr        $v0
    // 0x80226DC8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226DC8: nop

    after_0:
    // 0x80226DCC: jal         0x8006072C
    // 0x80226DD0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80226DD0: nop

    after_1:
    // 0x80226DD4: beq         $v0, $zero, L_80226DFC
    if (ctx->r2 == 0) {
        // 0x80226DD8: nop
    
            goto L_80226DFC;
    }
    // 0x80226DD8: nop

    // 0x80226DDC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226DE0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226DE4: j           L_80226DF8
    // 0x80226DE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226DF8;
    // 0x80226DE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226DEC:
    // 0x80226DEC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226DF0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226DF4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80226DF8:
    // 0x80226DF8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226DFC:
    // 0x80226DFC: jal         0x8005FB90
    // 0x80226E00: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_2;
    // 0x80226E00: nop

    after_2:
    // 0x80226E04: jal         0x80060018
    // 0x80226E08: nop

    func_80060018_3B418(rdram, ctx);
        goto after_3;
    // 0x80226E08: nop

    after_3:
    // 0x80226E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226E10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E14: jr          $ra
    // 0x80226E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253B0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802253B8: jal         0x80060798
    // 0x802253BC: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x802253BC: nop

    after_0:
    // 0x802253C0: jal         0x80060590
    // 0x802253C4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x802253C4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_1:
    // 0x802253C8: jal         0x80060590
    // 0x802253CC: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x802253CC: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_2:
    // 0x802253D0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802253D4: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x802253D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253DC: addiu       $a0, $a0, 0x5BFC
    ctx->r4 = ADD32(ctx->r4, 0X5BFC);
    // 0x802253E0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802253E4: addiu       $v0, $v0, 0x5C04
    ctx->r2 = ADD32(ctx->r2, 0X5C04);
    // 0x802253E8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802253EC: jal         0x8006100C
    // 0x802253F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_3;
    // 0x802253F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_3:
    // 0x802253F4: jal         0x8006033C
    // 0x802253F8: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802253F8: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_4:
    // 0x802253FC: beq         $v0, $zero, L_80225410
    if (ctx->r2 == 0) {
        // 0x80225400: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225410;
    }
    // 0x80225400: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225404: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225408: jal         0x80060DA0
    // 0x8022540C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_5;
    // 0x8022540C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_80225410:
    // 0x80225410: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225414: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x80225418: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022541C: jr          $ra
    // 0x80225420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FD4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FD4: jr          $ra
    // 0x80226FD8: nop

    TRACE_RETURN()
    return;
    // 0x80226FD8: nop

;}
RECOMP_FUNC void func_80228330_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022833C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228340: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80228344: addiu       $s1, $s1, 0x64A4
    ctx->r17 = ADD32(ctx->r17, 0X64A4);
    // 0x80228348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022834C: jal         0x800A3450
    // 0x80228350: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80228350: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80228354: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228358: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022835C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228360: lbu         $v1, 0x6494($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6494);
    // 0x80228364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228368: beq         $v1, $v0, L_80228408
    if (ctx->r3 == ctx->r2) {
        // 0x8022836C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80228408;
    }
    // 0x8022836C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80228370: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228374: beql        $v0, $zero, L_8022838C
    if (ctx->r2 == 0) {
        // 0x80228378: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022838C;
    }
    goto skip_0;
    // 0x80228378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022837C: beq         $v1, $zero, L_8022839C
    if (ctx->r3 == 0) {
        // 0x80228380: nop
    
            goto L_8022839C;
    }
    // 0x80228380: nop

    // 0x80228384: j           L_80228454
    // 0x80228388: nop

        goto L_80228454;
    // 0x80228388: nop

L_8022838C:
    // 0x8022838C: beq         $v1, $v0, L_80228428
    if (ctx->r3 == ctx->r2) {
        // 0x80228390: nop
    
            goto L_80228428;
    }
    // 0x80228390: nop

    // 0x80228394: j           L_80228454
    // 0x80228398: nop

        goto L_80228454;
    // 0x80228398: nop

L_8022839C:
    // 0x8022839C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802283A0: bne         $v0, $zero, L_802283B4
    if (ctx->r2 != 0) {
        // 0x802283A4: nop
    
            goto L_802283B4;
    }
    // 0x802283A4: nop

    // 0x802283A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802283AC: j           L_802283BC
    // 0x802283B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802283BC;
    // 0x802283B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802283B4:
    // 0x802283B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802283B8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_802283BC:
    // 0x802283BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802283C0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802283C4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802283C8: beq         $v0, $zero, L_802283E4
    if (ctx->r2 == 0) {
        // 0x802283CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802283E4;
    }
    // 0x802283CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283D0: jal         0x80229D98
    // 0x802283D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80229D98_ovl12(rdram, ctx);
        goto after_1;
    // 0x802283D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802283D8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802283DC: j           L_802283F8
    // 0x802283E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802283F8;
    // 0x802283E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802283E4:
    // 0x802283E4: jal         0x80229D98
    // 0x802283E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229D98_ovl12(rdram, ctx);
        goto after_2;
    // 0x802283E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802283EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802283F0: jal         0x80229D58
    // 0x802283F4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80229D58_ovl12(rdram, ctx);
        goto after_3;
    // 0x802283F4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_802283F8:
    // 0x802283F8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802283FC: addiu       $s1, $s1, 0x64A4
    ctx->r17 = ADD32(ctx->r17, 0X64A4);
    // 0x80228400: j           L_80228454
    // 0x80228404: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80228454;
    // 0x80228404: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228408:
    // 0x80228408: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022840C: jal         0x80229D48
    // 0x80228410: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80229D48_ovl12(rdram, ctx);
        goto after_4;
    // 0x80228410: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80228414: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228418: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022841C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80228420: j           L_80228454
    // 0x80228424: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80228454;
    // 0x80228424: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80228428:
    // 0x80228428: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022842C: jal         0x80229D58
    // 0x80228430: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80229D58_ovl12(rdram, ctx);
        goto after_5;
    // 0x80228430: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80228434: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228438: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022843C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228440: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80228444: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228448: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022844C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80228450: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228454:
    // 0x80228454: jal         0x800A3450
    // 0x80228458: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80228458: nop

    after_6:
    // 0x8022845C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228460: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228464: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228468: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022846C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228470: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228474: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022847C: jr          $ra
    // 0x80228480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CAA0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CAA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CAA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CAB0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CAB4: beq         $a1, $zero, L_8022CAD8
    if (ctx->r5 == 0) {
        // 0x8022CAB8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8022CAD8;
    }
    // 0x8022CAB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CABC: jal         0x8004DA90
    // 0x8022CAC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CAC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022CAC4: jal         0x8003E934
    // 0x8022CAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022CAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CACC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CAD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CAD4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022CAD8:
    // 0x8022CAD8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022CADC: bne         $v0, $zero, L_8022CAF4
    if (ctx->r2 != 0) {
        // 0x8022CAE0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CAF4;
    }
    // 0x8022CAE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CAE4: jal         0x8005044C
    // 0x8022CAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8022CAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CAEC: j           L_8022CB04
    // 0x8022CAF0: nop

        goto L_8022CB04;
    // 0x8022CAF0: nop

L_8022CAF4:
    // 0x8022CAF4: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x8022CAF8: jal         0x80050294
    // 0x8022CAFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022CAFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022CB00: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022CB04:
    // 0x8022CB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CB08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB0C: jr          $ra
    // 0x8022CB10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282FC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282FC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80228300: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80228304: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x80228308: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022830C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x80228310: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80228314: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80228318: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022831C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228320: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80228324: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80228328: jr          $ra
    // 0x8022832C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022832C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80231BF0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231BF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231BF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231BFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231C00: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80231C04: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80231C08: addiu       $a0, $a0, -0x3C18
    ctx->r4 = ADD32(ctx->r4, -0X3C18);
    // 0x80231C0C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231C10: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231C14: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80231C18: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80231C1C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80231C20: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80231C24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231C28: beq         $v1, $v0, L_80231CA0
    if (ctx->r3 == ctx->r2) {
        // 0x80231C2C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_80231CA0;
    }
    // 0x80231C2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231C30: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x80231C34: beq         $v0, $zero, L_80231C4C
    if (ctx->r2 == 0) {
        // 0x80231C38: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231C4C;
    }
    // 0x80231C38: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231C3C: beq         $v1, $v0, L_80231C68
    if (ctx->r3 == ctx->r2) {
        // 0x80231C40: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80231C68;
    }
    // 0x80231C40: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231C44: j           L_80231CEC
    // 0x80231C48: nop

        goto L_80231CEC;
    // 0x80231C48: nop

L_80231C4C:
    // 0x80231C4C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231C50: beq         $v1, $v0, L_80231CD4
    if (ctx->r3 == ctx->r2) {
        // 0x80231C54: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80231CD4;
    }
    // 0x80231C54: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80231C58: beq         $v1, $v0, L_80231CEC
    if (ctx->r3 == ctx->r2) {
        // 0x80231C5C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80231CEC;
    }
    // 0x80231C5C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231C60: j           L_80231CEC
    // 0x80231C64: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80231CEC;
    // 0x80231C64: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80231C68:
    // 0x80231C68: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231C6C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80231C70: bne         $v1, $zero, L_80231C80
    if (ctx->r3 != 0) {
        // 0x80231C74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231C80;
    }
    // 0x80231C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231C78: j           L_80231CF0
    // 0x80231C7C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
        goto L_80231CF0;
    // 0x80231C7C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
L_80231C80:
    // 0x80231C80: bne         $v1, $v0, L_80231C90
    if (ctx->r3 != ctx->r2) {
        // 0x80231C84: slti        $v0, $v1, 0x8
        ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_80231C90;
    }
    // 0x80231C84: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x80231C88: j           L_80231CEC
    // 0x80231C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80231CEC;
    // 0x80231C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231C90:
    // 0x80231C90: bne         $v0, $zero, L_80231CEC
    if (ctx->r2 != 0) {
        // 0x80231C94: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231CEC;
    }
    // 0x80231C94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231C98: j           L_80231CEC
    // 0x80231C9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80231CEC;
    // 0x80231C9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80231CA0:
    // 0x80231CA0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80231CA4: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80231CA8: bne         $v1, $zero, L_80231CB8
    if (ctx->r3 != 0) {
        // 0x80231CAC: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80231CB8;
    }
    // 0x80231CAC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80231CB0: j           L_80231CEC
    // 0x80231CB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80231CEC;
    // 0x80231CB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80231CB8:
    // 0x80231CB8: bne         $v0, $zero, L_80231CEC
    if (ctx->r2 != 0) {
        // 0x80231CBC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231CEC;
    }
    // 0x80231CBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231CC0: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x80231CC4: bne         $v0, $zero, L_80231CEC
    if (ctx->r2 != 0) {
        // 0x80231CC8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80231CEC;
    }
    // 0x80231CC8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231CCC: j           L_80231CEC
    // 0x80231CD0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80231CEC;
    // 0x80231CD0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80231CD4:
    // 0x80231CD4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231CD8: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80231CDC: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80231CE0: bne         $v0, $zero, L_80231CEC
    if (ctx->r2 != 0) {
        // 0x80231CE4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80231CEC;
    }
    // 0x80231CE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231CE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80231CEC:
    // 0x80231CEC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80231CF0:
    // 0x80231CF0: lb          $v0, 0x51($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X51);
    // 0x80231CF4: beq         $v0, $zero, L_80231D00
    if (ctx->r2 == 0) {
        // 0x80231CF8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80231D00;
    }
    // 0x80231CF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231CFC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80231D00:
    // 0x80231D00: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231D04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231D08: bne         $v1, $v0, L_80231D20
    if (ctx->r3 != ctx->r2) {
        // 0x80231D0C: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80231D20;
    }
    // 0x80231D0C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80231D10: jal         0x8004F684
    // 0x80231D14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80231D14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231D18: j           L_80231DE4
    // 0x80231D1C: nop

        goto L_80231DE4;
    // 0x80231D1C: nop

L_80231D20:
    // 0x80231D20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231D24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231D28: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231D2C: blez        $v0, L_80231DD8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231D30: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80231DD8;
    }
    // 0x80231D30: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80231D34: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x80231D38: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80231D3C: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x80231D40: addiu       $s4, $s4, -0x2100
    ctx->r20 = ADD32(ctx->r20, -0X2100);
    // 0x80231D44: lui         $s2, 0xEA0
    ctx->r18 = S32(0XEA0 << 16);
    // 0x80231D48: ori         $s2, $s2, 0xEA0F
    ctx->r18 = ctx->r18 | 0XEA0F;
    // 0x80231D4C: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80231D50: addiu       $s3, $s3, 0x76B0
    ctx->r19 = ADD32(ctx->r19, 0X76B0);
L_80231D54:
    // 0x80231D54: jal         0x8004EFE4
    // 0x80231D58: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x80231D58: nop

    after_1:
    // 0x80231D5C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80231D60: beq         $a1, $zero, L_80231DA8
    if (ctx->r5 == 0) {
        // 0x80231D64: subu        $v0, $a1, $s4
        ctx->r2 = SUB32(ctx->r5, ctx->r20);
            goto L_80231DA8;
    }
    // 0x80231D64: subu        $v0, $a1, $s4
    ctx->r2 = SUB32(ctx->r5, ctx->r20);
    // 0x80231D68: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80231D6C: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231D70: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x80231D74: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x80231D78: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80231D7C: sb          $s1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r17;
    // 0x80231D80: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80231D84: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80231D88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231D8C: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80231D90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231D94: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80231D98: mfhi        $a2
    ctx->r6 = hi;
    // 0x80231D9C: srl         $v1, $a2, 1
    ctx->r3 = S32(U32(ctx->r6) >> 1);
    // 0x80231DA0: sb          $v1, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r3;
    // 0x80231DA4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_80231DA8:
    // 0x80231DA8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80231DAC: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x80231DB0: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x80231DB4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231DB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231DBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231DC0: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231DC4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231DC8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80231DCC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80231DD0: bne         $v1, $zero, L_80231D54
    if (ctx->r3 != 0) {
        // 0x80231DD4: nop
    
            goto L_80231D54;
    }
    // 0x80231DD4: nop

L_80231DD8:
    // 0x80231DD8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231DDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231DE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231DE4:
    // 0x80231DE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80231DE8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80231DEC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80231DF0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80231DF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80231DF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231DFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231E00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231E04: jr          $ra
    // 0x80231E08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231E08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FFC8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFC8: jr          $ra
    // 0x8022FFCC: nop

    TRACE_RETURN()
    return;
    // 0x8022FFCC: nop

;}
RECOMP_FUNC void func_802348C0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802348C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802348C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802348CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802348D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802348D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802348D8: lw          $v0, 0x7354($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7354);
    // 0x802348DC: jalr        $v0
    // 0x802348E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802348E0: nop

    after_0:
    // 0x802348E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802348E8: jr          $ra
    // 0x802348EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802348EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BABC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BAC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BAC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BAC8: jal         0x8003E934
    // 0x8022BACC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022BACC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022BAD0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022BAD4: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x8022BAD8: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022BADC: beq         $v1, $zero, L_8022BAEC
    if (ctx->r3 == 0) {
        // 0x8022BAE0: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_8022BAEC;
    }
    // 0x8022BAE0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BAE4: jal         0x8004F418
    // 0x8022BAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022BAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022BAEC:
    // 0x8022BAEC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022BAF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BAF4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022BAF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022BAFC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8022BB00: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x8022BB04: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022BB08: jal         0x8004DA90
    // 0x8022BB0C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022BB0C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022BB10: jal         0x8003E810
    // 0x8022BB14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x8022BB14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022BB18: beq         $v0, $zero, L_8022BB30
    if (ctx->r2 == 0) {
        // 0x8022BB1C: nop
    
            goto L_8022BB30;
    }
    // 0x8022BB1C: nop

    // 0x8022BB20: jal         0x8004F418
    // 0x8022BB24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x8022BB24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BB28: j           L_8022BB40
    // 0x8022BB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022BB40;
    // 0x8022BB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BB30:
    // 0x8022BB30: jal         0x80040F30
    // 0x8022BB34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022BB34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BB38: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BB3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022BB40:
    // 0x8022BB40: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BB44: bne         $v0, $zero, L_8022BB54
    if (ctx->r2 != 0) {
        // 0x8022BB48: nop
    
            goto L_8022BB54;
    }
    // 0x8022BB48: nop

    // 0x8022BB4C: jal         0x8005044C
    // 0x8022BB50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022BB50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022BB54:
    // 0x8022BB54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BB58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BB5C: jr          $ra
    // 0x8022BB60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BB60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022BB64: nop

    // 0x8022BB68: nop

    // 0x8022BB6C: nop

;}
RECOMP_FUNC void func_80227B00_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227B04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227B10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B14: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80227B18: beq         $v1, $zero, L_80227B34
    if (ctx->r3 == 0) {
        // 0x80227B1C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80227B34;
    }
    // 0x80227B1C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80227B20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B24: beq         $v1, $v0, L_80227B8C
    if (ctx->r3 == ctx->r2) {
        // 0x80227B28: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227B8C;
    }
    // 0x80227B28: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227B2C: j           L_80227BA8
    // 0x80227B30: nop

        goto L_80227BA8;
    // 0x80227B30: nop

L_80227B34:
    // 0x80227B34: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227B40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227B44: jal         0x8004D5D4
    // 0x80227B48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227B48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227B4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227B50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227B54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227B58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227B5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227B60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227B64: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80227B68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227B6C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227B70: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227B74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227B78: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x80227B7C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227B80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B84: j           L_80227BA8
    // 0x80227B88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227BA8;
    // 0x80227B88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227B8C:
    // 0x80227B8C: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x80227B90: bne         $v1, $v0, L_80227BA8
    if (ctx->r3 != ctx->r2) {
        // 0x80227B94: nop
    
            goto L_80227BA8;
    }
    // 0x80227B94: nop

    // 0x80227B98: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227B9C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227BA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227BA4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227BA8:
    // 0x80227BA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227BAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227BB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BB4: jr          $ra
    // 0x80227BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227BB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235EE0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235EE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235EE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235EEC: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x80235EF0: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x80235EF4: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80235EF8: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x80235EFC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235F00: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235F04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235F08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235F0C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80235F10: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x80235F14: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x80235F18: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235F1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80235F20: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80235F24: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80235F28: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
    // 0x80235F2C: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x80235F30: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80235F34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235F38: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80235F3C: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80235F40: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x80235F44: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x80235F48: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x80235F4C: jal         0x8009A3B4
    // 0x80235F50: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235F50: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x80235F54: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235F58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235F5C: jal         0x8009A3B4
    // 0x80235F60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235F60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80235F64: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235F68: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80235F6C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80235F70: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235F74: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80235F78: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235F7C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80235F80: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80235F84: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80235F88: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80235F8C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80235F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235F94: beq         $v1, $v0, L_802360A8
    if (ctx->r3 == ctx->r2) {
        // 0x80235F98: sh          $zero, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = 0;
            goto L_802360A8;
    }
    // 0x80235F98: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80235F9C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235FA0: beql        $v0, $zero, L_80235FB8
    if (ctx->r2 == 0) {
        // 0x80235FA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235FB8;
    }
    goto skip_0;
    // 0x80235FA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235FA8: beq         $v1, $zero, L_80235FE0
    if (ctx->r3 == 0) {
        // 0x80235FAC: nop
    
            goto L_80235FE0;
    }
    // 0x80235FAC: nop

    // 0x80235FB0: j           L_80236144
    // 0x80235FB4: nop

        goto L_80236144;
    // 0x80235FB4: nop

L_80235FB8:
    // 0x80235FB8: beq         $v1, $v0, L_802360F4
    if (ctx->r3 == ctx->r2) {
        // 0x80235FBC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802360F4;
    }
    // 0x80235FBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235FC0: bne         $v1, $v0, L_80236144
    if (ctx->r3 != ctx->r2) {
        // 0x80235FC4: lui         $v0, 0x2C80
        ctx->r2 = S32(0X2C80 << 16);
            goto L_80236144;
    }
    // 0x80235FC4: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80235FC8: ori         $v0, $v0, 0x80FF
    ctx->r2 = ctx->r2 | 0X80FF;
    // 0x80235FCC: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80235FD0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80235FD4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80235FD8: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80235FDC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80235FE0:
    // 0x80235FE0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80235FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235FE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235FEC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80235FF0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235FF4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80235FF8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80235FFC: jal         0x800324B4
    // 0x80236000: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80236000: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_2:
    // 0x80236004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236008: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023600C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236010: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80236014: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236018: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x8023601C: jal         0x8004DDE8
    // 0x80236020: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    func_8004DDE8_291E8(rdram, ctx);
        goto after_3;
    // 0x80236020: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    after_3:
    // 0x80236024: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80236028: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x8023602C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x80236030: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236034: lh          $v1, 0x3EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3EA);
    // 0x80236038: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023603C: mfhi        $t3
    ctx->r11 = hi;
    // 0x80236040: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236044: srl         $v0, $t3, 3
    ctx->r2 = S32(U32(ctx->r11) >> 3);
    // 0x80236048: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8023604C: bne         $v0, $zero, L_80236058
    if (ctx->r2 != 0) {
        // 0x80236050: nop
    
            goto L_80236058;
    }
    // 0x80236050: nop

    // 0x80236054: break       7
    do_break(2149802068);
L_80236058:
    // 0x80236058: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023605C: bne         $v0, $at, L_80236070
    if (ctx->r2 != ctx->r1) {
        // 0x80236060: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236070;
    }
    // 0x80236060: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236064: bne         $v1, $at, L_80236070
    if (ctx->r3 != ctx->r1) {
        // 0x80236068: nop
    
            goto L_80236070;
    }
    // 0x80236068: nop

    // 0x8023606C: break       6
    do_break(2149802092);
L_80236070:
    // 0x80236070: mflo        $v1
    ctx->r3 = lo;
    // 0x80236074: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80236078: nop

    // 0x8023607C: jal         0x80032498
    // 0x80236080: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80236080: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80236084: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236088: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8023608C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236090: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80236094: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80236098: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023609C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802360A0: j           L_80236144
    // 0x802360A4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
        goto L_80236144;
    // 0x802360A4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
L_802360A8:
    // 0x802360A8: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x802360AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802360B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802360B4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802360B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802360BC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802360C0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802360C4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802360C8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802360CC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802360D0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802360D4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802360D8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802360DC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802360E0: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802360E4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802360E8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802360EC: j           L_80236144
    // 0x802360F0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80236144;
    // 0x802360F0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802360F4:
    // 0x802360F4: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x802360F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802360FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236100: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80236104: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80236108: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x8023610C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236110: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236114: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80236118: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023611C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80236120: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80236124: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80236128: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8023612C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80236130: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236134: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236138: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8023613C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80236140: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80236144:
    // 0x80236144: jal         0x8003F754
    // 0x80236148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80236148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023614C: beql        $v0, $zero, L_80236160
    if (ctx->r2 == 0) {
        // 0x80236150: sw          $zero, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = 0;
            goto L_80236160;
    }
    goto skip_1;
    // 0x80236150: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    skip_1:
    // 0x80236154: jal         0x8004F4F8
    // 0x80236158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80236158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023615C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_80236160:
    // 0x80236160: addiu       $a0, $zero, 0x1AF
    ctx->r4 = ADD32(0, 0X1AF);
    // 0x80236164: jal         0x8002A33C
    // 0x80236168: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80236168: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x8023616C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236170: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236174: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236178: jr          $ra
    // 0x8023617C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023617C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802332A8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802332AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802332B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802332B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802332B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802332BC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802332C0: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x802332C4: beq         $v0, $zero, L_802334D8
    if (ctx->r2 == 0) {
        // 0x802332C8: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_802334D8;
    }
    // 0x802332C8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802332CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802332D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802332D4: addu        $at, $at, $v0
    gpr jr_addend_802332DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802332D8: lw          $v0, -0x62B0($at)
    ctx->r2 = ADD32(ctx->r1, -0X62B0);
    // 0x802332DC: jr          $v0
    // 0x802332E0: nop

    switch (jr_addend_802332DC >> 2) {
        case 0: goto L_802332E4; break;
        case 1: goto L_80233358; break;
        case 2: goto L_80233400; break;
        case 3: goto L_80233414; break;
        case 4: goto L_8023342C; break;
        case 5: goto L_80233440; break;
        case 6: goto L_802334A4; break;
        case 7: goto L_802334C4; break;
        case 8: goto L_802334D8; break;
        default: switch_error(__func__, 0x802332DC, 0x80239D50);
    }
    // 0x802332E0: nop

L_802332E4:
    // 0x802332E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802332E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802332EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802332F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802332F4: jal         0x8004D5D4
    // 0x802332F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802332F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802332FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233300: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80233308: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023330C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80233310: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80233314: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80233318: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023331C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80233320: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233324: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233328: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023332C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80233330: jal         0x8023350C
    // 0x80233334: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_8023350C_ovl13(rdram, ctx);
        goto after_1;
    // 0x80233334: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80233338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023333C: jal         0x802336A8
    // 0x80233340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802336A8_ovl13(rdram, ctx);
        goto after_2;
    // 0x80233340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80233344: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233348: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023334C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233350: j           L_802334D0
    // 0x80233354: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_802334D0;
    // 0x80233354: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80233358:
    // 0x80233358: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023335C: bne         $v1, $zero, L_802333D8
    if (ctx->r3 != 0) {
        // 0x80233360: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802333D8;
    }
    // 0x80233360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233364: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80233368: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8023336C: beq         $a1, $v0, L_802333C0
    if (ctx->r5 == ctx->r2) {
        // 0x80233370: slti        $v0, $a1, 0x42
        ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
            goto L_802333C0;
    }
    // 0x80233370: slti        $v0, $a1, 0x42
    ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
    // 0x80233374: beq         $v0, $zero, L_8023338C
    if (ctx->r2 == 0) {
        // 0x80233378: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8023338C;
    }
    // 0x80233378: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8023337C: beq         $a1, $v0, L_802333AC
    if (ctx->r5 == ctx->r2) {
        // 0x80233380: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802333AC;
    }
    // 0x80233380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233384: j           L_802334D8
    // 0x80233388: nop

        goto L_802334D8;
    // 0x80233388: nop

L_8023338C:
    // 0x8023338C: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x80233390: beq         $a1, $v0, L_802333A8
    if (ctx->r5 == ctx->r2) {
        // 0x80233394: addiu       $v0, $zero, 0xEB
        ctx->r2 = ADD32(0, 0XEB);
            goto L_802333A8;
    }
    // 0x80233394: addiu       $v0, $zero, 0xEB
    ctx->r2 = ADD32(0, 0XEB);
    // 0x80233398: beq         $a1, $v0, L_802333C4
    if (ctx->r5 == ctx->r2) {
        // 0x8023339C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802333C4;
    }
    // 0x8023339C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802333A0: j           L_802334D8
    // 0x802333A4: nop

        goto L_802334D8;
    // 0x802333A4: nop

L_802333A8:
    // 0x802333A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802333AC:
    // 0x802333AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802333B0: jal         0x8023350C
    // 0x802333B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023350C_ovl13(rdram, ctx);
        goto after_3;
    // 0x802333B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802333B8: j           L_802334D8
    // 0x802333BC: nop

        goto L_802334D8;
    // 0x802333BC: nop

L_802333C0:
    // 0x802333C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802333C4:
    // 0x802333C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802333C8: jal         0x8023350C
    // 0x802333CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023350C_ovl13(rdram, ctx);
        goto after_4;
    // 0x802333CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x802333D0: j           L_802334D8
    // 0x802333D4: nop

        goto L_802334D8;
    // 0x802333D4: nop

L_802333D8:
    // 0x802333D8: bne         $v1, $v0, L_802334D8
    if (ctx->r3 != ctx->r2) {
        // 0x802333DC: nop
    
            goto L_802334D8;
    }
    // 0x802333DC: nop

    // 0x802333E0: lbu         $v0, 0x7($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7);
    // 0x802333E4: bne         $v0, $v1, L_802334D8
    if (ctx->r2 != ctx->r3) {
        // 0x802333E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802334D8;
    }
    // 0x802333E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802333EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802333F0: jal         0x8023350C
    // 0x802333F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023350C_ovl13(rdram, ctx);
        goto after_5;
    // 0x802333F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802333F8: j           L_802334CC
    // 0x802333FC: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_802334CC;
    // 0x802333FC: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80233400:
    // 0x80233400: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233404: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x80233408: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023340C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233410: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233414:
    // 0x80233414: lbu         $v1, 0x7($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X7);
    // 0x80233418: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023341C: beq         $v1, $v0, L_802334CC
    if (ctx->r3 == ctx->r2) {
        // 0x80233420: nop
    
            goto L_802334CC;
    }
    // 0x80233420: nop

    // 0x80233424: j           L_802334D8
    // 0x80233428: nop

        goto L_802334D8;
    // 0x80233428: nop

L_8023342C:
    // 0x8023342C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80233430: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233434: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80233438: j           L_802334D0
    // 0x8023343C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_802334D0;
    // 0x8023343C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_80233440:
    // 0x80233440: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80233444: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80233448: bne         $v0, $zero, L_80233454
    if (ctx->r2 != 0) {
        // 0x8023344C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233454;
    }
    // 0x8023344C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233450: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
L_80233454:
    // 0x80233454: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80233458: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023345C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80233460: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80233464: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233468: bne         $v1, $v0, L_8023347C
    if (ctx->r3 != ctx->r2) {
        // 0x8023346C: nop
    
            goto L_8023347C;
    }
    // 0x8023346C: nop

    // 0x80233470: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233478: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023347C:
    // 0x8023347C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80233480: sltiu       $v0, $v0, 0x10
    ctx->r2 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x80233484: bne         $v0, $zero, L_802334D8
    if (ctx->r2 != 0) {
        // 0x80233488: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802334D8;
    }
    // 0x80233488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023348C: addiu       $a1, $zero, -0x37
    ctx->r5 = ADD32(0, -0X37);
    // 0x80233490: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233494: jal         0x8004DA90
    // 0x80233498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x80233498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8023349C: j           L_802334D8
    // 0x802334A0: nop

        goto L_802334D8;
    // 0x802334A0: nop

L_802334A4:
    // 0x802334A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802334A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802334AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802334B0: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802334B4: jal         0x8023350C
    // 0x802334B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8023350C_ovl13(rdram, ctx);
        goto after_7;
    // 0x802334B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_7:
    // 0x802334BC: j           L_802334CC
    // 0x802334C0: nop

        goto L_802334CC;
    // 0x802334C0: nop

L_802334C4:
    // 0x802334C4: jal         0x8004F418
    // 0x802334C8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    func_8004F418_2A818(rdram, ctx);
        goto after_8;
    // 0x802334C8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_8:
L_802334CC:
    // 0x802334CC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_802334D0:
    // 0x802334D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802334D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802334D8:
    // 0x802334D8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802334DC: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x802334E0: beq         $v0, $zero, L_802334F8
    if (ctx->r2 == 0) {
        // 0x802334E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802334F8;
    }
    // 0x802334E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802334E8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802334EC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802334F0: jal         0x8003B564
    // 0x802334F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802334F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_802334F8:
    // 0x802334F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802334FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233504: jr          $ra
    // 0x80233508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A4F8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A4FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022A500: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A504: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022A508: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022A50C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022A510: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022A514: jal         0x8022B7E4
    // 0x8022A518: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022A518: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022A51C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A520: beq         $v0, $zero, L_8022A550
    if (ctx->r2 == 0) {
        // 0x8022A524: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022A550;
    }
    // 0x8022A524: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022A528: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A52C: bne         $v1, $v0, L_8022A678
    if (ctx->r3 != ctx->r2) {
        // 0x8022A530: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A678;
    }
    // 0x8022A530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A534: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A538: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A53C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022A540: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022A544: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022A548: j           L_8022A67C
    // 0x8022A54C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022A67C;
    // 0x8022A54C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022A550:
    // 0x8022A550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A554: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A55C: jal         0x8004DA90
    // 0x8022A560: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022A560: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022A564: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022A568: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022A56C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022A570: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022A574: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022A578: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022A57C: beq         $v0, $zero, L_8022A58C
    if (ctx->r2 == 0) {
        // 0x8022A580: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022A58C;
    }
    // 0x8022A580: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022A584: j           L_8022A59C
    // 0x8022A588: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022A59C;
    // 0x8022A588: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022A58C:
    // 0x8022A58C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022A590: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A594: beq         $v0, $zero, L_8022A5CC
    if (ctx->r2 == 0) {
        // 0x8022A598: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022A5CC;
    }
    // 0x8022A598: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022A59C:
    // 0x8022A59C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A5A0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022A5A4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022A5A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A5AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A5B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A5B4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022A5B8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022A5BC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022A5C0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022A5C4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A5C8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022A5CC:
    // 0x8022A5CC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022A5D0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022A5D4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022A5D8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022A5DC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022A5E0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022A5E4: beq         $v0, $zero, L_8022A5F8
    if (ctx->r2 == 0) {
        // 0x8022A5E8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022A5F8;
    }
    // 0x8022A5E8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022A5EC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A5F0: j           L_8022A60C
    // 0x8022A5F4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022A60C;
    // 0x8022A5F4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022A5F8:
    // 0x8022A5F8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022A5FC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A600: beq         $v0, $zero, L_8022A63C
    if (ctx->r2 == 0) {
        // 0x8022A604: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022A63C;
    }
    // 0x8022A604: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022A608: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022A60C:
    // 0x8022A60C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022A610: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A614: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A618: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A61C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A620: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A624: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A628: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022A62C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022A630: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022A634: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022A638: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022A63C:
    // 0x8022A63C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022A640: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A644: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022A648: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A64C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A650: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A654: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A658: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A65C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022A660: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022A664: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A668: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022A66C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A670: bne         $v0, $zero, L_8022A67C
    if (ctx->r2 != 0) {
        // 0x8022A674: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A67C;
    }
    // 0x8022A674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A678:
    // 0x8022A678: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A67C:
    // 0x8022A67C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022A680: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022A684: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022A688: jr          $ra
    // 0x8022A68C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022A68C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80229394_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022939C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802293A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802293A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802293A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802293AC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802293B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802293B4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x802293B8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802293BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802293C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802293C4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802293C8: addiu       $v1, $v1, -0x71F0
    ctx->r3 = ADD32(ctx->r3, -0X71F0);
    // 0x802293CC: jal         0x8022B7E4
    // 0x802293D0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_0;
    // 0x802293D0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x802293D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802293D8: beq         $v0, $zero, L_802294E8
    if (ctx->r2 == 0) {
        // 0x802293DC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802294E8;
    }
    // 0x802293DC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802293E0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802293E4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802293E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802293EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802293F0: jal         0x8009A3B4
    // 0x802293F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802293F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x802293F8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802293FC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229400: jal         0x8009A3B4
    // 0x80229404: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229404: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80229408: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022940C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229410: jal         0x8009A3B4
    // 0x80229414: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80229414: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80229418: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022941C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80229420: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229424: beq         $v0, $zero, L_80229434
    if (ctx->r2 == 0) {
        // 0x80229428: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80229434;
    }
    // 0x80229428: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022942C: jal         0x8022B64C
    // 0x80229430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B64C_ovl13(rdram, ctx);
        goto after_4;
    // 0x80229430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80229434:
    // 0x80229434: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229438: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022943C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229440: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229444: lw          $v0, -0x6C88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6C88);
    // 0x80229448: jalr        $v0
    // 0x8022944C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022944C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229450: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229454: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80229458: bne         $v0, $zero, L_80229474
    if (ctx->r2 != 0) {
        // 0x8022945C: nop
    
            goto L_80229474;
    }
    // 0x8022945C: nop

    // 0x80229460: jal         0x8003E934
    // 0x80229464: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80229464: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229468: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022946C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229470: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80229474:
    // 0x80229474: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80229478: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022947C: beq         $v0, $a1, L_80229494
    if (ctx->r2 == ctx->r5) {
        // 0x80229480: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229494;
    }
    // 0x80229480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229484: jal         0x80050294
    // 0x80229488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80229488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022948C: j           L_8022949C
    // 0x80229490: nop

        goto L_8022949C;
    // 0x80229490: nop

L_80229494:
    // 0x80229494: jal         0x8005044C
    // 0x80229498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80229498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022949C:
    // 0x8022949C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802294A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802294A4: beq         $v0, $zero, L_802294C0
    if (ctx->r2 == 0) {
        // 0x802294A8: nop
    
            goto L_802294C0;
    }
    // 0x802294A8: nop

    // 0x802294AC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802294B0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802294B4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x802294B8: jal         0x8003B564
    // 0x802294BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802294BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802294C0:
    // 0x802294C0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802294C4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802294C8: beq         $v0, $zero, L_802294D8
    if (ctx->r2 == 0) {
        // 0x802294CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802294D8;
    }
    // 0x802294CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802294D0: j           L_802294DC
    // 0x802294D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802294DC;
    // 0x802294D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802294D8:
    // 0x802294D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802294DC:
    // 0x802294DC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802294E0: jal         0x80047284
    // 0x802294E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x802294E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_802294E8:
    // 0x802294E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802294EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802294F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802294F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802294F8: jr          $ra
    // 0x802294FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802294FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C4B8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C4BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C4C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C4C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C4C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022C4CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C4D0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C4D4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022C4D8: jal         0x8004DA90
    // 0x8022C4DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C4DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022C4E0: jal         0x8003E810
    // 0x8022C4E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022C4E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022C4E8: bne         $v0, $zero, L_8022C504
    if (ctx->r2 != 0) {
        // 0x8022C4EC: nop
    
            goto L_8022C504;
    }
    // 0x8022C4EC: nop

    // 0x8022C4F0: jal         0x80040F30
    // 0x8022C4F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022C4F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C4F8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022C4FC: j           L_8022C510
    // 0x8022C500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022C510;
    // 0x8022C500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C504:
    // 0x8022C504: jal         0x8004F418
    // 0x8022C508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022C508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C50C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C510:
    // 0x8022C510: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C514: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C51C: jr          $ra
    // 0x8022C520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236574_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236574: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236578: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8023657C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236580: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236584: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236588: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023658C: jal         0x8009A3B4
    // 0x80236590: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236590: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80236594: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236598: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023659C: jal         0x8009A3B4
    // 0x802365A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802365A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802365A4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802365A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802365AC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802365B0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802365B4: bne         $v0, $zero, L_802365CC
    if (ctx->r2 != 0) {
        // 0x802365B8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802365CC;
    }
    // 0x802365B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802365BC: jal         0x8004F4F8
    // 0x802365C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802365C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802365C4: j           L_802366B0
    // 0x802365C8: nop

        goto L_802366B0;
    // 0x802365C8: nop

L_802365CC:
    // 0x802365CC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802365D0: bne         $v1, $v0, L_802365DC
    if (ctx->r3 != ctx->r2) {
        // 0x802365D4: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_802365DC;
    }
    // 0x802365D4: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x802365D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802365DC:
    // 0x802365DC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802365E0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802365E4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802365E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802365EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802365F0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802365F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802365F8: lbu         $v1, -0x65BC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X65BC);
    // 0x802365FC: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80236600: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80236604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236608: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023660C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236610: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80236614: lbu         $v1, -0x65BB($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X65BB);
    // 0x80236618: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023661C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80236620: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80236624: jal         0x8004DA90
    // 0x80236628: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80236628: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x8023662C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80236630: beq         $v0, $zero, L_8023664C
    if (ctx->r2 == 0) {
        // 0x80236634: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023664C;
    }
    // 0x80236634: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236638: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023663C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236640: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236644: bne         $v0, $zero, L_80236698
    if (ctx->r2 != 0) {
        // 0x80236648: nop
    
            goto L_80236698;
    }
    // 0x80236648: nop

L_8023664C:
    // 0x8023664C: jal         0x8004F144
    // 0x80236650: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80236650: nop

    after_4:
    // 0x80236654: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236658: beq         $v1, $zero, L_80236698
    if (ctx->r3 == 0) {
        // 0x8023665C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236698;
    }
    // 0x8023665C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236660: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80236664: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80236668: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023666C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236670: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80236674: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80236678: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8023667C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80236680: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80236684: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80236688: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8023668C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80236690: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236694: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80236698:
    // 0x80236698: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023669C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802366A0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802366A4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x802366A8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x802366AC: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_802366B0:
    // 0x802366B0: jal         0x8003F754
    // 0x802366B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x802366B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802366B8: bne         $v0, $zero, L_802366D4
    if (ctx->r2 != 0) {
        // 0x802366BC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802366D4;
    }
    // 0x802366BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802366C0: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x802366C4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802366C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802366CC: beq         $v0, $zero, L_802366E8
    if (ctx->r2 == 0) {
        // 0x802366D0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802366E8;
    }
    // 0x802366D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802366D4:
    // 0x802366D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802366D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802366DC: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x802366E0: j           L_80236738
    // 0x802366E4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80236738;
    // 0x802366E4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802366E8:
    // 0x802366E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802366EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802366F0: beq         $v0, $zero, L_80236738
    if (ctx->r2 == 0) {
        // 0x802366F4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236738;
    }
    // 0x802366F4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802366F8: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802366FC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236700: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236704: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80236708: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8023670C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236710: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80236714: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80236718: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023671C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80236720: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236724: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80236728: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023672C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80236730: jal         0x80051E18
    // 0x80236734: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80236734: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80236738:
    // 0x80236738: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x8023673C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80236740: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80236744: jr          $ra
    // 0x80236748: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80236748: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D710_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D714: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D718: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D71C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D720: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D728: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8022D72C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022D730: beq         $v0, $zero, L_8022D7CC
    if (ctx->r2 == 0) {
        // 0x8022D734: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8022D7CC;
    }
    // 0x8022D734: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022D738: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022D73C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D740: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022D744: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022D748: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022D74C: jal         0x8003B878
    // 0x8022D750: lbu         $s0, -0x6A00($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X6A00);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022D750: lbu         $s0, -0x6A00($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X6A00);
    after_0:
    // 0x8022D754: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022D758: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022D75C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D760: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022D764: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D768: subu        $v1, $s2, $v1
    ctx->r3 = SUB32(ctx->r18, ctx->r3);
    // 0x8022D76C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8022D770: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022D774: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022D778: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D77C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D780: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022D784: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x8022D788: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022D78C: or          $v1, $s0, $v1
    ctx->r3 = ctx->r16 | ctx->r3;
    // 0x8022D790: addiu       $a0, $s0, 0x1F
    ctx->r4 = ADD32(ctx->r16, 0X1F);
    // 0x8022D794: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022D798: lui         $v1, 0x2E
    ctx->r3 = S32(0X2E << 16);
    // 0x8022D79C: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022D7A0: ori         $s0, $s0, 0x1F00
    ctx->r16 = ctx->r16 | 0X1F00;
    // 0x8022D7A4: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022D7A8: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022D7AC: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x8022D7B0: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022D7B4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D7B8: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022D7BC: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D7C0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022D7C4: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022D7C8: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
L_8022D7CC:
    // 0x8022D7CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D7D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D7D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7DC: jr          $ra
    // 0x8022D7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D7E4: nop

    // 0x8022D7E8: nop

    // 0x8022D7EC: nop

;}
RECOMP_FUNC void func_802351A8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802351A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802351AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802351B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802351B4: jal         0x8004F144
    // 0x802351B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802351B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802351BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802351C0: beq         $a0, $zero, L_802351EC
    if (ctx->r4 == 0) {
        // 0x802351C4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802351EC;
    }
    // 0x802351C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802351C8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802351CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802351D0: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802351D4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802351D8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802351DC: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x802351E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802351E4: jal         0x8009A3B4
    // 0x802351E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802351E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_802351EC:
    // 0x802351EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802351F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802351F4: jr          $ra
    // 0x802351F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802351F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802351FC: nop

;}
RECOMP_FUNC void func_8022DCB0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCB0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022DCB4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022DCB8: bne         $v0, $zero, L_8022DCD8
    if (ctx->r2 != 0) {
        // 0x8022DCBC: nop
    
            goto L_8022DCD8;
    }
    // 0x8022DCBC: nop

    // 0x8022DCC0: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x8022DCC4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DCC8: beq         $v0, $zero, L_8022DD00
    if (ctx->r2 == 0) {
        // 0x8022DCCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DD00;
    }
    // 0x8022DCCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DCD0: j           L_8022DD00
    // 0x8022DCD4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8022DD00;
    // 0x8022DCD4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022DCD8:
    // 0x8022DCD8: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x8022DCDC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DCE0: beq         $v0, $zero, L_8022DD00
    if (ctx->r2 == 0) {
        // 0x8022DCE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DD00;
    }
    // 0x8022DCE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DCE8: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8022DCEC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022DCF0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022DCF4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DCF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DCFC: sh          $v0, 0x32E($a0)
    MEM_H(0X32E, ctx->r4) = ctx->r2;
L_8022DD00:
    // 0x8022DD00: jr          $ra
    // 0x8022DD04: nop

    TRACE_RETURN()
    return;
    // 0x8022DD04: nop

;}
RECOMP_FUNC void func_802328F8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802328F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802328FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232900: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232904: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232908: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023290C: sra         $v0, $s2, 3
    ctx->r2 = S32(SIGNED(ctx->r18) >> 3);
    // 0x80232910: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232914: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80232918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023291C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232920: lw          $s0, 0x4C0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4C0);
    // 0x80232924: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x80232928: sll         $a0, $s2, 5
    ctx->r4 = S32(ctx->r18 << 5);
    // 0x8023292C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    // 0x80232930: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80232934: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232938: addiu       $a2, $s0, 0x1C
    ctx->r6 = ADD32(ctx->r16, 0X1C);
    // 0x8023293C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80232940: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80232944: jal         0x800308E8
    // 0x80232948: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x80232948: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    after_0:
    // 0x8023294C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80232950: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    // 0x80232954: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x80232958: lhu         $v0, 0x180($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X180);
    // 0x8023295C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232960: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80232964: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80232968: lhu         $v0, 0x182($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X182);
    // 0x8023296C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232970: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80232974: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80232978: lhu         $v0, 0x184($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X184);
    // 0x8023297C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232980: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80232984: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80232988: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023298C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80232990: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232994: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232998: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023299C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802329A0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802329A4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802329A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802329AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802329B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802329B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802329B8: jr          $ra
    // 0x802329BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802329BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229920_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229920: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80229924: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229928: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022992C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229930: bne         $v0, $zero, L_8022993C
    if (ctx->r2 != 0) {
        // 0x80229934: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022993C;
    }
    // 0x80229934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229938: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022993C:
    // 0x8022993C: jr          $ra
    // 0x80229940: nop

    TRACE_RETURN()
    return;
    // 0x80229940: nop

;}
RECOMP_FUNC void func_80225B84_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B84: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225B88: bne         $v0, $zero, L_80225BC0
    if (ctx->r2 != 0) {
        // 0x80225B8C: addiu       $v1, $zero, -0x13B8
        ctx->r3 = ADD32(0, -0X13B8);
            goto L_80225BC0;
    }
    // 0x80225B8C: addiu       $v1, $zero, -0x13B8
    ctx->r3 = ADD32(0, -0X13B8);
    // 0x80225B90: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225B94: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x80225B98: lh          $a0, 0x14($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X14);
    // 0x80225B9C: addiu       $v1, $zero, 0x19B8
    ctx->r3 = ADD32(0, 0X19B8);
    // 0x80225BA0: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80225BA4: lh          $a1, 0x18($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X18);
    // 0x80225BA8: addiu       $v1, $zero, 0x500
    ctx->r3 = ADD32(0, 0X500);
    // 0x80225BAC: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x80225BB0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225BB4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225BB8: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80225BBC: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
L_80225BC0:
    // 0x80225BC0: jr          $ra
    // 0x80225BC4: nop

    TRACE_RETURN()
    return;
    // 0x80225BC4: nop

;}
RECOMP_FUNC void func_80229E84_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229E94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E98: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x80229E9C: bne         $v0, $zero, L_80229EDC
    if (ctx->r2 != 0) {
        // 0x80229EA0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229EDC;
    }
    // 0x80229EA0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229EA4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80229EA8: bne         $v0, $zero, L_80229ED0
    if (ctx->r2 != 0) {
        // 0x80229EAC: nop
    
            goto L_80229ED0;
    }
    // 0x80229EAC: nop

    // 0x80229EB0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80229EB4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80229EB8: bne         $v1, $v0, L_80229ED0
    if (ctx->r3 != ctx->r2) {
        // 0x80229EBC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229ED0;
    }
    // 0x80229EBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229EC0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80229EC4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80229EC8: j           L_80229F0C
    // 0x80229ECC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80229F0C;
    // 0x80229ECC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80229ED0:
    // 0x80229ED0: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80229ED4: beq         $v0, $zero, L_80229F3C
    if (ctx->r2 == 0) {
        // 0x80229ED8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229F3C;
    }
    // 0x80229ED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229EDC:
    // 0x80229EDC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80229EE0: bne         $v0, $zero, L_80229F3C
    if (ctx->r2 != 0) {
        // 0x80229EE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229F3C;
    }
    // 0x80229EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EE8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80229EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229EF0: bne         $v1, $v0, L_80229F3C
    if (ctx->r3 != ctx->r2) {
        // 0x80229EF4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_80229F3C;
    }
    // 0x80229EF4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80229EF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229EFC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80229F00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229F04: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229F08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80229F0C:
    // 0x80229F0C: jal         0x8009A3B4
    // 0x80229F10: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229F10: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229F14: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80229F18: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80229F1C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80229F20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F24: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229F28: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229F2C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80229F30: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80229F34: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80229F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229F3C:
    // 0x80229F3C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229F40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229F44: jal         0x8004DA90
    // 0x80229F48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80229F48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80229F4C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80229F50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229F54: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80229F58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F5C: bne         $v0, $zero, L_80229F8C
    if (ctx->r2 != 0) {
        // 0x80229F60: nop
    
            goto L_80229F8C;
    }
    // 0x80229F60: nop

    // 0x80229F64: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229F68: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229F6C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229F70: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229F74: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80229F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229F80: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80229F84: j           L_80229FDC
    // 0x80229F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229FDC;
    // 0x80229F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229F8C:
    // 0x80229F8C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80229F90: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229F94: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80229F98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F9C: bne         $v0, $zero, L_80229FAC
    if (ctx->r2 != 0) {
        // 0x80229FA0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229FAC;
    }
    // 0x80229FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229FA4: j           L_80229FDC
    // 0x80229FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229FDC;
    // 0x80229FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229FAC:
    // 0x80229FAC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80229FB0: jal         0x8022B7E4
    // 0x80229FB4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_2;
    // 0x80229FB4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80229FB8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229FBC: beq         $v0, $zero, L_80229FE0
    if (ctx->r2 == 0) {
        // 0x80229FC0: nop
    
            goto L_80229FE0;
    }
    // 0x80229FC0: nop

    // 0x80229FC4: jal         0x8022B748
    // 0x80229FC8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B748_ovl13(rdram, ctx);
        goto after_3;
    // 0x80229FC8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x80229FCC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229FD0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80229FD4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80229FD8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80229FDC:
    // 0x80229FDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229FE0:
    // 0x80229FE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229FE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229FE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229FEC: jr          $ra
    // 0x80229FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228590_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228590: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228594: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228598: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8022859C: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x802285A0: beq         $v0, $zero, L_80228714
    if (ctx->r2 == 0) {
        // 0x802285A4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228714;
    }
    // 0x802285A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802285A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802285AC: addu        $at, $at, $v0
    gpr jr_addend_802285B4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802285B0: lw          $v0, -0x6488($at)
    ctx->r2 = ADD32(ctx->r1, -0X6488);
    // 0x802285B4: jr          $v0
    // 0x802285B8: nop

    switch (jr_addend_802285B4 >> 2) {
        case 0: goto L_802285BC; break;
        case 1: goto L_802285D4; break;
        case 2: goto L_80228614; break;
        case 3: goto L_80228620; break;
        case 4: goto L_80228638; break;
        case 5: goto L_80228654; break;
        case 6: goto L_80228668; break;
        case 7: goto L_80228680; break;
        case 8: goto L_80228698; break;
        case 9: goto L_802286D8; break;
        default: switch_error(__func__, 0x802285B4, 0x80239B78);
    }
    // 0x802285B8: nop

L_802285BC:
    // 0x802285BC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802285C0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802285C4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x802285C8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802285CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802285D0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802285D4:
    // 0x802285D4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x802285D8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802285DC: beq         $v0, $zero, L_80228600
    if (ctx->r2 == 0) {
        // 0x802285E0: nop
    
            goto L_80228600;
    }
    // 0x802285E0: nop

    // 0x802285E4: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802285E8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802285EC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x802285F0: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802285F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802285F8: j           L_8022860C
    // 0x802285FC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_8022860C;
    // 0x802285FC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80228600:
    // 0x80228600: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80228604: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228608: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022860C:
    // 0x8022860C: j           L_80228708
    // 0x80228610: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
        goto L_80228708;
    // 0x80228610: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_80228614:
    // 0x80228614: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228618: j           L_802286C4
    // 0x8022861C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_802286C4;
    // 0x8022861C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80228620:
    // 0x80228620: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x80228624: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228628: beq         $v1, $v0, L_802286C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022862C: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_802286C8;
    }
    // 0x8022862C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228630: j           L_8022870C
    // 0x80228634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022870C;
    // 0x80228634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80228638:
    // 0x80228638: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x8022863C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228640: slti        $v0, $v0, 0x32
    ctx->r2 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x80228644: beq         $v0, $zero, L_802286C8
    if (ctx->r2 == 0) {
        // 0x80228648: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802286C8;
    }
    // 0x80228648: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022864C: j           L_80228714
    // 0x80228650: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_80228714;
    // 0x80228650: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80228654:
    // 0x80228654: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80228658: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022865C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228660: j           L_802286C4
    // 0x80228664: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
        goto L_802286C4;
    // 0x80228664: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_80228668:
    // 0x80228668: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022866C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228670: beq         $v1, $v0, L_802286C8
    if (ctx->r3 == ctx->r2) {
        // 0x80228674: nop
    
            goto L_802286C8;
    }
    // 0x80228674: nop

    // 0x80228678: j           L_80228714
    // 0x8022867C: nop

        goto L_80228714;
    // 0x8022867C: nop

L_80228680:
    // 0x80228680: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80228684: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228688: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x8022868C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80228690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228694: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80228698:
    // 0x80228698: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x8022869C: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802286A0: beql        $v0, $zero, L_802286C8
    if (ctx->r2 == 0) {
        // 0x802286A4: sh          $zero, 0x0($a2)
        MEM_H(0X0, ctx->r6) = 0;
            goto L_802286C8;
    }
    goto skip_0;
    // 0x802286A4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    skip_0:
    // 0x802286A8: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802286AC: addiu       $v0, $v0, 0x72
    ctx->r2 = ADD32(ctx->r2, 0X72);
    // 0x802286B0: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x802286B4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802286B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802286BC: j           L_80228714
    // 0x802286C0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_80228714;
    // 0x802286C0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802286C4:
    // 0x802286C4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_802286C8:
    // 0x802286C8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802286CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802286D0: j           L_80228714
    // 0x802286D4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80228714;
    // 0x802286D4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802286D8:
    // 0x802286D8: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x802286DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802286E0: slti        $v0, $v0, 0x2E
    ctx->r2 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
    // 0x802286E4: beq         $v0, $zero, L_802286F4
    if (ctx->r2 == 0) {
        // 0x802286E8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802286F4;
    }
    // 0x802286E8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802286EC: j           L_80228704
    // 0x802286F0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_80228704;
    // 0x802286F0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802286F4:
    // 0x802286F4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802286F8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802286FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228700: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80228704:
    // 0x80228704: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_80228708:
    // 0x80228708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022870C:
    // 0x8022870C: jal         0x8004DA90
    // 0x80228710: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228710: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80228714:
    // 0x80228714: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228718: jr          $ra
    // 0x8022871C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022871C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BA50_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BA60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA68: jal         0x8009A3B4
    // 0x8022BA6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BA6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BA70: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BA74: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BA78: jal         0x8009A3B4
    // 0x8022BA7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BA7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BA80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BA84: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BA88: jal         0x8009A3B4
    // 0x8022BA8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BA8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BA90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BA94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BA9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BAA0: lw          $v0, -0x6A44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A44);
    // 0x8022BAA4: jalr        $v0
    // 0x8022BAA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BAA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BAAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BAB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BAB4: beq         $v0, $zero, L_8022BACC
    if (ctx->r2 == 0) {
        // 0x8022BAB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BACC;
    }
    // 0x8022BAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BABC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022BAC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BAC4: jal         0x8003B564
    // 0x8022BAC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022BAC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022BACC:
    // 0x8022BACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAD4: jr          $ra
    // 0x8022BAD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B31C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B31C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B320: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022B324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B328: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B32C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B330: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B334: bne         $v1, $v0, L_8022B35C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B338: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B35C;
    }
    // 0x8022B338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B33C: jal         0x80061724
    // 0x8022B340: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022B340: nop

    after_0:
    // 0x8022B344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B348: jal         0x800616FC
    // 0x8022B34C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022B34C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022B350: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B354: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B358: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022B35C:
    // 0x8022B35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B360: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B364: jr          $ra
    // 0x8022B368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB04_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022EB08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022EB0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EB10: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x8022EB14: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022EB18: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022EB1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022EB20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EB24: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022EB28: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022EB2C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EB30: bne         $v0, $zero, L_8022EB44
    if (ctx->r2 != 0) {
        // 0x8022EB34: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022EB44;
    }
    // 0x8022EB34: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022EB38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EB3C: j           L_8022EB48
    // 0x8022EB40: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
        goto L_8022EB48;
    // 0x8022EB40: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
L_8022EB44:
    // 0x8022EB44: sb          $zero, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = 0;
L_8022EB48:
    // 0x8022EB48: lbu         $a0, 0x4E($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022EB4C: andi        $v0, $a0, 0xA
    ctx->r2 = ctx->r4 & 0XA;
    // 0x8022EB50: beq         $v0, $zero, L_8022ECE0
    if (ctx->r2 == 0) {
        // 0x8022EB54: nop
    
            goto L_8022ECE0;
    }
    // 0x8022EB54: nop

    // 0x8022EB58: lbu         $v0, 0x50($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X50);
    // 0x8022EB5C: bne         $v0, $zero, L_8022ECDC
    if (ctx->r2 != 0) {
        // 0x8022EB60: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022ECDC;
    }
    // 0x8022EB60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EB64: lbu         $v1, 0x51($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X51);
    // 0x8022EB68: ori         $v0, $a0, 0x8
    ctx->r2 = ctx->r4 | 0X8;
    // 0x8022EB6C: bne         $v1, $zero, L_8022ECD0
    if (ctx->r3 != 0) {
        // 0x8022EB70: sb          $v0, 0x4E($s2)
        MEM_B(0X4E, ctx->r18) = ctx->r2;
            goto L_8022ECD0;
    }
    // 0x8022EB70: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
    // 0x8022EB74: lbu         $v1, 0x4F($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022EB78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EB7C: beq         $v1, $zero, L_8022ECC0
    if (ctx->r3 == 0) {
        // 0x8022EB80: sb          $v0, 0x51($s2)
        MEM_B(0X51, ctx->r18) = ctx->r2;
            goto L_8022ECC0;
    }
    // 0x8022EB80: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
    // 0x8022EB84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8022EB88:
    // 0x8022EB88: jal         0x8004EFE4
    // 0x8022EB8C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022EB8C: nop

    after_0:
    // 0x8022EB90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022EB94: beq         $s0, $zero, L_8022EC9C
    if (ctx->r16 == 0) {
        // 0x8022EB98: addiu       $a0, $zero, 0xEB
        ctx->r4 = ADD32(0, 0XEB);
            goto L_8022EC9C;
    }
    // 0x8022EB98: addiu       $a0, $zero, 0xEB
    ctx->r4 = ADD32(0, 0XEB);
    // 0x8022EB9C: jal         0x8002A33C
    // 0x8022EBA0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022EBA0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x8022EBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022EBAC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022EBB0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022EBB4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022EBB8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022EBBC: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EBC0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022EBC4: lhu         $v0, 0x188($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X188);
    // 0x8022EBC8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022EBCC: lhu         $v0, 0x18C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18C);
    // 0x8022EBD0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022EBD4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022EBD8: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022EBDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EBE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EBE4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022EBE8: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022EBEC: lbu         $v0, 0x54($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X54);
    // 0x8022EBF0: bne         $v0, $zero, L_8022EC44
    if (ctx->r2 != 0) {
        // 0x8022EBF4: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022EC44;
    }
    // 0x8022EBF4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022EBF8: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022EBFC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022EC00: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x8022EC04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022EC08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC0C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022EC10: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022EC14: beq         $v0, $zero, L_8022EC30
    if (ctx->r2 == 0) {
        // 0x8022EC18: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EC30;
    }
    // 0x8022EC18: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EC1C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EC20: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EC24: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EC28: j           L_8022EC8C
    // 0x8022EC2C: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
        goto L_8022EC8C;
    // 0x8022EC2C: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
L_8022EC30:
    // 0x8022EC30: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EC34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EC38: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EC3C: j           L_8022EC8C
    // 0x8022EC40: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
        goto L_8022EC8C;
    // 0x8022EC40: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
L_8022EC44:
    // 0x8022EC44: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022EC48: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x8022EC4C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022EC50: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022EC54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022EC5C: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022EC60: beq         $v0, $zero, L_8022EC7C
    if (ctx->r2 == 0) {
        // 0x8022EC64: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EC7C;
    }
    // 0x8022EC64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EC68: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EC6C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EC70: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EC74: j           L_8022EC8C
    // 0x8022EC78: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
        goto L_8022EC8C;
    // 0x8022EC78: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
L_8022EC7C:
    // 0x8022EC7C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EC80: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EC84: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EC88: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
L_8022EC8C:
    // 0x8022EC8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022EC90: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EC94: jal         0x8004DBA0
    // 0x8022EC98: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022EC98: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
L_8022EC9C:
    // 0x8022EC9C: addiu       $v0, $s3, -0x1
    ctx->r2 = ADD32(ctx->r19, -0X1);
    // 0x8022ECA0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022ECA4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022ECA8: bgez        $v0, L_8022EB88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022ECAC: nop
    
            goto L_8022EB88;
    }
    // 0x8022ECAC: nop

    // 0x8022ECB0: lbu         $v0, 0x4F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022ECB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ECB8: j           L_8022ECE0
    // 0x8022ECBC: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
        goto L_8022ECE0;
    // 0x8022ECBC: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
L_8022ECC0:
    // 0x8022ECC0: lbu         $v0, 0x4E($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022ECC4: andi        $v0, $v0, 0xF5
    ctx->r2 = ctx->r2 & 0XF5;
    // 0x8022ECC8: j           L_8022ECE0
    // 0x8022ECCC: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
        goto L_8022ECE0;
    // 0x8022ECCC: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
L_8022ECD0:
    // 0x8022ECD0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022ECD4: j           L_8022ECE0
    // 0x8022ECD8: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
        goto L_8022ECE0;
    // 0x8022ECD8: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
L_8022ECDC:
    // 0x8022ECDC: sb          $v0, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r2;
L_8022ECE0:
    // 0x8022ECE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022ECE4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022ECE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022ECEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ECF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022ECF4: jr          $ra
    // 0x8022ECF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022ECF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022ECFC: nop

;}
