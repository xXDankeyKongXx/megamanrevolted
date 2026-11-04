#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022DE6C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DE70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DE74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DE78: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022DE7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022DE80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE88: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022DE8C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022DE90: addiu       $v0, $v0, 0x3688
    ctx->r2 = ADD32(ctx->r2, 0X3688);
    // 0x8022DE94: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x8022DE98: jal         0x800A3450
    // 0x8022DE9C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022DE9C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022DEA0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DEA4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022DEA8: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DEAC: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022DEB0: addiu       $s0, $s0, 0x36C8
    ctx->r16 = ADD32(ctx->r16, 0X36C8);
    // 0x8022DEB4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022DEB8: beq         $v1, $zero, L_8022DED4
    if (ctx->r3 == 0) {
        // 0x8022DEBC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022DED4;
    }
    // 0x8022DEBC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022DEC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DEC4: beq         $v1, $v0, L_8022DEF4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DEC8: nop
    
            goto L_8022DEF4;
    }
    // 0x8022DEC8: nop

    // 0x8022DECC: j           L_8022DF08
    // 0x8022DED0: nop

        goto L_8022DF08;
    // 0x8022DED0: nop

L_8022DED4:
    // 0x8022DED4: jal         0x8022FEB8
    // 0x8022DED8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022FEB8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022DED8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022DEDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DEE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DEE4: jal         0x8022FEF8
    // 0x8022DEE8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022DEE8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022DEEC: j           L_8022DF60
    // 0x8022DEF0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_8022DF60;
    // 0x8022DEF0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022DEF4:
    // 0x8022DEF4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DEF8: jal         0x8022FEA8
    // 0x8022DEFC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022DEFC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x8022DF00: j           L_8022DF60
    // 0x8022DF04: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8022DF60;
    // 0x8022DF04: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8022DF08:
    // 0x8022DF08: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022DF0C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x8022DF10: bne         $v1, $v0, L_8022DF20
    if (ctx->r3 != ctx->r2) {
        // 0x8022DF14: nop
    
            goto L_8022DF20;
    }
    // 0x8022DF14: nop

    // 0x8022DF18: j           L_8022DF60
    // 0x8022DF1C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_8022DF60;
    // 0x8022DF1C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_8022DF20:
    // 0x8022DF20: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DF24: jal         0x8022FEB8
    // 0x8022DF28: nop

    func_8022FEB8_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022DF28: nop

    after_4:
    // 0x8022DF2C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DF30: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022DF34: beq         $v0, $zero, L_8022DF48
    if (ctx->r2 == 0) {
        // 0x8022DF38: nop
    
            goto L_8022DF48;
    }
    // 0x8022DF38: nop

    // 0x8022DF3C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022DF40: j           L_8022DF58
    // 0x8022DF44: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_8022DF58;
    // 0x8022DF44: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022DF48:
    // 0x8022DF48: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022DF4C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DF50: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DF54: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022DF58:
    // 0x8022DF58: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022DF5C: addiu       $s0, $s0, 0x36E8
    ctx->r16 = ADD32(ctx->r16, 0X36E8);
L_8022DF60:
    // 0x8022DF60: jal         0x800A3450
    // 0x8022DF64: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022DF64: nop

    after_5:
    // 0x8022DF68: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DF6C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022DF70: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022DF74: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022DF78: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022DF7C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022DF80: beq         $v1, $v0, L_8022DF98
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF84: nop
    
            goto L_8022DF98;
    }
    // 0x8022DF84: nop

    // 0x8022DF88: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022DF8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DF90: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022DF94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022DF98:
    // 0x8022DF98: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022DF9C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DFA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DFA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DFA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DFAC: jr          $ra
    // 0x8022DFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DFB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231C80_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80231C84: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80231C88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231C8C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80231C90: addiu       $s1, $s0, 0x360
    ctx->r17 = ADD32(ctx->r16, 0X360);
    // 0x80231C94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231C98: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231C9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231CA0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80231CA4: jal         0x8009A3B4
    // 0x80231CA8: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231CA8: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    after_0:
    // 0x80231CAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231CB0: lhu         $v0, 0x362($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X362);
    // 0x80231CB4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80231CB8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80231CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231CC0: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80231CC4: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x80231CC8: addiu       $v0, $s0, 0x368
    ctx->r2 = ADD32(ctx->r16, 0X368);
    // 0x80231CCC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80231CD0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231CD4: lw          $v1, 0x378($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X378);
    // 0x80231CD8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80231CDC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80231CE0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80231CE4: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80231CE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80231CEC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231CF0: jal         0x80051E18
    // 0x80231CF4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80231CF4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80231CF8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80231CFC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80231D00: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80231D04: jr          $ra
    // 0x80231D08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80231D08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022F3E8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F3EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F3F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F3F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F3F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F3FC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F400: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F404: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F408: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F40C: bne         $v0, $zero, L_8022F468
    if (ctx->r2 != 0) {
        // 0x8022F410: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022F468;
    }
    // 0x8022F410: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022F414: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F418: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F41C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F420: jal         0x8004F820
    // 0x8022F424: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F424: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022F428: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F42C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F430: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022F434: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F438: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F43C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022F440: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022F444: beq         $a0, $zero, L_8022F468
    if (ctx->r4 == 0) {
        // 0x8022F448: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F468;
    }
    // 0x8022F448: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F44C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F450: jal         0x8022FE10
    // 0x8022F454: nop

    func_8022FE10_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022F454: nop

    after_1:
    // 0x8022F458: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F45C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F460: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F464: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022F468:
    // 0x8022F468: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F46C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F470: bne         $v0, $zero, L_8022F494
    if (ctx->r2 != 0) {
        // 0x8022F474: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022F494;
    }
    // 0x8022F474: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F478: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F47C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022F480: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F484: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F488: jal         0x8022FEA8
    // 0x8022F48C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022F48C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022F490: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F494:
    // 0x8022F494: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F498: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F49C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4A0: jr          $ra
    // 0x8022F4A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F4A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802361B4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802361B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802361B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802361BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802361C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802361C4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802361C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802361CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802361D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802361D4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802361D8: jal         0x8004D5D4
    // 0x802361DC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802361DC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802361E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802361E8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802361EC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802361F0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802361F4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802361F8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802361FC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80236200: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236204: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023620C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80236210: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    // 0x80236214: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236218: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    // 0x8023621C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80236220: jal         0x80236A60
    // 0x80236224: sb          $s1, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r17;
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x80236224: sb          $s1, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r17;
    after_1:
    // 0x80236228: sb          $s1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r17;
    // 0x8023622C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236230: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236234: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80236238: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023623C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236244: jr          $ra
    // 0x80236248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225478_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022547C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225480: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225488: jal         0x8006033C
    // 0x8022548C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022548C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225490: beq         $v0, $zero, L_802254A8
    if (ctx->r2 == 0) {
        // 0x80225494: nop
    
            goto L_802254A8;
    }
    // 0x80225494: nop

    // 0x80225498: jal         0x80060690
    // 0x8022549C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x8022549C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x802254A0: j           L_80225500
    // 0x802254A4: nop

        goto L_80225500;
    // 0x802254A4: nop

L_802254A8:
    // 0x802254A8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802254AC: beq         $v1, $zero, L_802254C4
    if (ctx->r3 == 0) {
        // 0x802254B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802254C4;
    }
    // 0x802254B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254B4: beq         $v1, $v0, L_802254E0
    if (ctx->r3 == ctx->r2) {
        // 0x802254B8: nop
    
            goto L_802254E0;
    }
    // 0x802254B8: nop

    // 0x802254BC: j           L_80225500
    // 0x802254C0: nop

        goto L_80225500;
    // 0x802254C0: nop

L_802254C4:
    // 0x802254C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802254C8: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802254CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802254D0: bne         $v1, $v0, L_802254FC
    if (ctx->r3 != ctx->r2) {
        // 0x802254D4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802254FC;
    }
    // 0x802254D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254D8: j           L_802254FC
    // 0x802254DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802254FC;
    // 0x802254DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802254E0:
    // 0x802254E0: jal         0x8006033C
    // 0x802254E4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802254E4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_2:
    // 0x802254E8: beq         $v0, $zero, L_80225500
    if (ctx->r2 == 0) {
        // 0x802254EC: nop
    
            goto L_80225500;
    }
    // 0x802254EC: nop

    // 0x802254F0: jal         0x8006027C
    // 0x802254F4: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_3;
    // 0x802254F4: nop

    after_3:
    // 0x802254F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802254FC:
    // 0x802254FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225500:
    // 0x80225500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225504: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225508: jr          $ra
    // 0x8022550C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022550C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247BF4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247BF4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80247BF8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80247BFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247C00: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80247C04: jal         0x8006033C
    // 0x80247C08: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80247C08: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x80247C0C: beq         $v0, $zero, L_80247C4C
    if (ctx->r2 == 0) {
        // 0x80247C10: nop
    
            goto L_80247C4C;
    }
    // 0x80247C10: nop

    // 0x80247C14: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80247C18: jal         0x8003E6BC
    // 0x80247C1C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x80247C1C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x80247C20: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x80247C24: bne         $v1, $v0, L_80247C4C
    if (ctx->r3 != ctx->r2) {
        // 0x80247C28: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_80247C4C;
    }
    // 0x80247C28: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x80247C2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80247C30: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80247C34: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80247C38: jal         0x8006036C
    // 0x80247C3C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80247C3C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_2:
    // 0x80247C40: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80247C44: jal         0x8002A33C
    // 0x80247C48: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80247C48: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
L_80247C4C:
    // 0x80247C4C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80247C50: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80247C54: jr          $ra
    // 0x80247C58: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80247C58: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8024A128_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A128: lb          $v1, 0xF($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XF);
    // 0x8024A12C: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x8024A130: bne         $v1, $v0, L_8024A148
    if (ctx->r3 != ctx->r2) {
        // 0x8024A134: addiu       $v0, $zero, 0x76
        ctx->r2 = ADD32(0, 0X76);
            goto L_8024A148;
    }
    // 0x8024A134: addiu       $v0, $zero, 0x76
    ctx->r2 = ADD32(0, 0X76);
    // 0x8024A138: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024A13C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x8024A140: j           L_8024A168
    // 0x8024A144: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
        goto L_8024A168;
    // 0x8024A144: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_8024A148:
    // 0x8024A148: bne         $v1, $v0, L_8024A168
    if (ctx->r3 != ctx->r2) {
        // 0x8024A14C: nop
    
            goto L_8024A168;
    }
    // 0x8024A14C: nop

    // 0x8024A150: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8024A154: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8024A158: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8024A15C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8024A160: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A164: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8024A168:
    // 0x8024A168: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x8024A16C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A170: jr          $ra
    // 0x8024A174: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8024A174: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022A30C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A30C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A310: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A314: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A318: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A31C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A324: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022A328: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022A32C: beq         $v1, $v0, L_8022A478
    if (ctx->r3 == ctx->r2) {
        // 0x8022A330: slti        $v0, $v1, 0x1A
        ctx->r2 = SIGNED(ctx->r3) < 0X1A ? 1 : 0;
            goto L_8022A478;
    }
    // 0x8022A330: slti        $v0, $v1, 0x1A
    ctx->r2 = SIGNED(ctx->r3) < 0X1A ? 1 : 0;
    // 0x8022A334: beql        $v0, $zero, L_8022A354
    if (ctx->r2 == 0) {
        // 0x8022A338: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022A354;
    }
    goto skip_0;
    // 0x8022A338: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    skip_0:
    // 0x8022A33C: beq         $v1, $zero, L_8022A36C
    if (ctx->r3 == 0) {
        // 0x8022A340: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022A36C;
    }
    // 0x8022A340: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A344: beq         $v1, $v0, L_8022A44C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A348: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8022A44C;
    }
    // 0x8022A348: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A34C: j           L_8022A484
    // 0x8022A350: nop

        goto L_8022A484;
    // 0x8022A350: nop

L_8022A354:
    // 0x8022A354: beq         $v1, $v0, L_8022A464
    if (ctx->r3 == ctx->r2) {
        // 0x8022A358: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022A464;
    }
    // 0x8022A358: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A35C: beq         $v1, $v0, L_8022A47C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A360: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022A47C;
    }
    // 0x8022A360: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022A364: j           L_8022A484
    // 0x8022A368: nop

        goto L_8022A484;
    // 0x8022A368: nop

L_8022A36C:
    // 0x8022A36C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A370: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022A374: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A378: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A37C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022A380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A384: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8022A388: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A38C: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022A390: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A394: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A398: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022A39C: addiu       $v0, $zero, 0x6C0
    ctx->r2 = ADD32(0, 0X6C0);
    // 0x8022A3A0: lui         $s0, 0x80
    ctx->r16 = S32(0X80 << 16);
    // 0x8022A3A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3A8: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022A3AC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022A3B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3B4: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022A3B8: lui         $v0, 0x6C0
    ctx->r2 = S32(0X6C0 << 16);
    // 0x8022A3BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3C0: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022A3C4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A3C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3CC: sh          $s1, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r17;
    // 0x8022A3D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3D4: sw          $s0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r16;
    // 0x8022A3D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3DC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022A3E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3E4: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8022A3E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3EC: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022A3F0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022A3F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A3F8: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022A3FC: jal         0x8022B750
    // 0x8022A400: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A400: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8022A404: jal         0x8022B784
    // 0x8022A408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022B784_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8022A40C: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8022A410: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022A414: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x8022A418: addiu       $v1, $zero, 0x740
    ctx->r3 = ADD32(0, 0X740);
    // 0x8022A41C: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x8022A420: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x8022A424: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022A428: lui         $v1, 0x740
    ctx->r3 = S32(0X740 << 16);
    // 0x8022A42C: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022A430: addiu       $v1, $zero, 0xCE0
    ctx->r3 = ADD32(0, 0XCE0);
    // 0x8022A434: sh          $s1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r17;
    // 0x8022A438: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x8022A43C: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8022A440: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8022A444: j           L_8022A484
    // 0x8022A448: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
        goto L_8022A484;
    // 0x8022A448: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
L_8022A44C:
    // 0x8022A44C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A450: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A454: jal         0x8022B750
    // 0x8022A458: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022B750_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022A458: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8022A45C: j           L_8022A47C
    // 0x8022A460: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_8022A47C;
    // 0x8022A460: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_8022A464:
    // 0x8022A464: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x8022A468: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A46C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A470: j           L_8022A47C
    // 0x8022A474: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_8022A47C;
    // 0x8022A474: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_8022A478:
    // 0x8022A478: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8022A47C:
    // 0x8022A47C: jal         0x8022B784
    // 0x8022A480: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022A480: nop

    after_3:
L_8022A484:
    // 0x8022A484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A488: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A48C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A490: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A494: jr          $ra
    // 0x8022A498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246FCC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246FD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246FD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246FDC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80246FE0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80246FE4: beq         $v0, $zero, L_8024709C
    if (ctx->r2 == 0) {
        // 0x80246FE8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024709C;
    }
    // 0x80246FE8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80246FEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246FF0: addu        $at, $at, $v0
    gpr jr_addend_80246FF8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246FF4: lw          $v0, 0x6270($at)
    ctx->r2 = ADD32(ctx->r1, 0X6270);
    // 0x80246FF8: jr          $v0
    // 0x80246FFC: nop

    switch (jr_addend_80246FF8 >> 2) {
        case 0: goto L_80247000; break;
        case 1: goto L_8024702C; break;
        case 2: goto L_80247054; break;
        case 3: goto L_80247078; break;
        case 4: goto L_8024709C; break;
        default: switch_error(__func__, 0x80246FF8, 0x80256270);
    }
    // 0x80246FFC: nop

L_80247000:
    // 0x80247000: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80247004: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80247008: bne         $v1, $v0, L_8024709C
    if (ctx->r3 != ctx->r2) {
        // 0x8024700C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8024709C;
    }
    // 0x8024700C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80247010: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247014: bne         $v1, $v0, L_8024709C
    if (ctx->r3 != ctx->r2) {
        // 0x80247018: nop
    
            goto L_8024709C;
    }
    // 0x80247018: nop

    // 0x8024701C: jal         0x802476B0
    // 0x80247020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802476B0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80247020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80247024: j           L_80247090
    // 0x80247028: nop

        goto L_80247090;
    // 0x80247028: nop

L_8024702C:
    // 0x8024702C: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x80247030: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80247034: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80247038: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x8024703C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247040: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80247044: beq         $v0, $v1, L_80247090
    if (ctx->r2 == ctx->r3) {
        // 0x80247048: nop
    
            goto L_80247090;
    }
    // 0x80247048: nop

    // 0x8024704C: j           L_8024709C
    // 0x80247050: nop

        goto L_8024709C;
    // 0x80247050: nop

L_80247054:
    // 0x80247054: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80247058: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8024705C: bne         $v1, $v0, L_8024709C
    if (ctx->r3 != ctx->r2) {
        // 0x80247060: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8024709C;
    }
    // 0x80247060: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80247064: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247068: beq         $v1, $v0, L_80247090
    if (ctx->r3 == ctx->r2) {
        // 0x8024706C: nop
    
            goto L_80247090;
    }
    // 0x8024706C: nop

    // 0x80247070: j           L_8024709C
    // 0x80247074: nop

        goto L_8024709C;
    // 0x80247074: nop

L_80247078:
    // 0x80247078: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x8024707C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80247080: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x80247084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247088: bne         $v0, $zero, L_8024709C
    if (ctx->r2 != 0) {
        // 0x8024708C: nop
    
            goto L_8024709C;
    }
    // 0x8024708C: nop

L_80247090:
    // 0x80247090: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80247094: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247098: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024709C:
    // 0x8024709C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802470A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802470A4: jr          $ra
    // 0x802470A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802470A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022954C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022954C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229550: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229554: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229558: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022955C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229560: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229564: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x80229568: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022956C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80229570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229574: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80229578: beq         $v1, $v0, L_8022969C
    if (ctx->r3 == ctx->r2) {
        // 0x8022957C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022969C;
    }
    // 0x8022957C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229580: beql        $v0, $zero, L_80229598
    if (ctx->r2 == 0) {
        // 0x80229584: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229598;
    }
    goto skip_0;
    // 0x80229584: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229588: beq         $v1, $zero, L_802295B0
    if (ctx->r3 == 0) {
        // 0x8022958C: nop
    
            goto L_802295B0;
    }
    // 0x8022958C: nop

    // 0x80229590: j           L_8022983C
    // 0x80229594: nop

        goto L_8022983C;
    // 0x80229594: nop

L_80229598:
    // 0x80229598: beq         $v1, $v0, L_802296C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022959C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802296C4;
    }
    // 0x8022959C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802295A0: beq         $v1, $v0, L_802296D0
    if (ctx->r3 == ctx->r2) {
        // 0x802295A4: nop
    
            goto L_802296D0;
    }
    // 0x802295A4: nop

    // 0x802295A8: j           L_8022983C
    // 0x802295AC: nop

        goto L_8022983C;
    // 0x802295AC: nop

L_802295B0:
    // 0x802295B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802295B4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802295B8: bne         $v0, $zero, L_8022983C
    if (ctx->r2 != 0) {
        // 0x802295BC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022983C;
    }
    // 0x802295BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802295C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802295C4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x802295C8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802295CC: lbu         $a3, 0x4A6D($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X4A6D);
    // 0x802295D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802295D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802295D8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802295DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802295E4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802295E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802295EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802295F0: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802295F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802295F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802295FC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80229600: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229604: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229608: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8022960C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229610: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x80229614: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229618: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8022961C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229620: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x80229624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229628: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022962C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229630: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80229634: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229638: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8022963C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229640: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80229644: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229648: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x8022964C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229650: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x80229654: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80229658: ori         $a3, $a3, 0x10
    ctx->r7 = ctx->r7 | 0X10;
    // 0x8022965C: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x80229660: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229664: sb          $a3, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r7;
    // 0x80229668: jal         0x80036B00
    // 0x8022966C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x8022966C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80229670: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229674: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x80229678: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022967C: beq         $v0, $zero, L_8022968C
    if (ctx->r2 == 0) {
        // 0x80229680: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_8022968C;
    }
    // 0x80229680: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80229684: jal         0x80036340
    // 0x80229688: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80036340_11740(rdram, ctx);
        goto after_1;
    // 0x80229688: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
L_8022968C:
    // 0x8022968C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80229690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229694: j           L_8022983C
    // 0x80229698: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022983C;
    // 0x80229698: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8022969C:
    // 0x8022969C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802296A0: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x802296A4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802296A8: beq         $v0, $zero, L_802296B8
    if (ctx->r2 == 0) {
        // 0x802296AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802296B8;
    }
    // 0x802296AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802296B0: j           L_8022983C
    // 0x802296B4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022983C;
    // 0x802296B4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_802296B8:
    // 0x802296B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802296BC: j           L_8022983C
    // 0x802296C0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022983C;
    // 0x802296C0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_802296C4:
    // 0x802296C4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802296C8: j           L_8022983C
    // 0x802296CC: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022983C;
    // 0x802296CC: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_802296D0:
    // 0x802296D0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802296D4: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x802296D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802296DC: bne         $v0, $zero, L_802296EC
    if (ctx->r2 != 0) {
        // 0x802296E0: addiu       $a0, $zero, 0x17E
        ctx->r4 = ADD32(0, 0X17E);
            goto L_802296EC;
    }
    // 0x802296E0: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x802296E4: jal         0x8004CB2C
    // 0x802296E8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x802296E8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
