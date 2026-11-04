#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802330E4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802330E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802330E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802330EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802330F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802330F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802330F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802330FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233100: jal         0x80050294
    // 0x80233104: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80233104: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233108: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023310C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233110: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80233114: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80233118: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023311C: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x80233120: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80233124: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80233128: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023312C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80233130: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80233134: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80233138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023313C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233140: jr          $ra
    // 0x80233144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F08C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F08C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F090: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F094: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F098: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F09C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F0A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F0A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F0A8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F0AC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F0B0: bne         $v0, $zero, L_8022F10C
    if (ctx->r2 != 0) {
        // 0x8022F0B4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022F10C;
    }
    // 0x8022F0B4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022F0B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F0BC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F0C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F0C4: jal         0x8004F820
    // 0x8022F0C8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F0C8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022F0CC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F0D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F0D4: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022F0D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F0DC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F0E0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022F0E4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022F0E8: beq         $a0, $zero, L_8022F10C
    if (ctx->r4 == 0) {
        // 0x8022F0EC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F10C;
    }
    // 0x8022F0EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F0F0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F0F4: jal         0x8022FE30
    // 0x8022F0F8: nop

    func_8022FE30_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022F0F8: nop

    after_1:
    // 0x8022F0FC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F100: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F104: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F108: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022F10C:
    // 0x8022F10C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F110: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F114: bne         $v0, $zero, L_8022F138
    if (ctx->r2 != 0) {
        // 0x8022F118: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022F138;
    }
    // 0x8022F118: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F11C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F120: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022F124: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F128: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F12C: jal         0x8022FEC8
    // 0x8022F130: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022F130: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022F134: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F138:
    // 0x8022F138: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F13C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F140: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F144: jr          $ra
    // 0x8022F148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228BB4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228BB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228BBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228BC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228BC8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228BCC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228BD0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228BD4: jal         0x8004F820
    // 0x80228BD8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228BD8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x80228BDC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228BE0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80228BE4: beq         $v0, $zero, L_80228C00
    if (ctx->r2 == 0) {
        // 0x80228BE8: nop
    
            goto L_80228C00;
    }
    // 0x80228BE8: nop

    // 0x80228BEC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228BF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228BF4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228BF8: j           L_80228C0C
    // 0x80228BFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80228C0C;
    // 0x80228BFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228C00:
    // 0x80228C00: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C08: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228C0C:
    // 0x80228C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C14: jr          $ra
    // 0x80228C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F2F0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F2F8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022F2FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F300: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F304: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F308: lw          $v0, -0x3FC0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3FC0);
    // 0x8022F30C: jalr        $v0
    // 0x8022F310: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F310: nop

    after_0:
    // 0x8022F314: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F318: jr          $ra
    // 0x8022F31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EC78_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC78: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022EC7C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022EC80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EC84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022EC88: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022EC8C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022EC90: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022EC94: jal         0x8022FF64
    // 0x8022EC98: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022FF64_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022EC98: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022EC9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022ECA0: beq         $v0, $zero, L_8022ECD0
    if (ctx->r2 == 0) {
        // 0x8022ECA4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022ECD0;
    }
    // 0x8022ECA4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022ECA8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ECAC: bne         $v1, $v0, L_8022EDF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022ECB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EDF8;
    }
    // 0x8022ECB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ECB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ECB8: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ECBC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022ECC0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022ECC4: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022ECC8: j           L_8022EDFC
    // 0x8022ECCC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022EDFC;
    // 0x8022ECCC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022ECD0:
    // 0x8022ECD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECD4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022ECD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ECDC: jal         0x8004DA90
    // 0x8022ECE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022ECE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022ECE4: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022ECE8: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022ECEC: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022ECF0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022ECF4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022ECF8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022ECFC: beq         $v0, $zero, L_8022ED0C
    if (ctx->r2 == 0) {
        // 0x8022ED00: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022ED0C;
    }
    // 0x8022ED00: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022ED04: j           L_8022ED1C
    // 0x8022ED08: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022ED1C;
    // 0x8022ED08: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022ED0C:
    // 0x8022ED0C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022ED10: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022ED14: beq         $v0, $zero, L_8022ED4C
    if (ctx->r2 == 0) {
        // 0x8022ED18: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022ED4C;
    }
    // 0x8022ED18: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022ED1C:
    // 0x8022ED1C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED20: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022ED24: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022ED28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ED2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ED30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ED34: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022ED38: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022ED3C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022ED40: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022ED44: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022ED48: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022ED4C:
    // 0x8022ED4C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022ED50: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022ED54: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022ED58: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022ED5C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022ED60: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022ED64: beq         $v0, $zero, L_8022ED78
    if (ctx->r2 == 0) {
        // 0x8022ED68: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022ED78;
    }
    // 0x8022ED68: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022ED6C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED70: j           L_8022ED8C
    // 0x8022ED74: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022ED8C;
    // 0x8022ED74: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022ED78:
    // 0x8022ED78: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022ED7C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022ED80: beq         $v0, $zero, L_8022EDBC
    if (ctx->r2 == 0) {
        // 0x8022ED84: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022EDBC;
    }
    // 0x8022ED84: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022ED88: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022ED8C:
    // 0x8022ED8C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022ED90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ED94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ED98: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022ED9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EDA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EDA4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022EDA8: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022EDAC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022EDB0: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022EDB4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022EDB8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022EDBC:
    // 0x8022EDBC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022EDC0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022EDC4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022EDC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDCC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EDD0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EDD4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022EDD8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022EDDC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022EDE0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022EDE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EDE8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022EDEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDF0: bne         $v0, $zero, L_8022EDFC
    if (ctx->r2 != 0) {
        // 0x8022EDF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EDFC;
    }
    // 0x8022EDF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EDF8:
    // 0x8022EDF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EDFC:
    // 0x8022EDFC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022EE00: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EE04: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EE08: jr          $ra
    // 0x8022EE0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022EE0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022C61C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C61C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C62C: jal         0x8006033C
    // 0x8022C630: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C630: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x8022C634: bnel        $v0, $zero, L_8022C664
    if (ctx->r2 != 0) {
        // 0x8022C638: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C664;
    }
    goto skip_0;
    // 0x8022C638: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_0:
    // 0x8022C63C: jal         0x8006033C
    // 0x8022C640: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022C640: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    after_1:
    // 0x8022C644: bnel        $v0, $zero, L_8022C664
    if (ctx->r2 != 0) {
        // 0x8022C648: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C664;
    }
    goto skip_1;
    // 0x8022C648: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_1:
    // 0x8022C64C: jal         0x8006036C
    // 0x8022C650: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022C650: addiu       $a0, $zero, 0x644
    ctx->r4 = ADD32(0, 0X644);
    after_2:
    // 0x8022C654: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022C658: jal         0x800616FC
    // 0x8022C65C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022C65C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x8022C660: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
L_8022C664:
    // 0x8022C664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C66C: jr          $ra
    // 0x8022C670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A38_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228A3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228A40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228A48: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x80228A4C: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x80228A50: beq         $v0, $zero, L_80228A78
    if (ctx->r2 == 0) {
        // 0x80228A54: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228A78;
    }
    // 0x80228A54: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228A58: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80228A5C: bne         $v0, $zero, L_80228A68
    if (ctx->r2 != 0) {
        // 0x80228A60: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_80228A68;
    }
    // 0x80228A60: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x80228A64: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_80228A68:
    // 0x80228A68: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80228A6C: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80228A70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228A74: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_80228A78:
    // 0x80228A78: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80228A7C: bne         $v0, $zero, L_80228B1C
    if (ctx->r2 != 0) {
        // 0x80228A80: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228B1C;
    }
    // 0x80228A80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228A84: jal         0x800A3450
    // 0x80228A88: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80228A88: nop

    after_0:
    // 0x80228A8C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228A90: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x80228A94: beq         $v0, $zero, L_80228AE0
    if (ctx->r2 == 0) {
        // 0x80228A98: nop
    
            goto L_80228AE0;
    }
    // 0x80228A98: nop

    // 0x80228A9C: jal         0x800A3450
    // 0x80228AA0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80228AA0: nop

    after_1:
    // 0x80228AA4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228AA8: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x80228AAC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80228AB0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228AB4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228AB8: jal         0x800A3450
    // 0x80228ABC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80228ABC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x80228AC0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228AC4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228AC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228ACC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228AD0: lhu         $v0, -0x4EAC($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4EAC);
    // 0x80228AD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228AD8: j           L_80228B08
    // 0x80228ADC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_80228B08;
    // 0x80228ADC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_80228AE0:
    // 0x80228AE0: jal         0x800A3450
    // 0x80228AE4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80228AE4: nop

    after_3:
    // 0x80228AE8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228AEC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228AF0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80228AF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228AF8: lhu         $v1, -0x4EAC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4EAC);
    // 0x80228AFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228B00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228B04: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_80228B08:
    // 0x80228B08: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228B0C: jal         0x802281A8
    // 0x80228B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802281A8_ovl21(rdram, ctx);
        goto after_4;
    // 0x80228B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80228B14: j           L_80228B6C
    // 0x80228B18: nop

        goto L_80228B6C;
    // 0x80228B18: nop

L_80228B1C:
    // 0x80228B1C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80228B20: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228B24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228B28: bne         $v1, $v0, L_80228B6C
    if (ctx->r3 != ctx->r2) {
        // 0x80228B2C: nop
    
            goto L_80228B6C;
    }
    // 0x80228B2C: nop

    // 0x80228B30: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x80228B34: beq         $v0, $zero, L_80228B6C
    if (ctx->r2 == 0) {
        // 0x80228B38: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80228B6C;
    }
    // 0x80228B38: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80228B3C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80228B40: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80228B44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228B48: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228B4C: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x80228B50: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80228B54: sh          $v0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r2;
    // 0x80228B58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228B5C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228B60: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80228B64: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228B68: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80228B6C:
    // 0x80228B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228B70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228B74: jr          $ra
    // 0x80228B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EFA4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EFA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EFAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EFB0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022EFB4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022EFB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EFBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EFC0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EFC4: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022EFC8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EFCC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022EFD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EFD4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022EFD8: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022EFDC: jal         0x8022FEC8
    // 0x8022EFE0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022EFE0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022EFE4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022EFE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EFEC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EFF0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022EFF4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022EFF8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EFFC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F000: jal         0x8004F820
    // 0x8022F004: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022F004: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F00C: bgez        $v0, L_8022F03C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F010: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022F03C;
    }
    // 0x8022F010: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022F014: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F018: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F01C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F020: jal         0x8004F820
    // 0x8022F024: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F024: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022F028: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F02C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F030: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F034: j           L_8022F058
    // 0x8022F038: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022F058;
    // 0x8022F038: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022F03C:
    // 0x8022F03C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F040: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F044: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F048: jal         0x8004F820
    // 0x8022F04C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022F04C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022F050: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F054: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022F058:
    // 0x8022F058: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F05C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022F060: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F064: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F068: jal         0x800610AC
    // 0x8022F06C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022F06C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022F070: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F074: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F078: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F07C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F080: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F084: jr          $ra
    // 0x8022F088: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F088: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A820_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A824: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A828: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022A82C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A830: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A834: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A838: lw          $v0, -0x4C9C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4C9C);
    // 0x8022A83C: jalr        $v0
    // 0x8022A840: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A840: nop

    after_0:
    // 0x8022A844: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A848: jr          $ra
    // 0x8022A84C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A84C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229480_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229484: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80229488: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022948C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80229490: bne         $v0, $zero, L_802294A8
    if (ctx->r2 != 0) {
        // 0x80229494: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_802294A8;
    }
    // 0x80229494: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80229498: jal         0x8004F5C4
    // 0x8022949C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022949C: nop

    after_0:
    // 0x802294A0: j           L_802294DC
    // 0x802294A4: nop

        goto L_802294DC;
    // 0x802294A4: nop

