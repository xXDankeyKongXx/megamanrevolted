#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022B1D0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B1D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B1E0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022B1E4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B1E8: jal         0x8004FA7C
    // 0x8022B1EC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022B1EC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022B1F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B1F4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B1F8: bne         $v0, $zero, L_8022B208
    if (ctx->r2 != 0) {
        // 0x8022B1FC: nop
    
            goto L_8022B208;
    }
    // 0x8022B1FC: nop

    // 0x8022B200: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022B204: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B208:
    // 0x8022B208: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B20C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B210: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B214: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B21C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B220: jr          $ra
    // 0x8022B224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229F9C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229FA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229FA4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80229FA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229FAC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229FB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229FB4: lw          $v0, 0x240C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X240C);
    // 0x80229FB8: jalr        $v0
    // 0x80229FBC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229FBC: nop

    after_0:
    // 0x80229FC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229FC4: jr          $ra
    // 0x80229FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E60C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E60C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E610: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E614: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E618: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E61C: jal         0x8004F144
    // 0x8022E620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022E620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E624: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022E628: beq         $s0, $zero, L_8022E668
    if (ctx->r16 == 0) {
        // 0x8022E62C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022E668;
    }
    // 0x8022E62C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022E630: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E634: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022E638: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E63C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022E640: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022E644: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022E648: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E64C: jal         0x8009A3B4
    // 0x8022E650: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E650: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022E654: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022E658: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E65C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022E660: jal         0x8004F684
    // 0x8022E664: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x8022E664: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_8022E668:
    // 0x8022E668: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E66C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E670: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E674: jr          $ra
    // 0x8022E678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A2D4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A2D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A2DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A2E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A2E4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A2E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A2EC: jal         0x8004DA90
    // 0x8022A2F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A2F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022A2F4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022A2F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A2FC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022A300: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A304: bne         $v0, $zero, L_8022A33C
    if (ctx->r2 != 0) {
        // 0x8022A308: nop
    
            goto L_8022A33C;
    }
    // 0x8022A308: nop

    // 0x8022A30C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022A310: beq         $v0, $zero, L_8022A324
    if (ctx->r2 == 0) {
        // 0x8022A314: nop
    
            goto L_8022A324;
    }
    // 0x8022A314: nop

    // 0x8022A318: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022A31C: j           L_8022A32C
    // 0x8022A320: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022A32C;
    // 0x8022A320: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_8022A324:
    // 0x8022A324: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022A328: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022A32C:
    // 0x8022A32C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022A330: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A334: j           L_8022A38C
    // 0x8022A338: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022A38C;
    // 0x8022A338: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022A33C:
    // 0x8022A33C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022A340: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A344: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A348: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A34C: bne         $v0, $zero, L_8022A35C
    if (ctx->r2 != 0) {
        // 0x8022A350: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A35C;
    }
    // 0x8022A350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A354: j           L_8022A38C
    // 0x8022A358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A38C;
    // 0x8022A358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A35C:
    // 0x8022A35C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022A360: jal         0x8022C264
    // 0x8022A364: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022C264_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022A364: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022A368: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A36C: beq         $v0, $zero, L_8022A390
    if (ctx->r2 == 0) {
        // 0x8022A370: nop
    
            goto L_8022A390;
    }
    // 0x8022A370: nop

    // 0x8022A374: jal         0x8022C1C8
    // 0x8022A378: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022A378: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022A37C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A380: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A384: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A388: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022A38C:
    // 0x8022A38C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A390:
    // 0x8022A390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A394: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A398: jr          $ra
    // 0x8022A39C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A39C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AA74_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AA78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AA7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AA80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AA84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AA88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA8C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x8022AA90: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022AA94: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x8022AA98: jal         0x8004FA7C
    // 0x8022AA9C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022AA9C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x8022AAA0: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x8022AAA4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022AAA8: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022AAAC: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022AAB0: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x8022AAB4: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022AAB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AABC: bnel        $v0, $zero, L_8022AADC
    if (ctx->r2 != 0) {
        // 0x8022AAC0: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022AADC;
    }
    goto skip_0;
    // 0x8022AAC0: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x8022AAC4: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x8022AAC8: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022AACC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AAD0: beq         $v0, $zero, L_8022AAE0
    if (ctx->r2 == 0) {
        // 0x8022AAD4: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022AAE0;
    }
    // 0x8022AAD4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022AAD8: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022AADC:
    // 0x8022AADC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022AAE0:
    // 0x8022AAE0: bne         $v0, $zero, L_8022AB10
    if (ctx->r2 != 0) {
        // 0x8022AAE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AB10;
    }
    // 0x8022AAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAE8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022AAEC: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022AAF0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8022AAF4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AAF8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022AAFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AB00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB04: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022AB08: j           L_8022AB68
    // 0x8022AB0C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_8022AB68;
    // 0x8022AB0C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_8022AB10:
    // 0x8022AB10: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022AB14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB18: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022AB1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AB20: beq         $v0, $zero, L_8022AB64
    if (ctx->r2 == 0) {
        // 0x8022AB24: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AB64;
    }
    // 0x8022AB24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AB28: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022AB2C: jal         0x8022C264
    // 0x8022AB30: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022C264_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022AB30: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022AB34: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AB38: beq         $v0, $zero, L_8022AB70
    if (ctx->r2 == 0) {
        // 0x8022AB3C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AB70;
    }
    // 0x8022AB3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AB40: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022AB44: jal         0x8022C1C8
    // 0x8022AB48: nop

    func_8022C1C8_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022AB48: nop

    after_2:
    // 0x8022AB4C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022AB50: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022AB54: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022AB58: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022AB5C: j           L_8022AB90
    // 0x8022AB60: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022AB90;
    // 0x8022AB60: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022AB64:
    // 0x8022AB64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AB68:
    // 0x8022AB68: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022AB6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022AB70:
    // 0x8022AB70: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022AB74: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022AB78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AB7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AB80: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022AB84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AB88: jal         0x8004DA90
    // 0x8022AB8C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022AB8C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_8022AB90:
    // 0x8022AB90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AB94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AB98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ABA0: jr          $ra
    // 0x8022ABA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ABA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A108_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A10C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A110: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A114: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A118: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A11C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A120: lw          $v0, 0x245C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X245C);
    // 0x8022A124: jalr        $v0
    // 0x8022A128: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A128: nop

    after_0:
    // 0x8022A12C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A130: jr          $ra
    // 0x8022A134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229FCC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229FD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229FD4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229FD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229FDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229FE0: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80229FE4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80229FE8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229FEC: addiu       $v0, $v0, 0x241C
    ctx->r2 = ADD32(ctx->r2, 0X241C);
    // 0x80229FF0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80229FF4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80229FF8: jal         0x8022C1C8
    // 0x80229FFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_0;
    // 0x80229FFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022A000: jal         0x800A3450
    // 0x8022A004: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022A004: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022A008: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A00C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A010: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A014: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A018: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A01C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x8022A020: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A024: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A02C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A030: jr          $ra
    // 0x8022A034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A0F4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0F4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022A0F8: bltzl       $v0, L_8022A100
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A0FC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022A100;
    }
    goto skip_0;
    // 0x8022A0FC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022A100:
    // 0x8022A100: jr          $ra
    // 0x8022A104: nop

    TRACE_RETURN()
    return;
    // 0x8022A104: nop

;}
RECOMP_FUNC void func_8022DAB8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DABC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DAC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DAC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DAC8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022DACC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DAD0: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8022DAD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DAD8: jal         0x8004DA90
    // 0x8022DADC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022DADC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022DAE0: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DAE4: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022DAE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DAEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DAF0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x8022DAF4: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x8022DAF8: blez        $v1, L_8022DBB0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022DAFC: nop
    
            goto L_8022DBB0;
    }
    // 0x8022DAFC: nop

    // 0x8022DB00: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x8022DB04: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022DB08: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8022DB0C: bne         $v1, $zero, L_8022DB18
    if (ctx->r3 != 0) {
        // 0x8022DB10: nop
    
            goto L_8022DB18;
    }
    // 0x8022DB10: nop

    // 0x8022DB14: break       7
    do_break(2149767956);
L_8022DB18:
    // 0x8022DB18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022DB1C: bne         $v1, $at, L_8022DB30
    if (ctx->r3 != ctx->r1) {
        // 0x8022DB20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022DB30;
    }
    // 0x8022DB20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DB24: bne         $v0, $at, L_8022DB30
    if (ctx->r2 != ctx->r1) {
        // 0x8022DB28: nop
    
            goto L_8022DB30;
    }
    // 0x8022DB28: nop

    // 0x8022DB2C: break       6
    do_break(2149767980);
L_8022DB30:
    // 0x8022DB30: mflo        $v0
    ctx->r2 = lo;
    // 0x8022DB34: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8022DB38: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022DB3C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022DB40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DB44: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8022DB48: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DB4C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022DB50: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8022DB54: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022DB58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DB5C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022DB60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB64: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022DB68: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x8022DB6C: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8022DB70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DB74: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022DB78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DB7C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8022DB80: bne         $a0, $zero, L_8022DB8C
    if (ctx->r4 != 0) {
        // 0x8022DB84: nop
    
            goto L_8022DB8C;
    }
    // 0x8022DB84: nop

    // 0x8022DB88: break       7
    do_break(2149768072);
L_8022DB8C:
    // 0x8022DB8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022DB90: bne         $a0, $at, L_8022DBA4
    if (ctx->r4 != ctx->r1) {
        // 0x8022DB94: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022DBA4;
    }
    // 0x8022DB94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DB98: bne         $v0, $at, L_8022DBA4
    if (ctx->r2 != ctx->r1) {
        // 0x8022DB9C: nop
    
            goto L_8022DBA4;
    }
    // 0x8022DB9C: nop

    // 0x8022DBA0: break       6
    do_break(2149768096);
L_8022DBA4:
    // 0x8022DBA4: mfhi        $a0
    ctx->r4 = hi;
    // 0x8022DBA8: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022DBAC: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
L_8022DBB0:
    // 0x8022DBB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DBB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DBB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DBBC: jr          $ra
    // 0x8022DBC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DBC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022DBC4: nop

    // 0x8022DBC8: nop

    // 0x8022DBCC: nop