L_802296EC:
    // 0x802296EC: jal         0x80054578
    // 0x802296F0: nop

    func_80054578_2F978(rdram, ctx);
        goto after_3;
    // 0x802296F0: nop

    after_3:
    // 0x802296F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802296F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802296FC: jal         0x80034844
    // 0x80229700: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80229700: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x80229704: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229708: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x8022970C: beql        $v0, $zero, L_80229720
    if (ctx->r2 == 0) {
        // 0x80229710: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80229720;
    }
    goto skip_1;
    // 0x80229710: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x80229714: jal         0x80036E48
    // 0x80229718: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80229718: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x8022971C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80229720:
    // 0x80229720: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80229724: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80229728: addiu       $s0, $zero, 0xB00
    ctx->r16 = ADD32(0, 0XB00);
    // 0x8022972C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80229730: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80229734: jal         0x8003E768
    // 0x80229738: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    func_8003E768_19B68(rdram, ctx);
        goto after_6;
    // 0x80229738: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    after_6:
    // 0x8022973C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229740: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80229744: jal         0x80071ACC
    // 0x80229748: ori         $a1, $a1, 0xA00
    ctx->r5 = ctx->r5 | 0XA00;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_7;
    // 0x80229748: ori         $a1, $a1, 0xA00
    ctx->r5 = ctx->r5 | 0XA00;
    after_7:
    // 0x8022974C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80229750: jal         0x8003E768
    // 0x80229754: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003E768_19B68(rdram, ctx);
        goto after_8;
    // 0x80229754: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x80229758: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022975C: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80229760: jal         0x80071ACC
    // 0x80229764: ori         $a1, $a1, 0xA00
    ctx->r5 = ctx->r5 | 0XA00;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_9;
    // 0x80229764: ori         $a1, $a1, 0xA00
    ctx->r5 = ctx->r5 | 0XA00;
    after_9:
    // 0x80229768: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022976C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80229770: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80229774: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80229778: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8022977C: jal         0x8003E768
    // 0x80229780: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    func_8003E768_19B68(rdram, ctx);
        goto after_10;
    // 0x80229780: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    after_10:
    // 0x80229784: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229788: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x8022978C: jal         0x80071ACC
    // 0x80229790: ori         $a1, $a1, 0xB00
    ctx->r5 = ctx->r5 | 0XB00;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_11;
    // 0x80229790: ori         $a1, $a1, 0xB00
    ctx->r5 = ctx->r5 | 0XB00;
    after_11:
    // 0x80229794: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80229798: jal         0x8003E768
    // 0x8022979C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003E768_19B68(rdram, ctx);
        goto after_12;
    // 0x8022979C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_12:
    // 0x802297A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802297A4: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x802297A8: jal         0x80071ACC
    // 0x802297AC: ori         $a1, $a1, 0xB00
    ctx->r5 = ctx->r5 | 0XB00;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_13;
    // 0x802297AC: ori         $a1, $a1, 0xB00
    ctx->r5 = ctx->r5 | 0XB00;
    after_13:
    // 0x802297B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802297B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297B8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802297BC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802297C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297C4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802297C8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802297CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297D0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802297D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802297D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297DC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802297E0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802297E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297E8: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802297EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802297F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297F4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802297F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297FC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80229800: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229804: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80229808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022980C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80229810: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229814: jal         0x80241F40
    // 0x80229818: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    func_80241F40_ovl28(rdram, ctx);
        goto after_14;
    // 0x80229818: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    after_14:
    // 0x8022981C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x80229820: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229828: jal         0x8002A2F8
    // 0x8022982C: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_15;
    // 0x8022982C: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    after_15:
    // 0x80229830: jal         0x80070050
    // 0x80229834: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x80229834: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x80229838: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8022983C:
    // 0x8022983C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80229840: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229844: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229848: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022984C: jr          $ra
    // 0x80229850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024CFB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024CFB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024CFB8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024CFBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CFC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CFC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024CFC8: lw          $v0, 0x5C28($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C28);
    // 0x8024CFCC: jalr        $v0
    // 0x8024CFD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024CFD0: nop

    after_0:
    // 0x8024CFD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024CFD8: jr          $ra
    // 0x8024CFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024CFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AA54_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AA54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AA58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AA5C: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023AA60: beq         $v0, $zero, L_8023AA78
    if (ctx->r2 == 0) {
        // 0x8023AA64: nop
    
            goto L_8023AA78;
    }
    // 0x8023AA64: nop

    // 0x8023AA68: jal         0x8023AC94
    // 0x8023AA6C: nop

    func_8023AC94_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023AA6C: nop

    after_0:
    // 0x8023AA70: j           L_8023AA90
    // 0x8023AA74: nop

        goto L_8023AA90;
    // 0x8023AA74: nop

L_8023AA78:
    // 0x8023AA78: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8023AA7C: lhu         $v1, 0x51A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X51A);
    // 0x8023AA80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AA84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023AA88: jal         0x8005044C
    // 0x8023AA8C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023AA8C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_1:
L_8023AA90:
    // 0x8023AA90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AA94: jr          $ra
    // 0x8023AA98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AA98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236A58_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236A58: jr          $ra
    // 0x80236A5C: nop

    TRACE_RETURN()
    return;
    // 0x80236A5C: nop

;}
RECOMP_FUNC void func_802386B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802386B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802386B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802386B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802386BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802386C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802386C4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802386C8: sltiu       $v0, $v1, 0x16
    ctx->r2 = ctx->r3 < 0X16 ? 1 : 0;
    // 0x802386CC: beq         $v0, $zero, L_80238F88
    if (ctx->r2 == 0) {
        // 0x802386D0: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80238F88;
    }
    // 0x802386D0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802386D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802386D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802386DC: addu        $at, $at, $v0
    gpr jr_addend_802386E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802386E0: lw          $v0, 0x5ED8($at)
    ctx->r2 = ADD32(ctx->r1, 0X5ED8);
    // 0x802386E4: jr          $v0
    // 0x802386E8: nop

    switch (jr_addend_802386E4 >> 2) {
        case 0: goto L_802386EC; break;
        case 1: goto L_80238714; break;
        case 2: goto L_802387C8; break;
        case 3: goto L_80238818; break;
        case 4: goto L_802388E4; break;
        case 5: goto L_80238904; break;
        case 6: goto L_80238954; break;
        case 7: goto L_802389D0; break;
        case 8: goto L_80238A0C; break;
        case 9: goto L_80238A44; break;
        case 10: goto L_80238A70; break;
        case 11: goto L_80238ABC; break;
        case 12: goto L_80238B08; break;
        case 13: goto L_80238B88; break;
        case 14: goto L_80238BF4; break;
        case 15: goto L_80238CE8; break;
        case 16: goto L_80238D14; break;
        case 17: goto L_80238DA4; break;
        case 18: goto L_80238E48; break;
        case 19: goto L_80238F08; break;
        case 20: goto L_80238F54; break;
        case 21: goto L_80238F88; break;
        default: switch_error(__func__, 0x802386E4, 0x80255ED8);
    }
    // 0x802386E8: nop

L_802386EC:
    // 0x802386EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802386F0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802386F4: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x802386F8: bne         $v0, $zero, L_80238F88
    if (ctx->r2 != 0) {
        // 0x802386FC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80238F88;
    }
    // 0x802386FC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238700: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238704: beq         $v1, $v0, L_80238F7C
    if (ctx->r3 == ctx->r2) {
        // 0x80238708: nop
    
            goto L_80238F7C;
    }
    // 0x80238708: nop

    // 0x8023870C: j           L_80238F88
    // 0x80238710: nop

        goto L_80238F88;
    // 0x80238710: nop

L_80238714:
    // 0x80238714: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023871C: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238720: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_80238F88;
    }
    // 0x80238720: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80238724: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238728: beq         $a1, $v0, L_8023878C
    if (ctx->r5 == ctx->r2) {
        // 0x8023872C: slti        $v0, $a1, 0x2E
        ctx->r2 = SIGNED(ctx->r5) < 0X2E ? 1 : 0;
            goto L_8023878C;
    }
    // 0x8023872C: slti        $v0, $a1, 0x2E
    ctx->r2 = SIGNED(ctx->r5) < 0X2E ? 1 : 0;
    // 0x80238730: beq         $v0, $zero, L_80238750
    if (ctx->r2 == 0) {
        // 0x80238734: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80238750;
    }
    // 0x80238734: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80238738: beq         $a1, $v0, L_8023876C
    if (ctx->r5 == ctx->r2) {
        // 0x8023873C: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8023876C;
    }
    // 0x8023873C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80238740: beq         $a1, $v0, L_802387A8
    if (ctx->r5 == ctx->r2) {
        // 0x80238744: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802387A8;
    }
    // 0x80238744: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238748: j           L_80238F88
    // 0x8023874C: nop

        goto L_80238F88;
    // 0x8023874C: nop

L_80238750:
    // 0x80238750: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80238754: beq         $a1, $v0, L_802387A4
    if (ctx->r5 == ctx->r2) {
        // 0x80238758: addiu       $v0, $zero, 0x122
        ctx->r2 = ADD32(0, 0X122);
            goto L_802387A4;
    }
    // 0x80238758: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x8023875C: beq         $a1, $v0, L_802387BC
    if (ctx->r5 == ctx->r2) {
        // 0x80238760: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802387BC;
    }
    // 0x80238760: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238764: j           L_80238F88
    // 0x80238768: nop

        goto L_80238F88;
    // 0x80238768: nop

L_8023876C:
    // 0x8023876C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238770: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238774: jal         0x80238FC4
    // 0x80238778: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_0;
    // 0x80238778: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x8023877C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238780: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238784: j           L_80238F88
    // 0x80238788: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80238F88;
    // 0x80238788: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023878C:
    // 0x8023878C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238790: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238794: jal         0x80238FC4
    // 0x80238798: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_1;
    // 0x80238798: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_1:
    // 0x8023879C: j           L_80238F88
    // 0x802387A0: nop

        goto L_80238F88;
    // 0x802387A0: nop

L_802387A4:
    // 0x802387A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802387A8:
    // 0x802387A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802387AC: jal         0x80238FC4
    // 0x802387B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_2;
    // 0x802387B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802387B4: j           L_80238F88
    // 0x802387B8: nop

        goto L_80238F88;
    // 0x802387B8: nop

L_802387BC:
    // 0x802387BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802387C0: j           L_80238F7C
    // 0x802387C4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80238F7C;
    // 0x802387C4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_802387C8:
    // 0x802387C8: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802387CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802387D0: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x802387D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238F88;
    }
    // 0x802387D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802387D8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802387DC: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x802387E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x802387E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802387E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802387E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802387EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802387F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802387F4: jal         0x80238F9C
    // 0x802387F8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_3;
    // 0x802387F8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_3:
    // 0x802387FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238800: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238804: jal         0x80238FC4
    // 0x80238808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_4;
    // 0x80238808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8023880C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238810: j           L_80238F7C
    // 0x80238814: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
        goto L_80238F7C;
    // 0x80238814: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
L_80238818:
    // 0x80238818: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023881C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238820: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238824: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80238F88;
    }
    // 0x80238824: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80238828: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023882C: beq         $a1, $v0, L_8023889C
    if (ctx->r5 == ctx->r2) {
        // 0x80238830: slti        $v0, $a1, 0x47
        ctx->r2 = SIGNED(ctx->r5) < 0X47 ? 1 : 0;
            goto L_8023889C;
    }
    // 0x80238830: slti        $v0, $a1, 0x47
    ctx->r2 = SIGNED(ctx->r5) < 0X47 ? 1 : 0;
    // 0x80238834: beq         $v0, $zero, L_80238854
    if (ctx->r2 == 0) {
        // 0x80238838: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80238854;
    }
    // 0x80238838: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023883C: beq         $a1, $v0, L_8023888C
    if (ctx->r5 == ctx->r2) {
        // 0x80238840: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8023888C;
    }
    // 0x80238840: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80238844: beq         $a1, $v0, L_80238968
    if (ctx->r5 == ctx->r2) {
        // 0x80238848: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238968;
    }
    // 0x80238848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023884C: j           L_80238F88
    // 0x80238850: nop

        goto L_80238F88;
    // 0x80238850: nop

L_80238854:
    // 0x80238854: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80238858: beq         $a1, $v0, L_80238EAC
    if (ctx->r5 == ctx->r2) {
        // 0x8023885C: slti        $v0, $a1, 0xDD
        ctx->r2 = SIGNED(ctx->r5) < 0XDD ? 1 : 0;
            goto L_80238EAC;
    }
    // 0x8023885C: slti        $v0, $a1, 0xDD
    ctx->r2 = SIGNED(ctx->r5) < 0XDD ? 1 : 0;
    // 0x80238860: beq         $v0, $zero, L_80238878
    if (ctx->r2 == 0) {
        // 0x80238864: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80238878;
    }
    // 0x80238864: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80238868: beq         $a1, $v0, L_80238968
    if (ctx->r5 == ctx->r2) {
        // 0x8023886C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238968;
    }
    // 0x8023886C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238870: j           L_80238F88
    // 0x80238874: nop

        goto L_80238F88;
    // 0x80238874: nop

L_80238878:
    // 0x80238878: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x8023887C: beq         $a1, $v0, L_802388B4
    if (ctx->r5 == ctx->r2) {
        // 0x80238880: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802388B4;
    }
    // 0x80238880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238884: j           L_80238F88
    // 0x80238888: nop

        goto L_80238F88;
    // 0x80238888: nop

L_8023888C:
    // 0x8023888C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238890: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238894: jal         0x80238F9C
    // 0x80238898: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_5;
    // 0x80238898: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_5:
L_8023889C:
    // 0x8023889C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802388A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802388A4: jal         0x80238FC4
    // 0x802388A8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_6;
    // 0x802388A8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_6:
    // 0x802388AC: j           L_80238F88
    // 0x802388B0: nop

        goto L_80238F88;
    // 0x802388B0: nop

L_802388B4:
    // 0x802388B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802388B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802388BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802388C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802388C4: jal         0x80238F9C
    // 0x802388C8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_7;
    // 0x802388C8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_7:
    // 0x802388CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802388D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802388D4: jal         0x80238FC4
    // 0x802388D8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_8;
    // 0x802388D8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_8:
    // 0x802388DC: j           L_80238F7C
    // 0x802388E0: nop

        goto L_80238F7C;
    // 0x802388E0: nop

L_802388E4:
    // 0x802388E4: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802388E8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802388EC: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x802388F0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238F88;
    }
    // 0x802388F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802388F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802388F8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802388FC: j           L_80238F7C
    // 0x80238900: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80238F7C;
    // 0x80238900: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_80238904:
    // 0x80238904: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238908: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023890C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238910: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x80238914: beq         $a1, $v0, L_80238964
    if (ctx->r5 == ctx->r2) {
        // 0x80238918: addiu       $v0, $zero, 0x1B3
        ctx->r2 = ADD32(0, 0X1B3);
            goto L_80238964;
    }
    // 0x80238918: addiu       $v0, $zero, 0x1B3
    ctx->r2 = ADD32(0, 0X1B3);
    // 0x8023891C: bne         $a1, $v0, L_80238F88
    if (ctx->r5 != ctx->r2) {
        // 0x80238920: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238924: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238928: jal         0x80238F9C
    // 0x8023892C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_9;
    // 0x8023892C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80238930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238938: jal         0x80238FC4
    // 0x8023893C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_10;
    // 0x8023893C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_10:
    // 0x80238940: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238944: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238948: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8023894C: j           L_80238F7C
    // 0x80238950: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80238F7C;
    // 0x80238950: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_80238954:
    // 0x80238954: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238958: addiu       $v0, $zero, 0x1EA
    ctx->r2 = ADD32(0, 0X1EA);
    // 0x8023895C: bne         $a1, $v0, L_8023897C
    if (ctx->r5 != ctx->r2) {
        // 0x80238960: addiu       $v0, $zero, 0x226
        ctx->r2 = ADD32(0, 0X226);
            goto L_8023897C;
    }
    // 0x80238960: addiu       $v0, $zero, 0x226
    ctx->r2 = ADD32(0, 0X226);
L_80238964:
    // 0x80238964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238968:
    // 0x80238968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023896C: jal         0x80238FC4
    // 0x80238970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_11;
    // 0x80238970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80238974: j           L_80238F88
    // 0x80238978: nop

        goto L_80238F88;
    // 0x80238978: nop

L_8023897C:
    // 0x8023897C: bne         $a1, $v0, L_8023899C
    if (ctx->r5 != ctx->r2) {
        // 0x80238980: addiu       $v0, $zero, 0x27B
        ctx->r2 = ADD32(0, 0X27B);
            goto L_8023899C;
    }
    // 0x80238980: addiu       $v0, $zero, 0x27B
    ctx->r2 = ADD32(0, 0X27B);
    // 0x80238984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238988: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023898C: jal         0x80238F9C
    // 0x80238990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_12;
    // 0x80238990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80238994: j           L_80238F88
    // 0x80238998: nop

        goto L_80238F88;
    // 0x80238998: nop

L_8023899C:
    // 0x8023899C: bne         $a1, $v0, L_80238F88
    if (ctx->r5 != ctx->r2) {
        // 0x802389A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x802389A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802389A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802389A8: jal         0x80238F9C
    // 0x802389AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_13;
    // 0x802389AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x802389B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802389B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802389B8: jal         0x80238FC4
    // 0x802389BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_14;
    // 0x802389BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_14:
    // 0x802389C0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802389C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802389C8: j           L_80238F7C
    // 0x802389CC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80238F7C;
    // 0x802389CC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_802389D0:
    // 0x802389D0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802389D4: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x802389D8: bne         $v0, $zero, L_80238F88
    if (ctx->r2 != 0) {
        // 0x802389DC: nop
    
            goto L_80238F88;
    }
    // 0x802389DC: nop

    // 0x802389E0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802389E4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802389E8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802389EC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802389F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802389F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802389F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802389FC: beq         $v1, $v0, L_80238F7C
    if (ctx->r3 == ctx->r2) {
        // 0x80238A00: nop
    
            goto L_80238F7C;
    }
    // 0x80238A00: nop

    // 0x80238A04: j           L_80238F88
    // 0x80238A08: nop

        goto L_80238F88;
    // 0x80238A08: nop

L_80238A0C:
    // 0x80238A0C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80238A10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238A14: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x80238A18: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80238A1C: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80238A20: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80238A24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80238A28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80238A2C: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80238A30: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80238A34: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238A38: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80238A3C: j           L_80238F88
    // 0x80238A40: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
        goto L_80238F88;
    // 0x80238A40: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
L_80238A44:
    // 0x80238A44: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80238A48: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80238A4C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80238A50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238A54: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80238A58: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238A5C: addiu       $v0, $zero, 0x2CE
    ctx->r2 = ADD32(0, 0X2CE);
    // 0x80238A60: beq         $v1, $v0, L_80238F7C
    if (ctx->r3 == ctx->r2) {
        // 0x80238A64: nop
    
            goto L_80238F7C;
    }
    // 0x80238A64: nop

    // 0x80238A68: j           L_80238F88
    // 0x80238A6C: nop

        goto L_80238F88;
    // 0x80238A6C: nop

L_80238A70:
    // 0x80238A70: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238A74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238A78: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238A7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238F88;
    }
    // 0x80238A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238A80: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238A84: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238A88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238A8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238A90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80238A94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238A98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238A9C: jal         0x80238F9C
    // 0x80238AA0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_15;
    // 0x80238AA0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_15:
    // 0x80238AA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238AA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238AAC: jal         0x80238FC4
    // 0x80238AB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_16;
    // 0x80238AB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_16:
    // 0x80238AB4: j           L_80238F7C
    // 0x80238AB8: nop

        goto L_80238F7C;
    // 0x80238AB8: nop

L_80238ABC:
    // 0x80238ABC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238AC0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238AC4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238AC8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238ACC: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238AD0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80238F88;
    }
    // 0x80238AD0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238AD4: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238AD8: bne         $a1, $v0, L_80238AF8
    if (ctx->r5 != ctx->r2) {
        // 0x80238ADC: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80238AF8;
    }
    // 0x80238ADC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80238AE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238AE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238AE8: jal         0x80238FC4
    // 0x80238AEC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_17;
    // 0x80238AEC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_17:
    // 0x80238AF0: j           L_80238F88
    // 0x80238AF4: nop

        goto L_80238F88;
    // 0x80238AF4: nop

L_80238AF8:
    // 0x80238AF8: beq         $a1, $v0, L_80238F7C
    if (ctx->r5 == ctx->r2) {
        // 0x80238AFC: nop
    
            goto L_80238F7C;
    }
    // 0x80238AFC: nop

    // 0x80238B00: j           L_80238F88
    // 0x80238B04: nop

        goto L_80238F88;
    // 0x80238B04: nop

L_80238B08:
    // 0x80238B08: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238B0C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238B10: bne         $v1, $v0, L_80238B44
    if (ctx->r3 != ctx->r2) {
        // 0x80238B14: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238B44;
    }
    // 0x80238B14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238B18: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238B1C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80238B20: bne         $v1, $v0, L_80238B40
    if (ctx->r3 != ctx->r2) {
        // 0x80238B24: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238B40;
    }
    // 0x80238B24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238B30: jal         0x80238FC4
    // 0x80238B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_18;
    // 0x80238B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_18:
    // 0x80238B38: j           L_80238F88
    // 0x80238B3C: nop

        goto L_80238F88;
    // 0x80238B3C: nop

L_80238B40:
    // 0x80238B40: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
L_80238B44:
    // 0x80238B44: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238B48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238F88;
    }
    // 0x80238B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238B4C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238B50: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238B54: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238B5C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80238B60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80238B64: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238B68: jal         0x80238F9C
    // 0x80238B6C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_19;
    // 0x80238B6C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_19:
    // 0x80238B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238B78: jal         0x80238FC4
    // 0x80238B7C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_20;
    // 0x80238B7C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_20:
    // 0x80238B80: j           L_80238F7C
    // 0x80238B84: nop

        goto L_80238F7C;
    // 0x80238B84: nop

L_80238B88:
    // 0x80238B88: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238B8C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238B90: bne         $v1, $v0, L_80238BDC
    if (ctx->r3 != ctx->r2) {
        // 0x80238B94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238BDC;
    }
    // 0x80238B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B98: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238BA0: bne         $v1, $v0, L_80238BE0
    if (ctx->r3 != ctx->r2) {
        // 0x80238BA4: addiu       $a1, $zero, 0xA4
        ctx->r5 = ADD32(0, 0XA4);
            goto L_80238BE0;
    }
    // 0x80238BA4: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    // 0x80238BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238BAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238BB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80238BB4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238BB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238BBC: jal         0x80238F9C
    // 0x80238BC0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_21;
    // 0x80238BC0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_21:
    // 0x80238BC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238BC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238BCC: jal         0x80238FC4
    // 0x80238BD0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_22;
    // 0x80238BD0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_22:
    // 0x80238BD4: j           L_80238F7C
    // 0x80238BD8: nop

        goto L_80238F7C;
    // 0x80238BD8: nop

L_80238BDC:
    // 0x80238BDC: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
L_80238BE0:
    // 0x80238BE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238BE4: jal         0x8004DA90
    // 0x80238BE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_23;
    // 0x80238BE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x80238BEC: j           L_80238F88
    // 0x80238BF0: nop

        goto L_80238F88;
    // 0x80238BF0: nop