L_802294A8:
    // 0x802294A8: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x802294AC: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x802294B0: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x802294B4: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x802294B8: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x802294BC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x802294C0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802294C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x802294C8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802294CC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802294D0: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x802294D4: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x802294D8: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_802294DC:
    // 0x802294DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802294E0: jr          $ra
    // 0x802294E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802294E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802294E8: nop

    // 0x802294EC: nop

;}
RECOMP_FUNC void func_80225E70_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225E78: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225E7C: bne         $v0, $zero, L_80225E94
    if (ctx->r2 != 0) {
        // 0x80225E80: nop
    
            goto L_80225E94;
    }
    // 0x80225E80: nop

    // 0x80225E84: jal         0x80225EA8
    // 0x80225E88: nop

    func_80225EA8_ovl21(rdram, ctx);
        goto after_0;
    // 0x80225E88: nop

    after_0:
    // 0x80225E8C: j           L_80225E9C
    // 0x80225E90: nop

        goto L_80225E9C;
    // 0x80225E90: nop

L_80225E94:
    // 0x80225E94: jal         0x80225F18
    // 0x80225E98: nop

    func_80225F18_ovl21(rdram, ctx);
        goto after_1;
    // 0x80225E98: nop

    after_1:
L_80225E9C:
    // 0x80225E9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225EA0: jr          $ra
    // 0x80225EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DCCC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DCD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DCD4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DCD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DCDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DCE0: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x8022DCE4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DCE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DCEC: addiu       $v0, $v0, -0x4174
    ctx->r2 = ADD32(ctx->r2, -0X4174);
    // 0x8022DCF0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x8022DCF4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8022DCF8: jal         0x8022FEC8
    // 0x8022DCFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022DCFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022DD00: jal         0x800A3450
    // 0x8022DD04: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022DD04: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022DD08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DD0C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022DD10: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022DD14: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DD18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DD1C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x8022DD20: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DD24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DD28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DD2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DD30: jr          $ra
    // 0x8022DD34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DD34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802295B4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295B4: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x802295B8: lhu         $a1, 0x2A($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X2A);
    // 0x802295BC: lhu         $v0, 0x2E($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2E);
    // 0x802295C0: lhu         $a2, 0x28($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X28);
    // 0x802295C4: lhu         $v1, 0x1E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X1E);
    // 0x802295C8: lhu         $a0, 0x20($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X20);
    // 0x802295CC: lhu         $a3, 0x2C($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X2C);
    // 0x802295D0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802295D4: lhu         $v0, 0x1C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X1C);
    // 0x802295D8: sh          $a1, 0x2A($t1)
    MEM_H(0X2A, ctx->r9) = ctx->r5;
    // 0x802295DC: lh          $t0, 0x2A($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X2A);
    // 0x802295E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802295E4: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x802295E8: sh          $v1, 0x1E($t1)
    MEM_H(0X1E, ctx->r9) = ctx->r3;
    // 0x802295EC: sh          $a0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r4;
    // 0x802295F0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802295F4: bltz        $t0, L_80229608
    if (SIGNED(ctx->r8) < 0) {
        // 0x802295F8: sh          $v0, 0x1C($t1)
        MEM_H(0X1C, ctx->r9) = ctx->r2;
            goto L_80229608;
    }
    // 0x802295F8: sh          $v0, 0x1C($t1)
    MEM_H(0X1C, ctx->r9) = ctx->r2;
    // 0x802295FC: lbu         $v0, 0x8($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X8);
    // 0x80229600: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229604: sb          $v0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r2;
L_80229608:
    // 0x80229608: jr          $ra
    // 0x8022960C: nop

    TRACE_RETURN()
    return;
    // 0x8022960C: nop

;}
RECOMP_FUNC void func_8022BDA0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDA0: lhu         $v0, 0x34($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34);
    // 0x8022BDA4: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022BDA8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BDAC: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022BDB0: slti        $v0, $v0, 0xC01
    ctx->r2 = SIGNED(ctx->r2) < 0XC01 ? 1 : 0;
    // 0x8022BDB4: beq         $v0, $zero, L_8022BDC8
    if (ctx->r2 == 0) {
        // 0x8022BDB8: addiu       $v0, $zero, 0xC00
        ctx->r2 = ADD32(0, 0XC00);
            goto L_8022BDC8;
    }
    // 0x8022BDB8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022BDBC: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022BDC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BDC4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022BDC8:
    // 0x8022BDC8: jr          $ra
    // 0x8022BDCC: nop

    TRACE_RETURN()
    return;
    // 0x8022BDCC: nop

;}
RECOMP_FUNC void func_80225960_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225964: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225968: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022596C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225970: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225974: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225978: lw          $v0, -0x4FE0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4FE0);
    // 0x8022597C: jalr        $v0
    // 0x80225980: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225980: nop

    after_0:
    // 0x80225984: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225988: jr          $ra
    // 0x8022598C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022598C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235D68_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235D6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235D70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235D74: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80235D78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235D7C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80235D80: beq         $v1, $zero, L_80235D9C
    if (ctx->r3 == 0) {
        // 0x80235D84: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80235D9C;
    }
    // 0x80235D84: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235D8C: beq         $v1, $v0, L_80235DB4
    if (ctx->r3 == ctx->r2) {
        // 0x80235D90: nop
    
            goto L_80235DB4;
    }
    // 0x80235D90: nop

    // 0x80235D94: j           L_80235E38
    // 0x80235D98: nop

        goto L_80235E38;
    // 0x80235D98: nop

L_80235D9C:
    // 0x80235D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235DA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80235DA4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80235DA8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80235DAC: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x80235DB0: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
L_80235DB4:
    // 0x80235DB4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235DB8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80235DBC: bne         $v0, $zero, L_80235DD4
    if (ctx->r2 != 0) {
        // 0x80235DC0: nop
    
            goto L_80235DD4;
    }
    // 0x80235DC0: nop

    // 0x80235DC4: jal         0x8006033C
    // 0x80235DC8: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80235DC8: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    after_0:
    // 0x80235DCC: beq         $v0, $zero, L_80235E38
    if (ctx->r2 == 0) {
        // 0x80235DD0: nop
    
            goto L_80235E38;
    }
    // 0x80235DD0: nop

L_80235DD4:
    // 0x80235DD4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80235DD8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80235DDC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80235DE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80235DE4: bne         $v0, $zero, L_80235E10
    if (ctx->r2 != 0) {
        // 0x80235DE8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235E10;
    }
    // 0x80235DE8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235DEC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80235DF0: bgez        $v0, L_80235E1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235DF4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235E1C;
    }
    // 0x80235DF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235DF8: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80235DFC: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x80235E00: ori         $v0, $v0, 0xBD07
    ctx->r2 = ctx->r2 | 0XBD07;
    // 0x80235E04: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80235E08: bne         $v0, $zero, L_80235E24
    if (ctx->r2 != 0) {
        // 0x80235E0C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235E24;
    }
    // 0x80235E0C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80235E10:
    // 0x80235E10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235E14: j           L_80235E38
    // 0x80235E18: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80235E38;
    // 0x80235E18: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80235E1C:
    // 0x80235E1C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235E20: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80235E24:
    // 0x80235E24: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80235E28: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80235E2C: beq         $v0, $zero, L_80235E38
    if (ctx->r2 == 0) {
        // 0x80235E30: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80235E38;
    }
    // 0x80235E30: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80235E34: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80235E38:
    // 0x80235E38: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80235E3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235E44: jr          $ra
    // 0x80235E48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235E48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DE08_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DE10: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DE14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DE18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE20: lw          $v0, -0x4134($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4134);
    // 0x8022DE24: jalr        $v0
    // 0x8022DE28: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DE28: nop

    after_0:
    // 0x8022DE2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE30: jr          $ra
    // 0x8022DE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDFC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BE00: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BE04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE08: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022BE0C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BE10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BE14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BE18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BE20: lw          $v0, -0x4C4C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4C4C);
    // 0x8022BE24: jalr        $v0
    // 0x8022BE28: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BE28: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x8022BE2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022BE30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BE34: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022BE38: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8022BE3C: jal         0x80031600
    // 0x8022BE40: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022BE40: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_1:
    // 0x8022BE44: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022BE48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022BE4C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022BE50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BE54: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022BE58: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022BE5C: jal         0x80031DA8
    // 0x8022BE60: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022BE60: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022BE64: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022BE68: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BE6C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BE70: jr          $ra
    // 0x8022BE74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022BE74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802280AC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802280B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802280B4: jal         0x8004F4F8
    // 0x802280B8: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802280B8: nop

    after_0:
    // 0x802280BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802280C0: jr          $ra
    // 0x802280C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802280C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802280C8: nop

    // 0x802280CC: nop

;}
RECOMP_FUNC void func_802338B0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338B0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802338B4: lb          $v0, 0xA7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XA7);
    // 0x802338B8: bgez        $v0, L_802338E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802338BC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802338E4;
    }
    // 0x802338BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802338C0: lhu         $v0, 0x34A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X34A);
    // 0x802338C4: lbu         $a0, 0x9($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X9);
    // 0x802338C8: sb          $v1, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r3;
    // 0x802338CC: sh          $zero, 0x350($a1)
    MEM_H(0X350, ctx->r5) = 0;
    // 0x802338D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802338D4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802338D8: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x802338DC: sh          $v0, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r2;
    // 0x802338E0: sb          $a0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r4;
L_802338E4:
    // 0x802338E4: jr          $ra
    // 0x802338E8: nop

    TRACE_RETURN()
    return;
    // 0x802338E8: nop