;}
RECOMP_FUNC void func_80226720_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022672C: jal         0x8006072C
    // 0x80226730: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x80226730: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80226734: beq         $v0, $zero, L_80226748
    if (ctx->r2 == 0) {
        // 0x80226738: nop
    
            goto L_80226748;
    }
    // 0x80226738: nop

    // 0x8022673C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226740: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226744: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226748:
    // 0x80226748: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022674C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226750: beq         $v1, $v0, L_80226788
    if (ctx->r3 == ctx->r2) {
        // 0x80226754: nop
    
            goto L_80226788;
    }
    // 0x80226754: nop

    // 0x80226758: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022675C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226760: jalr        $v0
    // 0x80226764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226768: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022676C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80226770: beq         $v0, $zero, L_80226798
    if (ctx->r2 == 0) {
        // 0x80226774: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80226798;
    }
    // 0x80226774: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80226778: bne         $v0, $zero, L_80226798
    if (ctx->r2 != 0) {
        // 0x8022677C: nop
    
            goto L_80226798;
    }
    // 0x8022677C: nop

    // 0x80226780: jal         0x80036E48
    // 0x80226784: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80226784: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
L_80226788:
    // 0x80226788: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022678C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226794: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226798:
    // 0x80226798: jal         0x8005FB90
    // 0x8022679C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x8022679C: nop

    after_3:
    // 0x802267A0: jal         0x80060018
    // 0x802267A4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x802267A4: nop

    after_4:
    // 0x802267A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802267AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267B0: jr          $ra
    // 0x802267B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DCB0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCB0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DCB4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8022DCB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DCBC: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x8022DCC0: beq         $v0, $zero, L_8022DCF8
    if (ctx->r2 == 0) {
        // 0x8022DCC4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022DCF8;
    }
    // 0x8022DCC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DCC8: lbu         $v0, 0x360($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X360);
    // 0x8022DCCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DCD0: sb          $v0, 0x360($a0)
    MEM_B(0X360, ctx->r4) = ctx->r2;
    // 0x8022DCD4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DCD8: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8022DCDC: beql        $v0, $zero, L_8022DCE4
    if (ctx->r2 == 0) {
        // 0x8022DCE0: sb          $zero, 0x360($a0)
        MEM_B(0X360, ctx->r4) = 0;
            goto L_8022DCE4;
    }
    goto skip_0;
    // 0x8022DCE0: sb          $zero, 0x360($a0)
    MEM_B(0X360, ctx->r4) = 0;
    skip_0:
L_8022DCE4:
    // 0x8022DCE4: lbu         $a1, 0x360($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X360);
    // 0x8022DCE8: jal         0x80050294
    // 0x8022DCEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DCEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DCF0: j           L_8022DDE0
    // 0x8022DCF4: nop

        goto L_8022DDE0;
    // 0x8022DCF4: nop

L_8022DCF8:
    // 0x8022DCF8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DCFC: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DD00: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DD04: beq         $v0, $zero, L_8022DD18
    if (ctx->r2 == 0) {
        // 0x8022DD08: nop
    
            goto L_8022DD18;
    }
    // 0x8022DD08: nop

    // 0x8022DD0C: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8022DD10: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022DD14: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_8022DD18:
    // 0x8022DD18: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DD1C: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DD20: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022DD24: beq         $v0, $zero, L_8022DD38
    if (ctx->r2 == 0) {
        // 0x8022DD28: nop
    
            goto L_8022DD38;
    }
    // 0x8022DD28: nop

    // 0x8022DD2C: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8022DD30: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022DD34: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_8022DD38:
    // 0x8022DD38: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DD3C: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DD40: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022DD44: beq         $v0, $zero, L_8022DD58
    if (ctx->r2 == 0) {
        // 0x8022DD48: nop
    
            goto L_8022DD58;
    }
    // 0x8022DD48: nop

    // 0x8022DD4C: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022DD50: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022DD54: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
L_8022DD58:
    // 0x8022DD58: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DD5C: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DD60: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022DD64: beq         $v0, $zero, L_8022DD78
    if (ctx->r2 == 0) {
        // 0x8022DD68: nop
    
            goto L_8022DD78;
    }
    // 0x8022DD68: nop

    // 0x8022DD6C: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022DD70: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022DD74: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
L_8022DD78:
    // 0x8022DD78: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DD7C: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DD80: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8022DD84: beq         $v0, $zero, L_8022DD98
    if (ctx->r2 == 0) {
        // 0x8022DD88: nop
    
            goto L_8022DD98;
    }
    // 0x8022DD88: nop

    // 0x8022DD8C: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8022DD90: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022DD94: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_8022DD98:
    // 0x8022DD98: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022DD9C: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8022DDA0: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8022DDA4: beq         $v0, $zero, L_8022DDB8
    if (ctx->r2 == 0) {
        // 0x8022DDA8: nop
    
            goto L_8022DDB8;
    }
    // 0x8022DDA8: nop

    // 0x8022DDAC: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8022DDB0: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022DDB4: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_8022DDB8:
    // 0x8022DDB8: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x8022DDBC: lh          $v1, 0x18($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X18);
    // 0x8022DDC0: lh          $a1, 0x16($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X16);
    // 0x8022DDC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022DDCC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022DDD0: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8022DDD4: sw          $v1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r3;
    // 0x8022DDD8: jal         0x8005044C
    // 0x8022DDDC: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022DDDC: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    after_1:
L_8022DDE0:
    // 0x8022DDE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DDE4: jr          $ra
    // 0x8022DDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E3E4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3E4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022E3E8: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8022E3EC: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8022E3F0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8022E3F4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8022E3F8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8022E3FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022E400: bgez        $v1, L_8022E440
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022E404: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022E440;
    }
    // 0x8022E404: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022E408: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E40C: bne         $v1, $v0, L_8022E42C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E410: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8022E42C;
    }
    // 0x8022E410: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022E414: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8022E418: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8022E41C: bne         $v1, $v0, L_8022E44C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E420: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022E44C;
    }
    // 0x8022E420: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E424: j           L_8022E470
    // 0x8022E428: nop

        goto L_8022E470;
    // 0x8022E428: nop

L_8022E42C:
    // 0x8022E42C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8022E430: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E434: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E438: j           L_8022E44C
    // 0x8022E43C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8022E44C;
    // 0x8022E43C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_8022E440:
    // 0x8022E440: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8022E444: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022E448: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022E44C:
    // 0x8022E44C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8022E450: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8022E454: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022E458: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022E45C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8022E460: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8022E464: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8022E468: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E46C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_8022E470:
    // 0x8022E470: jr          $ra
    // 0x8022E474: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022E474: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8022E478: nop

    // 0x8022E47C: nop

;}
RECOMP_FUNC void func_8022A09C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A09C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x8022A0A0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022A0A4: beq         $v0, $zero, L_8022A0C0
    if (ctx->r2 == 0) {
        // 0x8022A0A8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A0C0;
    }
    // 0x8022A0A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A0AC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A0B0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022A0B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A0B8: bne         $v0, $zero, L_8022A0EC
    if (ctx->r2 != 0) {
        // 0x8022A0BC: nop
    
            goto L_8022A0EC;
    }
    // 0x8022A0BC: nop

L_8022A0C0:
    // 0x8022A0C0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022A0C4: bgez        $v0, L_8022A0EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A0C8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022A0EC;
    }
    // 0x8022A0C8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022A0CC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022A0D0: bnel        $v1, $v0, L_8022A0EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A0D4: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022A0EC;
    }
    goto skip_0;
    // 0x8022A0D4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x8022A0D8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A0DC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022A0E0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022A0E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A0E8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022A0EC:
    // 0x8022A0EC: jr          $ra
    // 0x8022A0F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022A0F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022D614_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D614: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D618: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D61C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D624: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D628: jal         0x800A3450
    // 0x8022D62C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D62C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D630: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D634: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022D638: bne         $v1, $zero, L_8022D6C0
    if (ctx->r3 != 0) {
        // 0x8022D63C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022D6C0;
    }
    // 0x8022D63C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D640: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022D644: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x8022D648: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D64C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D650: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D654: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D658: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D65C: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D660: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022D664: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D668: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D66C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D670: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022D674: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D678: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D67C: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D680: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022D684: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D688: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D68C: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D690: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D694: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D698: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D69C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022D6A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D6A4: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022D6A8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022D6AC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022D6B0: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x8022D6B4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D6B8: j           L_8022D710
    // 0x8022D6BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D710;
    // 0x8022D6BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D6C0:
    // 0x8022D6C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D6C4: bne         $v1, $v0, L_8022D710
    if (ctx->r3 != ctx->r2) {
        // 0x8022D6C8: nop
    
            goto L_8022D710;
    }
    // 0x8022D6C8: nop

    // 0x8022D6CC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D6D0: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D6D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D6D8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D6DC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D6E0: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022D6E4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D6E8: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022D6EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D6F0: bne         $a0, $zero, L_8022D710
    if (ctx->r4 != 0) {
        // 0x8022D6F4: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_8022D710;
    }
    // 0x8022D6F4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D6F8: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8022D6FC: slti        $v0, $v0, 0x12D
    ctx->r2 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x8022D700: bnel        $v0, $zero, L_8022D710
    if (ctx->r2 != 0) {
        // 0x8022D704: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022D710;
    }
    goto skip_0;
    // 0x8022D704: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
    // 0x8022D708: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D70C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022D710:
    // 0x8022D710: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D714: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D718: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D71C: jr          $ra
    // 0x8022D720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B620_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B620: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B624: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B628: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B62C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B630: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B634: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B638: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B63C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B640: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B644: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B648: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B64C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B650: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022B654: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022B658: jal         0x8022C1C8
    // 0x8022B65C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022B65C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022B660: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022B664: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B668: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B66C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B670: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022B674: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B678: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022B67C: jal         0x8004F820
    // 0x8022B680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B684: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B688: bgez        $v0, L_8022B6B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B68C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022B6B8;
    }
    // 0x8022B68C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022B690: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B694: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B698: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B69C: jal         0x8004F820
    // 0x8022B6A0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B6A0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B6A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B6A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B6AC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B6B0: j           L_8022B6D4
    // 0x8022B6B4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B6D4;
    // 0x8022B6B4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B6B8:
    // 0x8022B6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B6BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B6C0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B6C4: jal         0x8004F820
    // 0x8022B6C8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B6C8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022B6CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B6D0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B6D4:
    // 0x8022B6D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B6D8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022B6DC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B6E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B6E4: jal         0x800610AC
    // 0x8022B6E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022B6E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022B6EC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B6F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B6F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B6F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B700: jr          $ra
    // 0x8022B704: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B704: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BA50_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA50: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022BA54: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022BA58: bne         $v0, $zero, L_8022BA90
    if (ctx->r2 != 0) {
        // 0x8022BA5C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022BA90;
    }
    // 0x8022BA5C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022BA60: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022BA64: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022BA68: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022BA6C: beq         $v1, $zero, L_8022BA7C
    if (ctx->r3 == 0) {
        // 0x8022BA70: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022BA7C;
    }
    // 0x8022BA70: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022BA74: j           L_8022BA80
    // 0x8022BA78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022BA80;
    // 0x8022BA78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022BA7C:
    // 0x8022BA7C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022BA80:
    // 0x8022BA80: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022BA84: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022BA88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BA8C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022BA90:
    // 0x8022BA90: jr          $ra
    // 0x8022BA94: nop

    TRACE_RETURN()
    return;
    // 0x8022BA94: nop