L_80238BF4:
    // 0x80238BF4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238BF8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238BFC: bne         $v1, $v0, L_80238CA4
    if (ctx->r3 != ctx->r2) {
        // 0x80238C00: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80238CA4;
    }
    // 0x80238C00: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80238C04: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238C08: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80238C0C: beq         $a1, $v0, L_80238C50
    if (ctx->r5 == ctx->r2) {
        // 0x80238C10: slti        $v0, $a1, 0x42
        ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
            goto L_80238C50;
    }
    // 0x80238C10: slti        $v0, $a1, 0x42
    ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
    // 0x80238C14: beq         $v0, $zero, L_80238C34
    if (ctx->r2 == 0) {
        // 0x80238C18: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80238C34;
    }
    // 0x80238C18: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80238C1C: beq         $a1, $v0, L_80238C50
    if (ctx->r5 == ctx->r2) {
        // 0x80238C20: addiu       $v0, $zero, 0x37
        ctx->r2 = ADD32(0, 0X37);
            goto L_80238C50;
    }
    // 0x80238C20: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80238C24: beq         $a1, $v0, L_80238C6C
    if (ctx->r5 == ctx->r2) {
        // 0x80238C28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238C6C;
    }
    // 0x80238C28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C2C: j           L_80238F88
    // 0x80238C30: nop

        goto L_80238F88;
    // 0x80238C30: nop

L_80238C34:
    // 0x80238C34: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80238C38: beq         $a1, $v0, L_80238C68
    if (ctx->r5 == ctx->r2) {
        // 0x80238C3C: addiu       $v0, $zero, 0x11D
        ctx->r2 = ADD32(0, 0X11D);
            goto L_80238C68;
    }
    // 0x80238C3C: addiu       $v0, $zero, 0x11D
    ctx->r2 = ADD32(0, 0X11D);
    // 0x80238C40: beq         $a1, $v0, L_80238C80
    if (ctx->r5 == ctx->r2) {
        // 0x80238C44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238C80;
    }
    // 0x80238C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C48: j           L_80238F88
    // 0x80238C4C: nop

        goto L_80238F88;
    // 0x80238C4C: nop

L_80238C50:
    // 0x80238C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C54: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238C58: jal         0x80238FC4
    // 0x80238C5C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_24;
    // 0x80238C5C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_24:
    // 0x80238C60: j           L_80238F88
    // 0x80238C64: nop

        goto L_80238F88;
    // 0x80238C64: nop

L_80238C68:
    // 0x80238C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238C6C:
    // 0x80238C6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238C70: jal         0x80238FC4
    // 0x80238C74: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_25;
    // 0x80238C74: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_25:
    // 0x80238C78: j           L_80238F88
    // 0x80238C7C: nop

        goto L_80238F88;
    // 0x80238C7C: nop

L_80238C80:
    // 0x80238C80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238C84: jal         0x80238F9C
    // 0x80238C88: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_26;
    // 0x80238C88: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_26:
    // 0x80238C8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238C94: jal         0x80238FC4
    // 0x80238C98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_27;
    // 0x80238C98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_27:
    // 0x80238C9C: j           L_80238F88
    // 0x80238CA0: nop

        goto L_80238F88;
    // 0x80238CA0: nop

L_80238CA4:
    // 0x80238CA4: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238CA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238F88;
    }
    // 0x80238CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238CAC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238CB0: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238CB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238CB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238CBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80238CC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238CC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238CC8: jal         0x80238F9C
    // 0x80238CCC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_28;
    // 0x80238CCC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_28:
    // 0x80238CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238CD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238CD8: jal         0x80238FC4
    // 0x80238CDC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_29;
    // 0x80238CDC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_29:
    // 0x80238CE0: j           L_80238F7C
    // 0x80238CE4: nop

        goto L_80238F7C;
    // 0x80238CE4: nop

L_80238CE8:
    // 0x80238CE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238CEC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238CF0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238CF4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238CF8: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238CFC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80238F88;
    }
    // 0x80238CFC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80238D00: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238D04: beq         $v1, $v0, L_80238F7C
    if (ctx->r3 == ctx->r2) {
        // 0x80238D08: nop
    
            goto L_80238F7C;
    }
    // 0x80238D08: nop

    // 0x80238D0C: j           L_80238F88
    // 0x80238D10: nop

        goto L_80238F88;
    // 0x80238D10: nop

L_80238D14:
    // 0x80238D14: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238D18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238D1C: bne         $v1, $v0, L_80238D60
    if (ctx->r3 != ctx->r2) {
        // 0x80238D20: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80238D60;
    }
    // 0x80238D20: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238D24: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238D28: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80238D2C: bne         $v1, $v0, L_80238D5C
    if (ctx->r3 != ctx->r2) {
        // 0x80238D30: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80238D5C;
    }
    // 0x80238D30: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238D3C: jal         0x80238F9C
    // 0x80238D40: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_30;
    // 0x80238D40: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_30:
    // 0x80238D44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238D4C: jal         0x80238FC4
    // 0x80238D50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_31;
    // 0x80238D50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_31:
    // 0x80238D54: j           L_80238F88
    // 0x80238D58: nop

        goto L_80238F88;
    // 0x80238D58: nop

L_80238D5C:
    // 0x80238D5C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
L_80238D60:
    // 0x80238D60: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238D64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238F88;
    }
    // 0x80238D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238D68: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238D6C: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238D70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238D78: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80238D7C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80238D80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238D84: jal         0x80238F9C
    // 0x80238D88: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_32;
    // 0x80238D88: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_32:
    // 0x80238D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238D94: jal         0x80238FC4
    // 0x80238D98: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_33;
    // 0x80238D98: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_33:
    // 0x80238D9C: j           L_80238F7C
    // 0x80238DA0: nop

        goto L_80238F7C;
    // 0x80238DA0: nop

L_80238DA4:
    // 0x80238DA4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238DA8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238DAC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238DB0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238DB4: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238DB8: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80238F88;
    }
    // 0x80238DB8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80238DBC: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238DC0: beq         $a1, $v0, L_80238E94
    if (ctx->r5 == ctx->r2) {
        // 0x80238DC4: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_80238E94;
    }
    // 0x80238DC4: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x80238DC8: beq         $v0, $zero, L_80238DE8
    if (ctx->r2 == 0) {
        // 0x80238DCC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238DE8;
    }
    // 0x80238DCC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238DD0: beq         $a1, $v0, L_80238EAC
    if (ctx->r5 == ctx->r2) {
        // 0x80238DD4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80238EAC;
    }
    // 0x80238DD4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80238DD8: beq         $a1, $v0, L_80238E20
    if (ctx->r5 == ctx->r2) {
        // 0x80238DDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238E20;
    }
    // 0x80238DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238DE0: j           L_80238F88
    // 0x80238DE4: nop

        goto L_80238F88;
    // 0x80238DE4: nop

L_80238DE8:
    // 0x80238DE8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80238DEC: beq         $a1, $v0, L_80238E94
    if (ctx->r5 == ctx->r2) {
        // 0x80238DF0: slti        $v0, $a1, 0x81
        ctx->r2 = SIGNED(ctx->r5) < 0X81 ? 1 : 0;
            goto L_80238E94;
    }
    // 0x80238DF0: slti        $v0, $a1, 0x81
    ctx->r2 = SIGNED(ctx->r5) < 0X81 ? 1 : 0;
    // 0x80238DF4: beq         $v0, $zero, L_80238E0C
    if (ctx->r2 == 0) {
        // 0x80238DF8: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80238E0C;
    }
    // 0x80238DF8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80238DFC: beq         $a1, $v0, L_80238E20
    if (ctx->r5 == ctx->r2) {
        // 0x80238E00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238E20;
    }
    // 0x80238E00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E04: j           L_80238F88
    // 0x80238E08: nop

        goto L_80238F88;
    // 0x80238E08: nop

L_80238E0C:
    // 0x80238E0C: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x80238E10: beq         $a1, $v0, L_80238E34
    if (ctx->r5 == ctx->r2) {
        // 0x80238E14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238E34;
    }
    // 0x80238E14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E18: j           L_80238F88
    // 0x80238E1C: nop

        goto L_80238F88;
    // 0x80238E1C: nop

L_80238E20:
    // 0x80238E20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238E24: jal         0x80238FC4
    // 0x80238E28: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_34;
    // 0x80238E28: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_34:
    // 0x80238E2C: j           L_80238F88
    // 0x80238E30: nop

        goto L_80238F88;
    // 0x80238E30: nop

L_80238E34:
    // 0x80238E34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238E38: jal         0x80238FC4
    // 0x80238E3C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_35;
    // 0x80238E3C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_35:
    // 0x80238E40: j           L_80238F7C
    // 0x80238E44: nop

        goto L_80238F7C;
    // 0x80238E44: nop

L_80238E48:
    // 0x80238E48: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238E4C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238E50: bne         $v1, $v0, L_80238EC4
    if (ctx->r3 != ctx->r2) {
        // 0x80238E54: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80238EC4;
    }
    // 0x80238E54: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80238E58: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238E5C: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x80238E60: beq         $a1, $v0, L_80238EAC
    if (ctx->r5 == ctx->r2) {
        // 0x80238E64: slti        $v0, $a1, 0xFB
        ctx->r2 = SIGNED(ctx->r5) < 0XFB ? 1 : 0;
            goto L_80238EAC;
    }
    // 0x80238E64: slti        $v0, $a1, 0xFB
    ctx->r2 = SIGNED(ctx->r5) < 0XFB ? 1 : 0;
    // 0x80238E68: beq         $v0, $zero, L_80238E80
    if (ctx->r2 == 0) {
        // 0x80238E6C: addiu       $v0, $zero, 0xF3
        ctx->r2 = ADD32(0, 0XF3);
            goto L_80238E80;
    }
    // 0x80238E6C: addiu       $v0, $zero, 0xF3
    ctx->r2 = ADD32(0, 0XF3);
    // 0x80238E70: beq         $a1, $v0, L_80238E98
    if (ctx->r5 == ctx->r2) {
        // 0x80238E74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238E98;
    }
    // 0x80238E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E78: j           L_80238F88
    // 0x80238E7C: nop

        goto L_80238F88;
    // 0x80238E7C: nop

L_80238E80:
    // 0x80238E80: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80238E84: beq         $a1, $v0, L_80238EB0
    if (ctx->r5 == ctx->r2) {
        // 0x80238E88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238EB0;
    }
    // 0x80238E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E8C: j           L_80238F88
    // 0x80238E90: nop

        goto L_80238F88;
    // 0x80238E90: nop

L_80238E94:
    // 0x80238E94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238E98:
    // 0x80238E98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238E9C: jal         0x80238FC4
    // 0x80238EA0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_36;
    // 0x80238EA0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_36:
    // 0x80238EA4: j           L_80238F88
    // 0x80238EA8: nop

        goto L_80238F88;
    // 0x80238EA8: nop

L_80238EAC:
    // 0x80238EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238EB0:
    // 0x80238EB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238EB4: jal         0x80238F9C
    // 0x80238EB8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_37;
    // 0x80238EB8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_37:
    // 0x80238EBC: j           L_80238F88
    // 0x80238EC0: nop

        goto L_80238F88;
    // 0x80238EC0: nop

L_80238EC4:
    // 0x80238EC4: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238EC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238F88;
    }
    // 0x80238EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238ECC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238ED0: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238ED4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238ED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238ED8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238EDC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80238EE0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80238EE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238EE8: jal         0x80238F9C
    // 0x80238EEC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_38;
    // 0x80238EEC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_38:
    // 0x80238EF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238EF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238EF8: jal         0x80238FC4
    // 0x80238EFC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_39;
    // 0x80238EFC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_39:
    // 0x80238F00: j           L_80238F7C
    // 0x80238F04: nop

        goto L_80238F7C;
    // 0x80238F04: nop

L_80238F08:
    // 0x80238F08: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238F0C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238F10: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238F14: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80238F18: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238F1C: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80238F88;
    }
    // 0x80238F1C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80238F20: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80238F24: bne         $a1, $v0, L_80238F44
    if (ctx->r5 != ctx->r2) {
        // 0x80238F28: addiu       $v0, $zero, 0xB9
        ctx->r2 = ADD32(0, 0XB9);
            goto L_80238F44;
    }
    // 0x80238F28: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
    // 0x80238F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238F30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238F34: jal         0x80238F9C
    // 0x80238F38: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_40;
    // 0x80238F38: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_40:
    // 0x80238F3C: j           L_80238F88
    // 0x80238F40: nop

        goto L_80238F88;
    // 0x80238F40: nop

L_80238F44:
    // 0x80238F44: beq         $a1, $v0, L_80238F7C
    if (ctx->r5 == ctx->r2) {
        // 0x80238F48: nop
    
            goto L_80238F7C;
    }
    // 0x80238F48: nop

    // 0x80238F4C: j           L_80238F88
    // 0x80238F50: nop

        goto L_80238F88;
    // 0x80238F50: nop

L_80238F54:
    // 0x80238F54: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80238F58: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80238F5C: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238F60: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_80238F88;
    }
    // 0x80238F60: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80238F64: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80238F68: bne         $v1, $v0, L_80238F88
    if (ctx->r3 != ctx->r2) {
        // 0x80238F6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F88;
    }
    // 0x80238F6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238F70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238F74: jal         0x80238F9C
    // 0x80238F78: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80238F9C_ovl28(rdram, ctx);
        goto after_41;
    // 0x80238F78: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_41:
L_80238F7C:
    // 0x80238F7C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238F80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238F84: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238F88:
    // 0x80238F88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238F8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238F90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238F94: jr          $ra
    // 0x80238F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023E66C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E66C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023E670: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023E674: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E678: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8023E67C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8023E680: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E684: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8023E688: beq         $v0, $zero, L_8023EB98
    if (ctx->r2 == 0) {
        // 0x8023E68C: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023EB98;
    }
    // 0x8023E68C: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023E690: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023E694: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023E698: addu        $at, $at, $v0
    gpr jr_addend_8023E6A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023E69C: lw          $v0, 0x6060($at)
    ctx->r2 = ADD32(ctx->r1, 0X6060);
    // 0x8023E6A0: jr          $v0
    // 0x8023E6A4: nop

    switch (jr_addend_8023E6A0 >> 2) {
        case 0: goto L_8023E6A8; break;
        case 1: goto L_8023E730; break;
        case 2: goto L_8023E7E8; break;
        case 3: goto L_8023E88C; break;
        case 4: goto L_8023E950; break;
        case 5: goto L_8023E99C; break;
        case 6: goto L_8023EA40; break;
        case 7: goto L_8023EB18; break;
        case 8: goto L_8023EB68; break;
        default: switch_error(__func__, 0x8023E6A0, 0x80256060);
    }
    // 0x8023E6A4: nop

L_8023E6A8:
    // 0x8023E6A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E6AC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023E6B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E6B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E6B8: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E6BC: addiu       $v0, $zero, -0x180
    ctx->r2 = ADD32(0, -0X180);
    // 0x8023E6C0: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    // 0x8023E6C4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023E6C8: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8023E6CC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8023E6D0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023E6D4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8023E6D8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023E6DC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023E6E0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023E6E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E6E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E6EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023E6F0: lbu         $v0, 0xD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XD);
    // 0x8023E6F4: sb          $zero, 0x53($s1)
    MEM_B(0X53, ctx->r17) = 0;
    // 0x8023E6F8: sb          $zero, 0x52($s1)
    MEM_B(0X52, ctx->r17) = 0;
    // 0x8023E6FC: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8023E700: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8023E704: lh          $v0, 0x7A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7A);
    // 0x8023E708: bgtz        $v0, L_8023EB98
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023E70C: addiu       $a0, $zero, 0x1E2
        ctx->r4 = ADD32(0, 0X1E2);
            goto L_8023EB98;
    }
    // 0x8023E70C: addiu       $a0, $zero, 0x1E2
    ctx->r4 = ADD32(0, 0X1E2);
    // 0x8023E710: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023E714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E718: sh          $v0, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r2;
    // 0x8023E71C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023E720: jal         0x8002A33C
    // 0x8023E724: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023E724: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023E728: j           L_8023EB98
    // 0x8023E72C: nop

        goto L_8023EB98;
    // 0x8023E72C: nop

L_8023E730:
    // 0x8023E730: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023E734: lhu         $a2, 0x4D5A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4D5A);
    // 0x8023E738: lhu         $v0, 0x50($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X50);
    // 0x8023E73C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023E740: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023E744: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023E748: sh          $a2, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r6;
    // 0x8023E74C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023E750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E754: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023E758: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023E75C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023E760: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023E764: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023E768: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023E76C: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8023E770: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023E774: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023E778: jal         0x8004DA90
    // 0x8023E77C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023E77C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_1:
    // 0x8023E780: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023E784: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x8023E788: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023E78C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023E790: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8023E794: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8023E798: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023E79C: bgez        $v1, L_8023EB98
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023E7A0: sh          $v0, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r2;
            goto L_8023EB98;
    }
    // 0x8023E7A0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023E7A4: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    // 0x8023E7A8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E7AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023E7B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023E7B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023E7B8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8023E7BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023E7C0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023E7C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023E7C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023E7CC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8023E7D0: sb          $zero, 0x72($s1)
    MEM_B(0X72, ctx->r17) = 0;
    // 0x8023E7D4: sb          $zero, 0x73($s1)
    MEM_B(0X73, ctx->r17) = 0;
    // 0x8023E7D8: jal         0x8002A33C
    // 0x8023E7DC: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023E7DC: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    after_2:
    // 0x8023E7E0: j           L_8023EB98
    // 0x8023E7E4: nop

        goto L_8023EB98;
    // 0x8023E7E4: nop

L_8023E7E8:
    // 0x8023E7E8: lh          $v0, 0x66($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X66);
    // 0x8023E7EC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E7F0: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023E7F4: beq         $v0, $zero, L_8023E800
    if (ctx->r2 == 0) {
        // 0x8023E7F8: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_8023E800;
    }
    // 0x8023E7F8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023E7FC: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_8023E800:
    // 0x8023E800: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023E804: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8023E808: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023E80C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023E810: jal         0x8004F820
    // 0x8023E814: addiu       $a0, $s0, 0x1A8
    ctx->r4 = ADD32(ctx->r16, 0X1A8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8023E814: addiu       $a0, $s0, 0x1A8
    ctx->r4 = ADD32(ctx->r16, 0X1A8);
    after_3:
    // 0x8023E818: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023E81C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E820: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023E824: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023E828: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8023E82C: bne         $v0, $zero, L_8023E880
    if (ctx->r2 != 0) {
        // 0x8023E830: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023E880;
    }
    // 0x8023E830: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E838: jal         0x8023EEC8
    // 0x8023E83C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023E83C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x8023E840: lbu         $v0, 0x72($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X72);
    // 0x8023E844: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x8023E848: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E84C: sb          $v0, 0x72($s1)
    MEM_B(0X72, ctx->r17) = ctx->r2;
    // 0x8023E850: bne         $v1, $zero, L_8023EA34
    if (ctx->r3 != 0) {
        // 0x8023E854: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8023EA34;
    }
    // 0x8023E854: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023E858: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E85C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E860: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E864: lbu         $v0, 0x72($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X72);
    // 0x8023E868: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023E86C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8023E870: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x8023E874: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E878: j           L_8023EB98
    // 0x8023E87C: sb          $v0, 0x72($s1)
    MEM_B(0X72, ctx->r17) = ctx->r2;
        goto L_8023EB98;
    // 0x8023E87C: sb          $v0, 0x72($s1)
    MEM_B(0X72, ctx->r17) = ctx->r2;
L_8023E880:
    // 0x8023E880: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023E884: j           L_8023EB98
    // 0x8023E888: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
        goto L_8023EB98;
    // 0x8023E888: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8023E88C:
    // 0x8023E88C: lh          $v0, 0x66($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X66);
    // 0x8023E890: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E894: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023E898: beq         $v0, $zero, L_8023E8A4
    if (ctx->r2 == 0) {
        // 0x8023E89C: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_8023E8A4;
    }
    // 0x8023E89C: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023E8A0: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_8023E8A4:
    // 0x8023E8A4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023E8A8: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8023E8AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023E8B0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023E8B4: jal         0x8004F820
    // 0x8023E8B8: addiu       $a0, $s0, 0x1A8
    ctx->r4 = ADD32(ctx->r16, 0X1A8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8023E8B8: addiu       $a0, $s0, 0x1A8
    ctx->r4 = ADD32(ctx->r16, 0X1A8);
    after_5:
    // 0x8023E8BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023E8C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E8C4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023E8C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023E8CC: lb          $v0, 0x72($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X72);
    // 0x8023E8D0: bgez        $v0, L_8023E8EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E8D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023E8EC;
    }
    // 0x8023E8D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E8D8: jal         0x8023EEC8
    // 0x8023E8DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_6;
    // 0x8023E8DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_6:
    // 0x8023E8E0: lbu         $v0, 0x72($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X72);
    // 0x8023E8E4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8023E8E8: sb          $v0, 0x72($s1)
    MEM_B(0X72, ctx->r17) = ctx->r2;
L_8023E8EC:
    // 0x8023E8EC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023E8F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023E8F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023E8F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E8FC: bgez        $v0, L_8023EB98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E900: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023EB98;
    }
    // 0x8023E900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E904: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E908: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023E90C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E910: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023E914: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E918: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8023E91C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E920: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023E924: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x8023E928: jal         0x8023EE10
    // 0x8023E92C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8023EE10_ovl28(rdram, ctx);
        goto after_7;
    // 0x8023E92C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_7:
    // 0x8023E930: beq         $v0, $zero, L_8023E944
    if (ctx->r2 == 0) {
        // 0x8023E934: nop
    
            goto L_8023E944;
    }
    // 0x8023E934: nop

    // 0x8023E938: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E93C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023E940: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023E944:
    // 0x8023E944: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E948: j           L_8023EB00
    // 0x8023E94C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
        goto L_8023EB00;
    // 0x8023E94C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
L_8023E950:
    // 0x8023E950: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023E954: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E958: bne         $v1, $v0, L_8023EB98
    if (ctx->r3 != ctx->r2) {
        // 0x8023E95C: addiu       $a0, $zero, 0x1D9
        ctx->r4 = ADD32(0, 0X1D9);
            goto L_8023EB98;
    }
    // 0x8023E95C: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    // 0x8023E960: jal         0x8002A33C
    // 0x8023E964: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8023E964: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x8023E968: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E96C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E970: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E974: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E978: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023E97C: beq         $v0, $zero, L_8023E98C
    if (ctx->r2 == 0) {
        // 0x8023E980: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023E98C;
    }
    // 0x8023E980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E984: lw          $v1, 0x68($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X68);
    // 0x8023E988: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023E98C:
    // 0x8023E98C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8023E990: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023E994: j           L_8023EB98
    // 0x8023E998: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
        goto L_8023EB98;
    // 0x8023E998: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