;}
RECOMP_FUNC void func_8022E604_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E608: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E60C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E610: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E614: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E618: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022E61C: bne         $v0, $zero, L_8022E65C
    if (ctx->r2 != 0) {
        // 0x8022E620: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022E65C;
    }
    // 0x8022E620: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022E624: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022E628: bne         $v0, $zero, L_8022E650
    if (ctx->r2 != 0) {
        // 0x8022E62C: nop
    
            goto L_8022E650;
    }
    // 0x8022E62C: nop

    // 0x8022E630: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x8022E634: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022E638: bne         $v1, $v0, L_8022E650
    if (ctx->r3 != ctx->r2) {
        // 0x8022E63C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E650;
    }
    // 0x8022E63C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E640: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022E644: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022E648: j           L_8022E68C
    // 0x8022E64C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022E68C;
    // 0x8022E64C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022E650:
    // 0x8022E650: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x8022E654: beq         $v0, $zero, L_8022E6BC
    if (ctx->r2 == 0) {
        // 0x8022E658: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E6BC;
    }
    // 0x8022E658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E65C:
    // 0x8022E65C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022E660: bne         $v0, $zero, L_8022E6BC
    if (ctx->r2 != 0) {
        // 0x8022E664: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E6BC;
    }
    // 0x8022E664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E668: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022E66C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E670: bne         $v1, $v0, L_8022E6BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E674: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022E6BC;
    }
    // 0x8022E674: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022E678: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E67C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022E680: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E684: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E688: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022E68C:
    // 0x8022E68C: jal         0x8009A3B4
    // 0x8022E690: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E690: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E694: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022E698: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022E69C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022E6A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E6A8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E6AC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E6B0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022E6B4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E6BC:
    // 0x8022E6BC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E6C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E6C4: jal         0x8004DA90
    // 0x8022E6C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022E6C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022E6CC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022E6D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E6D4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022E6D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6DC: bne         $v0, $zero, L_8022E70C
    if (ctx->r2 != 0) {
        // 0x8022E6E0: nop
    
            goto L_8022E70C;
    }
    // 0x8022E6E0: nop

    // 0x8022E6E4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E6E8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E6EC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E6F0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022E6F4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022E6F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E6FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E700: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022E704: j           L_8022E75C
    // 0x8022E708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E75C;
    // 0x8022E708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E70C:
    // 0x8022E70C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022E710: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E714: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022E718: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E71C: bne         $v0, $zero, L_8022E72C
    if (ctx->r2 != 0) {
        // 0x8022E720: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E72C;
    }
    // 0x8022E720: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E724: j           L_8022E75C
    // 0x8022E728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E75C;
    // 0x8022E728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E72C:
    // 0x8022E72C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E730: jal         0x8022FF64
    // 0x8022E734: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF64_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022E734: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x8022E738: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E73C: beq         $v0, $zero, L_8022E760
    if (ctx->r2 == 0) {
        // 0x8022E740: nop
    
            goto L_8022E760;
    }
    // 0x8022E740: nop

    // 0x8022E744: jal         0x8022FEC8
    // 0x8022E748: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022E748: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022E74C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E750: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E754: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022E758: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022E75C:
    // 0x8022E75C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E760:
    // 0x8022E760: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E764: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E768: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E76C: jr          $ra
    // 0x8022E770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802328A4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802328A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802328A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802328AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802328B0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802328B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802328B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802328BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802328C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802328C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802328C8: lw          $v0, -0x3EA4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3EA4);
    // 0x802328CC: jalr        $v0
    // 0x802328D0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802328D0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    after_0:
    // 0x802328D4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802328D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802328DC: bne         $v1, $v0, L_8023298C
    if (ctx->r3 != ctx->r2) {
        // 0x802328E0: nop
    
            goto L_8023298C;
    }
    // 0x802328E0: nop

    // 0x802328E4: lb          $v0, 0x66($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X66);
    // 0x802328E8: bne         $v0, $zero, L_80232908
    if (ctx->r2 != 0) {
        // 0x802328EC: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80232908;
    }
    // 0x802328EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802328F0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x802328F4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802328F8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x802328FC: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80232900: j           L_8023298C
    // 0x80232904: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
        goto L_8023298C;
    // 0x80232904: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_80232908:
    // 0x80232908: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8023290C: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80232910: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80232914: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232918: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8023291C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232920: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232924: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80232928: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8023292C: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80232930: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232934: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80232938: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8023293C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80232940: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80232944: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232948: bgez        $a0, L_80232964
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8023294C: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80232964;
    }
    // 0x8023294C: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80232950: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232954: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80232958: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8023295C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232960: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80232964:
    // 0x80232964: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80232968: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8023296C: beq         $v0, $zero, L_8023298C
    if (ctx->r2 == 0) {
        // 0x80232970: nop
    
            goto L_8023298C;
    }
    // 0x80232970: nop

    // 0x80232974: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80232978: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023297C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232980: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232984: bltzl       $v0, L_8023298C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232988: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8023298C;
    }
    goto skip_0;
    // 0x80232988: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_8023298C:
    // 0x8023298C: jal         0x8005044C
    // 0x80232990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80232990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232994: jal         0x80040F30
    // 0x80232998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80232998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023299C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802329A0: jal         0x8003E934
    // 0x802329A4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802329A4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x802329A8: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x802329AC: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x802329B0: bne         $v1, $zero, L_80232A48
    if (ctx->r3 != 0) {
        // 0x802329B4: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_80232A48;
    }
    // 0x802329B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802329B8: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802329BC: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x802329C0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802329C4: bne         $v0, $zero, L_80232A00
    if (ctx->r2 != 0) {
        // 0x802329C8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232A00;
    }
    // 0x802329C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802329CC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802329D0: beq         $v1, $v0, L_80232A48
    if (ctx->r3 == ctx->r2) {
        // 0x802329D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232A48;
    }
    // 0x802329D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802329D8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802329DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802329E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802329E4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802329E8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802329EC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802329F0: jal         0x80050294
    // 0x802329F4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802329F4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_4:
    // 0x802329F8: j           L_80232A48
    // 0x802329FC: nop

        goto L_80232A48;
    // 0x802329FC: nop

L_80232A00:
    // 0x80232A00: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232A04: bne         $v1, $v0, L_80232A40
    if (ctx->r3 != ctx->r2) {
        // 0x80232A08: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80232A40;
    }
    // 0x80232A08: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80232A0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232A10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232A14: beq         $v1, $v0, L_80232A3C
    if (ctx->r3 == ctx->r2) {
        // 0x80232A18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232A3C;
    }
    // 0x80232A18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232A1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80232A20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232A24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232A28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232A2C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232A30: jal         0x80050294
    // 0x80232A34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80232A34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_5:
    // 0x80232A38: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
L_80232A3C:
    // 0x80232A3C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80232A40:
    // 0x80232A40: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x80232A44: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80232A48:
    // 0x80232A48: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232A4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232A50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232A54: jr          $ra
    // 0x80232A58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232A58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235AA4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235AA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235AA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80235AAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235AB0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235AB4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80235AB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80235ABC: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x80235AC0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80235AC4: beq         $v0, $zero, L_80235AF0
    if (ctx->r2 == 0) {
        // 0x80235AC8: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_80235AF0;
    }
    // 0x80235AC8: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x80235ACC: addiu       $a0, $s1, 0x504
    ctx->r4 = ADD32(ctx->r17, 0X504);
    // 0x80235AD0: jal         0x800540D0
    // 0x80235AD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80235AD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80235AD8: beq         $v0, $zero, L_80235AF0
    if (ctx->r2 == 0) {
        // 0x80235ADC: nop
    
            goto L_80235AF0;
    }
    // 0x80235ADC: nop

    // 0x80235AE0: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x80235AE4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80235AE8: j           L_80235AFC
    // 0x80235AEC: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
        goto L_80235AFC;
    // 0x80235AEC: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
L_80235AF0:
    // 0x80235AF0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235AF4: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80235AF8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80235AFC:
    // 0x80235AFC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235B00: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80235B04: beq         $v0, $zero, L_80235B34
    if (ctx->r2 == 0) {
        // 0x80235B08: nop
    
            goto L_80235B34;
    }
    // 0x80235B08: nop

    // 0x80235B0C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80235B10: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80235B14: bne         $v0, $zero, L_80235B2C
    if (ctx->r2 != 0) {
        // 0x80235B18: nop
    
            goto L_80235B2C;
    }
    // 0x80235B18: nop

    // 0x80235B1C: jal         0x8006033C
    // 0x80235B20: lhu         $a0, 0x3C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X3C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80235B20: lhu         $a0, 0x3C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X3C);
    after_1:
    // 0x80235B24: beq         $v0, $zero, L_80235B34
    if (ctx->r2 == 0) {
        // 0x80235B28: nop
    
            goto L_80235B34;
    }
    // 0x80235B28: nop

L_80235B2C:
    // 0x80235B2C: jal         0x80237204
    // 0x80235B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80237204_ovl21(rdram, ctx);
        goto after_2;
    // 0x80235B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_80235B34:
    // 0x80235B34: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80235B38: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80235B3C: bne         $v0, $zero, L_80235BB8
    if (ctx->r2 != 0) {
        // 0x80235B40: nop
    
            goto L_80235BB8;
    }
    // 0x80235B40: nop

    // 0x80235B44: lh          $a2, 0x14($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X14);
    // 0x80235B48: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80235B4C: lh          $a0, -0x3D88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3D88);
    // 0x80235B50: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80235B54: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235B58: lh          $v1, -0x3D86($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3D86);
    // 0x80235B5C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235B60: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80235B64: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80235B68: bne         $v0, $zero, L_80235BB8
    if (ctx->r2 != 0) {
        // 0x80235B6C: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80235BB8;
    }
    // 0x80235B6C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80235B70: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80235B74: blez        $v0, L_80235BB8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80235B78: nop
    
            goto L_80235BB8;
    }
    // 0x80235B78: nop

    // 0x80235B7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235B80: lh          $v0, -0x3D84($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3D84);
    // 0x80235B84: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80235B88: beq         $v0, $zero, L_80235BA4
    if (ctx->r2 == 0) {
        // 0x80235B8C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80235BA4;
    }
    // 0x80235B8C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235B90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235B94: lh          $v0, -0x3D82($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3D82);
    // 0x80235B98: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80235B9C: bne         $v0, $zero, L_80235BB8
    if (ctx->r2 != 0) {
        // 0x80235BA0: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80235BB8;
    }
    // 0x80235BA0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80235BA4:
    // 0x80235BA4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80235BA8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80235BAC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235BB0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80235BB4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80235BB8:
    // 0x80235BB8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80235BBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235BC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235BC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235BC8: lw          $v0, -0x3DC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3DC4);
    // 0x80235BCC: jalr        $v0
    // 0x80235BD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80235BD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80235BD4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235BD8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235BDC: beq         $v0, $zero, L_80235CF8
    if (ctx->r2 == 0) {
        // 0x80235BE0: nop
    
            goto L_80235CF8;
    }
    // 0x80235BE0: nop

    // 0x80235BE4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80235BE8: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80235BEC: beq         $v0, $zero, L_80235CC4
    if (ctx->r2 == 0) {
        // 0x80235BF0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235CC4;
    }
    // 0x80235BF0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235BF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235BF8: addu        $at, $at, $v0
    gpr jr_addend_80235C00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235BFC: lw          $v0, -0x34F8($at)
    ctx->r2 = ADD32(ctx->r1, -0X34F8);
    // 0x80235C00: jr          $v0
    // 0x80235C04: nop

    switch (jr_addend_80235C00 >> 2) {
        case 0: goto L_80235C30; break;
        case 1: goto L_80235CC4; break;
        case 2: goto L_80235CC4; break;
        case 3: goto L_80235CC4; break;
        case 4: goto L_80235C08; break;
        case 5: goto L_80235CD4; break;
        case 6: goto L_80235C48; break;
        case 7: goto L_80235C48; break;
        case 8: goto L_80235C48; break;
        case 9: goto L_80235CC4; break;
        case 10: goto L_80235C30; break;
        case 11: goto L_80235C24; break;
        default: switch_error(__func__, 0x80235C00, 0x8023CB08);
    }
    // 0x80235C04: nop