;}
RECOMP_FUNC void func_8022F9A0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F9A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022F9A8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022F9AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F9B0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022F9B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F9B8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8022F9BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022F9C0: sll         $s3, $s0, 16
    ctx->r19 = S32(ctx->r16 << 16);
    // 0x8022F9C4: sra         $s3, $s3, 16
    ctx->r19 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8022F9C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F9CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022F9D0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022F9D4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022F9D8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022F9DC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022F9E0: jal         0x800324B4
    // 0x8022F9E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022F9E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022F9E8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022F9EC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F9F0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F9F4: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x8022F9F8: sra         $s1, $s1, 24
    ctx->r17 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8022F9FC: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FA00: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FA04: lhu         $v0, 0x1C($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1C);
    // 0x8022FA08: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022FA0C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FA10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FA14: jal         0x80032498
    // 0x8022FA18: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022FA18: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022FA1C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022FA20: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FA24: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FA28: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FA2C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FA30: lui         $s6, 0x2EF0
    ctx->r22 = S32(0X2EF0 << 16);
    // 0x8022FA34: ori         $s6, $s6, 0xA0A0
    ctx->r22 = ctx->r22 | 0XA0A0;
    // 0x8022FA38: lui         $s7, 0x3D48
    ctx->r23 = S32(0X3D48 << 16);
    // 0x8022FA3C: ori         $s7, $s7, 0x4080
    ctx->r23 = ctx->r23 | 0X4080;
    // 0x8022FA40: lui         $fp, 0xE
    ctx->r30 = S32(0XE << 16);
    // 0x8022FA44: lhu         $v0, 0x20($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X20);
    // 0x8022FA48: ori         $fp, $fp, 0x409F
    ctx->r30 = ctx->r30 | 0X409F;
    // 0x8022FA4C: addiu       $s0, $s0, 0x400
    ctx->r16 = ADD32(ctx->r16, 0X400);
    // 0x8022FA50: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8022FA54: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FA58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FA5C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022FA60: lhu         $v0, 0x1E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1E);
    // 0x8022FA64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA68: sll         $s5, $s1, 2
    ctx->r21 = S32(ctx->r17 << 2);
    // 0x8022FA6C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8022FA70: jal         0x800324B4
    // 0x8022FA74: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8022FA74: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022FA78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA7C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022FA80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FA84: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022FA88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FA8C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022FA90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FA94: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FA98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FA9C: jal         0x80032498
    // 0x8022FAA0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8022FAA0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022FAA4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022FAA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FAAC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022FAB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FAB4: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x8022FAB8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FABC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FAC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FAC4: jal         0x8003B878
    // 0x8022FAC8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_4;
    // 0x8022FAC8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022FACC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022FAD0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022FAD4: addiu       $a3, $zero, 0x5F80
    ctx->r7 = ADD32(0, 0X5F80);
    // 0x8022FAD8: sw          $a3, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r7;
    // 0x8022FADC: addiu       $a3, $zero, 0x5F9F
    ctx->r7 = ADD32(0, 0X5F9F);
    // 0x8022FAE0: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x8022FAE4: sw          $s7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r23;
    // 0x8022FAE8: sw          $fp, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r30;
    // 0x8022FAEC: sw          $a3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r7;
    // 0x8022FAF0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8022FAF4: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8022FAF8: addiu       $s2, $zero, 0x80
    ctx->r18 = ADD32(0, 0X80);
    // 0x8022FAFC: subu        $s2, $s2, $s5
    ctx->r18 = SUB32(ctx->r18, ctx->r21);
    // 0x8022FB00: sw          $s2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r18;
    // 0x8022FB04: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x8022FB08: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8022FB0C: jal         0x800324B4
    // 0x8022FB10: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x8022FB10: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    after_5:
    // 0x8022FB14: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022FB18: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FB1C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FB20: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FB24: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FB28: lhu         $v0, 0x1C($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1C);
    // 0x8022FB2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022FB30: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FB34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FB38: jal         0x80032498
    // 0x8022FB3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x8022FB3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022FB40: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022FB44: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FB48: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FB4C: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FB50: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FB54: lhu         $v0, 0x20($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X20);
    // 0x8022FB58: addiu       $s0, $s0, -0x800
    ctx->r16 = ADD32(ctx->r16, -0X800);
    // 0x8022FB5C: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8022FB60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB64: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FB68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FB6C: jal         0x800324B4
    // 0x8022FB70: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8022FB70: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_7:
    // 0x8022FB74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB78: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022FB7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB80: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022FB84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB88: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022FB8C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FB90: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FB94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FB98: jal         0x80032498
    // 0x8022FB9C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x8022FB9C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022FBA0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022FBA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FBA8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022FBAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FBB0: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x8022FBB4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FBB8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FBBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FBC0: jal         0x8003B878
    // 0x8022FBC4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_9;
    // 0x8022FBC4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022FBC8: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBCC: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBD0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022FBD4: addiu       $a3, $zero, 0x5F80
    ctx->r7 = ADD32(0, 0X5F80);
    // 0x8022FBD8: sw          $a3, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r7;
    // 0x8022FBDC: addiu       $a3, $zero, 0x5F9F
    ctx->r7 = ADD32(0, 0X5F9F);
    // 0x8022FBE0: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x8022FBE4: sw          $s7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r23;
    // 0x8022FBE8: sw          $fp, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r30;
    // 0x8022FBEC: sw          $a3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r7;
    // 0x8022FBF0: sw          $s2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r18;
    // 0x8022FBF4: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x8022FBF8: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8022FBFC: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x8022FC00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022FC04: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022FC08: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022FC0C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022FC10: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FC14: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022FC18: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022FC1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022FC20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FC24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FC28: jr          $ra
    // 0x8022FC2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022FC2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022CBEC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CBF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CBF4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022CBF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CBFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CC00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CC04: lw          $v0, 0x26A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X26A0);
    // 0x8022CC08: jalr        $v0
    // 0x8022CC0C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CC0C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    after_0:
    // 0x8022CC10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC14: jr          $ra
    // 0x8022CC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A438_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A440: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A444: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A448: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A44C: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022A450: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A454: jal         0x8004FA7C
    // 0x8022A458: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A458: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022A45C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A460: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022A464: bne         $v0, $zero, L_8022A488
    if (ctx->r2 != 0) {
        // 0x8022A468: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022A488;
    }
    // 0x8022A468: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022A46C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A470: jal         0x8022C1C8
    // 0x8022A474: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022A474: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A478: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A47C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A480: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A484: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022A488:
    // 0x8022A488: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A48C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022A490: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A494: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A498: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A49C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4A4: jr          $ra
    // 0x8022A4A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A4A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227298_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022729C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802272A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802272AC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802272B0: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x802272B4: beq         $v0, $zero, L_80227478
    if (ctx->r2 == 0) {
        // 0x802272B8: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80227478;
    }
    // 0x802272B8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802272BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802272C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272C4: addu        $at, $at, $v0
    gpr jr_addend_802272CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802272C8: lw          $v0, 0x2AF0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2AF0);
    // 0x802272CC: jr          $v0
    // 0x802272D0: nop

    switch (jr_addend_802272CC >> 2) {
        case 0: goto L_802272D4; break;
        case 1: goto L_802272E0; break;
        case 2: goto L_80227324; break;
        case 3: goto L_80227358; break;
        case 4: goto L_80227388; break;
        case 5: goto L_802273EC; break;
        case 6: goto L_8022742C; break;
        case 7: goto L_80227478; break;
        default: switch_error(__func__, 0x802272CC, 0x80232AF0);
    }
    // 0x802272D0: nop

L_802272D4:
    // 0x802272D4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802272D8: j           L_80227474
    // 0x802272DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227474;
    // 0x802272DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802272E0:
    // 0x802272E0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802272E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802272E8: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x802272EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227478;
    }
    // 0x802272EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272F0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802272F4: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x802272F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227478;
    }
    // 0x802272F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802272FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227300: jal         0x8022748C
    // 0x80227304: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8022748C_ovl15(rdram, ctx);
        goto after_0;
    // 0x80227304: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x80227308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022730C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227310: jal         0x802274B4
    // 0x80227314: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_802274B4_ovl15(rdram, ctx);
        goto after_1;
    // 0x80227314: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80227318: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022731C: j           L_8022746C
    // 0x80227320: addiu       $v1, $zero, 0x17
    ctx->r3 = ADD32(0, 0X17);
        goto L_8022746C;
    // 0x80227320: addiu       $v1, $zero, 0x17
    ctx->r3 = ADD32(0, 0X17);
L_80227324:
    // 0x80227324: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80227328: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022732C: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x80227330: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227478;
    }
    // 0x80227330: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227334: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80227338: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x8022733C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227478;
    }
    // 0x8022733C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227340: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227344: jal         0x802274B4
    // 0x80227348: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_802274B4_ovl15(rdram, ctx);
        goto after_2;
    // 0x80227348: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x8022734C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227350: j           L_8022746C
    // 0x80227354: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_8022746C;
    // 0x80227354: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_80227358:
    // 0x80227358: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022735C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227360: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x80227364: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80227478;
    }
    // 0x80227364: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80227368: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022736C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227370: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227374: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227378: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022737C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227380: j           L_80227474
    // 0x80227384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227474;
    // 0x80227384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227388:
    // 0x80227388: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022738C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227390: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227394: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80227398: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022739C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802273A0: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x802273A4: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80227478;
    }
    // 0x802273A4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802273A8: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802273AC: bne         $a1, $v0, L_802273CC
    if (ctx->r5 != ctx->r2) {
        // 0x802273B0: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_802273CC;
    }
    // 0x802273B0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802273B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802273BC: jal         0x802274B4
    // 0x802273C0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_802274B4_ovl15(rdram, ctx);
        goto after_3;
    // 0x802273C0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x802273C4: j           L_80227478
    // 0x802273C8: nop

        goto L_80227478;
    // 0x802273C8: nop