L_8023E99C:
    // 0x8023E99C: lh          $v0, 0x66($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X66);
    // 0x8023E9A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023E9A4: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023E9A8: beq         $v0, $zero, L_8023E9B8
    if (ctx->r2 == 0) {
        // 0x8023E9AC: nop
    
            goto L_8023E9B8;
    }
    // 0x8023E9AC: nop

    // 0x8023E9B0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023E9B4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_8023E9B8:
    // 0x8023E9B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023E9BC: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8023E9C0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023E9C4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023E9C8: jal         0x8004F820
    // 0x8023E9CC: addiu       $a0, $s0, 0x1D0
    ctx->r4 = ADD32(ctx->r16, 0X1D0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x8023E9CC: addiu       $a0, $s0, 0x1D0
    ctx->r4 = ADD32(ctx->r16, 0X1D0);
    after_9:
    // 0x8023E9D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023E9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E9D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023E9DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E9E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023E9E4: jal         0x8023EEC8
    // 0x8023E9E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_10;
    // 0x8023E9E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_10:
    // 0x8023E9EC: lbu         $v0, 0x73($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X73);
    // 0x8023E9F0: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x8023E9F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E9F8: sb          $v0, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r2;
    // 0x8023E9FC: bne         $v1, $zero, L_8023EA34
    if (ctx->r3 != 0) {
        // 0x8023EA00: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8023EA34;
    }
    // 0x8023EA00: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023EA04: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023EA08: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8023EA0C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023EA10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023EA14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023EA18: lbu         $v0, 0x73($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X73);
    // 0x8023EA1C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023EA20: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8023EA24: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x8023EA28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EA2C: j           L_8023EB98
    // 0x8023EA30: sb          $v0, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r2;
        goto L_8023EB98;
    // 0x8023EA30: sb          $v0, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r2;
L_8023EA34:
    // 0x8023EA34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023EA38: j           L_8023EB98
    // 0x8023EA3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023EB98;
    // 0x8023EA3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023EA40:
    // 0x8023EA40: lh          $v0, 0x66($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X66);
    // 0x8023EA44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023EA48: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023EA4C: beq         $v0, $zero, L_8023EA58
    if (ctx->r2 == 0) {
        // 0x8023EA50: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_8023EA58;
    }
    // 0x8023EA50: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023EA54: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_8023EA58:
    // 0x8023EA58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023EA5C: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8023EA60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023EA64: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023EA68: jal         0x8004F820
    // 0x8023EA6C: addiu       $a0, $s0, 0x1D0
    ctx->r4 = ADD32(ctx->r16, 0X1D0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_11;
    // 0x8023EA6C: addiu       $a0, $s0, 0x1D0
    ctx->r4 = ADD32(ctx->r16, 0X1D0);
    after_11:
    // 0x8023EA70: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023EA74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023EA78: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023EA7C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023EA80: lb          $v0, 0x73($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X73);
    // 0x8023EA84: bgez        $v0, L_8023EAA0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023EA88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023EAA0;
    }
    // 0x8023EA88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023EA8C: jal         0x8023EEC8
    // 0x8023EA90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_12;
    // 0x8023EA90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x8023EA94: lbu         $v0, 0x73($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X73);
    // 0x8023EA98: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8023EA9C: sb          $v0, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r2;
L_8023EAA0:
    // 0x8023EAA0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023EAA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023EAA8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023EAAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EAB0: bgez        $v0, L_8023EB98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023EAB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023EB98;
    }
    // 0x8023EAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023EAB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023EABC: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023EAC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023EAC4: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8023EAC8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023EACC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8023EAD0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023EAD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023EAD8: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8023EADC: jal         0x8023EE10
    // 0x8023EAE0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8023EE10_ovl28(rdram, ctx);
        goto after_13;
    // 0x8023EAE0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_13:
    // 0x8023EAE4: beq         $v0, $zero, L_8023EAF8
    if (ctx->r2 == 0) {
        // 0x8023EAE8: nop
    
            goto L_8023EAF8;
    }
    // 0x8023EAE8: nop

    // 0x8023EAEC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023EAF0: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x8023EAF4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023EAF8:
    // 0x8023EAF8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023EAFC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
L_8023EB00:
    // 0x8023EB00: beq         $v0, $zero, L_8023EB98
    if (ctx->r2 == 0) {
        // 0x8023EB04: addiu       $a0, $zero, 0x1D8
        ctx->r4 = ADD32(0, 0X1D8);
            goto L_8023EB98;
    }
    // 0x8023EB04: addiu       $a0, $zero, 0x1D8
    ctx->r4 = ADD32(0, 0X1D8);
    // 0x8023EB08: jal         0x8002A33C
    // 0x8023EB0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x8023EB0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_14:
    // 0x8023EB10: j           L_8023EB98
    // 0x8023EB14: nop

        goto L_8023EB98;
    // 0x8023EB14: nop

L_8023EB18:
    // 0x8023EB18: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023EB1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023EB20: bne         $v1, $v0, L_8023EB98
    if (ctx->r3 != ctx->r2) {
        // 0x8023EB24: nop
    
            goto L_8023EB98;
    }
    // 0x8023EB24: nop

    // 0x8023EB28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023EB2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023EB30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023EB34: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023EB38: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8023EB3C: beq         $v0, $zero, L_8023EB4C
    if (ctx->r2 == 0) {
        // 0x8023EB40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023EB4C;
    }
    // 0x8023EB40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EB44: lw          $v1, 0x6C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X6C);
    // 0x8023EB48: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023EB4C:
    // 0x8023EB4C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023EB50: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023EB54: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8023EB58: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023EB5C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023EB60: j           L_8023EB98
    // 0x8023EB64: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023EB98;
    // 0x8023EB64: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023EB68:
    // 0x8023EB68: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023EB6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023EB70: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023EB74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023EB78: bgez        $v0, L_8023EB98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023EB7C: nop
    
            goto L_8023EB98;
    }
    // 0x8023EB7C: nop

    // 0x8023EB80: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023EB84: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x8023EB88: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023EB8C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023EB90: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023EB94: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023EB98:
    // 0x8023EB98: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8023EB9C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8023EBA0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023EBA4: jr          $ra
    // 0x8023EBA8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023EBA8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80242160_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242164: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242168: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024216C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242170: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242178: jal         0x8009A3B4
    // 0x8024217C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024217C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80242180: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80242184: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80242188: jal         0x8009A3B4
    // 0x8024218C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8024218C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80242190: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80242194: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80242198: jal         0x8009A3B4
    // 0x8024219C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8024219C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802421A0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802421A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802421A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802421AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802421B0: lw          $v0, 0x4B38($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4B38);
    // 0x802421B4: jalr        $v0
    // 0x802421B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802421B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802421BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802421C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802421C4: jr          $ra
    // 0x802421C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802421C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232138_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232138: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023213C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232140: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232148: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023214C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232150: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80232154: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80232158: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023215C: beq         $v0, $zero, L_80232188
    if (ctx->r2 == 0) {
        // 0x80232160: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80232188;
    }
    // 0x80232160: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80232164: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80232168: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023216C: beq         $v0, $zero, L_80232188
    if (ctx->r2 == 0) {
        // 0x80232170: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80232188;
    }
    // 0x80232170: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80232174: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80232178: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x8023217C: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x80232180: jal         0x8003491C
    // 0x80232184: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_0;
    // 0x80232184: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_0:
L_80232188:
    // 0x80232188: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023218C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232190: bne         $v1, $v0, L_8023219C
    if (ctx->r3 != ctx->r2) {
        // 0x80232194: sltiu       $a0, $v1, 0x1
        ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
            goto L_8023219C;
    }
    // 0x80232194: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80232198: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023219C:
    // 0x8023219C: beq         $a0, $zero, L_802321AC
    if (ctx->r4 == 0) {
        // 0x802321A0: addiu       $a0, $zero, 0x196
        ctx->r4 = ADD32(0, 0X196);
            goto L_802321AC;
    }
    // 0x802321A0: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    // 0x802321A4: jal         0x8002A33C
    // 0x802321A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802321A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_802321AC:
    // 0x802321AC: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x802321B0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802321B4: bnel        $v0, $zero, L_802321BC
    if (ctx->r2 != 0) {
        // 0x802321B8: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_802321BC;
    }
    goto skip_0;
    // 0x802321B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
L_802321BC:
    // 0x802321BC: lhu         $v0, 0x38($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X38);
    // 0x802321C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802321C4: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x802321C8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802321CC: beql        $v0, $zero, L_802321D4
    if (ctx->r2 == 0) {
        // 0x802321D0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_802321D4;
    }
    goto skip_1;
    // 0x802321D0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
L_802321D4:
    // 0x802321D4: beq         $s1, $zero, L_80232220
    if (ctx->r17 == 0) {
        // 0x802321D8: nop
    
            goto L_80232220;
    }
    // 0x802321D8: nop

    // 0x802321DC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802321E0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802321E4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802321E8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802321EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802321F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802321F4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802321F8: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x802321FC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80232200: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80232204: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x80232208: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023220C: sw          $v1, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r3;
    // 0x80232210: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232218: j           L_80232234
    // 0x8023221C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232234;
    // 0x8023221C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232220:
    // 0x80232220: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232224: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80232228: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023222C: jal         0x8004DA90
    // 0x80232230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80232230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80232234:
    // 0x80232234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232238: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023223C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232244: jr          $ra
    // 0x80232248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228078_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022807C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228080: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228088: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022808C: bne         $v0, $zero, L_802280F4
    if (ctx->r2 != 0) {
        // 0x80228090: nop
    
            goto L_802280F4;
    }
    // 0x80228090: nop

    // 0x80228094: jal         0x8004F684
    // 0x80228098: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80228098: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x8022809C: jal         0x8004F5C4
    // 0x802280A0: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x802280A0: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    after_1:
    // 0x802280A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802280A8: jal         0x8005FA7C
    // 0x802280AC: addiu       $a0, $a0, 0x122C
    ctx->r4 = ADD32(ctx->r4, 0X122C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x802280AC: addiu       $a0, $a0, 0x122C
    ctx->r4 = ADD32(ctx->r4, 0X122C);
    after_2:
    // 0x802280B0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802280B4: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802280B8: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x802280BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802280C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280C4: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x802280C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280CC: sb          $v0, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r2;
    // 0x802280D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280D4: sh          $zero, 0x44AC($at)
    MEM_H(0X44AC, ctx->r1) = 0;
    // 0x802280D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280DC: sh          $zero, 0x44AE($at)
    MEM_H(0X44AE, ctx->r1) = 0;
    // 0x802280E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280E4: sw          $zero, 0x44A4($at)
    MEM_W(0X44A4, ctx->r1) = 0;
    // 0x802280E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280EC: j           L_80228104
    // 0x802280F0: sw          $zero, 0x44A8($at)
    MEM_W(0X44A8, ctx->r1) = 0;
        goto L_80228104;
    // 0x802280F0: sw          $zero, 0x44A8($at)
    MEM_W(0X44A8, ctx->r1) = 0;
L_802280F4:
    // 0x802280F4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802280F8: lw          $v0, 0x4C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4C);
    // 0x802280FC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80228100: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
L_80228104:
    // 0x80228104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022810C: jr          $ra
    // 0x80228110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80246DA0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246DA0: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80246DA4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80246DA8: beq         $v0, $zero, L_80246E58
    if (ctx->r2 == 0) {
        // 0x80246DAC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80246E58;
    }
    // 0x80246DAC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80246DB0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246DB4: addu        $at, $at, $v0
    gpr jr_addend_80246DBC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246DB8: lw          $v0, 0x6240($at)
    ctx->r2 = ADD32(ctx->r1, 0X6240);
    // 0x80246DBC: jr          $v0
    // 0x80246DC0: nop

    switch (jr_addend_80246DBC >> 2) {
        case 0: goto L_80246DC4; break;
        case 1: goto L_80246DE8; break;
        case 2: goto L_80246E10; break;
        case 3: goto L_80246E34; break;
        case 4: goto L_80246E58; break;
        default: switch_error(__func__, 0x80246DBC, 0x80256240);
    }
    // 0x80246DC0: nop

L_80246DC4:
    // 0x80246DC4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80246DC8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80246DCC: bne         $v1, $v0, L_80246E58
    if (ctx->r3 != ctx->r2) {
        // 0x80246DD0: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80246E58;
    }
    // 0x80246DD0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80246DD4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80246DD8: beq         $v1, $v0, L_80246E4C
    if (ctx->r3 == ctx->r2) {
        // 0x80246DDC: nop
    
            goto L_80246E4C;
    }
    // 0x80246DDC: nop

    // 0x80246DE0: j           L_80246E58
    // 0x80246DE4: nop

        goto L_80246E58;
    // 0x80246DE4: nop

L_80246DE8:
    // 0x80246DE8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80246DEC: addiu       $v1, $zero, 0x500
    ctx->r3 = ADD32(0, 0X500);
    // 0x80246DF0: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80246DF4: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80246DF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246DFC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80246E00: beq         $v0, $v1, L_80246E4C
    if (ctx->r2 == ctx->r3) {
        // 0x80246E04: nop
    
            goto L_80246E4C;
    }
    // 0x80246E04: nop

    // 0x80246E08: j           L_80246E58
    // 0x80246E0C: nop

        goto L_80246E58;
    // 0x80246E0C: nop

L_80246E10:
    // 0x80246E10: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80246E14: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80246E18: bne         $v1, $v0, L_80246E58
    if (ctx->r3 != ctx->r2) {
        // 0x80246E1C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80246E58;
    }
    // 0x80246E1C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80246E20: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80246E24: beq         $v1, $v0, L_80246E4C
    if (ctx->r3 == ctx->r2) {
        // 0x80246E28: nop
    
            goto L_80246E4C;
    }
    // 0x80246E28: nop

    // 0x80246E2C: j           L_80246E58
    // 0x80246E30: nop

        goto L_80246E58;
    // 0x80246E30: nop

L_80246E34:
    // 0x80246E34: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80246E38: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x80246E3C: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80246E40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246E44: bne         $v0, $zero, L_80246E58
    if (ctx->r2 != 0) {
        // 0x80246E48: nop
    
            goto L_80246E58;
    }
    // 0x80246E48: nop

L_80246E4C:
    // 0x80246E4C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80246E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246E54: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80246E58:
    // 0x80246E58: jr          $ra
    // 0x80246E5C: nop

    TRACE_RETURN()
    return;
    // 0x80246E5C: nop

;}
RECOMP_FUNC void func_802302B4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802302B4: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x802302B8: bne         $v0, $zero, L_802302C8
    if (ctx->r2 != 0) {
        // 0x802302BC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802302C8;
    }
    // 0x802302BC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802302C0: j           L_802302F8
    // 0x802302C4: sb          $v0, 0x114($a0)
    MEM_B(0X114, ctx->r4) = ctx->r2;
        goto L_802302F8;
    // 0x802302C4: sb          $v0, 0x114($a0)
    MEM_B(0X114, ctx->r4) = ctx->r2;
L_802302C8:
    // 0x802302C8: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x802302CC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802302D0: bne         $v0, $zero, L_802302EC
    if (ctx->r2 != 0) {
        // 0x802302D4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802302EC;
    }
    // 0x802302D4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802302D8: lbu         $v1, 0x114($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X114);
    // 0x802302DC: bne         $v1, $v0, L_802302E8
    if (ctx->r3 != ctx->r2) {
        // 0x802302E0: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802302E8;
    }
    // 0x802302E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802302E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_802302E8:
    // 0x802302E8: sb          $a1, 0x114($a0)
    MEM_B(0X114, ctx->r4) = ctx->r5;
L_802302EC:
    // 0x802302EC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x802302F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802302F4: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
L_802302F8:
    // 0x802302F8: jr          $ra
    // 0x802302FC: nop

    TRACE_RETURN()
    return;
    // 0x802302FC: nop

;}
RECOMP_FUNC void func_802317C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802317C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802317C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802317CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802317D0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802317D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802317D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802317DC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802317E0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802317E4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802317E8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802317EC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802317F0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802317F4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802317F8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802317FC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231800: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231804: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80231808: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023180C: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80231810: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231814: jal         0x8004D5D4
    // 0x80231818: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231818: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8023181C: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x80231820: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80231824: jal         0x800540BC
    // 0x80231828: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80231828: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x8023182C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231830: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80231834: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80231838: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023183C: addiu       $v1, $v1, 0x38BC
    ctx->r3 = ADD32(ctx->r3, 0X38BC);
    // 0x80231840: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80231844: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231848: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023184C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231850: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80231854: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231858: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8023185C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80231860: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80231864: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80231868: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x8023186C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80231870: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    // 0x80231874: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    // 0x80231878: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8023187C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231880: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80231884: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80231888: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8023188C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231898: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x8023189C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802318A0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802318A4: sh          $v0, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r2;
    // 0x802318A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802318AC: sh          $v0, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r2;
    // 0x802318B0: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x802318B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802318B8: jal         0x80050294
    // 0x802318BC: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802318BC: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
    after_2:
    // 0x802318C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802318C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802318C8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802318CC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802318D0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802318D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802318D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802318DC: jr          $ra
    // 0x802318E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802318E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023224C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023224C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232250: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232254: lhu         $v0, 0x380($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X380);
    // 0x80232258: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023225C: sh          $v0, 0x380($a0)
    MEM_H(0X380, ctx->r4) = ctx->r2;
    // 0x80232260: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80232264: bne         $v0, $zero, L_80232274
    if (ctx->r2 != 0) {
        // 0x80232268: nop
    
            goto L_80232274;
    }
    // 0x80232268: nop

    // 0x8023226C: jal         0x8023250C
    // 0x80232270: nop

    func_8023250C_ovl28(rdram, ctx);
        goto after_0;
    // 0x80232270: nop

    after_0:
L_80232274:
    // 0x80232274: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232278: jr          $ra
    // 0x8023227C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023227C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D14_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227D1C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80227D20: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227D24: beq         $v1, $v0, L_80227DBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227D28: slti        $v0, $v1, 0x65
        ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
            goto L_80227DBC;
    }
    // 0x80227D28: slti        $v0, $v1, 0x65
    ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x80227D2C: beq         $v0, $zero, L_80227DE4
    if (ctx->r2 == 0) {
        // 0x80227D30: nop
    
            goto L_80227DE4;
    }
    // 0x80227D30: nop

    // 0x80227D34: beq         $v1, $zero, L_80227D4C
    if (ctx->r3 == 0) {
        // 0x80227D38: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80227D4C;
    }
    // 0x80227D38: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227D3C: beq         $v1, $v0, L_80227DA8
    if (ctx->r3 == ctx->r2) {
        // 0x80227D40: nop
    
            goto L_80227DA8;
    }
    // 0x80227D40: nop

    // 0x80227D44: j           L_80227DE4
    // 0x80227D48: nop

        goto L_80227DE4;
    // 0x80227D48: nop

L_80227D4C:
    // 0x80227D4C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227D50: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80227D54: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227D58: lw          $v0, 0x11D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X11D0);
    // 0x80227D5C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80227D60: lw          $v1, 0x1188($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1188);
    // 0x80227D64: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D68: sb          $zero, 0x63AD($at)
    MEM_B(0X63AD, ctx->r1) = 0;
    // 0x80227D6C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D70: sb          $zero, 0x63AC($at)
    MEM_B(0X63AC, ctx->r1) = 0;
    // 0x80227D74: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D78: sb          $zero, 0x63AB($at)
    MEM_B(0X63AB, ctx->r1) = 0;
    // 0x80227D7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D80: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x80227D84: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D88: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x80227D8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D90: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x80227D94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D98: sw          $v0, 0x63B4($at)
    MEM_W(0X63B4, ctx->r1) = ctx->r2;
    // 0x80227D9C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227DA0: j           L_80227DE4
    // 0x80227DA4: sw          $v1, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r3;
        goto L_80227DE4;
    // 0x80227DA4: sw          $v1, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r3;
L_80227DA8:
    // 0x80227DA8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80227DAC: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80227DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227DB4: j           L_80227DE4
    // 0x80227DB8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
        goto L_80227DE4;
    // 0x80227DB8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80227DBC:
    // 0x80227DBC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227DC0: lw          $v0, 0x1194($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1194);
    // 0x80227DC4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227DC8: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x80227DCC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227DD0: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x80227DD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227DD8: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x80227DDC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227DE0: sw          $v0, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r2;
L_80227DE4:
    // 0x80227DE4: jal         0x80226CE0
    // 0x80227DE8: nop

    func_80226CE0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80227DE8: nop

    after_0:
    // 0x80227DEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227DF0: jr          $ra
    // 0x80227DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BAEC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BAEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BAF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BAF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BAF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BAFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BB00: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023BB04: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x8023BB08: beq         $v0, $zero, L_8023C4F4
    if (ctx->r2 == 0) {
        // 0x8023BB0C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_8023C4F4;
    }
    // 0x8023BB0C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8023BB10: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023BB14: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023BB18: addu        $at, $at, $v0
    gpr jr_addend_8023BB20 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BB1C: lw          $v0, 0x5FA8($at)
    ctx->r2 = ADD32(ctx->r1, 0X5FA8);
    // 0x8023BB20: jr          $v0
    // 0x8023BB24: nop

    switch (jr_addend_8023BB20 >> 2) {
        case 0: goto L_8023BB28; break;
        case 1: goto L_8023BB54; break;
        case 2: goto L_8023BBA4; break;
        case 3: goto L_8023BC20; break;
        case 4: goto L_8023BC48; break;
        case 5: goto L_8023BC98; break;
        case 6: goto L_8023BCC0; break;
        case 7: goto L_8023BE04; break;
        case 8: goto L_8023BF40; break;
        case 9: goto L_8023BFDC; break;
        case 10: goto L_8023C068; break;
        case 11: goto L_8023C1D4; break;
        case 12: goto L_8023C2DC; break;
        case 13: goto L_8023C308; break;
        case 14: goto L_8023C330; break;
        case 15: goto L_8023C45C; break;
        case 16: goto L_8023C4B4; break;
        case 17: goto L_8023C4EC; break;
        default: switch_error(__func__, 0x8023BB20, 0x80255FA8);
    }
    // 0x8023BB24: nop

L_8023BB28:
    // 0x8023BB28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BB2C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023BB30: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BB34: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023BB38: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BB3C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8023C4F4;
    }
    // 0x8023BB3C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023BB40: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BB44: beq         $v1, $v0, L_8023C4DC
    if (ctx->r3 == ctx->r2) {
        // 0x8023BB48: nop
    
            goto L_8023C4DC;
    }
    // 0x8023BB48: nop

    // 0x8023BB4C: j           L_8023C4F4
    // 0x8023BB50: nop

        goto L_8023C4F4;
    // 0x8023BB50: nop