L_80235C08:
    // 0x80235C08: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235C0C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80235C10: bne         $v0, $zero, L_80235C54
    if (ctx->r2 != 0) {
        // 0x80235C14: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235C54;
    }
    // 0x80235C14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235C18: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235C1C: j           L_80235CE8
    // 0x80235C20: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80235CE8;
    // 0x80235C20: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80235C24:
    // 0x80235C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235C28: j           L_80235CE8
    // 0x80235C2C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80235CE8;
    // 0x80235C2C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80235C30:
    // 0x80235C30: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235C34: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80235C38: bne         $v0, $zero, L_80235C54
    if (ctx->r2 != 0) {
        // 0x80235C3C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235C54;
    }
    // 0x80235C3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235C40: j           L_80235CE8
    // 0x80235C44: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80235CE8;
    // 0x80235C44: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80235C48:
    // 0x80235C48: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80235C4C: blez        $v0, L_80235C5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80235C50: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235C5C;
    }
    // 0x80235C50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80235C54:
    // 0x80235C54: j           L_80235CE8
    // 0x80235C58: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80235CE8;
    // 0x80235C58: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80235C5C:
    // 0x80235C5C: jal         0x8004F144
    // 0x80235C60: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80235C60: nop

    after_4:
    // 0x80235C64: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235C68: beq         $v1, $zero, L_80235C94
    if (ctx->r3 == 0) {
        // 0x80235C6C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80235C94;
    }
    // 0x80235C6C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80235C70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80235C74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235C78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235C7C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235C80: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235C84: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80235C88: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235C8C: jal         0x8009A3B4
    // 0x80235C90: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80235C90: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_5:
L_80235C94:
    // 0x80235C94: jal         0x8004F488
    // 0x80235C98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_6;
    // 0x80235C98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80235C9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235CA0: lb          $a2, 0xD($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XD);
    // 0x80235CA4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80235CA8: jal         0x8007A290
    // 0x80235CAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x80235CAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80235CB0: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80235CB4: jal         0x8002A33C
    // 0x80235CB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80235CB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80235CBC: j           L_80235CEC
    // 0x80235CC0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_80235CEC;
    // 0x80235CC0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80235CC4:
    // 0x80235CC4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235CC8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80235CCC: beq         $v0, $zero, L_80235CE0
    if (ctx->r2 == 0) {
        // 0x80235CD0: nop
    
            goto L_80235CE0;
    }
    // 0x80235CD0: nop

L_80235CD4:
    // 0x80235CD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235CD8: j           L_80235CE8
    // 0x80235CDC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80235CE8;
    // 0x80235CDC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80235CE0:
    // 0x80235CE0: jal         0x80237150
    // 0x80235CE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80237150_ovl21(rdram, ctx);
        goto after_9;
    // 0x80235CE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
L_80235CE8:
    // 0x80235CE8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80235CEC:
    // 0x80235CEC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235CF0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80235CF4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80235CF8:
    // 0x80235CF8: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80235CFC: beq         $v0, $zero, L_80235D0C
    if (ctx->r2 == 0) {
        // 0x80235D00: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235D0C;
    }
    // 0x80235D00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235D04: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235D08: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80235D0C:
    // 0x80235D0C: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80235D10: beq         $v0, $zero, L_80235D20
    if (ctx->r2 == 0) {
        // 0x80235D14: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235D20;
    }
    // 0x80235D14: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235D18: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235D1C: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
L_80235D20:
    // 0x80235D20: lh          $v0, 0x36($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X36);
    // 0x80235D24: beq         $v0, $zero, L_80235D34
    if (ctx->r2 == 0) {
        // 0x80235D28: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235D34;
    }
    // 0x80235D28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235D2C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235D30: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_80235D34:
    // 0x80235D34: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80235D38: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80235D3C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80235D40: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80235D44: jr          $ra
    // 0x80235D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802280D0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802280D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802280D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802280DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802280E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802280E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802280E8: lw          $v0, -0x4F20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F20);
    // 0x802280EC: jalr        $v0
    // 0x802280F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802280F0: nop

    after_0:
    // 0x802280F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802280F8: jr          $ra
    // 0x802280FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802280FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDD8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BDDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BDE0: jal         0x8004F684
    // 0x8022BDE4: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022BDE4: nop

    after_0:
    // 0x8022BDE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BDEC: jr          $ra
    // 0x8022BDF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BDF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264C0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802264C8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802264CC: bne         $v0, $zero, L_802264E4
    if (ctx->r2 != 0) {
        // 0x802264D0: nop
    
            goto L_802264E4;
    }
    // 0x802264D0: nop

    // 0x802264D4: jal         0x802264F8
    // 0x802264D8: nop

    func_802264F8_ovl21(rdram, ctx);
        goto after_0;
    // 0x802264D8: nop

    after_0:
    // 0x802264DC: j           L_802264EC
    // 0x802264E0: nop

        goto L_802264EC;
    // 0x802264E0: nop

L_802264E4:
    // 0x802264E4: jal         0x80226574
    // 0x802264E8: nop

    func_80226574_ovl21(rdram, ctx);
        goto after_1;
    // 0x802264E8: nop

    after_1:
L_802264EC:
    // 0x802264EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802264F0: jr          $ra
    // 0x802264F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802327AC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802327B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802327B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802327B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802327BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802327C0: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x802327C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802327C8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802327CC: jal         0x8004F820
    // 0x802327D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802327D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802327D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802327D8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802327DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802327E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802327E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802327E8: bne         $a0, $v0, L_802327FC
    if (ctx->r4 != ctx->r2) {
        // 0x802327EC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802327FC;
    }
    // 0x802327EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802327F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802327F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802327F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802327FC:
    // 0x802327FC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232800: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232804: bne         $v1, $v0, L_80232894
    if (ctx->r3 != ctx->r2) {
        // 0x80232808: nop
    
            goto L_80232894;
    }
    // 0x80232808: nop

    // 0x8023280C: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80232810: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80232814: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232818: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8023281C: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232820: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232824: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80232828: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8023282C: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80232830: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80232834: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80232838: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8023283C: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80232840: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80232844: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80232848: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8023284C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80232850: bgez        $a0, L_8023286C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232854: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8023286C;
    }
    // 0x80232854: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80232858: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8023285C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80232860: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80232864: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232868: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8023286C:
    // 0x8023286C: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80232870: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80232874: beq         $v0, $zero, L_80232894
    if (ctx->r2 == 0) {
        // 0x80232878: nop
    
            goto L_80232894;
    }
    // 0x80232878: nop

    // 0x8023287C: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80232880: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232884: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232888: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023288C: bltzl       $v0, L_80232894
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232890: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80232894;
    }
    goto skip_0;
    // 0x80232890: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_80232894:
    // 0x80232894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232898: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023289C: jr          $ra
    // 0x802328A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802328A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C17C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C17C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C180: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C184: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C18C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C190: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C194: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C198: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8022C19C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022C1A0: jal         0x8002C654
    // 0x8022C1A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022C1A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C1A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C1AC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022C1B0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022C1B4: bne         $v1, $v0, L_8022C1C8
    if (ctx->r3 != ctx->r2) {
        // 0x8022C1B8: addiu       $s2, $s0, 0x2C
        ctx->r18 = ADD32(ctx->r16, 0X2C);
            goto L_8022C1C8;
    }
    // 0x8022C1B8: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x8022C1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1C0: j           L_8022C1D0
    // 0x8022C1C4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022C1D0;
    // 0x8022C1C4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022C1C8:
    // 0x8022C1C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1CC: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
L_8022C1D0:
    // 0x8022C1D0: jal         0x8004D5D4
    // 0x8022C1D4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022C1D4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_1:
    // 0x8022C1D8: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x8022C1DC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022C1E0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8022C1E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022C1E8: sb          $s1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r17;
    // 0x8022C1EC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C1F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022C1F4: jal         0x8004F2C4
    // 0x8022C1F8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x8022C1F8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    after_2:
    // 0x8022C1FC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C200: beq         $a0, $zero, L_8022C274
    if (ctx->r4 == 0) {
        // 0x8022C204: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_8022C274;
    }
    // 0x8022C204: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022C208: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    // 0x8022C20C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022C210: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8022C214: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8022C218: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022C21C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x8022C220: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x8022C224: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x8022C228: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022C22C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022C230: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C234: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022C238: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022C23C: bnel        $v1, $v0, L_8022C25C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C240: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_8022C25C;
    }
    goto skip_0;
    // 0x8022C240: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    skip_0:
    // 0x8022C244: addiu       $v0, $zero, 0x4FE
    ctx->r2 = ADD32(0, 0X4FE);
    // 0x8022C248: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022C24C: addiu       $v0, $zero, -0x256
    ctx->r2 = ADD32(0, -0X256);
    // 0x8022C250: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022C254: j           L_8022C26C
    // 0x8022C258: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
        goto L_8022C26C;
    // 0x8022C258: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
L_8022C25C:
    // 0x8022C25C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022C260: addiu       $v0, $zero, -0xDC
    ctx->r2 = ADD32(0, -0XDC);
    // 0x8022C264: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022C268: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022C26C:
    // 0x8022C26C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x8022C270: sw          $a0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r4;