L_802273CC:
    // 0x802273CC: bne         $a1, $v0, L_80227478
    if (ctx->r5 != ctx->r2) {
        // 0x802273D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227478;
    }
    // 0x802273D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802273D8: jal         0x8022748C
    // 0x802273DC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8022748C_ovl15(rdram, ctx);
        goto after_4;
    // 0x802273DC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_4:
    // 0x802273E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802273E4: j           L_80227474
    // 0x802273E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227474;
    // 0x802273E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802273EC:
    // 0x802273EC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802273F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802273F4: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x802273F8: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_80227478;
    }
    // 0x802273F8: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802273FC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80227400: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x80227404: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227478;
    }
    // 0x80227404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227408: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022740C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80227410: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80227414: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227418: jal         0x8022748C
    // 0x8022741C: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    func_8022748C_ovl15(rdram, ctx);
        goto after_5;
    // 0x8022741C: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    after_5:
    // 0x80227420: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227424: j           L_80227474
    // 0x80227428: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227474;
    // 0x80227428: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022742C:
    // 0x8022742C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80227430: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227434: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x80227438: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227478;
    }
    // 0x80227438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022743C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80227440: bne         $v1, $v0, L_80227478
    if (ctx->r3 != ctx->r2) {
        // 0x80227444: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227478;
    }
    // 0x80227444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022744C: jal         0x8022748C
    // 0x80227450: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022748C_ovl15(rdram, ctx);
        goto after_6;
    // 0x80227450: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
    // 0x80227454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227458: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022745C: jal         0x802274B4
    // 0x80227460: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_802274B4_ovl15(rdram, ctx);
        goto after_7;
    // 0x80227460: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x80227464: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227468: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_8022746C:
    // 0x8022746C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227470: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227474:
    // 0x80227474: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227478:
    // 0x80227478: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022747C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227484: jr          $ra
    // 0x80227488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229600_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229608: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022960C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229610: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229614: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80229618: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022961C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80229620: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80229624: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229628: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022962C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80229630: lw          $a1, 0x1E04($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1E04);
    // 0x80229634: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80229638: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022963C: lw          $s1, 0x1E18($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X1E18);
    // 0x80229640: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80229644: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80229648: lw          $a0, 0x1E64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E64);
    // 0x8022964C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80229650: beq         $v0, $zero, L_8022986C
    if (ctx->r2 == 0) {
        // 0x80229654: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022986C;
    }
    // 0x80229654: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229658: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022965C: addu        $at, $at, $v0
    gpr jr_addend_80229664 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229660: lw          $v0, 0x2BA0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BA0);
    // 0x80229664: jr          $v0
    // 0x80229668: nop

    switch (jr_addend_80229664 >> 2) {
        case 0: goto L_8022966C; break;
        case 1: goto L_80229688; break;
        case 2: goto L_802296A8; break;
        case 3: goto L_8022972C; break;
        case 4: goto L_80229744; break;
        case 5: goto L_80229760; break;
        default: switch_error(__func__, 0x80229664, 0x80232BA0);
    }
    // 0x80229668: nop

L_8022966C:
    // 0x8022966C: lw          $v0, 0x184($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X184);
    // 0x80229670: bne         $v0, $s0, L_8022986C
    if (ctx->r2 != ctx->r16) {
        // 0x80229674: nop
    
            goto L_8022986C;
    }
    // 0x80229674: nop

    // 0x80229678: lbu         $v0, 0xBD($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XBD);
    // 0x8022967C: sw          $zero, 0x184($a2)
    MEM_W(0X184, ctx->r6) = 0;
    // 0x80229680: j           L_8022974C
    // 0x80229684: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_8022974C;
    // 0x80229684: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80229688:
    // 0x80229688: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x8022968C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229690: beq         $a1, $v0, L_80229750
    if (ctx->r5 == ctx->r2) {
        // 0x80229694: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80229750;
    }
    // 0x80229694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229698: jal         0x800616FC
    // 0x8022969C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022969C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_0:
    // 0x802296A0: j           L_80229750
    // 0x802296A4: nop

        goto L_80229750;
    // 0x802296A4: nop

L_802296A8:
    // 0x802296A8: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x802296AC: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x802296B0: beq         $a1, $a2, L_802296EC
    if (ctx->r5 == ctx->r6) {
        // 0x802296B4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_802296EC;
    }
    // 0x802296B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802296B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802296BC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802296C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802296C4: bne         $v0, $zero, L_8022986C
    if (ctx->r2 != 0) {
        // 0x802296C8: nop
    
            goto L_8022986C;
    }
    // 0x802296C8: nop

    // 0x802296CC: beq         $a0, $a2, L_80229724
    if (ctx->r4 == ctx->r6) {
        // 0x802296D0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229724;
    }
    // 0x802296D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802296D4: jal         0x8006033C
    // 0x802296D8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802296D8: nop

    after_1:
    // 0x802296DC: bne         $v0, $zero, L_80229704
    if (ctx->r2 != 0) {
        // 0x802296E0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229704;
    }
    // 0x802296E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802296E4: j           L_80229718
    // 0x802296E8: nop

        goto L_80229718;
    // 0x802296E8: nop

L_802296EC:
    // 0x802296EC: beq         $a0, $a1, L_80229724
    if (ctx->r4 == ctx->r5) {
        // 0x802296F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229724;
    }
    // 0x802296F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802296F4: jal         0x8006033C
    // 0x802296F8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802296F8: nop

    after_2:
    // 0x802296FC: beq         $v0, $zero, L_80229718
    if (ctx->r2 == 0) {
        // 0x80229700: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229718;
    }
    // 0x80229700: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80229704:
    // 0x80229704: jal         0x80036E48
    // 0x80229708: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80229708: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x8022970C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229710: j           L_8022986C
    // 0x80229714: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022986C;
    // 0x80229714: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229718:
    // 0x80229718: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022971C: j           L_8022986C
    // 0x80229720: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022986C;
    // 0x80229720: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229724:
    // 0x80229724: j           L_8022986C
    // 0x80229728: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022986C;
    // 0x80229728: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022972C:
    // 0x8022972C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229730: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80229734: beq         $v0, $zero, L_80229750
    if (ctx->r2 == 0) {
        // 0x80229738: nop
    
            goto L_80229750;
    }
    // 0x80229738: nop

    // 0x8022973C: j           L_8022986C
    // 0x80229740: nop

        goto L_8022986C;
    // 0x80229740: nop

L_80229744:
    // 0x80229744: lbu         $v0, 0xBD($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XBD);
    // 0x80229748: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_8022974C:
    // 0x8022974C: sb          $v0, 0xBD($a2)
    MEM_B(0XBD, ctx->r6) = ctx->r2;
L_80229750:
    // 0x80229750: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229754: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229758: j           L_8022986C
    // 0x8022975C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022986C;
    // 0x8022975C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229760:
    // 0x80229760: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x80229764: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229768: beq         $s1, $v0, L_80229790
    if (ctx->r17 == ctx->r2) {
        // 0x8022976C: nop
    
            goto L_80229790;
    }
    // 0x8022976C: nop

    // 0x80229770: beq         $a0, $v0, L_80229788
    if (ctx->r4 == ctx->r2) {
        // 0x80229774: nop
    
            goto L_80229788;
    }
    // 0x80229774: nop

    // 0x80229778: jal         0x8006033C
    // 0x8022977C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022977C: nop

    after_4:
    // 0x80229780: beq         $v0, $zero, L_80229790
    if (ctx->r2 == 0) {
        // 0x80229784: nop
    
            goto L_80229790;
    }
    // 0x80229784: nop

L_80229788:
    // 0x80229788: jal         0x8006036C
    // 0x8022978C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8022978C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_80229790:
    // 0x80229790: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80229794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229798: bne         $v1, $v0, L_80229864
    if (ctx->r3 != ctx->r2) {
        // 0x8022979C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229864;
    }
    // 0x8022979C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802297A0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802297A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802297A8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802297AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802297B0: lw          $v1, 0x1E50($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1E50);
    // 0x802297B4: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x802297B8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802297BC: beq         $v1, $v0, L_8022984C
    if (ctx->r3 == ctx->r2) {
        // 0x802297C0: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_8022984C;
    }
    // 0x802297C0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802297C4: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x802297C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297CC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802297D0: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x802297D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297D8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802297DC: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x802297E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297E4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802297E8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802297EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297F0: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x802297F4: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x802297F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297FC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80229800: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80229804: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229808: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022980C: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80229810: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229814: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80229818: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022981C: sb          $a0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r4;
    // 0x80229820: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229824: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80229828: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022982C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229830: bne         $v1, $v0, L_80229844
    if (ctx->r3 != ctx->r2) {
        // 0x80229834: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229844;
    }
    // 0x80229834: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229838: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022983C: j           L_8022984C
    // 0x80229840: sb          $a0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r4;
        goto L_8022984C;
    // 0x80229840: sb          $a0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r4;
L_80229844:
    // 0x80229844: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229848: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_8022984C:
    // 0x8022984C: jal         0x80047B3C
    // 0x80229850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_6;
    // 0x80229850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229854: jal         0x8004F4F8
    // 0x80229858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_7;
    // 0x80229858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022985C: j           L_8022986C
    // 0x80229860: nop

        goto L_8022986C;
    // 0x80229860: nop

L_80229864:
    // 0x80229864: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80229868: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022986C:
    // 0x8022986C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229870: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229878: jr          $ra
    // 0x8022987C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022987C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A4AC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A4B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A4B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A4B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A4BC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022A4C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A4C4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A4C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4CC: bne         $v0, $zero, L_8022A4F4
    if (ctx->r2 != 0) {
        // 0x8022A4D0: nop
    
            goto L_8022A4F4;
    }
    // 0x8022A4D0: nop

    // 0x8022A4D4: jal         0x8022C130
    // 0x8022A4D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C130_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022A4D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022A4DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A4E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A4E4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022A4E8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A4EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A4F0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022A4F4:
    // 0x8022A4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4FC: jr          $ra
    // 0x8022A500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802260B0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802260B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802260BC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802260C0: bne         $v1, $v0, L_802260DC
    if (ctx->r3 != ctx->r2) {
        // 0x802260C4: nop
    
            goto L_802260DC;
    }
    // 0x802260C4: nop

    // 0x802260C8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802260CC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802260D0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802260D4: jal         0x80036E48
    // 0x802260D8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x802260D8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