L_8023BB54:
    // 0x8023BB54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BB58: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023BB5C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BB60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023BB64: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8023BB68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023BB6C: sra         $v1, $v1, 19
    ctx->r3 = S32(SIGNED(ctx->r3) >> 19);
    // 0x8023BB70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023BB74: sll         $v0, $v1, 5
    ctx->r2 = S32(ctx->r3 << 5);
    // 0x8023BB78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BB7C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023BB80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BB84: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023BB88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BB8C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023BB90: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8023BB94: bne         $v0, $v1, L_8023C4F4
    if (ctx->r2 != ctx->r3) {
        // 0x8023BB98: nop
    
            goto L_8023C4F4;
    }
    // 0x8023BB98: nop

    // 0x8023BB9C: j           L_8023C4DC
    // 0x8023BBA0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023BBA0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_8023BBA4:
    // 0x8023BBA4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BBA8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023BBAC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BBB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023BBB4: bne         $v1, $v0, L_8023BBE8
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBB8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023BBE8;
    }
    // 0x8023BBB8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023BBBC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BBC0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023BBC4: bne         $v1, $v0, L_8023BBE4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBC8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023BBE4;
    }
    // 0x8023BBC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023BBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BBD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BBD4: jal         0x8023C510
    // 0x8023BBD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023C510_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023BBD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023BBDC: j           L_8023C4F4
    // 0x8023BBE0: nop

        goto L_8023C4F4;
    // 0x8023BBE0: nop

L_8023BBE4:
    // 0x8023BBE4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
L_8023BBE8:
    // 0x8023BBE8: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBEC: nop
    
            goto L_8023C4F4;
    }
    // 0x8023BBEC: nop

    // 0x8023BBF0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8023BBF4: bne         $v0, $v1, L_8023C4F4
    if (ctx->r2 != ctx->r3) {
        // 0x8023BBF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023BBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BBFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BC00: jal         0x8023C510
    // 0x8023BC04: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023C510_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023BC04: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x8023BC08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BC0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BC10: jal         0x8023C538
    // 0x8023BC14: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023C538_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023BC14: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x8023BC18: j           L_8023C4DC
    // 0x8023BC1C: nop

        goto L_8023C4DC;
    // 0x8023BC1C: nop

L_8023BC20:
    // 0x8023BC20: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BC24: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023BC28: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC2C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023C4F4;
    }
    // 0x8023BC2C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023BC30: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BC34: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023C4F4;
    }
    // 0x8023BC38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BC3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BC40: j           L_8023C4DC
    // 0x8023BC44: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023BC44: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023BC48:
    // 0x8023BC48: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BC4C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023BC50: bne         $v1, $v0, L_8023BC7C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BC7C;
    }
    // 0x8023BC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BC58: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BC5C: bne         $v1, $v0, L_8023BC7C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BC7C;
    }
    // 0x8023BC60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BC64: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
    // 0x8023BC68: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023BC6C: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x8023BC70: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023BC74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BC78: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_8023BC7C:
    // 0x8023BC7C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023BC80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BC84: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC88: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023C4F4;
    }
    // 0x8023BC88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BC8C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BC90: j           L_8023C4DC
    // 0x8023BC94: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023BC94: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023BC98:
    // 0x8023BC98: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BC9C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023BCA0: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BCA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023BCA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BCA8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BCAC: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BCB0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023C4F4;
    }
    // 0x8023BCB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023BCB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BCB8: j           L_8023C4DC
    // 0x8023BCBC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023BCBC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023BCC0:
    // 0x8023BCC0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BCC4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023BCC8: bne         $v1, $v0, L_8023BD9C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BCCC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8023BD9C;
    }
    // 0x8023BCCC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023BCD0: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023BCD4: addiu       $v0, $zero, 0xEB
    ctx->r2 = ADD32(0, 0XEB);
    // 0x8023BCD8: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BCDC: slti        $v0, $a1, 0xEC
        ctx->r2 = SIGNED(ctx->r5) < 0XEC ? 1 : 0;
            goto L_8023C3FC;
    }
    // 0x8023BCDC: slti        $v0, $a1, 0xEC
    ctx->r2 = SIGNED(ctx->r5) < 0XEC ? 1 : 0;
    // 0x8023BCE0: beq         $v0, $zero, L_8023BD2C
    if (ctx->r2 == 0) {
        // 0x8023BCE4: addiu       $v0, $zero, 0x7D
        ctx->r2 = ADD32(0, 0X7D);
            goto L_8023BD2C;
    }
    // 0x8023BCE4: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x8023BCE8: beq         $a1, $v0, L_8023C3D0
    if (ctx->r5 == ctx->r2) {
        // 0x8023BCEC: slti        $v0, $a1, 0x7E
        ctx->r2 = SIGNED(ctx->r5) < 0X7E ? 1 : 0;
            goto L_8023C3D0;
    }
    // 0x8023BCEC: slti        $v0, $a1, 0x7E
    ctx->r2 = SIGNED(ctx->r5) < 0X7E ? 1 : 0;
    // 0x8023BCF0: beq         $v0, $zero, L_8023BD10
    if (ctx->r2 == 0) {
        // 0x8023BCF4: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023BD10;
    }
    // 0x8023BCF4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023BCF8: beq         $a1, $v0, L_8023C3D0
    if (ctx->r5 == ctx->r2) {
        // 0x8023BCFC: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_8023C3D0;
    }
    // 0x8023BCFC: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x8023BD00: beq         $a1, $v0, L_8023C400
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C400;
    }
    // 0x8023BD04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BD08: j           L_8023C4F4
    // 0x8023BD0C: nop

        goto L_8023C4F4;
    // 0x8023BD0C: nop

L_8023BD10:
    // 0x8023BD10: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8023BD14: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD18: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_8023C3FC;
    }
    // 0x8023BD18: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x8023BD1C: beq         $a1, $v0, L_8023C3D4
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C3D4;
    }
    // 0x8023BD20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BD24: j           L_8023C4F4
    // 0x8023BD28: nop

        goto L_8023C4F4;
    // 0x8023BD28: nop

L_8023BD2C:
    // 0x8023BD2C: addiu       $v0, $zero, 0x16D
    ctx->r2 = ADD32(0, 0X16D);
    // 0x8023BD30: beq         $a1, $v0, L_8023BD74
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD34: slti        $v0, $a1, 0x16E
        ctx->r2 = SIGNED(ctx->r5) < 0X16E ? 1 : 0;
            goto L_8023BD74;
    }
    // 0x8023BD34: slti        $v0, $a1, 0x16E
    ctx->r2 = SIGNED(ctx->r5) < 0X16E ? 1 : 0;
    // 0x8023BD38: beq         $v0, $zero, L_8023BD58
    if (ctx->r2 == 0) {
        // 0x8023BD3C: addiu       $v0, $zero, 0x104
        ctx->r2 = ADD32(0, 0X104);
            goto L_8023BD58;
    }
    // 0x8023BD3C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8023BD40: beq         $a1, $v0, L_8023C3D0
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD44: addiu       $v0, $zero, 0x14D
        ctx->r2 = ADD32(0, 0X14D);
            goto L_8023C3D0;
    }
    // 0x8023BD44: addiu       $v0, $zero, 0x14D
    ctx->r2 = ADD32(0, 0X14D);
    // 0x8023BD48: beq         $a1, $v0, L_8023C400
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C400;
    }
    // 0x8023BD4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BD50: j           L_8023C4F4
    // 0x8023BD54: nop

        goto L_8023C4F4;
    // 0x8023BD54: nop

L_8023BD58:
    // 0x8023BD58: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x8023BD5C: beq         $a1, $v0, L_8023BF04
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD60: addiu       $v0, $zero, 0x1AE
        ctx->r2 = ADD32(0, 0X1AE);
            goto L_8023BF04;
    }
    // 0x8023BD60: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
    // 0x8023BD64: beq         $a1, $v0, L_8023BEDC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BD68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BEDC;
    }
    // 0x8023BD68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BD6C: j           L_8023C4F4
    // 0x8023BD70: nop

        goto L_8023C4F4;
    // 0x8023BD70: nop

L_8023BD74:
    // 0x8023BD74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BD78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BD7C: jal         0x8023C510
    // 0x8023BD80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8023C510_ovl28(rdram, ctx);
        goto after_3;
    // 0x8023BD80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8023BD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BD88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BD8C: jal         0x8023C538
    // 0x8023BD90: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8023C538_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023BD90: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_4:
    // 0x8023BD94: j           L_8023C4F4
    // 0x8023BD98: nop

        goto L_8023C4F4;
    // 0x8023BD98: nop

L_8023BD9C:
    // 0x8023BD9C: bne         $v1, $v0, L_8023BDC4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BDA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BDC4;
    }
    // 0x8023BDA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BDA4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BDA8: bne         $v1, $v0, L_8023BDC4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BDAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BDC4;
    }
    // 0x8023BDAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BDB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BDB4: jal         0x8023C510
    // 0x8023BDB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023C510_ovl28(rdram, ctx);
        goto after_5;
    // 0x8023BDB8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x8023BDBC: j           L_8023C15C
    // 0x8023BDC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023C15C;
    // 0x8023BDC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023BDC4:
    // 0x8023BDC4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BDC8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023BDCC: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BDD0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023BDD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BDD4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BDD8: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BDDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023BDDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BDE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BDE4: jal         0x8023C510
    // 0x8023BDE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8023C510_ovl28(rdram, ctx);
        goto after_6;
    // 0x8023BDE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x8023BDEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BDF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BDF4: jal         0x8023C538
    // 0x8023BDF8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023C538_ovl28(rdram, ctx);
        goto after_7;
    // 0x8023BDF8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_7:
    // 0x8023BDFC: j           L_8023C4DC
    // 0x8023BE00: nop

        goto L_8023C4DC;
    // 0x8023BE00: nop

L_8023BE04:
    // 0x8023BE04: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BE08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023BE0C: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BE10: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_8023C4F4;
    }
    // 0x8023BE10: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8023BE14: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023BE18: beq         $a1, $v0, L_8023BECC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE1C: slti        $v0, $a1, 0x83
        ctx->r2 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
            goto L_8023BECC;
    }
    // 0x8023BE1C: slti        $v0, $a1, 0x83
    ctx->r2 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
    // 0x8023BE20: beq         $v0, $zero, L_8023BE64
    if (ctx->r2 == 0) {
        // 0x8023BE24: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_8023BE64;
    }
    // 0x8023BE24: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8023BE28: beq         $a1, $v0, L_8023BEA4
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE2C: slti        $v0, $a1, 0x24
        ctx->r2 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
            goto L_8023BEA4;
    }
    // 0x8023BE2C: slti        $v0, $a1, 0x24
    ctx->r2 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
    // 0x8023BE30: beq         $v0, $zero, L_8023BE48
    if (ctx->r2 == 0) {
        // 0x8023BE34: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023BE48;
    }
    // 0x8023BE34: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023BE38: beq         $a1, $v0, L_8023BF08
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BF08;
    }
    // 0x8023BE3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BE40: j           L_8023C4F4
    // 0x8023BE44: nop

        goto L_8023C4F4;
    // 0x8023BE44: nop

L_8023BE48:
    // 0x8023BE48: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8023BE4C: beq         $a1, $v0, L_8023BEBC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE50: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_8023BEBC;
    }
    // 0x8023BE50: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023BE54: beq         $a1, $v0, L_8023BEDC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BEDC;
    }
    // 0x8023BE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BE5C: j           L_8023C4F4
    // 0x8023BE60: nop

        goto L_8023C4F4;
    // 0x8023BE60: nop

L_8023BE64:
    // 0x8023BE64: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8023BE68: beq         $a1, $v0, L_8023BEF0
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE6C: slti        $v0, $a1, 0xC9
        ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
            goto L_8023BEF0;
    }
    // 0x8023BE6C: slti        $v0, $a1, 0xC9
    ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
    // 0x8023BE70: beq         $v0, $zero, L_8023BE88
    if (ctx->r2 == 0) {
        // 0x8023BE74: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_8023BE88;
    }
    // 0x8023BE74: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8023BE78: beq         $a1, $v0, L_8023BEDC
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BEDC;
    }
    // 0x8023BE7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BE80: j           L_8023C4F4
    // 0x8023BE84: nop

        goto L_8023C4F4;
    // 0x8023BE84: nop

L_8023BE88:
    // 0x8023BE88: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x8023BE8C: beq         $a1, $v0, L_8023BF1C
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE90: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_8023BF1C;
    }
    // 0x8023BE90: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x8023BE94: beq         $a1, $v0, L_8023BF34
    if (ctx->r5 == ctx->r2) {
        // 0x8023BE98: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023BF34;
    }
    // 0x8023BE98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023BE9C: j           L_8023C4F4
    // 0x8023BEA0: nop

        goto L_8023C4F4;
    // 0x8023BEA0: nop

L_8023BEA4:
    // 0x8023BEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BEA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BEAC: jal         0x8023C538
    // 0x8023BEB0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023C538_ovl28(rdram, ctx);
        goto after_8;
    // 0x8023BEB0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_8:
    // 0x8023BEB4: j           L_8023C4F4
    // 0x8023BEB8: nop

        goto L_8023C4F4;
    // 0x8023BEB8: nop

L_8023BEBC:
    // 0x8023BEBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BEC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BEC4: j           L_8023BEFC
    // 0x8023BEC8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_8023BEFC;
    // 0x8023BEC8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_8023BECC:
    // 0x8023BECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BED0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BED4: j           L_8023BEFC
    // 0x8023BED8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_8023BEFC;
    // 0x8023BED8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_8023BEDC:
    // 0x8023BEDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BEE0: jal         0x8023C538
    // 0x8023BEE4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8023C538_ovl28(rdram, ctx);
        goto after_9;
    // 0x8023BEE4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x8023BEE8: j           L_8023C4F4
    // 0x8023BEEC: nop

        goto L_8023C4F4;
    // 0x8023BEEC: nop

L_8023BEF0:
    // 0x8023BEF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BEF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BEF8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_8023BEFC:
    // 0x8023BEFC: jal         0x8023C510
    // 0x8023BF00: nop

    func_8023C510_ovl28(rdram, ctx);
        goto after_10;
    // 0x8023BF00: nop

    after_10:
L_8023BF04:
    // 0x8023BF04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023BF08:
    // 0x8023BF08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BF0C: jal         0x8023C538
    // 0x8023BF10: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8023C538_ovl28(rdram, ctx);
        goto after_11;
    // 0x8023BF10: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_11:
    // 0x8023BF14: j           L_8023C4F4
    // 0x8023BF18: nop

        goto L_8023C4F4;
    // 0x8023BF18: nop

L_8023BF1C:
    // 0x8023BF1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BF20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BF24: jal         0x8023C538
    // 0x8023BF28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8023C538_ovl28(rdram, ctx);
        goto after_12;
    // 0x8023BF28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_12:
    // 0x8023BF2C: j           L_8023C4F4
    // 0x8023BF30: nop

        goto L_8023C4F4;
    // 0x8023BF30: nop

L_8023BF34:
    // 0x8023BF34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BF38: j           L_8023C4DC
    // 0x8023BF3C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023BF3C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023BF40:
    // 0x8023BF40: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BF44: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023BF48: bne         $v1, $v0, L_8023BF94
    if (ctx->r3 != ctx->r2) {
        // 0x8023BF4C: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8023BF94;
    }
    // 0x8023BF4C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023BF50: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023BF54: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023BF58: bne         $a1, $v0, L_8023BF78
    if (ctx->r5 != ctx->r2) {
        // 0x8023BF5C: addiu       $v0, $zero, 0x168
        ctx->r2 = ADD32(0, 0X168);
            goto L_8023BF78;
    }
    // 0x8023BF5C: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x8023BF60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BF64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BF68: jal         0x8023C510
    // 0x8023BF6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023C510_ovl28(rdram, ctx);
        goto after_13;
    // 0x8023BF6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_13:
    // 0x8023BF70: j           L_8023C174
    // 0x8023BF74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023C174;
    // 0x8023BF74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023BF78:
    // 0x8023BF78: bne         $a1, $v0, L_8023C4F4
    if (ctx->r5 != ctx->r2) {
        // 0x8023BF7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023BF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BF80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BF84: jal         0x8023C538
    // 0x8023BF88: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8023C538_ovl28(rdram, ctx);
        goto after_14;
    // 0x8023BF88: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_14:
    // 0x8023BF8C: j           L_8023C4F4
    // 0x8023BF90: nop

        goto L_8023C4F4;
    // 0x8023BF90: nop

L_8023BF94:
    // 0x8023BF94: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BF98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023BF98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BF9C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023BFA0: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BFA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023BFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BFA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BFAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8023BFB0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023BFB4: jal         0x8023C510
    // 0x8023BFB8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8023C510_ovl28(rdram, ctx);
        goto after_15;
    // 0x8023BFB8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_15:
    // 0x8023BFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BFC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BFC4: jal         0x8023C538
    // 0x8023BFC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023C538_ovl28(rdram, ctx);
        goto after_16;
    // 0x8023BFC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x8023BFCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023BFD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BFD4: j           L_8023C4DC
    // 0x8023BFD8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023BFD8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023BFDC:
    // 0x8023BFDC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023BFE0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023BFE4: bne         $v1, $v0, L_8023C030
    if (ctx->r3 != ctx->r2) {
        // 0x8023BFE8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023C030;
    }
    // 0x8023BFE8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023BFEC: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023BFF0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023BFF4: beq         $a1, $v0, L_8023C028
    if (ctx->r5 == ctx->r2) {
        // 0x8023BFF8: slti        $v0, $a1, 0x79
        ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
            goto L_8023C028;
    }
    // 0x8023BFF8: slti        $v0, $a1, 0x79
    ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
    // 0x8023BFFC: beq         $v0, $zero, L_8023C014
    if (ctx->r2 == 0) {
        // 0x8023C000: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023C014;
    }
    // 0x8023C000: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023C004: beq         $a1, $v0, L_8023C174
    if (ctx->r5 == ctx->r2) {
        // 0x8023C008: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C174;
    }
    // 0x8023C008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C00C: j           L_8023C4F4
    // 0x8023C010: nop

        goto L_8023C4F4;
    // 0x8023C010: nop

L_8023C014:
    // 0x8023C014: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x8023C018: beq         $a1, $v0, L_8023C15C
    if (ctx->r5 == ctx->r2) {
        // 0x8023C01C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C15C;
    }
    // 0x8023C01C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C020: j           L_8023C4F4
    // 0x8023C024: nop

        goto L_8023C4F4;
    // 0x8023C024: nop

L_8023C028:
    // 0x8023C028: j           L_8023C14C
    // 0x8023C02C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8023C14C;
    // 0x8023C02C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8023C030:
    // 0x8023C030: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C034: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023C034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C038: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C03C: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C040: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023C040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C044: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C048: jal         0x8023C510
    // 0x8023C04C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C510_ovl28(rdram, ctx);
        goto after_17;
    // 0x8023C04C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x8023C050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C054: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C058: jal         0x8023C538
    // 0x8023C05C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C538_ovl28(rdram, ctx);
        goto after_18;
    // 0x8023C05C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x8023C060: j           L_8023C4DC
    // 0x8023C064: nop

        goto L_8023C4DC;
    // 0x8023C064: nop

L_8023C068:
    // 0x8023C068: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C06C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023C070: bne         $v1, $v0, L_8023C188
    if (ctx->r3 != ctx->r2) {
        // 0x8023C074: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_8023C188;
    }
    // 0x8023C074: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8023C078: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023C07C: addiu       $v0, $zero, 0x116
    ctx->r2 = ADD32(0, 0X116);
    // 0x8023C080: beq         $a1, $v0, L_8023C12C
    if (ctx->r5 == ctx->r2) {
        // 0x8023C084: slti        $v0, $a1, 0x117
        ctx->r2 = SIGNED(ctx->r5) < 0X117 ? 1 : 0;
            goto L_8023C12C;
    }
    // 0x8023C084: slti        $v0, $a1, 0x117
    ctx->r2 = SIGNED(ctx->r5) < 0X117 ? 1 : 0;
    // 0x8023C088: beq         $v0, $zero, L_8023C0C8
    if (ctx->r2 == 0) {
        // 0x8023C08C: addiu       $v0, $zero, 0x87
        ctx->r2 = ADD32(0, 0X87);
            goto L_8023C0C8;
    }
    // 0x8023C08C: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x8023C090: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023C094: slti        $v0, $a1, 0x88
        ctx->r2 = SIGNED(ctx->r5) < 0X88 ? 1 : 0;
            goto L_8023C3FC;
    }
    // 0x8023C094: slti        $v0, $a1, 0x88
    ctx->r2 = SIGNED(ctx->r5) < 0X88 ? 1 : 0;
    // 0x8023C098: beql        $v0, $zero, L_8023C0B0
    if (ctx->r2 == 0) {
        // 0x8023C09C: addiu       $v0, $zero, 0x9F
        ctx->r2 = ADD32(0, 0X9F);
            goto L_8023C0B0;
    }
    goto skip_0;
    // 0x8023C09C: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    skip_0:
    // 0x8023C0A0: beq         $a1, $v1, L_8023C110
    if (ctx->r5 == ctx->r3) {
        // 0x8023C0A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C110;
    }
    // 0x8023C0A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C0A8: j           L_8023C4F4
    // 0x8023C0AC: nop

        goto L_8023C4F4;
    // 0x8023C0AC: nop

L_8023C0B0:
    // 0x8023C0B0: beq         $a1, $v0, L_8023C11C
    if (ctx->r5 == ctx->r2) {
        // 0x8023C0B4: addiu       $v0, $zero, 0xFE
        ctx->r2 = ADD32(0, 0XFE);
            goto L_8023C11C;
    }
    // 0x8023C0B4: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x8023C0B8: beq         $a1, $v0, L_8023C400
    if (ctx->r5 == ctx->r2) {
        // 0x8023C0BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C400;
    }
    // 0x8023C0BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C0C0: j           L_8023C4F4
    // 0x8023C0C4: nop

        goto L_8023C4F4;
    // 0x8023C0C4: nop

L_8023C0C8:
    // 0x8023C0C8: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
    // 0x8023C0CC: beq         $a1, $v0, L_8023C170
    if (ctx->r5 == ctx->r2) {
        // 0x8023C0D0: slti        $v0, $a1, 0x1AF
        ctx->r2 = SIGNED(ctx->r5) < 0X1AF ? 1 : 0;
            goto L_8023C170;
    }
    // 0x8023C0D0: slti        $v0, $a1, 0x1AF
    ctx->r2 = SIGNED(ctx->r5) < 0X1AF ? 1 : 0;
    // 0x8023C0D4: beq         $v0, $zero, L_8023C0F4
    if (ctx->r2 == 0) {
        // 0x8023C0D8: addiu       $v0, $zero, 0x1A4
        ctx->r2 = ADD32(0, 0X1A4);
            goto L_8023C0F4;
    }
    // 0x8023C0D8: addiu       $v0, $zero, 0x1A4
    ctx->r2 = ADD32(0, 0X1A4);
    // 0x8023C0DC: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023C0E0: addiu       $v0, $zero, 0x1A9
        ctx->r2 = ADD32(0, 0X1A9);
            goto L_8023C3FC;
    }
    // 0x8023C0E0: addiu       $v0, $zero, 0x1A9
    ctx->r2 = ADD32(0, 0X1A9);
    // 0x8023C0E4: beq         $a1, $v0, L_8023C13C
    if (ctx->r5 == ctx->r2) {
        // 0x8023C0E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C13C;
    }
    // 0x8023C0E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C0EC: j           L_8023C4F4
    // 0x8023C0F0: nop

        goto L_8023C4F4;
    // 0x8023C0F0: nop