L_8022C274:
    // 0x8022C274: jal         0x8022C294
    // 0x8022C278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C294_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022C278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C27C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C280: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C284: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C28C: jr          $ra
    // 0x8022C290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234B00_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234B08: jal         0x8004F418
    // 0x80234B0C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80234B0C: nop

    after_0:
    // 0x80234B10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234B14: jr          $ra
    // 0x80234B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F750_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F750: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F754: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F758: bne         $v0, $zero, L_8022F790
    if (ctx->r2 != 0) {
        // 0x8022F75C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022F790;
    }
    // 0x8022F75C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022F760: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022F764: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022F768: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F76C: beq         $v1, $zero, L_8022F77C
    if (ctx->r3 == 0) {
        // 0x8022F770: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022F77C;
    }
    // 0x8022F770: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022F774: j           L_8022F780
    // 0x8022F778: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022F780;
    // 0x8022F778: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022F77C:
    // 0x8022F77C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022F780:
    // 0x8022F780: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022F784: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022F788: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F78C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022F790:
    // 0x8022F790: jr          $ra
    // 0x8022F794: nop

    TRACE_RETURN()
    return;
    // 0x8022F794: nop

;}
RECOMP_FUNC void func_8022A7F0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A7F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A7F8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022A7FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A800: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A808: lw          $v0, -0x4CBC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4CBC);
    // 0x8022A80C: jalr        $v0
    // 0x8022A810: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A810: nop

    after_0:
    // 0x8022A814: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A818: jr          $ra
    // 0x8022A81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F798_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F79C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F7A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F7A8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F7AC: bgez        $v0, L_8022F7E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F7B0: nop
    
            goto L_8022F7E0;
    }
    // 0x8022F7B0: nop

    // 0x8022F7B4: jal         0x8022FEC8
    // 0x8022F7B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022F7B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022F7BC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F7C0: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F7C4: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F7C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F7CC: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022F7D0: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022F7D4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F7D8: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022F7DC: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022F7E0:
    // 0x8022F7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F7E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F7E8: jr          $ra
    // 0x8022F7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B408_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B40C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B410: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B418: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8022B41C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B420: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B424: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B428: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022B42C: jal         0x8002A33C
    // 0x8022B430: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B430: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x8022B434: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B438: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022B43C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B440: addiu       $s1, $s1, 0x47B8
    ctx->r17 = ADD32(ctx->r17, 0X47B8);
    // 0x8022B444: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022B448: bnel        $v1, $v0, L_8022B47C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B44C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022B47C;
    }
    goto skip_0;
    // 0x8022B44C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x8022B450: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022B454: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B458: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022B45C: addiu       $v0, $zero, 0xBEC
    ctx->r2 = ADD32(0, 0XBEC);
    // 0x8022B460: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B464: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022B468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B46C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B470: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022B474: j           L_8022B538
    // 0x8022B478: addiu       $v0, $zero, 0x13FD
    ctx->r2 = ADD32(0, 0X13FD);
        goto L_8022B538;
    // 0x8022B478: addiu       $v0, $zero, 0x13FD
    ctx->r2 = ADD32(0, 0X13FD);
L_8022B47C:
    // 0x8022B47C: bne         $v1, $v0, L_8022B4B8
    if (ctx->r3 != ctx->r2) {
        // 0x8022B480: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022B4B8;
    }
    // 0x8022B480: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022B484: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B488: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022B48C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B490: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B494: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022B498: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022B49C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4A0: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022B4A4: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
    // 0x8022B4A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4AC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022B4B0: j           L_8022B540
    // 0x8022B4B4: addiu       $v0, $zero, -0x271
    ctx->r2 = ADD32(0, -0X271);
        goto L_8022B540;
    // 0x8022B4B4: addiu       $v0, $zero, -0x271
    ctx->r2 = ADD32(0, -0X271);
L_8022B4B8:
    // 0x8022B4B8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022B4BC: lb          $v0, -0x3B9D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3B9D);
    // 0x8022B4C0: beq         $v0, $zero, L_8022B510
    if (ctx->r2 == 0) {
        // 0x8022B4C4: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8022B510;
    }
    // 0x8022B4C4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022B4C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4CC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022B4D0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022B4D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4D8: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022B4DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B4E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4E4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022B4E8: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x8022B4EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4F0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022B4F4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022B4F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4FC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022B500: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B504: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8022B508: j           L_8022B554
    // 0x8022B50C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022B554;
    // 0x8022B50C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B510:
    // 0x8022B510: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B514: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B518: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022B51C: addiu       $v0, $zero, -0x1A00
    ctx->r2 = ADD32(0, -0X1A00);
    // 0x8022B520: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B524: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022B528: addiu       $v0, $zero, -0x601
    ctx->r2 = ADD32(0, -0X601);
    // 0x8022B52C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B530: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022B534: addiu       $v0, $zero, 0x17E0
    ctx->r2 = ADD32(0, 0X17E0);
L_8022B538:
    // 0x8022B538: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B53C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_8022B540:
    // 0x8022B540: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B544: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022B548: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B54C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022B550: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B554:
    // 0x8022B554: sb          $v0, 0x19($s1)
    MEM_B(0X19, ctx->r17) = ctx->r2;
    // 0x8022B558: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B55C: sb          $zero, 0x15($s1)
    MEM_B(0X15, ctx->r17) = 0;
    // 0x8022B560: sb          $v0, 0x18($s1)
    MEM_B(0X18, ctx->r17) = ctx->r2;
    // 0x8022B564: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B568: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B56C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B570: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B574: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B57C: jr          $ra
    // 0x8022B580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225990_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225998: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022599C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802259A4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802259A8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802259AC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802259B0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802259B4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802259B8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802259BC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802259C0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802259C4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802259C8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802259CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802259D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802259D4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802259D8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802259DC: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802259E0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802259E4: jal         0x8004D5D4
    // 0x802259E8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802259E8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802259EC: addiu       $a0, $s0, 0x4E0
    ctx->r4 = ADD32(ctx->r16, 0X4E0);
    // 0x802259F0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802259F4: jal         0x800540BC
    // 0x802259F8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x802259F8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x802259FC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80225A00: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80225A04: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x80225A08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225A0C: addiu       $v1, $v1, -0x4FD4
    ctx->r3 = ADD32(ctx->r3, -0X4FD4);
    // 0x80225A10: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80225A14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225A18: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225A1C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225A20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80225A24: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80225A28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225A2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225A30: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80225A34: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80225A38: sw          $zero, 0x4F0($s0)
    MEM_W(0X4F0, ctx->r16) = 0;
    // 0x80225A3C: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    // 0x80225A40: sw          $zero, 0x500($s0)
    MEM_W(0X500, ctx->r16) = 0;
    // 0x80225A44: sw          $zero, 0x504($s0)
    MEM_W(0X504, ctx->r16) = 0;
    // 0x80225A48: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    // 0x80225A4C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80225A50: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80225A54: jal         0x80050294
    // 0x80225A58: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80225A58: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_2:
    // 0x80225A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225A64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80225A68: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80225A6C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80225A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A78: jr          $ra
    // 0x80225A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232AA0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232AA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232AA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232AB0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232AB4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80232AB8: jal         0x8004DA90
    // 0x80232ABC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80232ABC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80232AC0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80232AC4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80232AC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232ACC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80232AD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232AD4: bltz        $v0, L_80232B18
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232AD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232B18;
    }
    // 0x80232AD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232ADC: lbu         $v1, 0x1DC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DC);
    // 0x80232AE0: bne         $v1, $v0, L_80232B0C
    if (ctx->r3 != ctx->r2) {
        // 0x80232AE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232B0C;
    }
    // 0x80232AE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232AE8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232AEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232AF0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232AF4: jal         0x8004F820
    // 0x80232AF8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80232AF8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x80232AFC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232B00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232B04: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232B08: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232B0C:
    // 0x80232B0C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232B10: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80232B14: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_80232B18:
    // 0x80232B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232B1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232B20: jr          $ra
    // 0x80232B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287CC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802287D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802287D4: lw          $v1, 0xF0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XF0);
    // 0x802287D8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802287DC: beq         $v0, $zero, L_802287F4
    if (ctx->r2 == 0) {
        // 0x802287E0: andi        $v0, $v1, 0x4
        ctx->r2 = ctx->r3 & 0X4;
            goto L_802287F4;
    }
    // 0x802287E0: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x802287E4: jal         0x80228814
    // 0x802287E8: nop

    func_80228814_ovl21(rdram, ctx);
        goto after_0;
    // 0x802287E8: nop

    after_0:
    // 0x802287EC: j           L_80228808
    // 0x802287F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228808;
    // 0x802287F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802287F4:
    // 0x802287F4: beq         $v0, $zero, L_80228808
    if (ctx->r2 == 0) {
        // 0x802287F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228808;
    }
    // 0x802287F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802287FC: jal         0x80228870
    // 0x80228800: nop

    func_80228870_ovl21(rdram, ctx);
        goto after_1;
    // 0x80228800: nop

    after_1:
    // 0x80228804: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80228808:
    // 0x80228808: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022880C: jr          $ra
    // 0x80228810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338EC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802338F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802338F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802338F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802338FC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80233900: bgez        $v0, L_8023395C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233904: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023395C;
    }
    // 0x80233904: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233908: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023390C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80233910: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80233914: jal         0x8004F820
    // 0x80233918: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80233918: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    after_0:
    // 0x8023391C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233920: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233924: bltzl       $v0, L_80233940
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233928: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80233940;
    }
    goto skip_0;
    // 0x80233928: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8023392C: slti        $v0, $v0, 0x69
    ctx->r2 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x80233930: beq         $v0, $zero, L_8023394C
    if (ctx->r2 == 0) {
        // 0x80233934: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023394C;
    }
    // 0x80233934: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233938: j           L_80233950
    // 0x8023393C: nop

        goto L_80233950;
    // 0x8023393C: nop

L_80233940:
    // 0x80233940: slti        $v0, $v0, 0x69
    ctx->r2 = SIGNED(ctx->r2) < 0X69 ? 1 : 0;
    // 0x80233944: bne         $v0, $zero, L_80233950
    if (ctx->r2 != 0) {
        // 0x80233948: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80233950;
    }
    // 0x80233948: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8023394C:
    // 0x8023394C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80233950:
    // 0x80233950: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233954: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233958: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023395C:
    // 0x8023395C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233964: jr          $ra
    // 0x80233968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FED8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FED8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022FEDC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022FEE0: beq         $a0, $v0, L_8022FF04
    if (ctx->r4 == ctx->r2) {
        // 0x8022FEE4: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022FF04;
    }
    // 0x8022FEE4: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022FEE8: bne         $v0, $zero, L_8022FF10
    if (ctx->r2 != 0) {
        // 0x8022FEEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FF10;
    }
    // 0x8022FEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FEF0: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022FEF4: beq         $v0, $zero, L_8022FF0C
    if (ctx->r2 == 0) {
        // 0x8022FEF8: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022FF0C;
    }
    // 0x8022FEF8: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022FEFC: bne         $v0, $zero, L_8022FF10
    if (ctx->r2 != 0) {
        // 0x8022FF00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FF10;
    }
    // 0x8022FF00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FF04:
    // 0x8022FF04: j           L_8022FF10
    // 0x8022FF08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022FF10;
    // 0x8022FF08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022FF0C:
    // 0x8022FF0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FF10:
    // 0x8022FF10: jr          $ra
    // 0x8022FF14: nop

    TRACE_RETURN()
    return;
    // 0x8022FF14: nop