L_802260DC:
    // 0x802260DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802260E0: jr          $ra
    // 0x802260E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AD14_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD24: jal         0x8022C218
    // 0x8022AD28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C218_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022AD28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022AD2C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AD30: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AD34: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022AD38: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022AD3C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022AD40: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022AD44: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022AD48: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022AD4C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022AD50: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022AD54: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x8022AD58: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022AD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD64: jr          $ra
    // 0x8022AD68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E91C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E91C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E920: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E924: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E928: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E92C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E930: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022E934: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022E938: beq         $v0, $zero, L_8022EA70
    if (ctx->r2 == 0) {
        // 0x8022E93C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022EA70;
    }
    // 0x8022E93C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E940: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E944: addu        $at, $at, $v0
    gpr jr_addend_8022E94C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E948: lw          $v0, 0x2C10($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C10);
    // 0x8022E94C: jr          $v0
    // 0x8022E950: nop

    switch (jr_addend_8022E94C >> 2) {
        case 0: goto L_8022E954; break;
        case 1: goto L_8022E988; break;
        case 2: goto L_8022E994; break;
        case 3: goto L_8022EA14; break;
        case 4: goto L_8022EA4C; break;
        default: switch_error(__func__, 0x8022E94C, 0x80232C10);
    }
    // 0x8022E950: nop

L_8022E954:
    // 0x8022E954: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022E958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E95C: beq         $v1, $v0, L_8022E96C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E960: addiu       $a0, $zero, 0x13C
        ctx->r4 = ADD32(0, 0X13C);
            goto L_8022E96C;
    }
    // 0x8022E960: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    // 0x8022E964: jal         0x8002A33C
    // 0x8022E968: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022E968: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_0:
L_8022E96C:
    // 0x8022E96C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022E970: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E974: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E978: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022E97C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022E980: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8022E984: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_8022E988:
    // 0x8022E988: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022E98C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E990: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022E994:
    // 0x8022E994: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8022E998: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E99C: beq         $v1, $v0, L_8022E9F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E9A0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8022E9F8;
    }
    // 0x8022E9A0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022E9A4: jal         0x8002C654
    // 0x8022E9A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022E9A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E9AC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E9B0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E9B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E9B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022E9BC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022E9C0: lhu         $a0, 0x2A20($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2A20);
    // 0x8022E9C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E9C8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E9CC: jal         0x80031BB4
    // 0x8022E9D0: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_2;
    // 0x8022E9D0: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_2:
    // 0x8022E9D4: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E9D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E9DC: jal         0x800319B4
    // 0x8022E9E0: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8022E9E0: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_3:
    // 0x8022E9E4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E9E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E9EC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022E9F0: j           L_8022EA70
    // 0x8022E9F4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
        goto L_8022EA70;
    // 0x8022E9F4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_8022E9F8:
    // 0x8022E9F8: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8022E9FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EA00: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022EA04: bne         $v1, $v0, L_8022EA70
    if (ctx->r3 != ctx->r2) {
        // 0x8022EA08: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022EA70;
    }
    // 0x8022EA08: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022EA0C: j           L_8022EA70
    // 0x8022EA10: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022EA70;
    // 0x8022EA10: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022EA14:
    // 0x8022EA14: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022EA18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EA1C: bne         $v1, $v0, L_8022EA3C
    if (ctx->r3 != ctx->r2) {
        // 0x8022EA20: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022EA3C;
    }
    // 0x8022EA20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022EA24: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x8022EA28: beq         $a3, $v0, L_8022EA3C
    if (ctx->r7 == ctx->r2) {
        // 0x8022EA2C: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_8022EA3C;
    }
    // 0x8022EA2C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022EA30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EA34: jal         0x800610AC
    // 0x8022EA38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022EA38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_8022EA3C:
    // 0x8022EA3C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EA40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EA44: j           L_8022EA70
    // 0x8022EA48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022EA70;
    // 0x8022EA48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022EA4C:
    // 0x8022EA4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EA50: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EA54: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EA58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EA5C: bne         $v0, $zero, L_8022EA70
    if (ctx->r2 != 0) {
        // 0x8022EA60: nop
    
            goto L_8022EA70;
    }
    // 0x8022EA60: nop

    // 0x8022EA64: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022EA68: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022EA6C: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_8022EA70:
    // 0x8022EA70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EA74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EA78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA7C: jr          $ra
    // 0x8022EA80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EA80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802253C4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253D4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253D8: bne         $v0, $zero, L_80225400
    if (ctx->r2 != 0) {
        // 0x802253DC: nop
    
            goto L_80225400;
    }
    // 0x802253DC: nop

    // 0x802253E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253E4: jal         0x800607C4
    // 0x802253E8: addiu       $a0, $a0, 0x934
    ctx->r4 = ADD32(ctx->r4, 0X934);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802253E8: addiu       $a0, $a0, 0x934
    ctx->r4 = ADD32(ctx->r4, 0X934);
    after_0:
    // 0x802253EC: jal         0x80225A4C
    // 0x802253F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802253F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x802253F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225400:
    // 0x80225400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225408: jr          $ra
    // 0x8022540C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022540C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C3EC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C3EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C3F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C3FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C400: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C404: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022C408: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022C40C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C410: bne         $v1, $zero, L_8022C428
    if (ctx->r3 != 0) {
        // 0x8022C414: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022C428;
    }
    // 0x8022C414: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C418: jal         0x8004D5D4
    // 0x8022C41C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C41C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_0:
    // 0x8022C420: j           L_8022C438
    // 0x8022C424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C438;
    // 0x8022C424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C428:
    // 0x8022C428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C42C: jal         0x8004D5FC
    // 0x8022C430: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_1;
    // 0x8022C430: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_1:
    // 0x8022C434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C438:
    // 0x8022C438: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C43C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C440: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C444: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C448: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C44C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C450: jal         0x8003E934
    // 0x8022C454: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C454: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8022C458: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022C45C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C460: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C464: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C468: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C46C: addiu       $v0, $v0, 0x2620
    ctx->r2 = ADD32(ctx->r2, 0X2620);
    // 0x8022C470: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022C474: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C478: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022C47C: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022C480: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022C484: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022C488: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022C48C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C490: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C494: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C498: lw          $v0, 0x262C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X262C);
    // 0x8022C49C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022C4A0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022C4A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C4A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C4AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C4B0: lw          $v0, 0x2640($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2640);
    // 0x8022C4B4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8022C4B8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022C4BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C4C0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C4C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C4C8: lw          $v1, 0x2680($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2680);
    // 0x8022C4CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C4D0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022C4D4: sw          $v1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r3;
    // 0x8022C4D8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022C4DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C4E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C4E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C4E8: lw          $v0, 0x266C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X266C);
    // 0x8022C4EC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022C4F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C4F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C4F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C4FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C500: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C504: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C508: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C50C: jr          $ra
    // 0x8022C510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802257C8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257D8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802257DC: bne         $v0, $zero, L_802257FC
    if (ctx->r2 != 0) {
        // 0x802257E0: nop
    
            goto L_802257FC;
    }
    // 0x802257E0: nop

    // 0x802257E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257E8: jal         0x800607C4
    // 0x802257EC: addiu       $a0, $a0, 0x964
    ctx->r4 = ADD32(ctx->r4, 0X964);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802257EC: addiu       $a0, $a0, 0x964
    ctx->r4 = ADD32(ctx->r4, 0X964);
    after_0:
    // 0x802257F0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802257F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802257F8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802257FC:
    // 0x802257FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225804: jr          $ra
    // 0x80225808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226984_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226984: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226988: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022698C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226990: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226998: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022699C: bne         $v1, $zero, L_802269F4
    if (ctx->r3 != 0) {
        // 0x802269A0: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_802269F4;
    }
    // 0x802269A0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802269A4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802269A8: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x802269AC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802269B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802269B4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802269B8: jal         0x8004F488
    // 0x802269BC: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x802269BC: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_0:
    // 0x802269C0: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802269C4: addiu       $s0, $s0, 0x118C
    ctx->r16 = ADD32(ctx->r16, 0X118C);
    // 0x802269C8: jal         0x8005FA7C
    // 0x802269CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x802269CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802269D0: jal         0x8005FA7C
    // 0x802269D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x802269D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802269D8: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x802269DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802269E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802269E4: jal         0x80226B04
    // 0x802269E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    func_80226B04_ovl15(rdram, ctx);
        goto after_3;
    // 0x802269E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    after_3:
    // 0x802269EC: j           L_80226A34
    // 0x802269F0: nop

        goto L_80226A34;
    // 0x802269F0: nop

L_802269F4:
    // 0x802269F4: bne         $v1, $v0, L_80226A1C
    if (ctx->r3 != ctx->r2) {
        // 0x802269F8: addiu       $v0, $zero, 0xFE
        ctx->r2 = ADD32(0, 0XFE);
            goto L_80226A1C;
    }
    // 0x802269F8: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x802269FC: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226A00: addiu       $s0, $s0, 0x11B4
    ctx->r16 = ADD32(ctx->r16, 0X11B4);
    // 0x80226A04: jal         0x8005FA7C
    // 0x80226A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80226A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226A0C: jal         0x8005FA7C
    // 0x80226A10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80226A10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80226A14: j           L_80226A34
    // 0x80226A18: nop

        goto L_80226A34;
    // 0x80226A18: nop

L_80226A1C:
    // 0x80226A1C: bne         $v1, $v0, L_80226A34
    if (ctx->r3 != ctx->r2) {
        // 0x80226A20: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_80226A34;
    }
    // 0x80226A20: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80226A24: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226A28: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80226A2C: jal         0x80036E48
    // 0x80226A30: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x80226A30: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_6:
L_80226A34:
    // 0x80226A34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226A38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226A40: jr          $ra
    // 0x80226A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DFC8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DFCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DFD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DFD8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DFDC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022DFE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DFE4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022DFE8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022DFEC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022DFF0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022DFF4: beq         $v1, $zero, L_8022E014
    if (ctx->r3 == 0) {
        // 0x8022DFF8: nop
    
            goto L_8022E014;
    }
    // 0x8022DFF8: nop

    // 0x8022DFFC: jal         0x8022E3E4
    // 0x8022E000: nop

    func_8022E3E4_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022E000: nop

    after_0:
    // 0x8022E004: beq         $v0, $zero, L_8022E014
    if (ctx->r2 == 0) {
        // 0x8022E008: nop
    
            goto L_8022E014;
    }
    // 0x8022E008: nop

    // 0x8022E00C: jal         0x8004F62C
    // 0x8022E010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8022E010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022E014:
    // 0x8022E014: jal         0x8022E02C
    // 0x8022E018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E02C_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022E018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E020: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E024: jr          $ra
    // 0x8022E028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B134_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B138: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B13C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B140: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022B144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B148: jal         0x8022C264
    // 0x8022B14C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022C264_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022B14C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022B150: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B154: beq         $v0, $zero, L_8022B180
    if (ctx->r2 == 0) {
        // 0x8022B158: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022B180;
    }
    // 0x8022B158: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022B15C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B160: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B164: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B168: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B16C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022B170: jal         0x8022C1C8
    // 0x8022B174: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022B174: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022B178: j           L_8022B1C0
    // 0x8022B17C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022B1C0;
    // 0x8022B17C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B180:
    // 0x8022B180: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022B184: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B188: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022B18C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B190: bne         $v0, $zero, L_8022B1A0
    if (ctx->r2 != 0) {
        // 0x8022B194: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B1A0;
    }
    // 0x8022B194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B19C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B1A0:
    // 0x8022B1A0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B1A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B1A8: jal         0x8004DA90
    // 0x8022B1AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022B1AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022B1B0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B1B4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022B1B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B1BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B1C0:
    // 0x8022B1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B1C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B1C8: jr          $ra
    // 0x8022B1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C8F0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C8F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C8F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C8F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C8FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C900: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022C904: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C90C: jal         0x8004EEAC
    // 0x8022C910: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022C910: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022C914: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022C918: bne         $a1, $zero, L_8022C928
    if (ctx->r5 != 0) {
        // 0x8022C91C: andi        $t0, $s1, 0xFF
        ctx->r8 = ctx->r17 & 0XFF;
            goto L_8022C928;
    }
    // 0x8022C91C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8022C920: j           L_8022CA24
    // 0x8022C924: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CA24;
    // 0x8022C924: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C928:
    // 0x8022C928: sltiu       $v1, $t0, 0x1
    ctx->r3 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x8022C92C: sltiu       $v0, $t0, 0x7
    ctx->r2 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x8022C930: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022C934: or          $t1, $v1, $v0
    ctx->r9 = ctx->r3 | ctx->r2;
    // 0x8022C938: beq         $t1, $zero, L_8022C950
    if (ctx->r9 == 0) {
        // 0x8022C93C: lui         $a0, 0x2E80
        ctx->r4 = S32(0X2E80 << 16);
            goto L_8022C950;
    }
    // 0x8022C93C: lui         $a0, 0x2E80
    ctx->r4 = S32(0X2E80 << 16);
    // 0x8022C940: jal         0x8004F418
    // 0x8022C944: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022C944: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x8022C948: j           L_8022CA24
    // 0x8022C94C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CA24;
    // 0x8022C94C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C950:
    // 0x8022C950: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x8022C954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C958: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022C95C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022C960: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022C964: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C968: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022C96C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C970: sb          $v0, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r2;
    // 0x8022C974: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022C978: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8022C97C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8022C980: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8022C984: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x8022C988: sb          $v0, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r2;
    // 0x8022C98C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022C990: sb          $v1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r3;
    // 0x8022C994: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x8022C998: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C99C: sb          $s1, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r17;
    // 0x8022C9A0: sb          $zero, 0x93($a1)
    MEM_B(0X93, ctx->r5) = 0;
    // 0x8022C9A4: sw          $a0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->r4;
    // 0x8022C9A8: sw          $zero, 0x94($a1)
    MEM_W(0X94, ctx->r5) = 0;
    // 0x8022C9AC: sb          $v0, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r2;
    // 0x8022C9B0: sltu        $v0, $t1, $t0
    ctx->r2 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x8022C9B4: beq         $v0, $zero, L_8022CA20
    if (ctx->r2 == 0) {
        // 0x8022C9B8: addiu       $a3, $a1, 0x88
        ctx->r7 = ADD32(ctx->r5, 0X88);
            goto L_8022CA20;
    }
    // 0x8022C9B8: addiu       $a3, $a1, 0x88
    ctx->r7 = ADD32(ctx->r5, 0X88);
    // 0x8022C9BC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_8022C9C0:
    // 0x8022C9C0: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022C9C4: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C9C8: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8022C9CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C9D0: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022C9D4: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022C9D8: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C9DC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_8022C9E0:
    // 0x8022C9E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022C9E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C9E8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C9EC: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022C9F0: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022C9F4: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022C9F8: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022C9FC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022CA00: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CA04: bne         $v0, $zero, L_8022C9E0
    if (ctx->r2 != 0) {
        // 0x8022CA08: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8022C9E0;
    }
    // 0x8022CA08: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022CA0C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022CA10: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022CA14: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x8022CA18: bne         $v0, $zero, L_8022C9C0
    if (ctx->r2 != 0) {
        // 0x8022CA1C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022C9C0;
    }
    // 0x8022CA1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022CA20:
    // 0x8022CA20: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_8022CA24:
    // 0x8022CA24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CA28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CA2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CA30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CA34: jr          $ra
    // 0x8022CA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B8D4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B8D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B8DC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022B8E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B8E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B8E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B8EC: lw          $v0, 0x25DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X25DC);
    // 0x8022B8F0: jalr        $v0
    // 0x8022B8F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B8F4: nop

    after_0:
    // 0x8022B8F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8FC: jr          $ra
    // 0x8022B900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802291F4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291F4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x802291F8: lw          $v1, 0x2C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X2C);
    // 0x802291FC: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x80229200: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80229204: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x80229208: sh          $v0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r2;
    // 0x8022920C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80229210: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80229214: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80229218: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x8022921C: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x80229220: sh          $v0, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r2;
    // 0x80229224: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x80229228: lh          $v1, 0x44($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X44);
    // 0x8022922C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x80229230: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229238: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8022923C: bne         $a1, $zero, L_80229248
    if (ctx->r5 != 0) {
        // 0x80229240: nop
    
            goto L_80229248;
    }
    // 0x80229240: nop

    // 0x80229244: break       7
    do_break(2149749316);
L_80229248:
    // 0x80229248: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022924C: bne         $a1, $at, L_80229260
    if (ctx->r5 != ctx->r1) {
        // 0x80229250: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80229260;
    }
    // 0x80229250: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80229254: bne         $v0, $at, L_80229260
    if (ctx->r2 != ctx->r1) {
        // 0x80229258: nop
    
            goto L_80229260;
    }
    // 0x80229258: nop

    // 0x8022925C: break       6
    do_break(2149749340);
L_80229260:
    // 0x80229260: mflo        $v0
    ctx->r2 = lo;
    // 0x80229264: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x80229268: lh          $v0, 0x8($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X8);
    // 0x8022926C: lh          $v1, 0x48($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X48);
    // 0x80229270: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x80229274: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022927C: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80229280: bne         $a1, $zero, L_8022928C
    if (ctx->r5 != 0) {
        // 0x80229284: nop
    
            goto L_8022928C;
    }
    // 0x80229284: nop

    // 0x80229288: break       7
    do_break(2149749384);
L_8022928C:
    // 0x8022928C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80229290: bne         $a1, $at, L_802292A4
    if (ctx->r5 != ctx->r1) {
        // 0x80229294: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802292A4;
    }
    // 0x80229294: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80229298: bne         $v0, $at, L_802292A4
    if (ctx->r2 != ctx->r1) {
        // 0x8022929C: nop
    
            goto L_802292A4;
    }
    // 0x8022929C: nop

    // 0x802292A0: break       6
    do_break(2149749408);
L_802292A4:
    // 0x802292A4: mflo        $v0
    ctx->r2 = lo;
    // 0x802292A8: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x802292AC: lh          $v0, 0xA($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XA);
    // 0x802292B0: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x802292B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802292B8: andi        $a0, $v0, 0xFFF
    ctx->r4 = ctx->r2 & 0XFFF;
    // 0x802292BC: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
    // 0x802292C0: beql        $v0, $zero, L_802292C8
    if (ctx->r2 == 0) {
        // 0x802292C4: addiu       $a0, $a0, -0x1000
        ctx->r4 = ADD32(ctx->r4, -0X1000);
            goto L_802292C8;
    }
    goto skip_0;
    // 0x802292C4: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    skip_0:
L_802292C8:
    // 0x802292C8: slti        $v0, $a0, -0x800
    ctx->r2 = SIGNED(ctx->r4) < -0X800 ? 1 : 0;
    // 0x802292CC: beq         $v0, $zero, L_802292D8
    if (ctx->r2 == 0) {
        // 0x802292D0: addiu       $v0, $zero, 0x1000
        ctx->r2 = ADD32(0, 0X1000);
            goto L_802292D8;
    }
    // 0x802292D0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802292D4: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
L_802292D8:
    // 0x802292D8: lh          $v1, 0x4($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X4);
    // 0x802292DC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802292E0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x802292E4: bne         $v1, $zero, L_802292F0
    if (ctx->r3 != 0) {
        // 0x802292E8: nop
    
            goto L_802292F0;
    }
    // 0x802292E8: nop

    // 0x802292EC: break       7
    do_break(2149749484);
L_802292F0:
    // 0x802292F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802292F4: bne         $v1, $at, L_80229308
    if (ctx->r3 != ctx->r1) {
        // 0x802292F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80229308;
    }
    // 0x802292F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802292FC: bne         $v0, $at, L_80229308
    if (ctx->r2 != ctx->r1) {
        // 0x80229300: nop
    
            goto L_80229308;
    }
    // 0x80229300: nop

    // 0x80229304: break       6
    do_break(2149749508);