L_8023C0F4:
    // 0x8023C0F4: addiu       $v0, $zero, 0x217
    ctx->r2 = ADD32(0, 0X217);
    // 0x8023C0F8: beq         $a1, $v0, L_8023C158
    if (ctx->r5 == ctx->r2) {
        // 0x8023C0FC: addiu       $v0, $zero, 0x230
        ctx->r2 = ADD32(0, 0X230);
            goto L_8023C158;
    }
    // 0x8023C0FC: addiu       $v0, $zero, 0x230
    ctx->r2 = ADD32(0, 0X230);
    // 0x8023C100: beq         $a1, $v0, L_8023C174
    if (ctx->r5 == ctx->r2) {
        // 0x8023C104: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C174;
    }
    // 0x8023C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C108: j           L_8023C4F4
    // 0x8023C10C: nop

        goto L_8023C4F4;
    // 0x8023C10C: nop

L_8023C110:
    // 0x8023C110: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C114: j           L_8023C3DC
    // 0x8023C118: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8023C3DC;
    // 0x8023C118: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8023C11C:
    // 0x8023C11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C120: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C124: j           L_8023C3DC
    // 0x8023C128: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8023C3DC;
    // 0x8023C128: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8023C12C:
    // 0x8023C12C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C130: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C134: j           L_8023C3DC
    // 0x8023C138: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8023C3DC;
    // 0x8023C138: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8023C13C:
    // 0x8023C13C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C140: jal         0x8023C510
    // 0x8023C144: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8023C510_ovl28(rdram, ctx);
        goto after_19;
    // 0x8023C144: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_19:
    // 0x8023C148: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8023C14C:
    // 0x8023C14C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023C150: j           L_8023C4F4
    // 0x8023C154: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4F4;
    // 0x8023C154: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023C158:
    // 0x8023C158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023C15C:
    // 0x8023C15C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C160: jal         0x8023C538
    // 0x8023C164: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023C538_ovl28(rdram, ctx);
        goto after_20;
    // 0x8023C164: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x8023C168: j           L_8023C4F4
    // 0x8023C16C: nop

        goto L_8023C4F4;
    // 0x8023C16C: nop

L_8023C170:
    // 0x8023C170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023C174:
    // 0x8023C174: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C178: jal         0x8023C538
    // 0x8023C17C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8023C538_ovl28(rdram, ctx);
        goto after_21;
    // 0x8023C17C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_21:
    // 0x8023C180: j           L_8023C4F4
    // 0x8023C184: nop

        goto L_8023C4F4;
    // 0x8023C184: nop

L_8023C188:
    // 0x8023C188: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C18C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023C18C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C190: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C194: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C198: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023C198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C19C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C1A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8023C1A4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023C1A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023C1AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023C1B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023C1B4: jal         0x8023C510
    // 0x8023C1B8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8023C510_ovl28(rdram, ctx);
        goto after_22;
    // 0x8023C1B8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_22:
    // 0x8023C1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C1C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C1C4: jal         0x8023C538
    // 0x8023C1C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023C538_ovl28(rdram, ctx);
        goto after_23;
    // 0x8023C1C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x8023C1CC: j           L_8023C4DC
    // 0x8023C1D0: nop

        goto L_8023C4DC;
    // 0x8023C1D0: nop

L_8023C1D4:
    // 0x8023C1D4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C1D8: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8023C1DC: bne         $v1, $v0, L_8023C294
    if (ctx->r3 != ctx->r2) {
        // 0x8023C1E0: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_8023C294;
    }
    // 0x8023C1E0: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023C1E4: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023C1E8: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x8023C1EC: beq         $a1, $v0, L_8023C268
    if (ctx->r5 == ctx->r2) {
        // 0x8023C1F0: slti        $v0, $a1, 0x6A
        ctx->r2 = SIGNED(ctx->r5) < 0X6A ? 1 : 0;
            goto L_8023C268;
    }
    // 0x8023C1F0: slti        $v0, $a1, 0x6A
    ctx->r2 = SIGNED(ctx->r5) < 0X6A ? 1 : 0;
    // 0x8023C1F4: beq         $v0, $zero, L_8023C230
    if (ctx->r2 == 0) {
        // 0x8023C1F8: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8023C230;
    }
    // 0x8023C1F8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023C1FC: beq         $a1, $v0, L_8023C268
    if (ctx->r5 == ctx->r2) {
        // 0x8023C200: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_8023C268;
    }
    // 0x8023C200: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x8023C204: beq         $v0, $zero, L_8023C21C
    if (ctx->r2 == 0) {
        // 0x8023C208: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023C21C;
    }
    // 0x8023C208: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023C20C: beq         $a1, $v0, L_8023C280
    if (ctx->r5 == ctx->r2) {
        // 0x8023C210: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C280;
    }
    // 0x8023C210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C214: j           L_8023C4F4
    // 0x8023C218: nop

        goto L_8023C4F4;
    // 0x8023C218: nop

L_8023C21C:
    // 0x8023C21C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023C220: beq         $a1, $v0, L_8023C280
    if (ctx->r5 == ctx->r2) {
        // 0x8023C224: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C280;
    }
    // 0x8023C224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C228: j           L_8023C4F4
    // 0x8023C22C: nop

        goto L_8023C4F4;
    // 0x8023C22C: nop

L_8023C230:
    // 0x8023C230: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x8023C234: beq         $a1, $v0, L_8023C268
    if (ctx->r5 == ctx->r2) {
        // 0x8023C238: slti        $v0, $a1, 0xBF
        ctx->r2 = SIGNED(ctx->r5) < 0XBF ? 1 : 0;
            goto L_8023C268;
    }
    // 0x8023C238: slti        $v0, $a1, 0xBF
    ctx->r2 = SIGNED(ctx->r5) < 0XBF ? 1 : 0;
    // 0x8023C23C: beq         $v0, $zero, L_8023C254
    if (ctx->r2 == 0) {
        // 0x8023C240: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8023C254;
    }
    // 0x8023C240: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023C244: beq         $a1, $v0, L_8023C280
    if (ctx->r5 == ctx->r2) {
        // 0x8023C248: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C280;
    }
    // 0x8023C248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C24C: j           L_8023C4F4
    // 0x8023C250: nop

        goto L_8023C4F4;
    // 0x8023C250: nop

L_8023C254:
    // 0x8023C254: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8023C258: beq         $a1, $v0, L_8023C280
    if (ctx->r5 == ctx->r2) {
        // 0x8023C25C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C280;
    }
    // 0x8023C25C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C260: j           L_8023C4F4
    // 0x8023C264: nop

        goto L_8023C4F4;
    // 0x8023C264: nop

L_8023C268:
    // 0x8023C268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C26C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C270: jal         0x8023C538
    // 0x8023C274: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023C538_ovl28(rdram, ctx);
        goto after_24;
    // 0x8023C274: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_24:
    // 0x8023C278: j           L_8023C4F4
    // 0x8023C27C: nop

        goto L_8023C4F4;
    // 0x8023C27C: nop

L_8023C280:
    // 0x8023C280: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C284: jal         0x8023C538
    // 0x8023C288: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8023C538_ovl28(rdram, ctx);
        goto after_25;
    // 0x8023C288: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_25:
    // 0x8023C28C: j           L_8023C4F4
    // 0x8023C290: nop

        goto L_8023C4F4;
    // 0x8023C290: nop

L_8023C294:
    // 0x8023C294: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C298: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023C298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C29C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C2A0: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C2A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023C2A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C2A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C2AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023C2B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023C2B4: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023C2B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023C2BC: jal         0x8023C510
    // 0x8023C2C0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8023C510_ovl28(rdram, ctx);
        goto after_26;
    // 0x8023C2C0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_26:
    // 0x8023C2C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C2C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C2CC: jal         0x8023C538
    // 0x8023C2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C538_ovl28(rdram, ctx);
        goto after_27;
    // 0x8023C2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_27:
    // 0x8023C2D4: j           L_8023C4DC
    // 0x8023C2D8: nop

        goto L_8023C4DC;
    // 0x8023C2D8: nop

L_8023C2DC:
    // 0x8023C2DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C2E0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023C2E4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C2E8: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8023C2EC: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C2F0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023C4F4;
    }
    // 0x8023C2F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023C2F4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C2F8: beq         $v1, $v0, L_8023C4DC
    if (ctx->r3 == ctx->r2) {
        // 0x8023C2FC: nop
    
            goto L_8023C4DC;
    }
    // 0x8023C2FC: nop

    // 0x8023C300: j           L_8023C4F4
    // 0x8023C304: nop

        goto L_8023C4F4;
    // 0x8023C304: nop

L_8023C308:
    // 0x8023C308: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C30C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8023C310: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C314: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023C314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C318: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C31C: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C320: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8023C4F4;
    }
    // 0x8023C320: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023C324: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023C328: j           L_8023C4DC
    // 0x8023C32C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023C4DC;
    // 0x8023C32C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023C330:
    // 0x8023C330: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C334: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023C338: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C33C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023C340: bne         $v1, $v0, L_8023C424
    if (ctx->r3 != ctx->r2) {
        // 0x8023C344: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_8023C424;
    }
    // 0x8023C344: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8023C348: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023C34C: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x8023C350: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023C354: slti        $v0, $a1, 0xDD
        ctx->r2 = SIGNED(ctx->r5) < 0XDD ? 1 : 0;
            goto L_8023C3FC;
    }
    // 0x8023C354: slti        $v0, $a1, 0xDD
    ctx->r2 = SIGNED(ctx->r5) < 0XDD ? 1 : 0;
    // 0x8023C358: beq         $v0, $zero, L_8023C390
    if (ctx->r2 == 0) {
        // 0x8023C35C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8023C390;
    }
    // 0x8023C35C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023C360: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023C364: slti        $v0, $a1, 0x3D
        ctx->r2 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
            goto L_8023C3FC;
    }
    // 0x8023C364: slti        $v0, $a1, 0x3D
    ctx->r2 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
    // 0x8023C368: beql        $v0, $zero, L_8023C380
    if (ctx->r2 == 0) {
        // 0x8023C36C: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8023C380;
    }
    goto skip_1;
    // 0x8023C36C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    skip_1:
    // 0x8023C370: beq         $a1, $v1, L_8023C3D4
    if (ctx->r5 == ctx->r3) {
        // 0x8023C374: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C3D4;
    }
    // 0x8023C374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C378: j           L_8023C4F4
    // 0x8023C37C: nop

        goto L_8023C4F4;
    // 0x8023C37C: nop

L_8023C380:
    // 0x8023C380: beq         $a1, $v0, L_8023C3D4
    if (ctx->r5 == ctx->r2) {
        // 0x8023C384: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C3D4;
    }
    // 0x8023C384: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C388: j           L_8023C4F4
    // 0x8023C38C: nop

        goto L_8023C4F4;
    // 0x8023C38C: nop

L_8023C390:
    // 0x8023C390: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x8023C394: beq         $a1, $v0, L_8023C3FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023C398: slti        $v0, $a1, 0x191
        ctx->r2 = SIGNED(ctx->r5) < 0X191 ? 1 : 0;
            goto L_8023C3FC;
    }
    // 0x8023C398: slti        $v0, $a1, 0x191
    ctx->r2 = SIGNED(ctx->r5) < 0X191 ? 1 : 0;
    // 0x8023C39C: beq         $v0, $zero, L_8023C3B4
    if (ctx->r2 == 0) {
        // 0x8023C3A0: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_8023C3B4;
    }
    // 0x8023C3A0: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x8023C3A4: beq         $a1, $v0, L_8023C3D4
    if (ctx->r5 == ctx->r2) {
        // 0x8023C3A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C3D4;
    }
    // 0x8023C3A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C3AC: j           L_8023C4F4
    // 0x8023C3B0: nop

        goto L_8023C4F4;
    // 0x8023C3B0: nop

L_8023C3B4:
    // 0x8023C3B4: addiu       $v0, $zero, 0x19A
    ctx->r2 = ADD32(0, 0X19A);
    // 0x8023C3B8: beq         $a1, $v0, L_8023C3D0
    if (ctx->r5 == ctx->r2) {
        // 0x8023C3BC: addiu       $v0, $zero, 0x1D6
        ctx->r2 = ADD32(0, 0X1D6);
            goto L_8023C3D0;
    }
    // 0x8023C3BC: addiu       $v0, $zero, 0x1D6
    ctx->r2 = ADD32(0, 0X1D6);
    // 0x8023C3C0: beq         $a1, $v0, L_8023C400
    if (ctx->r5 == ctx->r2) {
        // 0x8023C3C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C400;
    }
    // 0x8023C3C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C3C8: j           L_8023C4F4
    // 0x8023C3CC: nop

        goto L_8023C4F4;
    // 0x8023C3CC: nop

L_8023C3D0:
    // 0x8023C3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023C3D4:
    // 0x8023C3D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C3D8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_8023C3DC:
    // 0x8023C3DC: jal         0x8023C510
    // 0x8023C3E0: nop

    func_8023C510_ovl28(rdram, ctx);
        goto after_28;
    // 0x8023C3E0: nop

    after_28:
    // 0x8023C3E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C3E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C3EC: jal         0x8023C538
    // 0x8023C3F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023C538_ovl28(rdram, ctx);
        goto after_29;
    // 0x8023C3F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_29:
    // 0x8023C3F4: j           L_8023C4F4
    // 0x8023C3F8: nop

        goto L_8023C4F4;
    // 0x8023C3F8: nop

L_8023C3FC:
    // 0x8023C3FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023C400:
    // 0x8023C400: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C404: jal         0x8023C510
    // 0x8023C408: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C510_ovl28(rdram, ctx);
        goto after_30;
    // 0x8023C408: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_30:
    // 0x8023C40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C410: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C414: jal         0x8023C538
    // 0x8023C418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C538_ovl28(rdram, ctx);
        goto after_31;
    // 0x8023C418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_31:
    // 0x8023C41C: j           L_8023C4F4
    // 0x8023C420: nop

        goto L_8023C4F4;
    // 0x8023C420: nop

L_8023C424:
    // 0x8023C424: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C428: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023C4F4;
    }
    // 0x8023C428: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023C42C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C430: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C434: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C4F4;
    }
    // 0x8023C434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C438: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C43C: jal         0x8023C510
    // 0x8023C440: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023C510_ovl28(rdram, ctx);
        goto after_32;
    // 0x8023C440: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_32:
    // 0x8023C444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C44C: jal         0x8023C538
    // 0x8023C450: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023C538_ovl28(rdram, ctx);
        goto after_33;
    // 0x8023C450: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_33:
    // 0x8023C454: j           L_8023C4DC
    // 0x8023C458: nop

        goto L_8023C4DC;
    // 0x8023C458: nop

L_8023C45C:
    // 0x8023C45C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C460: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8023C464: bne         $v1, $v0, L_8023C494
    if (ctx->r3 != ctx->r2) {
        // 0x8023C468: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023C494;
    }
    // 0x8023C468: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023C46C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C470: bne         $v1, $v0, L_8023C494
    if (ctx->r3 != ctx->r2) {
        // 0x8023C474: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023C494;
    }
    // 0x8023C474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C47C: jal         0x8023C510
    // 0x8023C480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C510_ovl28(rdram, ctx);
        goto after_34;
    // 0x8023C480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_34:
    // 0x8023C484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C48C: jal         0x8023C538
    // 0x8023C490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023C538_ovl28(rdram, ctx);
        goto after_35;
    // 0x8023C490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_35:
L_8023C494:
    // 0x8023C494: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023C498: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8023C49C: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C4A0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8023C4F4;
    }
    // 0x8023C4A0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023C4A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023C4A8: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8023C4AC: j           L_8023C4DC
    // 0x8023C4B0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8023C4DC;
    // 0x8023C4B0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8023C4B4:
    // 0x8023C4B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C4B8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023C4BC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023C4C0: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8023C4C4: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C4C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C4F4;
    }
    // 0x8023C4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C4CC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023C4D0: bne         $v1, $v0, L_8023C4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023C4D4: nop
    
            goto L_8023C4F4;
    }
    // 0x8023C4D4: nop

    // 0x8023C4D8: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
L_8023C4DC:
    // 0x8023C4DC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023C4E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C4E4: j           L_8023C4F4
    // 0x8023C4E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023C4F4;
    // 0x8023C4E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023C4EC:
    // 0x8023C4EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C4F0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8023C4F4:
    // 0x8023C4F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023C4F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C4FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C500: jr          $ra
    // 0x8023C504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802470AC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802470AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802470B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802470B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802470B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802470BC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802470C0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802470C4: beq         $v0, $zero, L_8024717C
    if (ctx->r2 == 0) {
        // 0x802470C8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024717C;
    }
    // 0x802470C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802470CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802470D0: addu        $at, $at, $v0
    gpr jr_addend_802470D8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802470D4: lw          $v0, 0x6288($at)
    ctx->r2 = ADD32(ctx->r1, 0X6288);
    // 0x802470D8: jr          $v0
    // 0x802470DC: nop

    switch (jr_addend_802470D8 >> 2) {
        case 0: goto L_802470E0; break;
        case 1: goto L_8024710C; break;
        case 2: goto L_80247134; break;
        case 3: goto L_80247158; break;
        case 4: goto L_8024717C; break;
        default: switch_error(__func__, 0x802470D8, 0x80256288);
    }
    // 0x802470DC: nop

L_802470E0:
    // 0x802470E0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802470E4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802470E8: bne         $v1, $v0, L_8024717C
    if (ctx->r3 != ctx->r2) {
        // 0x802470EC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8024717C;
    }
    // 0x802470EC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802470F0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802470F4: bne         $v1, $v0, L_8024717C
    if (ctx->r3 != ctx->r2) {
        // 0x802470F8: nop
    
            goto L_8024717C;
    }
    // 0x802470F8: nop

    // 0x802470FC: jal         0x802476B0
    // 0x80247100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802476B0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80247100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80247104: j           L_80247170
    // 0x80247108: nop

        goto L_80247170;
    // 0x80247108: nop

L_8024710C:
    // 0x8024710C: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x80247110: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80247114: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80247118: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x8024711C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247120: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80247124: beq         $v0, $v1, L_80247170
    if (ctx->r2 == ctx->r3) {
        // 0x80247128: nop
    
            goto L_80247170;
    }
    // 0x80247128: nop

    // 0x8024712C: j           L_8024717C
    // 0x80247130: nop

        goto L_8024717C;
    // 0x80247130: nop

L_80247134:
    // 0x80247134: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80247138: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8024713C: bne         $v1, $v0, L_8024717C
    if (ctx->r3 != ctx->r2) {
        // 0x80247140: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8024717C;
    }
    // 0x80247140: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80247144: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247148: beq         $v1, $v0, L_80247170
    if (ctx->r3 == ctx->r2) {
        // 0x8024714C: nop
    
            goto L_80247170;
    }
    // 0x8024714C: nop

    // 0x80247150: j           L_8024717C
    // 0x80247154: nop

        goto L_8024717C;
    // 0x80247154: nop

L_80247158:
    // 0x80247158: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x8024715C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80247160: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x80247164: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247168: bne         $v0, $zero, L_8024717C
    if (ctx->r2 != 0) {
        // 0x8024716C: nop
    
            goto L_8024717C;
    }
    // 0x8024716C: nop

L_80247170:
    // 0x80247170: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80247174: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247178: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024717C:
    // 0x8024717C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247184: jr          $ra
    // 0x80247188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802324D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324D8: lbu         $v1, 0xAC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAC);
    // 0x802324DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802324E0: beq         $v1, $v0, L_802324EC
    if (ctx->r3 == ctx->r2) {
        // 0x802324E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802324EC;
    }
    // 0x802324E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802324E8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_802324EC:
    // 0x802324EC: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802324F0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802324F4: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x802324F8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802324FC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80232500: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232504: jr          $ra
    // 0x80232508: sh          $v0, 0x384($a0)
    MEM_H(0X384, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80232508: sh          $v0, 0x384($a0)
    MEM_H(0X384, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8023A8A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A8A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A8A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A8A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A8AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A8B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A8B4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023A8B8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023A8BC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023A8C0: jal         0x8004F820
    // 0x8023A8C4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023A8C4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x8023A8C8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023A8CC: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A8D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A8D4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023A8D8: beq         $a0, $zero, L_8023A900
    if (ctx->r4 == 0) {
        // 0x8023A8DC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023A900;
    }
    // 0x8023A8DC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023A8E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A8E4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8023A8E8: jal         0x80050294
    // 0x8023A8EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023A8EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023A8F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A8F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A8F8: j           L_8023A958
    // 0x8023A8FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A958;
    // 0x8023A8FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A900:
    // 0x8023A900: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023A904: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A908: bne         $v1, $v0, L_8023A920
    if (ctx->r3 != ctx->r2) {
        // 0x8023A90C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8023A920;
    }
    // 0x8023A90C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023A910: addiu       $v0, $zero, -0x600
    ctx->r2 = ADD32(0, -0X600);
    // 0x8023A914: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023A918: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023A91C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023A920:
    // 0x8023A920: bne         $v1, $v0, L_8023A92C
    if (ctx->r3 != ctx->r2) {
        // 0x8023A924: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_8023A92C;
    }
    // 0x8023A924: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x8023A928: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8023A92C:
    // 0x8023A92C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023A930: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023A934: beql        $v1, $v0, L_8023A93C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A938: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8023A93C;
    }
    goto skip_0;
    // 0x8023A938: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8023A93C:
    // 0x8023A93C: jal         0x8005044C
    // 0x8023A940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8023A940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023A944: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023A948: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023A94C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023A950: jal         0x8004DA90
    // 0x8023A954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023A954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023A958:
    // 0x8023A958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A95C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A960: jr          $ra
    // 0x8023A964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802261A8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A8: jr          $ra
    // 0x802261AC: nop

    TRACE_RETURN()
    return;
    // 0x802261AC: nop

;}
RECOMP_FUNC void func_802487D4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802487D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802487D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802487DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802487E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802487E4: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x802487E8: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x802487EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802487F0: bne         $v1, $v0, L_802487FC
    if (ctx->r3 != ctx->r2) {
        // 0x802487F4: addiu       $v0, $zero, 0x2F
        ctx->r2 = ADD32(0, 0X2F);
            goto L_802487FC;
    }
    // 0x802487F4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x802487F8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_802487FC:
    // 0x802487FC: jal         0x802492D0
    // 0x80248800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802492D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80248800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80248804: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x80248808: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024880C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248810: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80248814: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80248818: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8024881C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248820: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248824: jr          $ra
    // 0x80248828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241AE8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241AE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241AEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241AF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241AF4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80241AF8: lui         $a1, 0xFF
    ctx->r5 = S32(0XFF << 16);
    // 0x80241AFC: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80241B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80241B04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80241B08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241B0C: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80241B10: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x80241B14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241B18: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