;}
RECOMP_FUNC void func_80232FA4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232FA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232FA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232FAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232FB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232FB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232FBC: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x80232FC0: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80232FC4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232FC8: beq         $v0, $zero, L_80232FF4
    if (ctx->r2 == 0) {
        // 0x80232FCC: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_80232FF4;
    }
    // 0x80232FCC: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80232FD0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80232FD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232FD8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80232FDC: jal         0x80050294
    // 0x80232FE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232FE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232FE4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232FE8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80232FEC: j           L_8023301C
    // 0x80232FF0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
        goto L_8023301C;
    // 0x80232FF0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_80232FF4:
    // 0x80232FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232FF8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80232FFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233000: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80233004: jal         0x80050294
    // 0x80233008: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80233008: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023300C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233014: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233018: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8023301C:
    // 0x8023301C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233020: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233024: sb          $v0, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r2;
    // 0x80233028: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023302C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80233030: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x80233034: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80233038: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023303C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233040: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233048: jr          $ra
    // 0x8023304C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023304C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BDD0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDD0: jr          $ra
    // 0x8022BDD4: nop

    TRACE_RETURN()
    return;
    // 0x8022BDD4: nop

;}
RECOMP_FUNC void func_802381F8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802381F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802381FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238200: jal         0x80238298
    // 0x80238204: nop

    func_80238298_ovl21(rdram, ctx);
        goto after_0;
    // 0x80238204: nop

    after_0:
    // 0x80238208: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023820C: beq         $v0, $zero, L_80238278
    if (ctx->r2 == 0) {
        // 0x80238210: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80238278;
    }
    // 0x80238210: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238214: jal         0x8006033C
    // 0x80238218: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80238218: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_1:
    // 0x8023821C: bne         $v0, $zero, L_80238268
    if (ctx->r2 != 0) {
        // 0x80238220: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80238268;
    }
    // 0x80238220: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238224: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80238228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023822C: jal         0x800610AC
    // 0x80238230: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80238230: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80238234: jal         0x8006036C
    // 0x80238238: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80238238: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    after_3:
    // 0x8023823C: jal         0x8006036C
    // 0x80238240: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80238240: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    after_4:
    // 0x80238244: jal         0x8006036C
    // 0x80238248: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80238248: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    after_5:
    // 0x8023824C: jal         0x8006036C
    // 0x80238250: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80238250: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_6:
    // 0x80238254: jal         0x8006036C
    // 0x80238258: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80238258: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_7:
    // 0x8023825C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80238260: j           L_8023828C
    // 0x80238264: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
        goto L_8023828C;
    // 0x80238264: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
L_80238268:
    // 0x80238268: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023826C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238270: j           L_80238284
    // 0x80238274: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_80238284;
    // 0x80238274: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_80238278:
    // 0x80238278: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023827C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238280: addiu       $a3, $zero, 0x22
    ctx->r7 = ADD32(0, 0X22);
L_80238284:
    // 0x80238284: jal         0x800610AC
    // 0x80238288: nop

    func_800610AC_3C4AC(rdram, ctx);
        goto after_8;
    // 0x80238288: nop

    after_8:
L_8023828C:
    // 0x8023828C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238290: jr          $ra
    // 0x80238294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231858_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023185C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231860: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231864: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231868: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023186C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80231870: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80231874: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231878: beq         $v0, $zero, L_8023189C
    if (ctx->r2 == 0) {
        // 0x8023187C: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8023189C;
    }
    // 0x8023187C: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80231880: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231884: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x80231888: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8023188C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231890: lui         $v1, 0x1D02
    ctx->r3 = S32(0X1D02 << 16);
    // 0x80231894: bne         $v0, $v1, L_802318D8
    if (ctx->r2 != ctx->r3) {
        // 0x80231898: nop
    
            goto L_802318D8;
    }
    // 0x80231898: nop

L_8023189C:
    // 0x8023189C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802318A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802318A4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802318A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802318AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802318B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802318B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802318B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802318BC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802318C0: jal         0x80050294
    // 0x802318C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802318C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802318C8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802318CC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802318D0: j           L_802318E0
    // 0x802318D4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_802318E0;
    // 0x802318D4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_802318D8:
    // 0x802318D8: jal         0x8005044C
    // 0x802318DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802318DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802318E0:
    // 0x802318E0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802318E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802318E8: bne         $v1, $v0, L_80231900
    if (ctx->r3 != ctx->r2) {
        // 0x802318EC: addiu       $v0, $zero, -0x8000
        ctx->r2 = ADD32(0, -0X8000);
            goto L_80231900;
    }
    // 0x802318EC: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x802318F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802318F4: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x802318F8: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x802318FC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80231900:
    // 0x80231900: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231904: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231908: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023190C: jr          $ra
    // 0x80231910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D5EC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5EC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8022D5F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8022D5F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022D5F8: lbu         $v1, -0x4880($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4880);
    // 0x8022D5FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D600: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D604: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8022D608: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8022D60C: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8022D610: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8022D614: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8022D618: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8022D61C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8022D620: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8022D624: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8022D628: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8022D62C: beq         $v1, $v0, L_8022D698
    if (ctx->r3 == ctx->r2) {
        // 0x8022D630: sw          $t2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r10;
            goto L_8022D698;
    }
    // 0x8022D630: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x8022D634: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8022D638: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x8022D63C: lb          $t0, 0x0($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X0);
    // 0x8022D640: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8022D644: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022D648: addiu       $a0, $a0, -0x4880
    ctx->r4 = ADD32(ctx->r4, -0X4880);
    // 0x8022D64C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D650: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8022D654:
    // 0x8022D654: bnel        $t0, $v0, L_8022D68C
    if (ctx->r8 != ctx->r2) {
        // 0x8022D658: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8022D68C;
    }
    goto skip_0;
    // 0x8022D658: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x8022D65C: lb          $v1, 0x1($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X1);
    // 0x8022D660: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D664: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022D668: lbu         $v0, -0x487F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X487F);
    // 0x8022D66C: bnel        $v1, $v0, L_8022D68C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D670: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8022D68C;
    }
    goto skip_1;
    // 0x8022D670: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_1:
    // 0x8022D674: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D678: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8022D67C: lw          $a1, -0x487C($at)
    ctx->r5 = MEM_W(ctx->r1, -0X487C);
    // 0x8022D680: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022D684: j           L_8022D698
    // 0x8022D688: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
        goto L_8022D698;
    // 0x8022D688: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
L_8022D68C:
    // 0x8022D68C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022D690: bne         $v0, $t1, L_8022D654
    if (ctx->r2 != ctx->r9) {
        // 0x8022D694: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8022D654;
    }
    // 0x8022D694: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_8022D698:
    // 0x8022D698: beq         $a2, $zero, L_8022D918
    if (ctx->r6 == 0) {
        // 0x8022D69C: nop
    
            goto L_8022D918;
    }
    // 0x8022D69C: nop

    // 0x8022D6A0: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8022D6A4: lbu         $t3, -0x39A6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X39A6);
    // 0x8022D6A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022D6AC: addiu       $v1, $v1, -0x3B9A
    ctx->r3 = ADD32(ctx->r3, -0X3B9A);
    // 0x8022D6B0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8022D6B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D6B8: lbu         $fp, 0x0($v1)
    ctx->r30 = MEM_BU(ctx->r3, 0X0);
    // 0x8022D6BC: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x8022D6C0: lbu         $t3, 0x53D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X53D4);
    // 0x8022D6C4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8022D6C8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8022D6CC: lbu         $t2, 0x6B40($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6B40);
    // 0x8022D6D0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8022D6D4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8022D6D8: lbu         $t3, -0x35BC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X35BC);
    // 0x8022D6DC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8022D6E0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D6E4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8022D6E8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8022D6EC: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8022D6F0: beq         $v0, $zero, L_8022D918
    if (ctx->r2 == 0) {
        // 0x8022D6F4: nop
    
            goto L_8022D918;
    }
    // 0x8022D6F4: nop

L_8022D6F8:
    // 0x8022D6F8: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D6FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8022D700: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022D704: beq         $v0, $zero, L_8022D900
    if (ctx->r2 == 0) {
        // 0x8022D708: nop
    
            goto L_8022D900;
    }
    // 0x8022D708: nop

    // 0x8022D70C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D710: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D714: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8022D718: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_8022D71C:
    // 0x8022D71C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D720: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x8022D724: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8022D728: mult        $t3, $v1
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D72C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022D730: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D734: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022D738: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8022D73C: subu        $v0, $s7, $t2
    ctx->r2 = SUB32(ctx->r23, ctx->r10);
    // 0x8022D740: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022D744: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D748: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022D74C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D750: lh          $s6, 0x0($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X0);
    // 0x8022D754: blez        $s6, L_8022D8EC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8022D758: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_8022D8EC;
    }
    // 0x8022D758: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x8022D75C: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022D760: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D764: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022D768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D76C: lw          $v1, 0x5088($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5088);
    // 0x8022D770: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8022D774: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022D778: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022D77C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
L_8022D780:
    // 0x8022D780: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x8022D784: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8022D788: bnel        $v0, $t3, L_8022D8E0
    if (ctx->r2 != ctx->r11) {
        // 0x8022D78C: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_8022D8E0;
    }
    goto skip_2;
    // 0x8022D78C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    skip_2:
    // 0x8022D790: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022D794: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