L_80229308:
    // 0x80229308: mflo        $v0
    ctx->r2 = lo;
    // 0x8022930C: nop

    // 0x80229310: nop

    // 0x80229314: jr          $ra
    // 0x80229318: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80229318: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_8022C130_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C134: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022C138: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022C13C: beq         $a0, $v0, L_8022C1A4
    if (ctx->r4 == ctx->r2) {
        // 0x8022C140: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022C1A4;
    }
    // 0x8022C140: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C144: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022C148: beql        $v0, $zero, L_8022C168
    if (ctx->r2 == 0) {
        // 0x8022C14C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022C168;
    }
    goto skip_0;
    // 0x8022C14C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022C150: beq         $a0, $zero, L_8022C19C
    if (ctx->r4 == 0) {
        // 0x8022C154: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022C19C;
    }
    // 0x8022C154: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022C158: beq         $a0, $v0, L_8022C1BC
    if (ctx->r4 == ctx->r2) {
        // 0x8022C15C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C1BC;
    }
    // 0x8022C15C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C160: j           L_8022C1BC
    // 0x8022C164: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022C1BC;
    // 0x8022C164: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022C168:
    // 0x8022C168: beq         $a0, $v0, L_8022C19C
    if (ctx->r4 == ctx->r2) {
        // 0x8022C16C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022C19C;
    }
    // 0x8022C16C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022C170: beq         $v0, $zero, L_8022C188
    if (ctx->r2 == 0) {
        // 0x8022C174: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022C188;
    }
    // 0x8022C174: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022C178: beq         $a0, $v0, L_8022C1BC
    if (ctx->r4 == ctx->r2) {
        // 0x8022C17C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022C1BC;
    }
    // 0x8022C17C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022C180: j           L_8022C1BC
    // 0x8022C184: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022C1BC;
    // 0x8022C184: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022C188:
    // 0x8022C188: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022C18C: beq         $a0, $v0, L_8022C1AC
    if (ctx->r4 == ctx->r2) {
        // 0x8022C190: nop
    
            goto L_8022C1AC;
    }
    // 0x8022C190: nop

    // 0x8022C194: j           L_8022C1BC
    // 0x8022C198: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022C1BC;
    // 0x8022C198: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022C19C:
    // 0x8022C19C: j           L_8022C1BC
    // 0x8022C1A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022C1BC;
    // 0x8022C1A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C1A4:
    // 0x8022C1A4: j           L_8022C1BC
    // 0x8022C1A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022C1BC;
    // 0x8022C1A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022C1AC:
    // 0x8022C1AC: jal         0x800A3450
    // 0x8022C1B0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C1B0: nop

    after_0:
    // 0x8022C1B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C1B8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022C1BC:
    // 0x8022C1BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C1C0: jr          $ra
    // 0x8022C1C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C1C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022577C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022577C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225780: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225784: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022578C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225790: bne         $v0, $zero, L_802257B8
    if (ctx->r2 != 0) {
        // 0x80225794: nop
    
            goto L_802257B8;
    }
    // 0x80225794: nop

    // 0x80225798: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022579C: jal         0x800607C4
    // 0x802257A0: addiu       $a0, $a0, 0x95C
    ctx->r4 = ADD32(ctx->r4, 0X95C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802257A0: addiu       $a0, $a0, 0x95C
    ctx->r4 = ADD32(ctx->r4, 0X95C);
    after_0:
    // 0x802257A4: jal         0x80225A4C
    // 0x802257A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802257A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802257AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802257B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802257B8:
    // 0x802257B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257C0: jr          $ra
    // 0x802257C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D890_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D894: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D898: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D89C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D8A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D8A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D8A8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8022D8AC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022D8B0: beq         $v0, $zero, L_8022D94C
    if (ctx->r2 == 0) {
        // 0x8022D8B4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8022D94C;
    }
    // 0x8022D8B4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022D8B8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022D8BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D8C0: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022D8C4: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022D8C8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022D8CC: jal         0x8003B878
    // 0x8022D8D0: lbu         $s0, 0x26D0($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X26D0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022D8D0: lbu         $s0, 0x26D0($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X26D0);
    after_0:
    // 0x8022D8D4: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022D8D8: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022D8DC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D8E0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022D8E4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D8E8: subu        $v1, $s2, $v1
    ctx->r3 = SUB32(ctx->r18, ctx->r3);
    // 0x8022D8EC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8022D8F0: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022D8F4: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022D8F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D8FC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D900: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022D904: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x8022D908: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022D90C: or          $v1, $s0, $v1
    ctx->r3 = ctx->r16 | ctx->r3;
    // 0x8022D910: addiu       $a0, $s0, 0x1F
    ctx->r4 = ADD32(ctx->r16, 0X1F);
    // 0x8022D914: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022D918: lui         $v1, 0x2E
    ctx->r3 = S32(0X2E << 16);
    // 0x8022D91C: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022D920: ori         $s0, $s0, 0x1F00
    ctx->r16 = ctx->r16 | 0X1F00;
    // 0x8022D924: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022D928: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022D92C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x8022D930: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022D934: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D938: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022D93C: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D940: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022D944: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022D948: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
L_8022D94C:
    // 0x8022D94C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D950: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D954: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D95C: jr          $ra
    // 0x8022D960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D964: nop

    // 0x8022D968: nop

    // 0x8022D96C: nop

;}
RECOMP_FUNC void func_8022B5F0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B5F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B5F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B5F8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022B5FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B600: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B604: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B608: lw          $v0, 0x25D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X25D0);
    // 0x8022B60C: jalr        $v0
    // 0x8022B610: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B610: nop

    after_0:
    // 0x8022B614: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B618: jr          $ra
    // 0x8022B61C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B61C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FC30_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FC34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FC38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022FC3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FC40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FC44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FC48: lw          $v0, 0x2A8C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A8C);
    // 0x8022FC4C: jalr        $v0
    // 0x8022FC50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FC50: nop

    after_0:
    // 0x8022FC54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FC58: jr          $ra
    // 0x8022FC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BCF8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BCF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BCFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BD00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BD08: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BD0C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022BD10: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022BD14: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022BD18: jal         0x8004F820
    // 0x8022BD1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022BD1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022BD20: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BD24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BD28: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BD2C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022BD30: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022BD34: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022BD38: bne         $v0, $zero, L_8022BD70
    if (ctx->r2 != 0) {
        // 0x8022BD3C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022BD70;
    }
    // 0x8022BD3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BD40: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022BD44: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022BD48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BD4C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022BD50: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022BD54: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022BD58: jal         0x8022C1C8
    // 0x8022BD5C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022BD5C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022BD60: jal         0x80034E3C
    // 0x8022BD64: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x8022BD64: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022BD68: j           L_8022BD8C
    // 0x8022BD6C: nop

        goto L_8022BD8C;
    // 0x8022BD6C: nop

L_8022BD70:
    // 0x8022BD70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022BD74: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022BD78: bne         $v1, $v0, L_8022BD8C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BD7C: nop
    
            goto L_8022BD8C;
    }
    // 0x8022BD7C: nop

    // 0x8022BD80: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022BD84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BD88: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022BD8C:
    // 0x8022BD8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD94: jr          $ra
    // 0x8022BD98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BD98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C1D8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1D8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022C1DC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022C1E0: beq         $a0, $v0, L_8022C204
    if (ctx->r4 == ctx->r2) {
        // 0x8022C1E4: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022C204;
    }
    // 0x8022C1E4: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022C1E8: bne         $v0, $zero, L_8022C210
    if (ctx->r2 != 0) {
        // 0x8022C1EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C210;
    }
    // 0x8022C1EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C1F0: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022C1F4: beq         $v0, $zero, L_8022C20C
    if (ctx->r2 == 0) {
        // 0x8022C1F8: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022C20C;
    }
    // 0x8022C1F8: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022C1FC: bne         $v0, $zero, L_8022C210
    if (ctx->r2 != 0) {
        // 0x8022C200: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C210;
    }
    // 0x8022C200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C204:
    // 0x8022C204: j           L_8022C210
    // 0x8022C208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022C210;
    // 0x8022C208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C20C:
    // 0x8022C20C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C210:
    // 0x8022C210: jr          $ra
    // 0x8022C214: nop

    TRACE_RETURN()
    return;
    // 0x8022C214: nop

;}
RECOMP_FUNC void func_80225D74_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D84: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225D88: beq         $v1, $zero, L_80225DA0
    if (ctx->r3 == 0) {
        // 0x80225D8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225DA0;
    }
    // 0x80225D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D90: beq         $v1, $v0, L_80225DEC
    if (ctx->r3 == ctx->r2) {
        // 0x80225D94: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225DEC;
    }
    // 0x80225D94: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D98: j           L_80225E70
    // 0x80225D9C: nop

        goto L_80225E70;
    // 0x80225D9C: nop

L_80225DA0:
    // 0x80225DA0: jal         0x8005FB90
    // 0x80225DA4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80225DA4: nop

    after_0:
    // 0x80225DA8: jal         0x80036B7C
    // 0x80225DAC: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x80225DAC: nop

    after_1:
    // 0x80225DB0: beq         $v0, $zero, L_80225E70
    if (ctx->r2 == 0) {
        // 0x80225DB4: nop
    
            goto L_80225E70;
    }
    // 0x80225DB4: nop

    // 0x80225DB8: jal         0x80060170
    // 0x80225DBC: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x80225DBC: nop

    after_2:
    // 0x80225DC0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225DC4: addiu       $v0, $v0, 0xADC
    ctx->r2 = ADD32(ctx->r2, 0XADC);
    // 0x80225DC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225DCC: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225DD0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225DD4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225DD8: addiu       $v1, $v1, 0x10BC
    ctx->r3 = ADD32(ctx->r3, 0X10BC);
    // 0x80225DDC: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80225DE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225DE4: j           L_80225E70
    // 0x80225DE8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225E70;
    // 0x80225DE8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225DEC:
    // 0x80225DEC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225DF0: beq         $v1, $v0, L_80225E58
    if (ctx->r3 == ctx->r2) {
        // 0x80225DF4: nop
    
            goto L_80225E58;
    }
    // 0x80225DF4: nop

    // 0x80225DF8: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225DFC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225E00: jalr        $v0
    // 0x80225E04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80225E04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225E08: jal         0x8006072C
    // 0x80225E0C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_4;
    // 0x80225E0C: nop

    after_4:
    // 0x80225E10: beq         $v0, $zero, L_80225E68
    if (ctx->r2 == 0) {
        // 0x80225E14: nop
    
            goto L_80225E68;
    }
    // 0x80225E14: nop

    // 0x80225E18: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225E1C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80225E20: bne         $v0, $zero, L_80225E68
    if (ctx->r2 != 0) {
        // 0x80225E24: nop
    
            goto L_80225E68;
    }
    // 0x80225E24: nop

    // 0x80225E28: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225E2C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80225E30: bne         $v0, $zero, L_80225E68
    if (ctx->r2 != 0) {
        // 0x80225E34: nop
    
            goto L_80225E68;
    }
    // 0x80225E34: nop

    // 0x80225E38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225E3C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225E40: bne         $v0, $zero, L_80225E68
    if (ctx->r2 != 0) {
        // 0x80225E44: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225E68;
    }
    // 0x80225E44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225E48: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80225E4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225E50: jal         0x80226300
    // 0x80225E54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80226300_ovl15(rdram, ctx);
        goto after_5;
    // 0x80225E54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_5:
L_80225E58:
    // 0x80225E58: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225E5C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80225E60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E64: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225E68:
    // 0x80225E68: jal         0x8005FB90
    // 0x80225E6C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x80225E6C: nop

    after_6:
L_80225E70:
    // 0x80225E70: jal         0x80060018
    // 0x80225E74: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x80225E74: nop

    after_7:
    // 0x80225E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E80: jr          $ra
    // 0x80225E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225978_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022597C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225980: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225988: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022598C: bne         $v0, $zero, L_802259AC
    if (ctx->r2 != 0) {
        // 0x80225990: nop
    
            goto L_802259AC;
    }
    // 0x80225990: nop

    // 0x80225994: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225998: jal         0x800607C4
    // 0x8022599C: addiu       $a0, $a0, 0x984
    ctx->r4 = ADD32(ctx->r4, 0X984);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022599C: addiu       $a0, $a0, 0x984
    ctx->r4 = ADD32(ctx->r4, 0X984);
    after_0:
    // 0x802259A0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802259A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802259A8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802259AC:
    // 0x802259AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259B4: jr          $ra
    // 0x802259B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F50_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225F58: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225F5C: bne         $v0, $zero, L_80225FE0
    if (ctx->r2 != 0) {
        // 0x80225F60: addiu       $v0, $zero, 0xAE
        ctx->r2 = ADD32(0, 0XAE);
            goto L_80225FE0;
    }
    // 0x80225F60: addiu       $v0, $zero, 0xAE
    ctx->r2 = ADD32(0, 0XAE);
    // 0x80225F64: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225F68: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x80225F6C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80225F70: addiu       $v0, $zero, -0x18A
    ctx->r2 = ADD32(0, -0X18A);
    // 0x80225F74: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80225F78: addiu       $v0, $zero, -0x105
    ctx->r2 = ADD32(0, -0X105);
    // 0x80225F7C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80225F80: lui         $v0, 0xAE
    ctx->r2 = S32(0XAE << 16);
    // 0x80225F84: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80225F88: lui         $v0, 0xFE76
    ctx->r2 = S32(0XFE76 << 16);
    // 0x80225F8C: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80225F90: lui         $v0, 0xFEFB
    ctx->r2 = S32(0XFEFB << 16);
    // 0x80225F94: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80225F98: sh          $v1, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r3;
    // 0x80225F9C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225FA0: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x80225FA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225FA8: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80225FAC: addiu       $v0, $zero, -0x1DD
    ctx->r2 = ADD32(0, -0X1DD);
    // 0x80225FB0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80225FB4: addiu       $v0, $zero, -0x14B
    ctx->r2 = ADD32(0, -0X14B);
    // 0x80225FB8: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80225FBC: lui         $v0, 0x56
    ctx->r2 = S32(0X56 << 16);
    // 0x80225FC0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80225FC4: lui         $v0, 0xFE23
    ctx->r2 = S32(0XFE23 << 16);
    // 0x80225FC8: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80225FCC: lui         $v0, 0xFEB5
    ctx->r2 = S32(0XFEB5 << 16);
    // 0x80225FD0: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80225FD4: sh          $v1, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r3;
    // 0x80225FD8: jal         0x80226300
    // 0x80225FDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80226300_ovl15(rdram, ctx);
        goto after_0;
    // 0x80225FDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
L_80225FE0:
    // 0x80225FE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225FE4: jr          $ra
    // 0x80225FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258E8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258F8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802258FC: bne         $v0, $zero, L_8022591C
    if (ctx->r2 != 0) {
        // 0x80225900: nop
    
            goto L_8022591C;
    }
    // 0x80225900: nop

    // 0x80225904: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225908: jal         0x800607C4
    // 0x8022590C: addiu       $a0, $a0, 0x974
    ctx->r4 = ADD32(ctx->r4, 0X974);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022590C: addiu       $a0, $a0, 0x974
    ctx->r4 = ADD32(ctx->r4, 0X974);
    after_0:
    // 0x80225910: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225914: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225918: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022591C:
    // 0x8022591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225920: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225924: jr          $ra
    // 0x80225928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225378_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225378: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022537C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225380: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225384: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022538C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225390: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225394: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225398: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022539C: lw          $v1, 0x5C0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5C0);
    // 0x802253A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253AC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253B0: jalr        $v0
    // 0x802253B4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802253B4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x802253B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253BC: jr          $ra
    // 0x802253C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B38C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B38C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B390: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B394: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B398: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B39C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B3A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B3A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B3A8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022B3AC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B3B0: bne         $v0, $zero, L_8022B40C
    if (ctx->r2 != 0) {
        // 0x8022B3B4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B40C;
    }
    // 0x8022B3B4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B3B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B3BC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B3C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B3C4: jal         0x8004F820
    // 0x8022B3C8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B3C8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022B3CC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B3D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B3D4: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022B3D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B3DC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B3E0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022B3E4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022B3E8: beq         $a0, $zero, L_8022B40C
    if (ctx->r4 == 0) {
        // 0x8022B3EC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B40C;
    }
    // 0x8022B3EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B3F0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B3F4: jal         0x8022C130
    // 0x8022B3F8: nop

    func_8022C130_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022B3F8: nop

    after_1:
    // 0x8022B3FC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B400: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B404: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B408: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022B40C:
    // 0x8022B40C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022B410: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022B414: bne         $v0, $zero, L_8022B438
    if (ctx->r2 != 0) {
        // 0x8022B418: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022B438;
    }
    // 0x8022B418: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022B41C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B420: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022B424: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022B428: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B42C: jal         0x8022C1C8
    // 0x8022B430: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022B430: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022B434: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B438:
    // 0x8022B438: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B43C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B444: jr          $ra
    // 0x8022B448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A74C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A74C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A750: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A754: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A758: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A75C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A760: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A764: lw          $v0, 0x24F8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X24F8);
    // 0x8022A768: jalr        $v0
    // 0x8022A76C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A76C: nop

    after_0:
    // 0x8022A770: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A774: jr          $ra
    // 0x8022A778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C80_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229C84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229C90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229C94: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229C98: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80229C9C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229CA0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229CA4: beq         $v1, $zero, L_80229CB4
    if (ctx->r3 == 0) {
        // 0x80229CA8: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80229CB4;
    }
    // 0x80229CA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229CAC: j           L_80229CBC
    // 0x80229CB0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_80229CBC;
    // 0x80229CB0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80229CB4:
    // 0x80229CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229CB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80229CBC:
    // 0x80229CBC: jal         0x8004D5D4
    // 0x80229CC0: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229CC0: nop

    after_0:
    // 0x80229CC4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229CC8: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80229CCC: bne         $a0, $v0, L_80229CDC
    if (ctx->r4 != ctx->r2) {
        // 0x80229CD0: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_80229CDC;
    }
    // 0x80229CD0: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80229CD4: j           L_80229D50
    // 0x80229CD8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80229D50;
    // 0x80229CD8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_80229CDC:
    // 0x80229CDC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80229CE0: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80229CE4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229CE8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229CEC: bne         $v1, $zero, L_80229D50
    if (ctx->r3 != 0) {
        // 0x80229CF0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80229D50;
    }
    // 0x80229CF0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80229CF4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80229CF8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80229CFC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80229D00: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229D04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229D08: bne         $v1, $zero, L_80229D50
    if (ctx->r3 != 0) {
        // 0x80229D0C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80229D50;
    }
    // 0x80229D0C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80229D10: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80229D14: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80229D18: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x80229D1C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229D20: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229D24: bne         $v1, $zero, L_80229D50
    if (ctx->r3 != 0) {
        // 0x80229D28: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80229D50;
    }
    // 0x80229D28: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80229D2C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80229D30: bnel        $a0, $v0, L_80229D50
    if (ctx->r4 != ctx->r2) {
        // 0x80229D34: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80229D50;
    }
    goto skip_0;
    // 0x80229D34: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80229D38: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x80229D3C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229D40: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229D44: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229D48: j           L_80229D58
    // 0x80229D4C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80229D58;
    // 0x80229D4C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80229D50:
    // 0x80229D50: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229D54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80229D58:
    // 0x80229D58: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229D5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229D60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229D64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229D68: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80229D6C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80229D70: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229D74: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229D78: bne         $v0, $zero, L_80229D84
    if (ctx->r2 != 0) {
        // 0x80229D7C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80229D84;
    }
    // 0x80229D7C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80229D80: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80229D84:
    // 0x80229D84: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80229D88: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80229D8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229D90: jal         0x8009A3B4
    // 0x80229D94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229D94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229D98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229DA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229DA4: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80229DA8: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80229DAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229DB0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229DB4: addiu       $v0, $v0, 0x23D0
    ctx->r2 = ADD32(ctx->r2, 0X23D0);
    // 0x80229DB8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80229DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DC0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229DC4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229DC8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80229DCC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229DD0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229DD4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229DD8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229DDC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80229DE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229DE4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80229DE8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80229DEC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80229DF0: jal         0x80050294
    // 0x80229DF4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229DF4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80229DF8: jal         0x80229E14
    // 0x80229DFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229E14_ovl15(rdram, ctx);
        goto after_3;
    // 0x80229DFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229E00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229E04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E0C: jr          $ra
    // 0x80229E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D0A8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D0A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D0AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D0B0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022D0B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D0B8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022D0BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D0C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D0C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D0C8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022D0CC:
    // 0x8022D0CC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022D0D0: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022D0D4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022D0D8: beq         $v0, $zero, L_8022D108
    if (ctx->r2 == 0) {
        // 0x8022D0DC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022D108;
    }
    // 0x8022D0DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022D0E0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022D0E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022D0E8:
    // 0x8022D0E8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022D0EC: jal         0x8022D160
    // 0x8022D0F0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022D160_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022D0F0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022D0F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022D0F8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022D0FC: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022D100: bne         $v0, $zero, L_8022D0E8
    if (ctx->r2 != 0) {
        // 0x8022D104: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022D0E8;
    }
    // 0x8022D104: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022D108:
    // 0x8022D108: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022D10C: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022D110: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022D114: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022D118: beq         $v0, $zero, L_8022D124
    if (ctx->r2 == 0) {
        // 0x8022D11C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D124;
    }
    // 0x8022D11C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D120: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022D124:
    // 0x8022D124: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022D128: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022D12C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022D130: bne         $v0, $zero, L_8022D0CC
    if (ctx->r2 != 0) {
        // 0x8022D134: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022D0CC;
    }
    // 0x8022D134: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022D138: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022D13C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D140: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x8022D144: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D148: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D14C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D150: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D154: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D158: jr          $ra
    // 0x8022D15C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D15C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