L_80241B1C:
    // 0x80241B1C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80241B20: and         $s2, $v0, $a1
    ctx->r18 = ctx->r2 & ctx->r5;
    // 0x80241B24: bne         $s2, $zero, L_80241B38
    if (ctx->r18 != 0) {
        // 0x80241B28: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80241B38;
    }
    // 0x80241B28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80241B2C: slti        $v0, $v1, 0x12
    ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x80241B30: bne         $v0, $zero, L_80241B1C
    if (ctx->r2 != 0) {
        // 0x80241B34: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80241B1C;
    }
    // 0x80241B34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_80241B38:
    // 0x80241B38: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x80241B3C: addiu       $v0, $s1, 0x88
    ctx->r2 = ADD32(ctx->r17, 0X88);
L_80241B40:
    // 0x80241B40: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80241B44: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80241B48: bgez        $v1, L_80241B40
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80241B4C: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_80241B40;
    }
    // 0x80241B4C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80241B50: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80241B54: slt         $v0, $v0, $s2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80241B58: beq         $v0, $zero, L_80241BA0
    if (ctx->r2 == 0) {
        // 0x80241B5C: nop
    
            goto L_80241BA0;
    }
    // 0x80241B5C: nop

    // 0x80241B60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80241B64: lh          $v0, 0x4A1E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A1E);
    // 0x80241B68: bltz        $v0, L_80241B98
    if (SIGNED(ctx->r2) < 0) {
        // 0x80241B6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241B98;
    }
    // 0x80241B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80241B74: sb          $v0, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r2;
    // 0x80241B78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80241B7C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80241B80: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80241B84: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80241B88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80241B8C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80241B90: j           L_80241BD0
    // 0x80241B94: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80241BD0;
    // 0x80241B94: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80241B98:
    // 0x80241B98: j           L_80241BD0
    // 0x80241B9C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
        goto L_80241BD0;
    // 0x80241B9C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_80241BA0:
    // 0x80241BA0: beq         $s2, $zero, L_80241BC8
    if (ctx->r18 == 0) {
        // 0x80241BA4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80241BC8;
    }
    // 0x80241BA4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80241BA8: jal         0x8002A33C
    // 0x80241BAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80241BAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80241BB0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80241BB4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80241BB8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80241BBC: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80241BC0: j           L_80241BD0
    // 0x80241BC4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
        goto L_80241BD0;
    // 0x80241BC4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_80241BC8:
    // 0x80241BC8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80241BCC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80241BD0:
    // 0x80241BD0: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80241BD4: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x80241BD8: beq         $v1, $v0, L_80241E70
    if (ctx->r3 == ctx->r2) {
        // 0x80241BDC: nop
    
            goto L_80241E70;
    }
    // 0x80241BDC: nop

    // 0x80241BE0: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    // 0x80241BE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80241BE8: sra         $a0, $v0, 22
    ctx->r4 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80241BEC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80241BF0: addu        $a2, $v0, $a0
    ctx->r6 = ADD32(ctx->r2, ctx->r4);
    // 0x80241BF4: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80241BF8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241BFC: bne         $v0, $zero, L_80241C20
    if (ctx->r2 != 0) {
        // 0x80241C00: sll         $a3, $a2, 2
        ctx->r7 = S32(ctx->r6 << 2);
            goto L_80241C20;
    }
    // 0x80241C00: sll         $a3, $a2, 2
    ctx->r7 = S32(ctx->r6 << 2);
    // 0x80241C04: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241C08: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80241C0C: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241C10: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80241E70;
    }
    // 0x80241C10: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80241C14: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    // 0x80241C18: j           L_80241E68
    // 0x80241C1C: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
        goto L_80241E68;
    // 0x80241C1C: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
L_80241C20:
    // 0x80241C20: slt         $v0, $a3, $v1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241C24: bne         $v0, $zero, L_80241C5C
    if (ctx->r2 != 0) {
        // 0x80241C28: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_80241C5C;
    }
    // 0x80241C28: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80241C2C: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241C30: srl         $v0, $v1, 1
    ctx->r2 = S32(U32(ctx->r3) >> 1);
    // 0x80241C34: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241C38: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241C3C: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_80241E70;
    }
    // 0x80241C3C: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x80241C40: jal         0x800A3450
    // 0x80241C44: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241C44: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80241C48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241C4C: beq         $v0, $zero, L_80241E64
    if (ctx->r2 == 0) {
        // 0x80241C50: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E64;
    }
    // 0x80241C50: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x80241C54: j           L_80241E68
    // 0x80241C58: nop

        goto L_80241E68;
    // 0x80241C58: nop

L_80241C5C:
    // 0x80241C5C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241C60: bne         $v0, $zero, L_80241C88
    if (ctx->r2 != 0) {
        // 0x80241C64: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_80241C88;
    }
    // 0x80241C64: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80241C68: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241C6C: srl         $v0, $v1, 2
    ctx->r2 = S32(U32(ctx->r3) >> 2);
    // 0x80241C70: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241C74: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241C78: ori         $v0, $v1, 0x4
        ctx->r2 = ctx->r3 | 0X4;
            goto L_80241E70;
    }
    // 0x80241C78: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x80241C7C: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    // 0x80241C80: j           L_80241E68
    // 0x80241C84: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
        goto L_80241E68;
    // 0x80241C84: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
L_80241C88:
    // 0x80241C88: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80241C8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80241C90: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x80241C94: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241C98: bne         $v0, $zero, L_80241CD0
    if (ctx->r2 != 0) {
        // 0x80241C9C: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_80241CD0;
    }
    // 0x80241C9C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x80241CA0: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241CA4: srl         $v0, $v1, 3
    ctx->r2 = S32(U32(ctx->r3) >> 3);
    // 0x80241CA8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241CAC: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241CB0: ori         $v0, $v1, 0x8
        ctx->r2 = ctx->r3 | 0X8;
            goto L_80241E70;
    }
    // 0x80241CB0: ori         $v0, $v1, 0x8
    ctx->r2 = ctx->r3 | 0X8;
    // 0x80241CB4: jal         0x800A3450
    // 0x80241CB8: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241CB8: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80241CBC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241CC0: beq         $v0, $zero, L_80241E64
    if (ctx->r2 == 0) {
        // 0x80241CC4: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E64;
    }
    // 0x80241CC4: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x80241CC8: j           L_80241E68
    // 0x80241CCC: nop

        goto L_80241E68;
    // 0x80241CCC: nop

L_80241CD0:
    // 0x80241CD0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80241CD4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241CD8: bne         $v0, $zero, L_80241D10
    if (ctx->r2 != 0) {
        // 0x80241CDC: sll         $v0, $a0, 5
        ctx->r2 = S32(ctx->r4 << 5);
            goto L_80241D10;
    }
    // 0x80241CDC: sll         $v0, $a0, 5
    ctx->r2 = S32(ctx->r4 << 5);
    // 0x80241CE0: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241CE4: srl         $v0, $v1, 4
    ctx->r2 = S32(U32(ctx->r3) >> 4);
    // 0x80241CE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241CEC: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241CF0: ori         $v0, $v1, 0x10
        ctx->r2 = ctx->r3 | 0X10;
            goto L_80241E70;
    }
    // 0x80241CF0: ori         $v0, $v1, 0x10
    ctx->r2 = ctx->r3 | 0X10;
    // 0x80241CF4: jal         0x800A3450
    // 0x80241CF8: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80241CF8: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_3:
    // 0x80241CFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241D00: beq         $v0, $zero, L_80241E64
    if (ctx->r2 == 0) {
        // 0x80241D04: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E64;
    }
    // 0x80241D04: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x80241D08: j           L_80241E68
    // 0x80241D0C: nop

        goto L_80241E68;
    // 0x80241D0C: nop

L_80241D10:
    // 0x80241D10: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241D14: bne         $v0, $zero, L_80241D3C
    if (ctx->r2 != 0) {
        // 0x80241D18: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_80241D3C;
    }
    // 0x80241D18: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80241D1C: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241D20: srl         $v0, $v1, 5
    ctx->r2 = S32(U32(ctx->r3) >> 5);
    // 0x80241D24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241D28: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241D2C: ori         $v0, $v1, 0x20
        ctx->r2 = ctx->r3 | 0X20;
            goto L_80241E70;
    }
    // 0x80241D2C: ori         $v0, $v1, 0x20
    ctx->r2 = ctx->r3 | 0X20;
    // 0x80241D30: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    // 0x80241D34: j           L_80241E68
    // 0x80241D38: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
        goto L_80241E68;
    // 0x80241D38: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
L_80241D3C:
    // 0x80241D3C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241D40: bne         $v0, $zero, L_80241D78
    if (ctx->r2 != 0) {
        // 0x80241D44: subu        $v0, $a3, $a0
        ctx->r2 = SUB32(ctx->r7, ctx->r4);
            goto L_80241D78;
    }
    // 0x80241D44: subu        $v0, $a3, $a0
    ctx->r2 = SUB32(ctx->r7, ctx->r4);
    // 0x80241D48: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241D4C: srl         $v0, $v1, 6
    ctx->r2 = S32(U32(ctx->r3) >> 6);
    // 0x80241D50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241D54: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241D58: ori         $v0, $v1, 0x40
        ctx->r2 = ctx->r3 | 0X40;
            goto L_80241E70;
    }
    // 0x80241D58: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x80241D5C: jal         0x800A3450
    // 0x80241D60: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80241D60: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_4:
    // 0x80241D64: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241D68: beq         $v0, $zero, L_80241E64
    if (ctx->r2 == 0) {
        // 0x80241D6C: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E64;
    }
    // 0x80241D6C: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x80241D70: j           L_80241E68
    // 0x80241D74: nop

        goto L_80241E68;
    // 0x80241D74: nop

L_80241D78:
    // 0x80241D78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80241D7C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241D80: bne         $v0, $zero, L_80241DB8
    if (ctx->r2 != 0) {
        // 0x80241D84: sll         $a1, $a2, 4
        ctx->r5 = S32(ctx->r6 << 4);
            goto L_80241DB8;
    }
    // 0x80241D84: sll         $a1, $a2, 4
    ctx->r5 = S32(ctx->r6 << 4);
    // 0x80241D88: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241D8C: srl         $v0, $v1, 7
    ctx->r2 = S32(U32(ctx->r3) >> 7);
    // 0x80241D90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241D94: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241D98: ori         $v0, $v1, 0x80
        ctx->r2 = ctx->r3 | 0X80;
            goto L_80241E70;
    }
    // 0x80241D98: ori         $v0, $v1, 0x80
    ctx->r2 = ctx->r3 | 0X80;
    // 0x80241D9C: jal         0x800A3450
    // 0x80241DA0: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80241DA0: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_5:
    // 0x80241DA4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241DA8: beq         $v0, $zero, L_80241E64
    if (ctx->r2 == 0) {
        // 0x80241DAC: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E64;
    }
    // 0x80241DAC: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x80241DB0: j           L_80241E68
    // 0x80241DB4: nop

        goto L_80241E68;
    // 0x80241DB4: nop

L_80241DB8:
    // 0x80241DB8: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241DBC: bne         $v0, $zero, L_80241DE4
    if (ctx->r2 != 0) {
        // 0x80241DC0: addu        $v0, $a2, $a1
        ctx->r2 = ADD32(ctx->r6, ctx->r5);
            goto L_80241DE4;
    }
    // 0x80241DC0: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x80241DC4: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241DC8: srl         $v0, $v1, 8
    ctx->r2 = S32(U32(ctx->r3) >> 8);
    // 0x80241DCC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241DD0: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241DD4: ori         $v0, $v1, 0x100
        ctx->r2 = ctx->r3 | 0X100;
            goto L_80241E70;
    }
    // 0x80241DD4: ori         $v0, $v1, 0x100
    ctx->r2 = ctx->r3 | 0X100;
    // 0x80241DD8: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    // 0x80241DDC: j           L_80241E68
    // 0x80241DE0: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
        goto L_80241E68;
    // 0x80241DE0: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
L_80241DE4:
    // 0x80241DE4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241DE8: bne         $v0, $zero, L_80241E20
    if (ctx->r2 != 0) {
        // 0x80241DEC: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_80241E20;
    }
    // 0x80241DEC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80241DF0: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241DF4: srl         $v0, $v1, 9
    ctx->r2 = S32(U32(ctx->r3) >> 9);
    // 0x80241DF8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241DFC: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241E00: ori         $v0, $v1, 0x200
        ctx->r2 = ctx->r3 | 0X200;
            goto L_80241E70;
    }
    // 0x80241E00: ori         $v0, $v1, 0x200
    ctx->r2 = ctx->r3 | 0X200;
    // 0x80241E04: jal         0x800A3450
    // 0x80241E08: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80241E08: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_6:
    // 0x80241E0C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241E10: beq         $v0, $zero, L_80241E64
    if (ctx->r2 == 0) {
        // 0x80241E14: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E64;
    }
    // 0x80241E14: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
    // 0x80241E18: j           L_80241E68
    // 0x80241E1C: nop

        goto L_80241E68;
    // 0x80241E1C: nop

L_80241E20:
    // 0x80241E20: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80241E24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80241E28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80241E2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80241E30: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241E34: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241E38: nop
    
            goto L_80241E70;
    }
    // 0x80241E38: nop

    // 0x80241E3C: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80241E40: srl         $v0, $v1, 10
    ctx->r2 = S32(U32(ctx->r3) >> 10);
    // 0x80241E44: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241E48: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241E4C: ori         $v0, $v1, 0x400
        ctx->r2 = ctx->r3 | 0X400;
            goto L_80241E70;
    }
    // 0x80241E4C: ori         $v0, $v1, 0x400
    ctx->r2 = ctx->r3 | 0X400;
    // 0x80241E50: jal         0x800A3450
    // 0x80241E54: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80241E54: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    after_7:
    // 0x80241E58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241E5C: bne         $v0, $zero, L_80241E68
    if (ctx->r2 != 0) {
        // 0x80241E60: addiu       $a0, $zero, 0x1FA
        ctx->r4 = ADD32(0, 0X1FA);
            goto L_80241E68;
    }
    // 0x80241E60: addiu       $a0, $zero, 0x1FA
    ctx->r4 = ADD32(0, 0X1FA);
L_80241E64:
    // 0x80241E64: addiu       $a0, $zero, 0x1FB
    ctx->r4 = ADD32(0, 0X1FB);
L_80241E68:
    // 0x80241E68: jal         0x8002A33C
    // 0x80241E6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80241E6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
L_80241E70:
    // 0x80241E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80241E74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80241E78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241E7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241E80: jr          $ra
    // 0x80241E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80241E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232494_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232494: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80232498: sh          $v0, 0x37C($a0)
    MEM_H(0X37C, ctx->r4) = ctx->r2;
    // 0x8023249C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802324A0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802324A4: jr          $ra
    // 0x802324A8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x802324A8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80232D9C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D9C: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80232DA0: bgez        $v0, L_80232DD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232DA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232DD0;
    }
    // 0x80232DA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232DA8: lh          $v1, 0x34C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34C);
    // 0x80232DAC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80232DB0: bne         $v1, $zero, L_80232DD0
    if (ctx->r3 != 0) {
        // 0x80232DB4: sb          $v0, 0x9($a0)
        MEM_B(0X9, ctx->r4) = ctx->r2;
            goto L_80232DD0;
    }
    // 0x80232DB4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80232DB8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80232DBC: bne         $v0, $zero, L_80232DC8
    if (ctx->r2 != 0) {
        // 0x80232DC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232DC8;
    }
    // 0x80232DC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232DC4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80232DC8:
    // 0x80232DC8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80232DCC: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80232DD0:
    // 0x80232DD0: jr          $ra
    // 0x80232DD4: nop

    TRACE_RETURN()
    return;
    // 0x80232DD4: nop

;}
RECOMP_FUNC void func_80243AD8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243AD8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80243ADC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80243AE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243AE4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80243AE8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80243AEC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80243AF0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80243AF4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80243AF8: jal         0x80053ED8
    // 0x80243AFC: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80243AFC: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x80243B00: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x80243B04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80243B08: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80243B0C: addiu       $a1, $s1, 0x8C
    ctx->r5 = ADD32(ctx->r17, 0X8C);
    // 0x80243B10: jal         0x8009A3B4
    // 0x80243B14: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80243B14: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x80243B18: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80243B1C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80243B20: jal         0x8009A3B4
    // 0x80243B24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80243B24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80243B28: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80243B2C: jal         0x8002C654
    // 0x80243B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80243B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80243B34: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x80243B38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80243B3C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80243B40: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80243B44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80243B48: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80243B4C: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x80243B50: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
    // 0x80243B54: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80243B58: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80243B5C: jal         0x80031600
    // 0x80243B60: sh          $v1, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x80243B60: sh          $v1, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r3;
    after_4:
    // 0x80243B64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80243B68: addiu       $s4, $sp, 0x30
    ctx->r20 = ADD32(ctx->r29, 0X30);
    // 0x80243B6C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80243B70: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80243B74: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80243B78: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80243B7C: jal         0x80031DA8
    // 0x80243B80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80243B80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_5:
    // 0x80243B84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80243B88: jal         0x80030834
    // 0x80243B8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80030834_BC34(rdram, ctx);
        goto after_6;
    // 0x80243B8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80243B90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80243B94: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80243B98: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80243B9C: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80243BA0: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x80243BA4: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
    // 0x80243BA8: jal         0x800308E8
    // 0x80243BAC: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_7;
    // 0x80243BAC: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    after_7:
    // 0x80243BB0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80243BB4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80243BB8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243BBC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80243BC0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80243BC4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80243BC8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243BCC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80243BD0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80243BD4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80243BD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243BDC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80243BE0: lh          $v1, 0x48($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X48);
    // 0x80243BE4: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80243BE8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80243BEC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243BF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243BF4: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80243BF8: lh          $v1, 0x4A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X4A);
    // 0x80243BFC: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80243C00: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80243C04: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243C08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243C0C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80243C10: lh          $v0, 0x4C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4C);
    // 0x80243C14: lh          $v1, 0x48($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X48);
    // 0x80243C18: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80243C1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243C20: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80243C24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243C28: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80243C2C: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80243C30: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80243C34: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x80243C38: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80243C3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80243C40: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80243C44: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x80243C48: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80243C4C: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
    // 0x80243C50: sh          $a3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r7;
    // 0x80243C54: jal         0x8009A3B4
    // 0x80243C58: sh          $a3, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80243C58: sh          $a3, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r7;
    after_8:
    // 0x80243C5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80243C60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80243C64: jal         0x8009A3B4
    // 0x80243C68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80243C68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80243C6C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80243C70: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80243C74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243C78: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80243C7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243C80: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80243C84: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80243C88: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80243C8C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80243C90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243C94: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80243C98: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243C9C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80243CA0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80243CA4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80243CA8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80243CAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243CB0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80243CB4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243CB8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80243CBC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80243CC0: addiu       $v0, $zero, 0x1400
    ctx->r2 = ADD32(0, 0X1400);
    // 0x80243CC4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80243CC8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80243CCC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243CD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80243CD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80243CD8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80243CDC: jal         0x80031DA8
    // 0x80243CE0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_10;
    // 0x80243CE0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_10:
    // 0x80243CE4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80243CE8: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x80243CEC: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80243CF0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80243CF4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80243CF8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80243CFC: jr          $ra
    // 0x80243D00: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80243D00: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80226DB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226DB4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80226DB8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80226DBC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80226DC0: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x80226DC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80226DC8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80226DCC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80226DD0: sll         $s6, $a3, 24
    ctx->r22 = S32(ctx->r7 << 24);
    // 0x80226DD4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80226DD8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80226DDC: sra         $s3, $a2, 16
    ctx->r19 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226DE0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80226DE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226DE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226DEC: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