L_8022D798:
    // 0x8022D798: jal         0x8004F2C4
    // 0x8022D79C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x8022D79C: nop

    after_0:
    // 0x8022D7A0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D7A4: beql        $s1, $zero, L_8022D8B8
    if (ctx->r17 == 0) {
        // 0x8022D7A8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8022D8B8;
    }
    goto skip_3;
    // 0x8022D7A8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x8022D7AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D7B0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022D7B4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x8022D7B8: addu        $s0, $s2, $s3
    ctx->r16 = ADD32(ctx->r18, ctx->r19);
    // 0x8022D7BC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022D7C0: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022D7C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D7C8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022D7CC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8022D7D0: jal         0x8004D5D4
    // 0x8022D7D4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022D7D4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022D7D8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D7DC: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022D7E0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8022D7E4: addiu       $a1, $a1, 0x5080
    ctx->r5 = ADD32(ctx->r5, 0X5080);
    // 0x8022D7E8: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    // 0x8022D7EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D7F0: sb          $fp, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r30;
    // 0x8022D7F4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D7F8: jal         0x8009A3B4
    // 0x8022D7FC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D7FC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022D800: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8022D804: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022D808: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8022D80C: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x8022D810: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022D814: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D818: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D81C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D820: lhu         $v0, -0x4740($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4740);
    // 0x8022D824: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D828: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D82C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022D830: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8022D834: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022D838: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8022D83C: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x8022D840: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8022D844: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D848: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D84C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D850: lhu         $v0, -0x473E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X473E);
    // 0x8022D854: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D858: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D85C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x8022D860: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D864: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022D868: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x8022D86C: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x8022D870: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022D874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D87C: jal         0x8002C678
    // 0x8022D880: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x8022D880: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022D884: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022D888: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D88C: jal         0x800319B4
    // 0x8022D890: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8022D890: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_4:
    // 0x8022D894: sw          $s6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r22;
    // 0x8022D898: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D89C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022D8A0: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x8022D8A4: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x8022D8A8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8022D8AC: jal         0x80071A70
    // 0x8022D8B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_80071A70_4CE70(rdram, ctx);
        goto after_5;
    // 0x8022D8B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_5:
    // 0x8022D8B4: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_8022D8B8:
    // 0x8022D8B8: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8022D8BC: bne         $v0, $zero, L_8022D798
    if (ctx->r2 != 0) {
        // 0x8022D8C0: nop
    
            goto L_8022D798;
    }
    // 0x8022D8C0: nop

    // 0x8022D8C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022D8C8: lbu         $v0, -0x3B9A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9A);
    // 0x8022D8CC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8022D8D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D8D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022D8D8: sb          $v0, -0x3B9A($at)
    MEM_B(-0X3B9A, ctx->r1) = ctx->r2;
    // 0x8022D8DC: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_8022D8E0:
    // 0x8022D8E0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x8022D8E4: bne         $v0, $zero, L_8022D780
    if (ctx->r2 != 0) {
        // 0x8022D8E8: nop
    
            goto L_8022D780;
    }
    // 0x8022D8E8: nop

L_8022D8EC:
    // 0x8022D8EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8022D8F0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8022D8F4: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022D8F8: bne         $v0, $zero, L_8022D71C
    if (ctx->r2 != 0) {
        // 0x8022D8FC: nop
    
            goto L_8022D71C;
    }
    // 0x8022D8FC: nop

L_8022D900:
    // 0x8022D900: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D904: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8022D908: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8022D90C: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022D910: bne         $v0, $zero, L_8022D6F8
    if (ctx->r2 != 0) {
        // 0x8022D914: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_8022D6F8;
    }
    // 0x8022D914: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_8022D918:
    // 0x8022D918: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8022D91C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8022D920: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8022D924: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8022D928: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8022D92C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8022D930: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8022D934: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8022D938: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D93C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8022D940: jr          $ra
    // 0x8022D944: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8022D944: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8022D948: nop

    // 0x8022D94C: nop

;}
RECOMP_FUNC void func_8022572C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022572C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225730: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225734: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225738: bne         $v0, $zero, L_80225758
    if (ctx->r2 != 0) {
        // 0x8022573C: nop
    
            goto L_80225758;
    }
    // 0x8022573C: nop

    // 0x80225740: jal         0x8006033C
    // 0x80225744: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225744: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_0:
    // 0x80225748: beq         $v0, $zero, L_80225758
    if (ctx->r2 == 0) {
        // 0x8022574C: nop
    
            goto L_80225758;
    }
    // 0x8022574C: nop

    // 0x80225750: jal         0x802257CC
    // 0x80225754: nop

    func_802257CC_ovl21(rdram, ctx);
        goto after_1;
    // 0x80225754: nop

    after_1:
L_80225758:
    // 0x80225758: jal         0x8006036C
    // 0x8022575C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022575C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x80225760: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225764: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225768: jr          $ra
    // 0x8022576C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022576C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EA6C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EA70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EA74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022EA7C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022EA80: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022EA84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EA88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EA8C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EA90: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022EA94: bne         $v1, $v0, L_8022EAB0
    if (ctx->r3 != ctx->r2) {
        // 0x8022EA98: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022EAB0;
    }
    // 0x8022EA98: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022EA9C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022EAA0: addiu       $s1, $s1, -0x4010
    ctx->r17 = ADD32(ctx->r17, -0X4010);
    // 0x8022EAA4: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022EAA8: j           L_8022EAC0
    // 0x8022EAAC: addiu       $s3, $s3, -0x3FF0
    ctx->r19 = ADD32(ctx->r19, -0X3FF0);
        goto L_8022EAC0;
    // 0x8022EAAC: addiu       $s3, $s3, -0x3FF0
    ctx->r19 = ADD32(ctx->r19, -0X3FF0);
L_8022EAB0:
    // 0x8022EAB0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022EAB4: addiu       $s1, $s1, -0x4020
    ctx->r17 = ADD32(ctx->r17, -0X4020);
    // 0x8022EAB8: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022EABC: addiu       $s3, $s3, -0x4000
    ctx->r19 = ADD32(ctx->r19, -0X4000);
L_8022EAC0:
    // 0x8022EAC0: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8022EAC4: jal         0x800A3450
    // 0x8022EAC8: addiu       $s4, $s4, -0x3FE0
    ctx->r20 = ADD32(ctx->r20, -0X3FE0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022EAC8: addiu       $s4, $s4, -0x3FE0
    ctx->r20 = ADD32(ctx->r20, -0X3FE0);
    after_0:
    // 0x8022EACC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EAD0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022EAD4: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EAD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EADC: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022EAE0: beq         $v1, $v0, L_8022EB6C
    if (ctx->r3 == ctx->r2) {
        // 0x8022EAE4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022EB6C;
    }
    // 0x8022EAE4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EAE8: beql        $v0, $zero, L_8022EB00
    if (ctx->r2 == 0) {
        // 0x8022EAEC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EB00;
    }
    goto skip_0;
    // 0x8022EAEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EAF0: beq         $v1, $zero, L_8022EB10
    if (ctx->r3 == 0) {
        // 0x8022EAF4: nop
    
            goto L_8022EB10;
    }
    // 0x8022EAF4: nop

    // 0x8022EAF8: j           L_8022EBFC
    // 0x8022EAFC: nop

        goto L_8022EBFC;
    // 0x8022EAFC: nop

L_8022EB00:
    // 0x8022EB00: beq         $v1, $v0, L_8022EB80
    if (ctx->r3 == ctx->r2) {
        // 0x8022EB04: nop
    
            goto L_8022EB80;
    }
    // 0x8022EB04: nop

    // 0x8022EB08: j           L_8022EBFC
    // 0x8022EB0C: nop

        goto L_8022EBFC;
    // 0x8022EB0C: nop

L_8022EB10:
    // 0x8022EB10: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EB14: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022EB18: bne         $v0, $zero, L_8022EB3C
    if (ctx->r2 != 0) {
        // 0x8022EB1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EB3C;
    }
    // 0x8022EB1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB20: jal         0x800A3450
    // 0x8022EB24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022EB24: nop

    after_1:
    // 0x8022EB28: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EB2C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022EB30: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EB34: beq         $v0, $zero, L_8022EB48
    if (ctx->r2 == 0) {
        // 0x8022EB38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EB48;
    }
    // 0x8022EB38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022EB3C:
    // 0x8022EB3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EB40: j           L_8022EB5C
    // 0x8022EB44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022EB5C;
    // 0x8022EB44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022EB48:
    // 0x8022EB48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EB4C: jal         0x8022FED8
    // 0x8022EB50: nop

    func_8022FED8_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022EB50: nop

    after_2:
    // 0x8022EB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022EB5C:
    // 0x8022EB5C: jal         0x8022FF18
    // 0x8022EB60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022FF18_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022EB60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022EB64: j           L_8022EC20
    // 0x8022EB68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022EC20;
    // 0x8022EB68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022EB6C:
    // 0x8022EB6C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EB70: jal         0x8022FEC8
    // 0x8022EB74: nop

    func_8022FEC8_ovl21(rdram, ctx);
        goto after_4;
    // 0x8022EB74: nop

    after_4:
    // 0x8022EB78: j           L_8022EC20
    // 0x8022EB7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022EC20;
    // 0x8022EB7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EB80:
    // 0x8022EB80: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022EB84: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x8022EB88: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022EB8C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022EB90: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x8022EB94: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EB98: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022EB9C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x8022EBA0: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x8022EBA4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022EBA8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EBAC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022EBB0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022EBB4: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022EBB8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022EBBC: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022EBC0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022EBC4: beq         $v1, $zero, L_8022EBF4
    if (ctx->r3 == 0) {
        // 0x8022EBC8: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8022EBF4;
    }
    // 0x8022EBC8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022EBCC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022EBD0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022EBD4: beq         $v0, $zero, L_8022EBF4
    if (ctx->r2 == 0) {
        // 0x8022EBD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EBF4;
    }
    // 0x8022EBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EBDC: jal         0x8022FF18
    // 0x8022EBE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FF18_ovl21(rdram, ctx);
        goto after_5;
    // 0x8022EBE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8022EBE4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EBE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EBEC: j           L_8022EC20
    // 0x8022EBF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022EC20;
    // 0x8022EBF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EBF4:
    // 0x8022EBF4: j           L_8022EC20
    // 0x8022EBF8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_8022EC20;
    // 0x8022EBF8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022EBFC:
    // 0x8022EBFC: jal         0x800A3450
    // 0x8022EC00: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022EC00: nop

    after_6:
    // 0x8022EC04: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EC08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EC0C: jal         0x8022FED8
    // 0x8022EC10: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022FED8_ovl21(rdram, ctx);
        goto after_7;
    // 0x8022EC10: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022EC14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EC1C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_8022EC20:
    // 0x8022EC20: jal         0x800A3450
    // 0x8022EC24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022EC24: nop

    after_8:
    // 0x8022EC28: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EC2C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022EC30: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EC34: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022EC38: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022EC3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022EC40: beq         $v1, $v0, L_8022EC58
    if (ctx->r3 == ctx->r2) {
        // 0x8022EC44: nop
    
            goto L_8022EC58;
    }
    // 0x8022EC44: nop

    // 0x8022EC48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC50: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022EC54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC58:
    // 0x8022EC58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022EC5C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022EC60: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EC64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC70: jr          $ra
    // 0x8022EC74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EC74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231BF4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231BF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231BFC: lhu         $v1, 0x1DA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1DA);
    // 0x80231C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231C04: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231C08: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
    // 0x80231C0C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80231C10: beq         $v1, $zero, L_80231C24
    if (ctx->r3 == 0) {
        // 0x80231C14: sb          $v0, 0x385($a0)
        MEM_B(0X385, ctx->r4) = ctx->r2;
            goto L_80231C24;
    }
    // 0x80231C14: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x80231C18: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80231C1C: j           L_80231C2C
    // 0x80231C20: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_80231C2C;
    // 0x80231C20: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_80231C24:
    // 0x80231C24: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80231C28: sb          $a1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r5;
L_80231C2C:
    // 0x80231C2C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231C30: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80231C34: jal         0x80050294
    // 0x80231C38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231C38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80231C3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231C40: jr          $ra
    // 0x80231C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257CC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802257D0: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x802257D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802257D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802257DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802257E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802257E4: jal         0x8006033C
    // 0x802257E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802257E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802257EC: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    // 0x802257F0: jal         0x8006033C
    // 0x802257F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802257F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802257F8: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x802257FC: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80225800: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80225804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225808: beq         $v1, $v0, L_80225868
    if (ctx->r3 == ctx->r2) {
        // 0x8022580C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225868;
    }
    // 0x8022580C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225810: beql        $v0, $zero, L_80225828
    if (ctx->r2 == 0) {
        // 0x80225814: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225828;
    }
    goto skip_0;
    // 0x80225814: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225818: beq         $v1, $zero, L_80225838
    if (ctx->r3 == 0) {
        // 0x8022581C: nop
    
            goto L_80225838;
    }
    // 0x8022581C: nop

    // 0x80225820: j           L_802258BC
    // 0x80225824: nop

        goto L_802258BC;
    // 0x80225824: nop

L_80225828:
    // 0x80225828: beq         $v1, $v0, L_80225890
    if (ctx->r3 == ctx->r2) {
        // 0x8022582C: nop
    
            goto L_80225890;
    }
    // 0x8022582C: nop

    // 0x80225830: j           L_802258BC
    // 0x80225834: nop

        goto L_802258BC;
    // 0x80225834: nop

L_80225838:
    // 0x80225838: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022583C: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x80225840: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80225844: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x80225848: bne         $v0, $zero, L_802258BC
    if (ctx->r2 != 0) {
        // 0x8022584C: nop
    
            goto L_802258BC;
    }
    // 0x8022584C: nop

    // 0x80225850: jal         0x8006036C
    // 0x80225854: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225854: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_2:
    // 0x80225858: jal         0x80060590
    // 0x8022585C: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8022585C: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    after_3:
    // 0x80225860: j           L_802258BC
    // 0x80225864: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_802258BC;
    // 0x80225864: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80225868:
    // 0x80225868: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022586C: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x80225870: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80225874: sltiu       $v0, $v0, 0x15
    ctx->r2 = ctx->r2 < 0X15 ? 1 : 0;
    // 0x80225878: bne         $v0, $zero, L_802258BC
    if (ctx->r2 != 0) {
        // 0x8022587C: nop
    
            goto L_802258BC;
    }
    // 0x8022587C: nop

    // 0x80225880: jal         0x80060590
    // 0x80225884: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80225884: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_4:
    // 0x80225888: j           L_802258B0
    // 0x8022588C: nop

        goto L_802258B0;
    // 0x8022588C: nop

L_80225890:
    // 0x80225890: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80225894: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x80225898: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022589C: sltiu       $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 < 0X1F ? 1 : 0;
    // 0x802258A0: bne         $v0, $zero, L_802258BC
    if (ctx->r2 != 0) {
        // 0x802258A4: nop
    
            goto L_802258BC;
    }
    // 0x802258A4: nop

    // 0x802258A8: jal         0x8006036C
    // 0x802258AC: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802258AC: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_5:
L_802258B0:
    // 0x802258B0: jal         0x8006036C
    // 0x802258B4: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x802258B4: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    after_6:
    // 0x802258B8: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_802258BC:
    // 0x802258BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802258C0: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802258C4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802258C8: bne         $v1, $v0, L_802258E4
    if (ctx->r3 != ctx->r2) {
        // 0x802258CC: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_802258E4;
    }
    // 0x802258CC: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x802258D0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802258D4: addiu       $v0, $v0, -0x4FEC
    ctx->r2 = ADD32(ctx->r2, -0X4FEC);
    // 0x802258D8: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x802258DC: j           L_802258F4
    // 0x802258E0: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
        goto L_802258F4;
    // 0x802258E0: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_802258E4:
    // 0x802258E4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802258E8: addiu       $v0, $v0, -0x4FF0
    ctx->r2 = ADD32(ctx->r2, -0X4FF0);
    // 0x802258EC: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x802258F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802258F4:
    // 0x802258F4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802258F8: beq         $v0, $zero, L_80225940
    if (ctx->r2 == 0) {
        // 0x802258FC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80225940;
    }
    // 0x802258FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225900: andi        $s2, $v1, 0xFF
    ctx->r18 = ctx->r3 & 0XFF;
    // 0x80225904: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80225908: addiu       $s3, $s3, -0x515C
    ctx->r19 = ADD32(ctx->r19, -0X515C);
    // 0x8022590C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80225910:
    // 0x80225910: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x80225914: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80225918: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022591C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80225920: jal         0x8005FB30
    // 0x80225924: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_7;
    // 0x80225924: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    after_7:
    // 0x80225928: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022592C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225930: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80225934: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80225938: bne         $v0, $zero, L_80225910
    if (ctx->r2 != 0) {
        // 0x8022593C: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_80225910;
    }
    // 0x8022593C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80225940:
    // 0x80225940: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225944: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225948: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022594C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225954: jr          $ra
    // 0x80225958: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225958: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022595C: nop

;}
RECOMP_FUNC void func_802261F0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802261F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226204: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226208: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022620C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80226210: jal         0x8004F820
    // 0x80226214: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226214: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x80226218: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022621C: lw          $a0, 0x4F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4F0);
    // 0x80226220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226224: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226228: beq         $a0, $zero, L_80226288
    if (ctx->r4 == 0) {
        // 0x8022622C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80226288;
    }
    // 0x8022622C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226230: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226234: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226238: beq         $v0, $zero, L_80226288
    if (ctx->r2 == 0) {
        // 0x8022623C: nop
    
            goto L_80226288;
    }
    // 0x8022623C: nop

    // 0x80226240: jal         0x800A3450
    // 0x80226244: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80226244: nop

    after_1:
    // 0x80226248: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022624C: beq         $v0, $zero, L_80226264
    if (ctx->r2 == 0) {
        // 0x80226250: nop
    
            goto L_80226264;
    }
    // 0x80226250: nop

    // 0x80226254: jal         0x802268A8
    // 0x80226258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802268A8_ovl21(rdram, ctx);
        goto after_2;
    // 0x80226258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022625C: j           L_802262CC
    // 0x80226260: nop

        goto L_802262CC;
    // 0x80226260: nop

L_80226264:
    // 0x80226264: jal         0x80226804
    // 0x80226268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226804_ovl21(rdram, ctx);
        goto after_3;
    // 0x80226268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022626C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226270: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226274: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80226278: jal         0x8004DA90
    // 0x8022627C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022627C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226280: j           L_802262CC
    // 0x80226284: nop

        goto L_802262CC;
    // 0x80226284: nop

L_80226288:
    // 0x80226288: jal         0x8005044C
    // 0x8022628C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022628C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226290: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226294: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226298: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022629C: jal         0x8004DA90
    // 0x802262A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x802262A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802262A4: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802262A8: xori        $v1, $v0, 0x5
    ctx->r3 = ctx->r2 ^ 0X5;
    // 0x802262AC: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802262B0: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
    // 0x802262B4: beql        $v0, $v1, L_802262BC
    if (ctx->r2 == ctx->r3) {
        // 0x802262B8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_802262BC;
    }
    goto skip_0;
    // 0x802262B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_802262BC:
    // 0x802262BC: beq         $a0, $zero, L_802262CC
    if (ctx->r4 == 0) {
        // 0x802262C0: addiu       $a0, $zero, 0x1B7
        ctx->r4 = ADD32(0, 0X1B7);
            goto L_802262CC;
    }
    // 0x802262C0: addiu       $a0, $zero, 0x1B7
    ctx->r4 = ADD32(0, 0X1B7);
    // 0x802262C4: jal         0x8002A33C
    // 0x802262C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x802262C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
L_802262CC:
    // 0x802262CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802262D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262D4: jr          $ra
    // 0x802262D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802262D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B60_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226B64: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80226B68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80226B70: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226B74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226B78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226B7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226B80: lw          $v0, -0x4F60($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F60);
    // 0x80226B84: jalr        $v0
    // 0x80226B88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226B88: nop

    after_0:
    // 0x80226B8C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80226B90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226B94: bne         $v0, $zero, L_80226BA8
    if (ctx->r2 != 0) {
        // 0x80226B98: nop
    
            goto L_80226BA8;
    }
    // 0x80226B98: nop

    // 0x80226B9C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226BA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226BA4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80226BA8:
    // 0x80226BA8: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80226BAC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226BB0: beql        $v1, $v0, L_80226BB8
    if (ctx->r3 == ctx->r2) {
        // 0x80226BB4: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80226BB8;
    }
    goto skip_0;
    // 0x80226BB4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80226BB8:
    // 0x80226BB8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80226BBC: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80226BC0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80226BC4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80226BC8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80226BCC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80226BD0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80226BD4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226BD8: bne         $v0, $zero, L_80226C40
    if (ctx->r2 != 0) {
        // 0x80226BDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226C40;
    }
    // 0x80226BDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226BE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226BE4: beq         $v0, $zero, L_80226C00
    if (ctx->r2 == 0) {
        // 0x80226BE8: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80226C00;
    }
    // 0x80226BE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80226BEC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80226BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226BF4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80226BF8: j           L_80226C10
    // 0x80226BFC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_80226C10;
    // 0x80226BFC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_80226C00:
    // 0x80226C00: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80226C04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226C08: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80226C0C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_80226C10:
    // 0x80226C10: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80226C14: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226C18: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80226C1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80226C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226C24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80226C28: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80226C2C: jal         0x80051E18
    // 0x80226C30: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80226C30: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80226C34: jal         0x800472C0
    // 0x80226C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x80226C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226C40:
    // 0x80226C40: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80226C44: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80226C48: jal         0x8003B564
    // 0x80226C4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80226C4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80226C50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80226C54: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80226C58: jr          $ra
    // 0x80226C5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226C5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226488_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022648C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226490: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80226494: beq         $v0, $zero, L_802264AC
    if (ctx->r2 == 0) {
        // 0x80226498: nop
    
            goto L_802264AC;
    }
    // 0x80226498: nop

    // 0x8022649C: jal         0x80226804
    // 0x802264A0: nop

    func_80226804_ovl21(rdram, ctx);
        goto after_0;
    // 0x802264A0: nop

    after_0:
    // 0x802264A4: j           L_802264B4
    // 0x802264A8: nop

        goto L_802264B4;
    // 0x802264A8: nop

L_802264AC:
    // 0x802264AC: jal         0x8005044C
    // 0x802264B0: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802264B0: nop

    after_1:
L_802264B4:
    // 0x802264B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802264B8: jr          $ra
    // 0x802264BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