L_80226DF0:
    // 0x80226DF0: ori         $v1, $v1, 0xC0
    ctx->r3 = ctx->r3 | 0XC0;
    // 0x80226DF4: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80226DF8: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80226DFC: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x80226E00: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80226E04: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x80226E08: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226E0C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80226E10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E14: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226E18: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80226E1C: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x80226E20: sw          $s6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r22;
    // 0x80226E24: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80226E28: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80226E2C: sh          $s4, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r20;
    // 0x80226E30: jal         0x80032498
    // 0x80226E34: sh          $s5, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r21;
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x80226E34: sh          $s5, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r21;
    after_0:
    // 0x80226E38: nop

    // 0x80226E3C: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226E40: mflo        $v0
    ctx->r2 = lo;
    // 0x80226E44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E48: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80226E4C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80226E50: jal         0x800324B4
    // 0x80226E54: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80226E54: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    after_1:
    // 0x80226E58: nop

    // 0x80226E5C: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226E60: mflo        $v0
    ctx->r2 = lo;
    // 0x80226E64: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80226E68: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x80226E6C: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80226E70: sll         $v1, $s0, 4
    ctx->r3 = S32(ctx->r16 << 4);
    // 0x80226E74: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80226E78: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80226E7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E80: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80226E84: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x80226E88: jal         0x80032498
    // 0x80226E8C: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80226E8C: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    after_2:
    // 0x80226E90: nop

    // 0x80226E94: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226E98: mflo        $v0
    ctx->r2 = lo;
    // 0x80226E9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226EA0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80226EA4: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80226EA8: jal         0x800324B4
    // 0x80226EAC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80226EAC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x80226EB0: nop

    // 0x80226EB4: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226EB8: mflo        $v0
    ctx->r2 = lo;
    // 0x80226EBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226EC0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80226EC4: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x80226EC8: jal         0x80032498
    // 0x80226ECC: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80226ECC: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    after_4:
    // 0x80226ED0: nop

    // 0x80226ED4: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226ED8: mflo        $v0
    ctx->r2 = lo;
    // 0x80226EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226EE0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80226EE4: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80226EE8: jal         0x800324B4
    // 0x80226EEC: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x80226EEC: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_5:
    // 0x80226EF0: nop

    // 0x80226EF4: mult        $s3, $v0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226EF8: mflo        $v0
    ctx->r2 = lo;
    // 0x80226EFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226F00: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226F04: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80226F08: lw          $v1, -0x5858($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5858);
    // 0x80226F0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226F10: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80226F14: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80226F18: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226F1C: sw          $v1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r3;
    // 0x80226F20: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80226F24: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x80226F28: jal         0x8002FD30
    // 0x80226F2C: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    func_8002FD30_B130(rdram, ctx);
        goto after_6;
    // 0x80226F2C: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    after_6:
    // 0x80226F30: slti        $v0, $s2, 0x18
    ctx->r2 = SIGNED(ctx->r18) < 0X18 ? 1 : 0;
    // 0x80226F34: bne         $v0, $zero, L_80226DF0
    if (ctx->r2 != 0) {
        // 0x80226F38: lui         $v1, 0xFF00
        ctx->r3 = S32(0XFF00 << 16);
            goto L_80226DF0;
    }
    // 0x80226F38: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x80226F3C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80226F40: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80226F44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226F4C: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
    // 0x80226F50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80226F54: jal         0x8003055C
    // 0x80226F58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_7;
    // 0x80226F58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80226F5C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226F60: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226F64: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80226F68: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80226F6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226F70: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80226F74: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226F78: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80226F7C: jal         0x8002FD30
    // 0x80226F80: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_8;
    // 0x80226F80: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_8:
    // 0x80226F84: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80226F88: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80226F8C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80226F90: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80226F94: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80226F98: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80226F9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226FA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226FA4: jr          $ra
    // 0x80226FA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226FA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80235FC8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235FC8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235FCC: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235FD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235FD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235FDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235FE0: bne         $v1, $v0, L_80236010
    if (ctx->r3 != ctx->r2) {
        // 0x80235FE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80236010;
    }
    // 0x80235FE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235FE8: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80235FEC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235FF0: lw          $v0, 0x3C44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C44);
    // 0x80235FF4: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
    // 0x80235FF8: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x80235FFC: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80236000: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236004: lw          $v0, 0x3BF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BF0);
    // 0x80236008: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x8023600C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_80236010:
    // 0x80236010: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80236014: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80236018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023601C: jal         0x8004DA90
    // 0x80236020: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80236020: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80236024: jal         0x8005044C
    // 0x80236028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023602C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236034: jr          $ra
    // 0x80236038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024B51C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B51C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B520: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B524: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024B528: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B52C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B530: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B534: lw          $v0, 0x52F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X52F0);
    // 0x8024B538: jalr        $v0
    // 0x8024B53C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024B53C: nop

    after_0:
    // 0x8024B540: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B544: jr          $ra
    // 0x8024B548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D570_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D574: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D578: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D57C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D580: jal         0x8004EFE4
    // 0x8022D584: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022D584: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022D588: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D58C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022D590: beq         $v1, $zero, L_8022D67C
    if (ctx->r3 == 0) {
        // 0x8022D594: sw          $v1, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r3;
            goto L_8022D67C;
    }
    // 0x8022D594: sw          $v1, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r3;
    // 0x8022D598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D59C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022D5A0: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022D5A4: bne         $v0, $zero, L_8022D600
    if (ctx->r2 != 0) {
        // 0x8022D5A8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022D600;
    }
    // 0x8022D5A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D5AC: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022D5B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D5B4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022D5B8: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
    // 0x8022D5BC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022D5C0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022D5C4: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022D5C8: lui         $v1, 0xFFC4
    ctx->r3 = S32(0XFFC4 << 16);
    // 0x8022D5CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D5D0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8022D5D4: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022D5D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D5DC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D5E0: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022D5E4: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022D5E8: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022D5EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D5F0: jal         0x8002A33C
    // 0x8022D5F4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022D5F4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022D5F8: j           L_8022D628
    // 0x8022D5FC: nop

        goto L_8022D628;
    // 0x8022D5FC: nop

L_8022D600:
    // 0x8022D600: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022D604: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022D608: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x8022D60C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D610: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022D614: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022D618: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022D61C: lui         $v1, 0xFFB0
    ctx->r3 = S32(0XFFB0 << 16);
    // 0x8022D620: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D624: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022D628:
    // 0x8022D628: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022D62C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022D630: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022D634: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022D638: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022D63C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022D640: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022D644: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D648: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022D64C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x8022D650: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x8022D654: jal         0x8004DD04
    // 0x8022D658: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022D658: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x8022D65C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x8022D660: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x8022D664: lh          $a2, 0x64($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X64);
    // 0x8022D668: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x8022D66C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x8022D670: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022D674: jal         0x8004DBA0
    // 0x8022D678: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022D678: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_8022D67C:
    // 0x8022D67C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D680: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D688: jr          $ra
    // 0x8022D68C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D68C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024B2EC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B2EC: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8024B2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024B2F4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8024B2F8: addiu       $v0, $zero, 0x188
    ctx->r2 = ADD32(0, 0X188);
    // 0x8024B2FC: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8024B300: addiu       $v0, $zero, -0xD4
    ctx->r2 = ADD32(0, -0XD4);
    // 0x8024B304: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8024B308: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8024B30C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x8024B310: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x8024B314: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x8024B318: sh          $zero, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = 0;
    // 0x8024B31C: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8024B320: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024B324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B328: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B32C: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x8024B330: jr          $ra
    // 0x8024B334: sh          $v0, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8024B334: sh          $v0, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022655C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022655C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022656C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226570: beql        $v0, $zero, L_80226578
    if (ctx->r2 == 0) {
        // 0x80226574: sb          $zero, 0x6($s0)
        MEM_B(0X6, ctx->r16) = 0;
            goto L_80226578;
    }
    goto skip_0;
    // 0x80226574: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    skip_0:
L_80226578:
    // 0x80226578: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022657C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226580: beq         $v0, $zero, L_80226644
    if (ctx->r2 == 0) {
        // 0x80226584: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226644;
    }
    // 0x80226584: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226588: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022658C: addu        $at, $at, $v0
    gpr jr_addend_80226594 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226590: lw          $v0, 0x5C68($at)
    ctx->r2 = ADD32(ctx->r1, 0X5C68);
    // 0x80226594: jr          $v0
    // 0x80226598: nop

    switch (jr_addend_80226594 >> 2) {
        case 0: goto L_8022659C; break;
        case 1: goto L_802265D4; break;
        case 2: goto L_8022660C; break;
        case 3: goto L_802265F4; break;
        case 4: goto L_8022661C; break;
        default: switch_error(__func__, 0x80226594, 0x80255C68);
    }
    // 0x80226598: nop

L_8022659C:
    // 0x8022659C: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x802265A0: jal         0x8004CB2C
    // 0x802265A4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x802265A4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x802265A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802265AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802265B0: jal         0x80036B00
    // 0x802265B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x802265B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802265B8: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802265BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802265C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802265C4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802265C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802265CC: j           L_80226644
    // 0x802265D0: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
        goto L_80226644;
    // 0x802265D0: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_802265D4:
    // 0x802265D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802265D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802265DC: jal         0x800739B0
    // 0x802265E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800739B0_4EDB0(rdram, ctx);
        goto after_2;
    // 0x802265E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802265E4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802265E8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802265EC: j           L_80226610
    // 0x802265F0: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_80226610;
    // 0x802265F0: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_802265F4:
    // 0x802265F4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802265F8: slti        $v0, $v0, 0x78
    ctx->r2 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x802265FC: bne         $v0, $zero, L_80226644
    if (ctx->r2 != 0) {
        // 0x80226600: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80226644;
    }
    // 0x80226600: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226604: jal         0x80036B1C
    // 0x80226608: ori         $a0, $a0, 0x3C01
    ctx->r4 = ctx->r4 | 0X3C01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x80226608: ori         $a0, $a0, 0x3C01
    ctx->r4 = ctx->r4 | 0X3C01;
    after_3:
L_8022660C:
    // 0x8022660C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_80226610:
    // 0x80226610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226614: j           L_80226644
    // 0x80226618: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80226644;
    // 0x80226618: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022661C:
    // 0x8022661C: jal         0x80036B7C
    // 0x80226620: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80226620: nop

    after_4:
    // 0x80226624: beq         $v0, $zero, L_80226644
    if (ctx->r2 == 0) {
        // 0x80226628: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226644;
    }
    // 0x80226628: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022662C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226630: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80226634: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80226638: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022663C: jal         0x800600F8
    // 0x80226640: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_5;
    // 0x80226640: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    after_5:
L_80226644:
    // 0x80226644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022664C: jr          $ra
    // 0x80226650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B8E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B8E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B8E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B8EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B8F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B8F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B8F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B8FC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023B900: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B904: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B908: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B90C: lw          $v0, 0x46CC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X46CC);
    // 0x8023B910: jalr        $v0
    // 0x8023B914: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B914: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x8023B918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B91C: jal         0x8023AE70
    // 0x8023B920: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023AE70_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023B920: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023B924: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B928: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B92C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B930: jr          $ra
    // 0x8023B934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023B938: nop

    // 0x8023B93C: nop

;}
RECOMP_FUNC void func_80227F9C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227FA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FA8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227FAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227FB0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227FB4: bne         $v0, $zero, L_80228054
    if (ctx->r2 != 0) {
        // 0x80227FB8: nop
    
            goto L_80228054;
    }
    // 0x80227FB8: nop

    // 0x80227FBC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80227FC0: jal         0x8004F418
    // 0x80227FC4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227FC4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    after_0:
    // 0x80227FC8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80227FCC: jal         0x8004F684
    // 0x80227FD0: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80227FD0: nop

    after_1:
    // 0x80227FD4: jal         0x8004F5C4
    // 0x80227FD8: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80227FD8: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    after_2:
    // 0x80227FDC: jal         0x8004F144
    // 0x80227FE0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80227FE0: nop

    after_3:
    // 0x80227FE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227FE8: beq         $a0, $zero, L_80228010
    if (ctx->r4 == 0) {
        // 0x80227FEC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80228010;
    }
    // 0x80227FEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227FF0: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80227FF4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80227FF8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80227FFC: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80228000: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
    // 0x80228004: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228008: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x8022800C: sw          $a0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r4;
L_80228010:
    // 0x80228010: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80228014: jal         0x8005FA7C
    // 0x80228018: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80228018: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    after_4:
    // 0x8022801C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228020: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80228024: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x80228028: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022802C: sb          $s1, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r17;
    // 0x80228030: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228034: sh          $zero, 0x4474($at)
    MEM_H(0X4474, ctx->r1) = 0;
    // 0x80228038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022803C: sh          $zero, 0x4476($at)
    MEM_H(0X4476, ctx->r1) = 0;
    // 0x80228040: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228044: sw          $zero, 0x446C($at)
    MEM_W(0X446C, ctx->r1) = 0;
    // 0x80228048: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022804C: j           L_80228064
    // 0x80228050: sw          $zero, 0x4470($at)
    MEM_W(0X4470, ctx->r1) = 0;
        goto L_80228064;
    // 0x80228050: sw          $zero, 0x4470($at)
    MEM_W(0X4470, ctx->r1) = 0;
L_80228054:
    // 0x80228054: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80228058: lw          $v0, 0x4C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4C);
    // 0x8022805C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x80228060: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
L_80228064:
    // 0x80228064: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228068: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022806C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228070: jr          $ra
    // 0x80228074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227B4C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227B5C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B64: beql        $v1, $v0, L_80227BC4
    if (ctx->r3 == ctx->r2) {
        // 0x80227B68: addiu       $v1, $zero, -0x81
        ctx->r3 = ADD32(0, -0X81);
            goto L_80227BC4;
    }
    goto skip_0;
    // 0x80227B68: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    skip_0:
    // 0x80227B6C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227B70: beql        $v0, $zero, L_80227B88
    if (ctx->r2 == 0) {
        // 0x80227B74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227B88;
    }
    goto skip_1;
    // 0x80227B74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80227B78: beq         $v1, $zero, L_80227BA0
    if (ctx->r3 == 0) {
        // 0x80227B7C: nop
    
            goto L_80227BA0;
    }
    // 0x80227B7C: nop

    // 0x80227B80: j           L_80227C68
    // 0x80227B84: nop

        goto L_80227C68;
    // 0x80227B84: nop

L_80227B88:
    // 0x80227B88: beq         $v1, $v0, L_80227BE8
    if (ctx->r3 == ctx->r2) {
        // 0x80227B8C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227BE8;
    }
    // 0x80227B8C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227B90: beq         $v1, $v0, L_80227C30
    if (ctx->r3 == ctx->r2) {
        // 0x80227B94: nop
    
            goto L_80227C30;
    }
    // 0x80227B94: nop

    // 0x80227B98: j           L_80227C68
    // 0x80227B9C: nop

        goto L_80227C68;
    // 0x80227B9C: nop

L_80227BA0:
    // 0x80227BA0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227BA4: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227BA8: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80227BAC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227BB0: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
    // 0x80227BB4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227BB8: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227BBC: j           L_80227C20
    // 0x80227BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227C20;
    // 0x80227BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227BC4:
    // 0x80227BC4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227BC8: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227BCC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227BD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227BD4: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
    // 0x80227BD8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227BDC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227BE0: j           L_80227C20
    // 0x80227BE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227C20;
    // 0x80227BE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227BE8:
    // 0x80227BE8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227BEC: slti        $v0, $v0, 0xB4
    ctx->r2 = SIGNED(ctx->r2) < 0XB4 ? 1 : 0;
    // 0x80227BF0: bne         $v0, $zero, L_80227C68
    if (ctx->r2 != 0) {
        // 0x80227BF4: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80227C68;
    }
    // 0x80227BF4: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80227BF8: jal         0x80036B1C
    // 0x80227BFC: ori         $a0, $a0, 0x6501
    ctx->r4 = ctx->r4 | 0X6501;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_0;
    // 0x80227BFC: ori         $a0, $a0, 0x6501
    ctx->r4 = ctx->r4 | 0X6501;
    after_0:
    // 0x80227C00: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227C04: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227C08: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80227C0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227C10: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
    // 0x80227C14: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227C18: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227C1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80227C20:
    // 0x80227C20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227C24: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80227C28: j           L_80227C68
    // 0x80227C2C: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
        goto L_80227C68;
    // 0x80227C2C: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_80227C30:
    // 0x80227C30: jal         0x80036B7C
    // 0x80227C34: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x80227C34: nop

    after_1:
    // 0x80227C38: beq         $v0, $zero, L_80227C68
    if (ctx->r2 == 0) {
        // 0x80227C3C: addiu       $v1, $zero, -0x81
        ctx->r3 = ADD32(0, -0X81);
            goto L_80227C68;
    }
    // 0x80227C3C: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    // 0x80227C40: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227C44: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227C48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C4C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227C50: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
    // 0x80227C54: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227C58: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80227C5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C60: jal         0x800600F8
    // 0x80227C64: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_2;
    // 0x80227C64: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    after_2:
L_80227C68:
    // 0x80227C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C70: jr          $ra
    // 0x80227C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262C0: jr          $ra
    // 0x802262C4: nop

    TRACE_RETURN()
    return;
    // 0x802262C4: nop

;}
RECOMP_FUNC void func_80226210_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226210: jr          $ra
    // 0x80226214: nop

    TRACE_RETURN()
    return;
    // 0x80226214: nop

;}
RECOMP_FUNC void func_80226498_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022649C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802264A0: jal         0x80226BC4
    // 0x802264A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_0;
    // 0x802264A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802264A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802264AC: jr          $ra
    // 0x802264B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024B338_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B338: lhu         $v0, 0x28($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X28);
    // 0x8024B33C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024B340: sh          $v0, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r2;
    // 0x8024B344: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024B348: bne         $v0, $zero, L_8024B354
    if (ctx->r2 != 0) {
        // 0x8024B34C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024B354;
    }
    // 0x8024B34C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024B350: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8024B354:
    // 0x8024B354: jr          $ra
    // 0x8024B358: nop

    TRACE_RETURN()
    return;
    // 0x8024B358: nop

;}
RECOMP_FUNC void func_8024B244_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B244: lb          $v0, 0xF($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XF);
    // 0x8024B248: lb          $v1, 0xF($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XF);
    // 0x8024B24C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024B250: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B254: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B258: lbu         $v0, 0x52A8($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X52A8);
    // 0x8024B25C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B260: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8024B264: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x8024B268: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B26C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B270: lbu         $v1, 0x52A9($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X52A9);
    // 0x8024B274: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B278: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x8024B27C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024B280: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024B284: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8024B288: bne         $v0, $zero, L_8024B298
    if (ctx->r2 != 0) {
        // 0x8024B28C: sb          $v1, 0x23($a0)
        MEM_B(0X23, ctx->r4) = ctx->r3;
            goto L_8024B298;
    }
    // 0x8024B28C: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
    // 0x8024B290: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024B294: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8024B298:
    // 0x8024B298: jr          $ra
    // 0x8024B29C: nop

    TRACE_RETURN()
    return;
    // 0x8024B29C: nop

;}
RECOMP_FUNC void func_80243D04_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243D04: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80243D08: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80243D0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80243D10: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80243D14: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80243D18: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80243D1C: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80243D20: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243D24: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80243D28: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80243D2C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243D30: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80243D34: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80243D38: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80243D3C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80243D40: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_80243D44:
    // 0x80243D44: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80243D48: addiu       $v0, $v1, 0x7
    ctx->r2 = ADD32(ctx->r3, 0X7);
    // 0x80243D4C: bgez        $v0, L_80243D58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80243D50: andi        $s0, $s2, 0xFF
        ctx->r16 = ctx->r18 & 0XFF;
            goto L_80243D58;
    }
    // 0x80243D50: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x80243D54: addiu       $v0, $v1, 0xE
    ctx->r2 = ADD32(ctx->r3, 0XE);
L_80243D58:
    // 0x80243D58: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80243D5C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80243D60: beq         $v0, $zero, L_80243E80
    if (ctx->r2 == 0) {
        // 0x80243D64: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80243E80;
    }
    // 0x80243D64: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80243D68: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80243D6C: ori         $t1, $s0, 0x6
    ctx->r9 = ctx->r16 | 0X6;
    // 0x80243D70: andi        $v1, $t1, 0xFF
    ctx->r3 = ctx->r9 & 0XFF;
    // 0x80243D74: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243D78: mflo        $a0
    ctx->r4 = lo;
    // 0x80243D7C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80243D80: nop

    // 0x80243D84: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243D88: mflo        $t0
    ctx->r8 = lo;
    // 0x80243D8C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80243D90: nop

    // 0x80243D94: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243D98: mflo        $v1
    ctx->r3 = lo;
    // 0x80243D9C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80243DA0: ori         $t1, $s0, 0x2
    ctx->r9 = ctx->r16 | 0X2;
    // 0x80243DA4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80243DA8: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    // 0x80243DAC: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243DB0: mflo        $a1
    ctx->r5 = lo;
    // 0x80243DB4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243DB8: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x80243DBC: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80243DC0: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243DC4: mflo        $a2
    ctx->r6 = lo;
    // 0x80243DC8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80243DCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243DD0: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x80243DD4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80243DD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243DDC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243DE0: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x80243DE4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80243DE8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80243DEC: mult        $a3, $a0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243DF0: mflo        $a3
    ctx->r7 = lo;
    // 0x80243DF4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80243DF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243DFC: sh          $v0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r2;
    // 0x80243E00: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80243E04: lui         $a0, 0x900
    ctx->r4 = S32(0X900 << 16);
    // 0x80243E08: ori         $a0, $a0, 0x30
    ctx->r4 = ctx->r4 | 0X30;
    // 0x80243E0C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80243E10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243E14: sh          $v0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r2;
    // 0x80243E18: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80243E1C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80243E20: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80243E24: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80243E28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243E2C: sh          $v0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r2;
    // 0x80243E30: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80243E34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80243E38: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x80243E3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80243E40: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80243E44: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x80243E48: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80243E4C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80243E50: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80243E54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80243E58: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80243E5C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80243E60: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80243E64: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80243E68: jal         0x80051F9C
    // 0x80243E6C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_0;
    // 0x80243E6C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80243E70: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80243E74: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x80243E78: j           L_80243D44
    // 0x80243E7C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
        goto L_80243D44;
    // 0x80243E7C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
L_80243E80:
    // 0x80243E80: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80243E84: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80243E88: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80243E8C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80243E90: jr          $ra
    // 0x80243E94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80243E94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_802341E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802341E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802341E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802341EC: jal         0x8004F418
    // 0x802341F0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802341F0: nop

    after_0:
    // 0x802341F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802341F8: jr          $ra
    // 0x802341FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802341FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243A3C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80243A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80243A44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243A48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80243A4C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243A50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80243A54: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80243A58: bne         $v0, $zero, L_80243A64
    if (ctx->r2 != 0) {
        // 0x80243A5C: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_80243A64;
    }
    // 0x80243A5C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80243A60: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80243A64:
    // 0x80243A64: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80243A68: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80243A6C: beq         $v0, $zero, L_80243A84
    if (ctx->r2 == 0) {
        // 0x80243A70: nop
    
            goto L_80243A84;
    }
    // 0x80243A70: nop

    // 0x80243A74: jal         0x8004F4F8
    // 0x80243A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80243A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80243A7C: j           L_80243AC8
    // 0x80243A80: nop

        goto L_80243AC8;
    // 0x80243A80: nop

L_80243A84:
    // 0x80243A84: jal         0x80243E98
    // 0x80243A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80243E98_ovl28(rdram, ctx);
        goto after_1;
    // 0x80243A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80243A8C: bnel        $v0, $zero, L_80243A94
    if (ctx->r2 != 0) {
        // 0x80243A90: sb          $v0, 0xF($s0)
        MEM_B(0XF, ctx->r16) = ctx->r2;
            goto L_80243A94;
    }
    goto skip_0;
    // 0x80243A90: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    skip_0:
L_80243A94:
    // 0x80243A94: jal         0x80244030
    // 0x80243A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80244030_ovl28(rdram, ctx);
        goto after_2;
    // 0x80243A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80243A9C: beq         $v0, $zero, L_80243AAC
    if (ctx->r2 == 0) {
        // 0x80243AA0: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80243AAC;
    }
    // 0x80243AA0: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80243AA4: j           L_80243AB4
    // 0x80243AA8: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80243AB4;
    // 0x80243AA8: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80243AAC:
    // 0x80243AAC: lui         $v0, 0x220
    ctx->r2 = S32(0X220 << 16);
    // 0x80243AB0: ori         $v0, $v0, 0x2020
    ctx->r2 = ctx->r2 | 0X2020;
L_80243AB4:
    // 0x80243AB4: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80243AB8: jal         0x80243AD8
    // 0x80243ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80243AD8_ovl28(rdram, ctx);
        goto after_3;
    // 0x80243ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80243AC0: jal         0x80243D04
    // 0x80243AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80243D04_ovl28(rdram, ctx);
        goto after_4;
    // 0x80243AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80243AC8:
    // 0x80243AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80243ACC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80243AD0: jr          $ra
    // 0x80243AD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80243AD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
