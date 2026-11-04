#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802292AC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802292B0: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x802292B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802292BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802292C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802292C4: bne         $v1, $v0, L_802292EC
    if (ctx->r3 != ctx->r2) {
        // 0x802292C8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802292EC;
    }
    // 0x802292C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802292CC: jal         0x80061724
    // 0x802292D0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x802292D0: nop

    after_0:
    // 0x802292D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802292D8: jal         0x800616FC
    // 0x802292DC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x802292DC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x802292E0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802292E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802292E8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_802292EC:
    // 0x802292EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802292F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802292F4: jr          $ra
    // 0x802292F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802292F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B2D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B2D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B2D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B2DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B2E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B2E4: bne         $v0, $zero, L_8022B300
    if (ctx->r2 != 0) {
        // 0x8022B2E8: addiu       $a1, $zero, 0x1A
        ctx->r5 = ADD32(0, 0X1A);
            goto L_8022B300;
    }
    // 0x8022B2E8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x8022B2EC: jal         0x80050294
    // 0x8022B2F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B2F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B2F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B2F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B2FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B300:
    // 0x8022B300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B304: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B308: jr          $ra
    // 0x8022B30C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B30C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C20_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227C30: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80227C34: bgez        $v0, L_80227C4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227C38: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80227C4C;
    }
    // 0x80227C38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227C3C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227C40: jal         0x802296E8
    // 0x80227C44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_802296E8_ovl29(rdram, ctx);
        goto after_0;
    // 0x80227C44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227C48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227C4C:
    // 0x80227C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C54: jr          $ra
    // 0x80227C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255E0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255F4: bne         $v0, $zero, L_8022563C
    if (ctx->r2 != 0) {
        // 0x802255F8: nop
    
            goto L_8022563C;
    }
    // 0x802255F8: nop

    // 0x802255FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225600: jal         0x800607C4
    // 0x80225604: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225604: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    after_0:
    // 0x80225608: jal         0x8006033C
    // 0x8022560C: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022560C: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    after_1:
    // 0x80225610: bne         $v0, $zero, L_80225630
    if (ctx->r2 != 0) {
        // 0x80225614: nop
    
            goto L_80225630;
    }
    // 0x80225614: nop

    // 0x80225618: jal         0x80060AAC
    // 0x8022561C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x8022561C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x80225620: jal         0x80060AAC
    // 0x80225624: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225624: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80225628: jal         0x80060AAC
    // 0x8022562C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_4;
    // 0x8022562C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
L_80225630:
    // 0x80225630: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225638: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022563C:
    // 0x8022563C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225644: jr          $ra
    // 0x80225648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BBF0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BBF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BBF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BBFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BC00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BC04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BC08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BC0C: jal         0x8009A3B4
    // 0x8022BC10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BC10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022BC14: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BC18: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BC1C: jal         0x8009A3B4
    // 0x8022BC20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BC20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BC24: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BC28: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BC2C: jal         0x8009A3B4
    // 0x8022BC30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BC30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BC34: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BC38: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BC3C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BC40: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022BC44: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BC48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC4C: lw          $v0, 0x1360($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1360);
    // 0x8022BC50: jalr        $v0
    // 0x8022BC54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BC54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BC58: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022BC5C: beq         $v0, $zero, L_8022BC74
    if (ctx->r2 == 0) {
        // 0x8022BC60: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022BC74;
    }
    // 0x8022BC60: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022BC64: jal         0x8005044C
    // 0x8022BC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022BC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BC6C: j           L_8022BC7C
    // 0x8022BC70: nop

        goto L_8022BC7C;
    // 0x8022BC70: nop

L_8022BC74:
    // 0x8022BC74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BC78: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022BC7C:
    // 0x8022BC7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BC80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BC84: beq         $v0, $zero, L_8022BC9C
    if (ctx->r2 == 0) {
        // 0x8022BC88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BC9C;
    }
    // 0x8022BC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC8C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BC90: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BC94: jal         0x8003B564
    // 0x8022BC98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x8022BC98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022BC9C:
    // 0x8022BC9C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BCA0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022BCA4: beq         $v1, $v0, L_8022BCC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BCC0;
    }
    // 0x8022BCA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022BCB0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022BCB4: jal         0x80047284
    // 0x8022BCB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022BCB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8022BCBC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
L_8022BCC0:
    // 0x8022BCC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BCC4: bnel        $v1, $v0, L_8022BCEC
    if (ctx->r3 != ctx->r2) {
        // 0x8022BCC8: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8022BCEC;
    }
    goto skip_0;
    // 0x8022BCC8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    skip_0:
    // 0x8022BCCC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022BCD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BCD4: jal         0x8009A3B4
    // 0x8022BCD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022BCD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022BCDC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022BCE0: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x8022BCE4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022BCE8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022BCEC:
    // 0x8022BCEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BCF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BCF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BCF8: jr          $ra
    // 0x8022BCFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BCFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CF04_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CF08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CF10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CF14: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CF18: bne         $v0, $zero, L_8022CF34
    if (ctx->r2 != 0) {
        // 0x8022CF1C: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_8022CF34;
    }
    // 0x8022CF1C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8022CF20: jal         0x80050294
    // 0x8022CF24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022CF24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022CF28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CF2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CF30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CF34:
    // 0x8022CF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CF38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CF3C: jr          $ra
    // 0x8022CF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293C0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802293C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802293C8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x802293CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802293D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802293D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802293D8: lw          $v0, 0x1228($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1228);
    // 0x802293DC: jalr        $v0
    // 0x802293E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802293E0: nop

    after_0:
    // 0x802293E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802293E8: jr          $ra
    // 0x802293EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802293EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B250_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B254: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B258: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B260: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B264: bne         $v0, $zero, L_8022B280
    if (ctx->r2 != 0) {
        // 0x8022B268: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_8022B280;
    }
    // 0x8022B268: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8022B26C: jal         0x80050294
    // 0x8022B270: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B270: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B274: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B27C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B280:
    // 0x8022B280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B288: jr          $ra
    // 0x8022B28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263F8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263F8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263FC: bne         $v0, $zero, L_80226410
    if (ctx->r2 != 0) {
        // 0x80226400: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226410;
    }
    // 0x80226400: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226404: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226408: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022640C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226410:
    // 0x80226410: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226414: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80226418: bne         $v1, $v0, L_80226434
    if (ctx->r3 != ctx->r2) {
        // 0x8022641C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226434;
    }
    // 0x8022641C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226420: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226428: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022642C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226430: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_80226434:
    // 0x80226434: bne         $v1, $v0, L_80226444
    if (ctx->r3 != ctx->r2) {
        // 0x80226438: nop
    
            goto L_80226444;
    }
    // 0x80226438: nop

    // 0x8022643C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226440: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_80226444:
    // 0x80226444: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226448: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022644C: bne         $v1, $v0, L_80226468
    if (ctx->r3 != ctx->r2) {
        // 0x80226450: addiu       $v0, $zero, 0x73
        ctx->r2 = ADD32(0, 0X73);
            goto L_80226468;
    }
    // 0x80226450: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80226454: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022645C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226460: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226464: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
L_80226468:
    // 0x80226468: bne         $v1, $v0, L_80226478
    if (ctx->r3 != ctx->r2) {
        // 0x8022646C: nop
    
            goto L_80226478;
    }
    // 0x8022646C: nop

    // 0x80226470: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226474: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226478:
    // 0x80226478: jr          $ra
    // 0x8022647C: nop

    TRACE_RETURN()
    return;
    // 0x8022647C: nop

;}
RECOMP_FUNC void func_8022BBA0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BBA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BBA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BBAC: jal         0x800A3450
    // 0x8022BBB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022BBB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022BBB4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022BBB8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022BBBC: jal         0x800A3450
    // 0x8022BBC0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022BBC0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022BBC4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022BBC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022BBCC: jal         0x800A3450
    // 0x8022BBD0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022BBD0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022BBD4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022BBD8: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022BBDC: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022BBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BBE8: jr          $ra
    // 0x8022BBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227604_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227604: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80227608: bltzl       $v0, L_80227610
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022760C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80227610;
    }
    goto skip_0;
    // 0x8022760C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80227610:
    // 0x80227610: jr          $ra
    // 0x80227614: nop

    TRACE_RETURN()
    return;
    // 0x80227614: nop

;}
RECOMP_FUNC void func_8022E5D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E5D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E5D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E5D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E5E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E5E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E5E8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022E5EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022E5F0: jal         0x80071A70
    // 0x8022E5F4: lw          $a0, 0x1640($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1640);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x8022E5F4: lw          $a0, 0x1640($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1640);
    after_0:
    // 0x8022E5F8: bne         $v0, $zero, L_8022E610
    if (ctx->r2 != 0) {
        // 0x8022E5FC: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022E610;
    }
    // 0x8022E5FC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022E600: jal         0x8004F62C
    // 0x8022E604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8022E604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E608: j           L_8022E660
    // 0x8022E60C: nop

        goto L_8022E660;
    // 0x8022E60C: nop

L_8022E610:
    // 0x8022E610: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E614: bne         $v1, $zero, L_8022E624
    if (ctx->r3 != 0) {
        // 0x8022E618: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E624;
    }
    // 0x8022E618: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E61C: j           L_8022E634
    // 0x8022E620: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_8022E634;
    // 0x8022E620: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022E624:
    // 0x8022E624: bne         $v1, $v0, L_8022E630
    if (ctx->r3 != ctx->r2) {
        // 0x8022E628: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E630;
    }
    // 0x8022E628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E62C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022E630:
    // 0x8022E630: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8022E634:
    // 0x8022E634: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022E638: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022E63C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E640: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E644: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E648: lw          $v1, 0x16FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X16FC);
    // 0x8022E64C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E650: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8022E654: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E658: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E65C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8022E660:
    // 0x8022E660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E664: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E668: jr          $ra
    // 0x8022E66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802296E8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296E8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802296EC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x802296F0: beq         $a0, $v0, L_80229714
    if (ctx->r4 == ctx->r2) {
        // 0x802296F4: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_80229714;
    }
    // 0x802296F4: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x802296F8: bne         $v0, $zero, L_80229720
    if (ctx->r2 != 0) {
        // 0x802296FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229720;
    }
    // 0x802296FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229700: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x80229704: beq         $v0, $zero, L_8022971C
    if (ctx->r2 == 0) {
        // 0x80229708: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022971C;
    }
    // 0x80229708: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022970C: bne         $v0, $zero, L_80229720
    if (ctx->r2 != 0) {
        // 0x80229710: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229720;
    }
    // 0x80229710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229714:
    // 0x80229714: j           L_80229720
    // 0x80229718: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80229720;
    // 0x80229718: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022971C:
    // 0x8022971C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229720:
    // 0x80229720: jr          $ra
    // 0x80229724: nop

    TRACE_RETURN()
    return;
    // 0x80229724: nop

;}
RECOMP_FUNC void func_80225DFC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225E00: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x80225E04: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225E08: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225E0C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225E10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225E14: jal         0x8006033C
    // 0x80225E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80225E1C: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    // 0x80225E20: jal         0x8006033C
    // 0x80225E24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225E24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80225E28: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80225E2C: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80225E30: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80225E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E38: beq         $v1, $v0, L_80225E98
    if (ctx->r3 == ctx->r2) {
        // 0x80225E3C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225E98;
    }
    // 0x80225E3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225E40: beql        $v0, $zero, L_80225E58
    if (ctx->r2 == 0) {
        // 0x80225E44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225E58;
    }
    goto skip_0;
    // 0x80225E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225E48: beq         $v1, $zero, L_80225E68
    if (ctx->r3 == 0) {
        // 0x80225E4C: nop
    
            goto L_80225E68;
    }
    // 0x80225E4C: nop

    // 0x80225E50: j           L_80225EEC
    // 0x80225E54: nop

        goto L_80225EEC;
    // 0x80225E54: nop

L_80225E58:
    // 0x80225E58: beq         $v1, $v0, L_80225EC0
    if (ctx->r3 == ctx->r2) {
        // 0x80225E5C: nop
    
            goto L_80225EC0;
    }
    // 0x80225E5C: nop

    // 0x80225E60: j           L_80225EEC
    // 0x80225E64: nop

        goto L_80225EEC;
    // 0x80225E64: nop

L_80225E68:
    // 0x80225E68: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80225E6C: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x80225E70: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80225E74: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x80225E78: bne         $v0, $zero, L_80225EEC
    if (ctx->r2 != 0) {
        // 0x80225E7C: nop
    
            goto L_80225EEC;
    }
    // 0x80225E7C: nop

    // 0x80225E80: jal         0x8006036C
    // 0x80225E84: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225E84: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_2:
    // 0x80225E88: jal         0x80060590
    // 0x80225E8C: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80225E8C: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    after_3:
    // 0x80225E90: j           L_80225EEC
    // 0x80225E94: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_80225EEC;
    // 0x80225E94: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80225E98:
    // 0x80225E98: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80225E9C: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x80225EA0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80225EA4: sltiu       $v0, $v0, 0x15
    ctx->r2 = ctx->r2 < 0X15 ? 1 : 0;
    // 0x80225EA8: bne         $v0, $zero, L_80225EEC
    if (ctx->r2 != 0) {
        // 0x80225EAC: nop
    
            goto L_80225EEC;
    }
    // 0x80225EAC: nop

    // 0x80225EB0: jal         0x80060590
    // 0x80225EB4: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80225EB4: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_4:
    // 0x80225EB8: j           L_80225EE0
    // 0x80225EBC: nop

        goto L_80225EE0;
    // 0x80225EBC: nop

L_80225EC0:
    // 0x80225EC0: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80225EC4: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x80225EC8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80225ECC: sltiu       $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 < 0X1F ? 1 : 0;
    // 0x80225ED0: bne         $v0, $zero, L_80225EEC
    if (ctx->r2 != 0) {
        // 0x80225ED4: nop
    
            goto L_80225EEC;
    }
    // 0x80225ED4: nop

    // 0x80225ED8: jal         0x8006036C
    // 0x80225EDC: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225EDC: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_5:
L_80225EE0:
    // 0x80225EE0: jal         0x8006036C
    // 0x80225EE4: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80225EE4: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    after_6:
    // 0x80225EE8: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80225EEC:
    // 0x80225EEC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225EF0: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x80225EF4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225EF8: bne         $v1, $v0, L_80225F14
    if (ctx->r3 != ctx->r2) {
        // 0x80225EFC: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_80225F14;
    }
    // 0x80225EFC: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80225F00: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225F04: addiu       $v0, $v0, 0x610
    ctx->r2 = ADD32(ctx->r2, 0X610);
    // 0x80225F08: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x80225F0C: j           L_80225F24
    // 0x80225F10: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
        goto L_80225F24;
    // 0x80225F10: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_80225F14:
    // 0x80225F14: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225F18: addiu       $v0, $v0, 0x60C
    ctx->r2 = ADD32(ctx->r2, 0X60C);
    // 0x80225F1C: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x80225F20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80225F24:
    // 0x80225F24: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80225F28: beq         $v0, $zero, L_80225F70
    if (ctx->r2 == 0) {
        // 0x80225F2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80225F70;
    }
    // 0x80225F2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225F30: andi        $s2, $v1, 0xFF
    ctx->r18 = ctx->r3 & 0XFF;
    // 0x80225F34: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80225F38: addiu       $s3, $s3, 0x478
    ctx->r19 = ADD32(ctx->r19, 0X478);
    // 0x80225F3C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80225F40:
    // 0x80225F40: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x80225F44: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80225F48: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225F4C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80225F50: jal         0x8005FB30
    // 0x80225F54: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_7;
    // 0x80225F54: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    after_7:
    // 0x80225F58: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80225F5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225F60: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80225F64: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80225F68: bne         $v0, $zero, L_80225F40
    if (ctx->r2 != 0) {
        // 0x80225F6C: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_80225F40;
    }
    // 0x80225F6C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80225F70:
    // 0x80225F70: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225F74: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225F78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225F7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225F80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F84: jr          $ra
    // 0x80225F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80225F8C: nop

;}
RECOMP_FUNC void func_8022D240_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D244: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D248: jal         0x8004F488
    // 0x8022D24C: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8022D24C: nop

    after_0:
    // 0x8022D250: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D254: jr          $ra
    // 0x8022D258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228620_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228620: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80228624: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228628: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022862C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228630: bne         $v0, $zero, L_8022863C
    if (ctx->r2 != 0) {
        // 0x80228634: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022863C;
    }
    // 0x80228634: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228638: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022863C:
    // 0x8022863C: jr          $ra
    // 0x80228640: nop

    TRACE_RETURN()
    return;
    // 0x80228640: nop

;}
RECOMP_FUNC void func_80228784_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228788: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022878C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228790: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228794: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228798: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022879C: lw          $v0, 0x11E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X11E0);
    // 0x802287A0: jalr        $v0
    // 0x802287A4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802287A4: nop

    after_0:
    // 0x802287A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802287AC: jr          $ra
    // 0x802287B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802287B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A8C0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A8C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A8C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A8CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A8D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A8D4: bne         $v0, $zero, L_8022A920
    if (ctx->r2 != 0) {
        // 0x8022A8D8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022A920;
    }
    // 0x8022A8D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A8DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A8E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A8E4: jal         0x8004D5D4
    // 0x8022A8E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A8E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A8EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A8F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A8F4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A8F8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A8FC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A900: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A904: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A908: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A90C: jal         0x80050294
    // 0x8022A910: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022A910: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A914: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A918: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A91C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A920:
    // 0x8022A920: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A924: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A928: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A92C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A930: lw          $v0, 0x1280($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1280);
    // 0x8022A934: jalr        $v0
    // 0x8022A938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022A938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A93C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022A940: bne         $v0, $zero, L_8022A958
    if (ctx->r2 != 0) {
        // 0x8022A944: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022A958;
    }
    // 0x8022A944: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A948: jal         0x8004DD04
    // 0x8022A94C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8022A94C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022A950: jal         0x8005044C
    // 0x8022A954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022A954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022A958:
    // 0x8022A958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A95C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A960: jr          $ra
    // 0x8022A964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B9D8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B9D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B9DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B9E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B9E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B9E8: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022B9EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B9F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B9F4: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x8022B9F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B9FC: jal         0x8004DE68
    // 0x8022BA00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022BA00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022BA04: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BA08: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022BA0C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022BA10: beq         $v1, $zero, L_8022BA2C
    if (ctx->r3 == 0) {
        // 0x8022BA14: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022BA2C;
    }
    // 0x8022BA14: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022BA18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BA1C: beq         $v1, $v0, L_8022BA4C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BA20: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022BA4C;
    }
    // 0x8022BA20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BA24: j           L_8022BA8C
    // 0x8022BA28: nop

        goto L_8022BA8C;
    // 0x8022BA28: nop

L_8022BA2C:
    // 0x8022BA2C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022BA30: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022BA34: bne         $v0, $zero, L_8022BA78
    if (ctx->r2 != 0) {
        // 0x8022BA38: nop
    
            goto L_8022BA78;
    }
    // 0x8022BA38: nop

    // 0x8022BA3C: beq         $v1, $zero, L_8022BA78
    if (ctx->r3 == 0) {
        // 0x8022BA40: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022BA78;
    }
    // 0x8022BA40: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022BA44: j           L_8022BA8C
    // 0x8022BA48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BA8C;
    // 0x8022BA48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BA4C:
    // 0x8022BA4C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BA50: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022BA54: jal         0x8004F820
    // 0x8022BA58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022BA58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022BA5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BA60: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x8022BA64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BA68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BA6C: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x8022BA70: beq         $a0, $zero, L_8022BA8C
    if (ctx->r4 == 0) {
        // 0x8022BA74: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022BA8C;
    }
    // 0x8022BA74: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022BA78:
    // 0x8022BA78: jal         0x8022BBA0
    // 0x8022BA7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BBA0_ovl29(rdram, ctx);
        goto after_2;
    // 0x8022BA7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BA84: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BA88: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022BA8C:
    // 0x8022BA8C: jal         0x8022BAC8
    // 0x8022BA90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BAC8_ovl29(rdram, ctx);
        goto after_3;
    // 0x8022BA90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BA94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BA98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAA4: jr          $ra
    // 0x8022BAA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BAA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E670_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E680: jal         0x8006033C
    // 0x8022E684: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022E684: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_0:
    // 0x8022E688: beq         $v0, $zero, L_8022E6A0
    if (ctx->r2 == 0) {
        // 0x8022E68C: nop
    
            goto L_8022E6A0;
    }
    // 0x8022E68C: nop

    // 0x8022E690: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E694: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E698: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E69C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E6A0:
    // 0x8022E6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E6A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E6A8: jr          $ra
    // 0x8022E6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229548_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022954C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229550: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229554: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229558: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022955C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80229560: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229564: jal         0x8004FA7C
    // 0x80229568: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229568: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022956C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80229570: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229574: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80229578: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022957C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80229580: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229584: beq         $v1, $zero, L_802295B8
    if (ctx->r3 == 0) {
        // 0x80229588: nop
    
            goto L_802295B8;
    }
    // 0x80229588: nop

    // 0x8022958C: jal         0x802296D8
    // 0x80229590: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802296D8_ovl29(rdram, ctx);
        goto after_1;
    // 0x80229590: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80229594: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229598: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022959C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x802295A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802295A4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802295A8: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x802295AC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802295B0: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x802295B4: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_802295B8:
    // 0x802295B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802295BC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802295C0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802295C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802295C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802295CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295D4: jr          $ra
    // 0x802295D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802295D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ADEC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ADF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ADF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ADF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ADFC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022AE00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AE04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AE08: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AE0C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AE10: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AE14: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022AE18: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022AE1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AE20: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AE24: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AE28: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AE2C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AE30: jal         0x8004F820
    // 0x8022AE34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022AE34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AE38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AE3C: bgez        $v0, L_8022AE68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AE40: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AE68;
    }
    // 0x8022AE40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AE44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AE48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AE4C: jal         0x8004F820
    // 0x8022AE50: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022AE50: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022AE54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AE58: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AE5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AE60: j           L_8022AE80
    // 0x8022AE64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022AE80;
    // 0x8022AE64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022AE68:
    // 0x8022AE68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AE6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AE70: jal         0x8004F820
    // 0x8022AE74: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022AE74: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022AE78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AE7C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022AE80:
    // 0x8022AE80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AE88: jal         0x8004D5D4
    // 0x8022AE8C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022AE8C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022AE90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE94: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AE98: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AE9C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AEA0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AEA4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AEA8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022AEAC: jal         0x8003E934
    // 0x8022AEB0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022AEB0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_4:
    // 0x8022AEB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AEB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AEBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AEC0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AEC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AEC8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AECC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022AED0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022AED4: jal         0x80050294
    // 0x8022AED8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022AED8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    after_5:
    // 0x8022AEDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022AEE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022AEE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AEEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AEF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AEF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEF8: jr          $ra
    // 0x8022AEFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AEFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227E14_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227E24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E28: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x80227E2C: bne         $v0, $zero, L_80227E6C
    if (ctx->r2 != 0) {
        // 0x80227E30: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227E6C;
    }
    // 0x80227E30: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227E34: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80227E38: bne         $v0, $zero, L_80227E60
    if (ctx->r2 != 0) {
        // 0x80227E3C: nop
    
            goto L_80227E60;
    }
    // 0x80227E3C: nop

    // 0x80227E40: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80227E44: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80227E48: bne         $v1, $v0, L_80227E60
    if (ctx->r3 != ctx->r2) {
        // 0x80227E4C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227E60;
    }
    // 0x80227E4C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227E50: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80227E54: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80227E58: j           L_80227E9C
    // 0x80227E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80227E9C;
    // 0x80227E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227E60:
    // 0x80227E60: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80227E64: beq         $v0, $zero, L_80227ECC
    if (ctx->r2 == 0) {
        // 0x80227E68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227ECC;
    }
    // 0x80227E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227E6C:
    // 0x80227E6C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227E70: bne         $v0, $zero, L_80227ECC
    if (ctx->r2 != 0) {
        // 0x80227E74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227ECC;
    }
    // 0x80227E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E78: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80227E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E80: bne         $v1, $v0, L_80227ECC
    if (ctx->r3 != ctx->r2) {
        // 0x80227E84: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_80227ECC;
    }
    // 0x80227E84: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80227E88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227E8C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227E90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227E94: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227E98: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80227E9C:
    // 0x80227E9C: jal         0x8009A3B4
    // 0x80227EA0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227EA0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227EA4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227EA8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80227EAC: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227EB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227EB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227EB8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227EBC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227EC0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227EC4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227ECC:
    // 0x80227ECC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227ED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227ED4: jal         0x8004DA90
    // 0x80227ED8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227ED8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227EDC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80227EE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227EE4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80227EE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227EEC: bne         $v0, $zero, L_80227F1C
    if (ctx->r2 != 0) {
        // 0x80227EF0: nop
    
            goto L_80227F1C;
    }
    // 0x80227EF0: nop

    // 0x80227EF4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227EF8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227EFC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227F00: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227F04: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80227F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227F10: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80227F14: j           L_80227F6C
    // 0x80227F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227F6C;
    // 0x80227F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227F1C:
    // 0x80227F1C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227F20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227F24: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227F28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227F2C: bne         $v0, $zero, L_80227F3C
    if (ctx->r2 != 0) {
        // 0x80227F30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227F3C;
    }
    // 0x80227F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F34: j           L_80227F6C
    // 0x80227F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227F6C;
    // 0x80227F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227F3C:
    // 0x80227F3C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227F40: jal         0x80229774
    // 0x80227F44: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229774_ovl29(rdram, ctx);
        goto after_2;
    // 0x80227F44: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80227F48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227F4C: beq         $v0, $zero, L_80227F70
    if (ctx->r2 == 0) {
        // 0x80227F50: nop
    
            goto L_80227F70;
    }
    // 0x80227F50: nop

    // 0x80227F54: jal         0x802296D8
    // 0x80227F58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802296D8_ovl29(rdram, ctx);
        goto after_3;
    // 0x80227F58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x80227F5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227F60: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227F64: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227F68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80227F6C:
    // 0x80227F6C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227F70:
    // 0x80227F70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F7C: jr          $ra
    // 0x80227F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227160_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227164: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227168: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022716C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227170: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227174: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227178: lw          $v0, 0xFFC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XFFC);
    // 0x8022717C: jalr        $v0
    // 0x80227180: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227180: nop

    after_0:
    // 0x80227184: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227188: jr          $ra
    // 0x8022718C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022718C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DC30_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DC38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DC3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DC40: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DC44: bne         $v0, $zero, L_8022DC60
    if (ctx->r2 != 0) {
        // 0x8022DC48: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_8022DC60;
    }
    // 0x8022DC48: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022DC4C: jal         0x80050294
    // 0x8022DC50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DC50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DC54: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DC58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DC5C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DC60:
    // 0x8022DC60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DC64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC68: jr          $ra
    // 0x8022DC6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DC6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802259A0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259B4: bne         $v0, $zero, L_802259D0
    if (ctx->r2 != 0) {
        // 0x802259B8: nop
    
            goto L_802259D0;
    }
    // 0x802259B8: nop

    // 0x802259BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802259C0: jal         0x800607C4
    // 0x802259C4: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802259C4: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    after_0:
    // 0x802259C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802259D0:
    // 0x802259D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259D8: jr          $ra
    // 0x802259DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225858_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225858: jr          $ra
    // 0x8022585C: nop

    TRACE_RETURN()
    return;
    // 0x8022585C: nop

;}
RECOMP_FUNC void func_802251BC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251C0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251CC: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802251D0: beq         $v0, $zero, L_802251EC
    if (ctx->r2 == 0) {
        // 0x802251D4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251EC;
    }
    // 0x802251D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251DC: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251E0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251E4: j           L_802251F4
    // 0x802251E8: addiu       $a1, $a1, -0x3D4
    ctx->r5 = ADD32(ctx->r5, -0X3D4);
        goto L_802251F4;
    // 0x802251E8: addiu       $a1, $a1, -0x3D4
    ctx->r5 = ADD32(ctx->r5, -0X3D4);
L_802251EC:
    // 0x802251EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F4:
    // 0x802251F4: jal         0x80037D80
    // 0x802251F8: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F8: nop

    after_0:
    // 0x802251FC: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x80225200: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x80225204: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225208: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x8022520C: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225210: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225214: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225218: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022521C: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225220: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x80225224: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225228: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x8022522C: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80225230: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225234: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225238: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022523C: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225240: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225244: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225248: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022524C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225250: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225254: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225258: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022525C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225260: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225264: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225268: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022526C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225270: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225274: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225278: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022527C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225280: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80225284: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225288: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022528C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225290: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225294: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225298: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022529C: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x802252A0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252A4: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x802252A8: beq         $v1, $v0, L_8022530C
    if (ctx->r3 == ctx->r2) {
        // 0x802252AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022530C;
    }
    // 0x802252AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252B0: beq         $t1, $v0, L_802252E0
    if (ctx->r9 == ctx->r2) {
        // 0x802252B4: slti        $v0, $t1, 0x2
        ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
            goto L_802252E0;
    }
    // 0x802252B4: slti        $v0, $t1, 0x2
    ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x802252B8: beql        $v0, $zero, L_802252D0
    if (ctx->r2 == 0) {
        // 0x802252BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802252D0;
    }
    goto skip_0;
    // 0x802252BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802252C0: beq         $t1, $zero, L_80225304
    if (ctx->r9 == 0) {
        // 0x802252C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225304;
    }
    // 0x802252C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252C8: j           L_8022532C
    // 0x802252CC: sb          $zero, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = 0;
        goto L_8022532C;
    // 0x802252CC: sb          $zero, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = 0;
L_802252D0:
    // 0x802252D0: beq         $t1, $v0, L_80225304
    if (ctx->r9 == ctx->r2) {
        // 0x802252D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225304;
    }
    // 0x802252D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252D8: j           L_8022532C
    // 0x802252DC: sb          $zero, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = 0;
        goto L_8022532C;
    // 0x802252DC: sb          $zero, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = 0;
L_802252E0:
    // 0x802252E0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x802252E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252E8: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x802252EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252F4: sb          $v0, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r2;
    // 0x802252F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252FC: sb          $zero, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = 0;
    // 0x80225300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225304:
    // 0x80225304: j           L_8022532C
    // 0x80225308: sb          $v0, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = ctx->r2;
        goto L_8022532C;
    // 0x80225308: sb          $v0, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = ctx->r2;
L_8022530C:
    // 0x8022530C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225310: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
    // 0x80225314: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225318: sb          $zero, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = 0;
    // 0x8022531C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225320: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x80225324: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225328: sb          $zero, 0x4DFF($at)
    MEM_B(0X4DFF, ctx->r1) = 0;
L_8022532C:
    // 0x8022532C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225330: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225334: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225338: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022533C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225340: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225344: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225348: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022534C: lw          $a0, -0x8EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X8EC);
    // 0x80225350: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225354: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225358: lw          $v0, -0x688($at)
    ctx->r2 = MEM_W(ctx->r1, -0X688);
    // 0x8022535C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225360: jal         0x8004C790
    // 0x80225364: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x80225364: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x80225368: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022536C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225370: addiu       $a0, $a0, -0x5F8
    ctx->r4 = ADD32(ctx->r4, -0X5F8);
    // 0x80225374: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225378: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022537C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225380: lw          $v1, -0x3F8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3F8);
    // 0x80225384: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225388: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022538C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225390: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225394: addiu       $v0, $v0, -0x664
    ctx->r2 = ADD32(ctx->r2, -0X664);
    // 0x80225398: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022539C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802253A0: jal         0x80054FB8
    // 0x802253A4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x802253A4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x802253A8: jal         0x8004A614
    // 0x802253AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x802253AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x802253B0: jal         0x802253D0
    // 0x802253B4: nop

    func_802253D0_ovl29(rdram, ctx);
        goto after_4;
    // 0x802253B4: nop

    after_4:
    // 0x802253B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253C0: jr          $ra
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802253C8: nop

    // 0x802253CC: nop

;}
RECOMP_FUNC void func_8022C5FC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C600: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C604: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C608: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022C60C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022C610: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C614: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C618: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C61C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022C620: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022C624: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022C628: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022C62C: beq         $v0, $zero, L_8022C7CC
    if (ctx->r2 == 0) {
        // 0x8022C630: addiu       $s3, $s2, 0x348
        ctx->r19 = ADD32(ctx->r18, 0X348);
            goto L_8022C7CC;
    }
    // 0x8022C630: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x8022C634: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C638: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C63C: addu        $at, $at, $v0
    gpr jr_addend_8022C644 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C640: lw          $v0, 0x1A60($at)
    ctx->r2 = ADD32(ctx->r1, 0X1A60);
    // 0x8022C644: jr          $v0
    // 0x8022C648: nop

    switch (jr_addend_8022C644 >> 2) {
        case 0: goto L_8022C64C; break;
        case 1: goto L_8022C678; break;
        case 2: goto L_8022C68C; break;
        case 3: goto L_8022C748; break;
        case 4: goto L_8022C76C; break;
        default: switch_error(__func__, 0x8022C644, 0x80231A60);
    }
    // 0x8022C648: nop

L_8022C64C:
    // 0x8022C64C: jal         0x8006FF84
    // 0x8022C650: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022C650: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x8022C654: beq         $v0, $zero, L_8022C7CC
    if (ctx->r2 == 0) {
        // 0x8022C658: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C7CC;
    }
    // 0x8022C658: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C65C: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x8022C660: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022C664: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x8022C668: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022C66C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C670: j           L_8022C7CC
    // 0x8022C674: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022C7CC;
    // 0x8022C674: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022C678:
    // 0x8022C678: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022C67C: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x8022C680: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022C684: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C688: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022C68C:
    // 0x8022C68C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C690: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022C694: bne         $v0, $zero, L_8022C7CC
    if (ctx->r2 != 0) {
        // 0x8022C698: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022C7CC;
    }
    // 0x8022C698: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022C69C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C6A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022C6A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C6A8: jal         0x800610AC
    // 0x8022C6AC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022C6AC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x8022C6B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C6B4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022C6B8: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022C6BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C6C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C6C4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022C6C8: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x8022C6CC: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022C6D0: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022C6D4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C6D8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022C6DC: jal         0x8009A3B4
    // 0x8022C6E0: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C6E0: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    after_2:
    // 0x8022C6E4: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x8022C6E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C6F0: jal         0x8009A3B4
    // 0x8022C6F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C6F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022C6F8: addiu       $a0, $s3, 0x24
    ctx->r4 = ADD32(ctx->r19, 0X24);
    // 0x8022C6FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C700: jal         0x8009A3B4
    // 0x8022C704: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C704: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022C708: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8022C70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C710: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x8022C714: jal         0x8009A3B4
    // 0x8022C718: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C718: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022C71C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022C720: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C724: jal         0x8009A3B4
    // 0x8022C728: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C728: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022C72C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022C730: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022C734: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C738: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x8022C73C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022C740: j           L_8022C7CC
    // 0x8022C744: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
        goto L_8022C7CC;
    // 0x8022C744: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
L_8022C748:
    // 0x8022C748: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022C74C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C750: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022C754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C758: bnel        $v0, $zero, L_8022C770
    if (ctx->r2 != 0) {
        // 0x8022C75C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022C770;
    }
    goto skip_0;
    // 0x8022C75C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x8022C760: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022C764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C768: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022C76C:
    // 0x8022C76C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022C770:
    // 0x8022C770: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x8022C774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C778: jal         0x8004DA90
    // 0x8022C77C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022C77C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022C780: jal         0x80040F30
    // 0x8022C784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x8022C784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x8022C788: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C78C: jal         0x8022C914
    // 0x8022C790: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8022C914_ovl29(rdram, ctx);
        goto after_9;
    // 0x8022C790: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
    // 0x8022C794: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022C798: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022C79C: bne         $v0, $zero, L_8022C7CC
    if (ctx->r2 != 0) {
        // 0x8022C7A0: nop
    
            goto L_8022C7CC;
    }
    // 0x8022C7A0: nop

    // 0x8022C7A4: jal         0x80070050
    // 0x8022C7A8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x8022C7A8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x8022C7AC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022C7B0: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x8022C7B4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C7B8: jal         0x8006036C
    // 0x8022C7BC: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8022C7BC: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    after_11:
    // 0x8022C7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7C4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022C7C8: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8022C7CC:
    // 0x8022C7CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022C7D0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022C7D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C7D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C7DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C7E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C7E4: jr          $ra
    // 0x8022C7E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C7E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C99C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C99C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C9A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C9A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C9A8: beq         $a1, $zero, L_8022C9F4
    if (ctx->r5 == 0) {
        // 0x8022C9AC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022C9F4;
    }
    // 0x8022C9AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C9B0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C9B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C9B8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022C9BC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022C9C0: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022C9C4: bne         $v0, $zero, L_8022C9F4
    if (ctx->r2 != 0) {
        // 0x8022C9C8: nop
    
            goto L_8022C9F4;
    }
    // 0x8022C9C8: nop

    // 0x8022C9CC: jal         0x800A3450
    // 0x8022C9D0: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C9D0: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    after_0:
    // 0x8022C9D4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022C9D8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022C9DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C9E0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022C9E4: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022C9E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C9EC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C9F0: sh          $v1, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r3;
L_8022C9F4:
    // 0x8022C9F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C9F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C9FC: jr          $ra
    // 0x8022CA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D09C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D09C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D0A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D0A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D0A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D0AC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D0B0: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D0B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D0B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D0BC: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x8022D0C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D0C4: addiu       $v0, $v0, 0x1470
    ctx->r2 = ADD32(ctx->r2, 0X1470);
    // 0x8022D0C8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022D0CC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022D0D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D0D4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022D0D8: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022D0DC: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022D0E0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022D0E4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022D0E8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022D0EC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D0F0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022D0F4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022D0F8: jal         0x8004D5D4
    // 0x8022D0FC: sh          $a2, 0x4EA($s0)
    MEM_H(0X4EA, ctx->r16) = ctx->r6;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022D0FC: sh          $a2, 0x4EA($s0)
    MEM_H(0X4EA, ctx->r16) = ctx->r6;
    after_0:
    // 0x8022D100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D104: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D108: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D10C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022D110: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022D114: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022D118: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022D11C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D120: jal         0x80050294
    // 0x8022D124: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022D124: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D128: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D12C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D130: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D138: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D13C: jr          $ra
    // 0x8022D140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CF44_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CF48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CF54: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CF58: bne         $v0, $zero, L_8022CF74
    if (ctx->r2 != 0) {
        // 0x8022CF5C: addiu       $a1, $zero, 0x11
        ctx->r5 = ADD32(0, 0X11);
            goto L_8022CF74;
    }
    // 0x8022CF5C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8022CF60: jal         0x80050294
    // 0x8022CF64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022CF64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022CF68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CF6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CF70: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CF74:
    // 0x8022CF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CF78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CF7C: jr          $ra
    // 0x8022CF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022564C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022564C: jr          $ra
    // 0x80225650: nop

    TRACE_RETURN()
    return;
    // 0x80225650: nop

;}
RECOMP_FUNC void func_8022ACB8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ACBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ACC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ACC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ACC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ACCC: bne         $v0, $zero, L_8022ACE8
    if (ctx->r2 != 0) {
        // 0x8022ACD0: addiu       $a1, $zero, 0x1A
        ctx->r5 = ADD32(0, 0X1A);
            goto L_8022ACE8;
    }
    // 0x8022ACD0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x8022ACD4: jal         0x80050294
    // 0x8022ACD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022ACD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022ACDC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ACE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ACE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022ACE8:
    // 0x8022ACE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ACEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACF0: jr          $ra
    // 0x8022ACF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E590_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E594: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E598: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022E59C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E5A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E5A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E5A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022E5AC: lw          $v1, 0x1720($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1720);
    // 0x8022E5B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E5B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E5B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022E5BC: jalr        $v0
    // 0x8022E5C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E5C0: nop

    after_0:
    // 0x8022E5C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E5C8: jr          $ra
    // 0x8022E5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D25C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D260: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D264: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D268: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D26C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D270: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D274: lw          $v0, 0x1490($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1490);
    // 0x8022D278: jalr        $v0
    // 0x8022D27C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D27C: nop

    after_0:
    // 0x8022D280: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D284: jr          $ra
    // 0x8022D288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A36C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A36C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A374: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A378: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A37C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022A380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A384: jal         0x8004DDE8
    // 0x8022A388: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022A388: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022A38C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A390: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x8022A394: beq         $v0, $zero, L_8022A3D8
    if (ctx->r2 == 0) {
        // 0x8022A398: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_8022A3D8;
    }
    // 0x8022A398: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022A39C: beq         $v0, $zero, L_8022A3B8
    if (ctx->r2 == 0) {
        // 0x8022A3A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A3B8;
    }
    // 0x8022A3A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A3A4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A3A8: beq         $v1, $v0, L_8022A418
    if (ctx->r3 == ctx->r2) {
        // 0x8022A3AC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A418;
    }
    // 0x8022A3AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A3B0: j           L_8022A418
    // 0x8022A3B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A418;
    // 0x8022A3B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A3B8:
    // 0x8022A3B8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A3BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A3C0: beq         $v1, $v0, L_8022A418
    if (ctx->r3 == ctx->r2) {
        // 0x8022A3C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A418;
    }
    // 0x8022A3C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A3C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A3CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A3D0: j           L_8022A3F8
    // 0x8022A3D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022A3F8;
    // 0x8022A3D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022A3D8:
    // 0x8022A3D8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A3DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A3E0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022A3E4: bne         $v0, $zero, L_8022A418
    if (ctx->r2 != 0) {
        // 0x8022A3E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A418;
    }
    // 0x8022A3E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A3F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A3F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022A3F8:
    // 0x8022A3F8: jal         0x80050294
    // 0x8022A3FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022A3FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022A400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A404: jal         0x8022A448
    // 0x8022A408: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A448_ovl29(rdram, ctx);
        goto after_2;
    // 0x8022A408: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022A40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A410: jal         0x8022A428
    // 0x8022A414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A428_ovl29(rdram, ctx);
        goto after_3;
    // 0x8022A414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8022A418:
    // 0x8022A418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A41C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A420: jr          $ra
    // 0x8022A424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A0E4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A0E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A0EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A0F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A0F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A0F8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A0FC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A100: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A104: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022A108: beq         $v0, $zero, L_8022A2C4
    if (ctx->r2 == 0) {
        // 0x8022A10C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A2C4;
    }
    // 0x8022A10C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A110: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A114: addu        $at, $at, $v0
    gpr jr_addend_8022A11C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A118: lw          $v0, 0x1960($at)
    ctx->r2 = ADD32(ctx->r1, 0X1960);
    // 0x8022A11C: jr          $v0
    // 0x8022A120: nop

    switch (jr_addend_8022A11C >> 2) {
        case 0: goto L_8022A124; break;
        case 1: goto L_8022A1E4; break;
        case 2: goto L_8022A200; break;
        case 3: goto L_8022A268; break;
        case 4: goto L_8022A294; break;
        default: switch_error(__func__, 0x8022A11C, 0x80231960);
    }
    // 0x8022A120: nop

L_8022A124:
    // 0x8022A124: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A12C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A130: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A134: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022A138: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022A13C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A140: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A144: jal         0x8004D5D4
    // 0x8022A148: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A148: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A14C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A150: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A154: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A158: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A15C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A160: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A164: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A168: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A16C: addiu       $v0, $v0, 0x1260
    ctx->r2 = ADD32(ctx->r2, 0X1260);
    // 0x8022A170: jal         0x8003E934
    // 0x8022A174: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022A174: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A178: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A17C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A180: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A184: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A188: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A18C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022A190: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A194: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A198: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A19C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022A1A0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022A1A4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022A1A8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A1AC: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022A1B0: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022A1B4: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022A1B8: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022A1BC: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022A1C0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A1C4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A1C8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022A1CC: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022A1D0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A1D4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022A1D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A1DC: j           L_8022A2C4
    // 0x8022A1E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022A2C4;
    // 0x8022A1E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022A1E4:
    // 0x8022A1E4: jal         0x8022A470
    // 0x8022A1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A470_ovl29(rdram, ctx);
        goto after_2;
    // 0x8022A1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A1EC: beq         $v0, $zero, L_8022A2C8
    if (ctx->r2 == 0) {
        // 0x8022A1F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A2C8;
    }
    // 0x8022A1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A1F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A1F8: j           L_8022A2C0
    // 0x8022A1FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A2C0;
    // 0x8022A1FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A200:
    // 0x8022A200: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A204: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A208: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A20C: jal         0x8004F820
    // 0x8022A210: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A210: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022A214: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A218: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A21C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A220: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A224: bne         $v0, $zero, L_8022A2C4
    if (ctx->r2 != 0) {
        // 0x8022A228: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A2C4;
    }
    // 0x8022A228: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A22C: jal         0x8003516C
    // 0x8022A230: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022A230: nop

    after_4:
    // 0x8022A234: bne         $v0, $zero, L_8022A2C8
    if (ctx->r2 != 0) {
        // 0x8022A238: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A2C8;
    }
    // 0x8022A238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A23C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A240: jal         0x800616FC
    // 0x8022A244: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022A244: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x8022A248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A24C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022A250: jal         0x80050294
    // 0x8022A254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022A254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022A258: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A25C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A260: j           L_8022A2C0
    // 0x8022A264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A2C0;
    // 0x8022A264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A268:
    // 0x8022A268: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A26C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A270: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A274: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A278: bne         $v0, $zero, L_8022A2C8
    if (ctx->r2 != 0) {
        // 0x8022A27C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A2C8;
    }
    // 0x8022A27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A280: jal         0x80034E3C
    // 0x8022A284: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x8022A284: nop

    after_7:
    // 0x8022A288: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A28C: j           L_8022A2C0
    // 0x8022A290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A2C0;
    // 0x8022A290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A294:
    // 0x8022A294: jal         0x8003516C
    // 0x8022A298: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022A298: nop

    after_8:
    // 0x8022A29C: bne         $v0, $zero, L_8022A2C8
    if (ctx->r2 != 0) {
        // 0x8022A2A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A2C8;
    }
    // 0x8022A2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A2A4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022A2A8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A2AC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022A2B0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A2B4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022A2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A2BC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8022A2C0:
    // 0x8022A2C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A2C4:
    // 0x8022A2C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A2C8:
    // 0x8022A2C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A2CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022A2D0: jal         0x80047284
    // 0x8022A2D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022A2D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022A2D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A2DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A2E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2E4: jr          $ra
    // 0x8022A2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D010_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D020: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D024: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D028: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D02C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D030: lw          $v0, 0x147C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X147C);
    // 0x8022D034: jalr        $v0
    // 0x8022D038: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D038: nop

    after_0:
    // 0x8022D03C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D040: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D044: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022D048: jal         0x8003B85C
    // 0x8022D04C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_1;
    // 0x8022D04C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x8022D050: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022D054: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022D058: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022D05C: jal         0x8003B840
    // 0x8022D060: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_2;
    // 0x8022D060: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022D064: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D068: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D06C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022D070: jal         0x8003B85C
    // 0x8022D074: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_3;
    // 0x8022D074: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_3:
    // 0x8022D078: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022D07C: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022D080: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022D084: jal         0x8003B840
    // 0x8022D088: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_4;
    // 0x8022D088: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022D08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D094: jr          $ra
    // 0x8022D098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB00_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EB04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EB08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022EB0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EB10: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EB14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EB18: lw          $v0, 0x1898($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1898);
    // 0x8022EB1C: jalr        $v0
    // 0x8022EB20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EB20: nop

    after_0:
    // 0x8022EB24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB28: jr          $ra
    // 0x8022EB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226298_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226298: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022629C: bne         $v0, $zero, L_802262C0
    if (ctx->r2 != 0) {
        // 0x802262A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802262C0;
    }
    // 0x802262A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802262A4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802262A8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802262AC: lui         $v0, 0xF092
    ctx->r2 = S32(0XF092 << 16);
    // 0x802262B0: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802262B4: lui         $v0, 0xFD12
    ctx->r2 = S32(0XFD12 << 16);
    // 0x802262B8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802262BC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_802262C0:
    // 0x802262C0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802262C4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802262C8: bne         $v1, $v0, L_802262DC
    if (ctx->r3 != ctx->r2) {
        // 0x802262CC: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_802262DC;
    }
    // 0x802262CC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802262D0: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802262D4: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x802262D8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_802262DC:
    // 0x802262DC: bne         $v1, $v0, L_802262EC
    if (ctx->r3 != ctx->r2) {
        // 0x802262E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802262EC;
    }
    // 0x802262E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802262E4: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802262E8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_802262EC:
    // 0x802262EC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802262F0: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x802262F4: bne         $v1, $v0, L_80226308
    if (ctx->r3 != ctx->r2) {
        // 0x802262F8: addiu       $v0, $zero, 0x9B
        ctx->r2 = ADD32(0, 0X9B);
            goto L_80226308;
    }
    // 0x802262F8: addiu       $v0, $zero, 0x9B
    ctx->r2 = ADD32(0, 0X9B);
    // 0x802262FC: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226300: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80226304: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_80226308:
    // 0x80226308: bne         $v1, $v0, L_80226318
    if (ctx->r3 != ctx->r2) {
        // 0x8022630C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226318;
    }
    // 0x8022630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226310: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226314: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80226318:
    // 0x80226318: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022631C: addiu       $v0, $zero, 0x11D
    ctx->r2 = ADD32(0, 0X11D);
    // 0x80226320: bne         $v1, $v0, L_80226330
    if (ctx->r3 != ctx->r2) {
        // 0x80226324: nop
    
            goto L_80226330;
    }
    // 0x80226324: nop

    // 0x80226328: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x8022632C: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226330:
    // 0x80226330: jr          $ra
    // 0x80226334: nop

    TRACE_RETURN()
    return;
    // 0x80226334: nop

;}
RECOMP_FUNC void func_80228C18_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228C1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228C28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228C2C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228C30: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228C34: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80228C38: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80228C3C: bne         $v0, $zero, L_80228C98
    if (ctx->r2 != 0) {
        // 0x80228C40: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80228C98;
    }
    // 0x80228C40: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80228C44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228C48: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228C4C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228C50: jal         0x8004F820
    // 0x80228C54: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228C54: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80228C58: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228C5C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228C60: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80228C64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228C68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228C6C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80228C70: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80228C74: beq         $a0, $zero, L_80228C98
    if (ctx->r4 == 0) {
        // 0x80228C78: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228C98;
    }
    // 0x80228C78: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228C7C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228C80: jal         0x80229640
    // 0x80228C84: nop

    func_80229640_ovl29(rdram, ctx);
        goto after_1;
    // 0x80228C84: nop

    after_1:
    // 0x80228C88: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228C8C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228C90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228C94: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80228C98:
    // 0x80228C98: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228C9C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228CA0: bne         $v0, $zero, L_80228CC4
    if (ctx->r2 != 0) {
        // 0x80228CA4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80228CC4;
    }
    // 0x80228CA4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228CA8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228CAC: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80228CB0: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228CB4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228CB8: jal         0x802296D8
    // 0x80228CBC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802296D8_ovl29(rdram, ctx);
        goto after_2;
    // 0x80228CBC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80228CC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228CC4:
    // 0x80228CC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228CC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228CCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228CD0: jr          $ra
    // 0x80228CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EB30_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EB34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EB38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EB3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EB40: jal         0x80071A70
    // 0x8022EB44: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x8022EB44: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    after_0:
    // 0x8022EB48: beq         $v0, $zero, L_8022EB64
    if (ctx->r2 == 0) {
        // 0x8022EB4C: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_8022EB64;
    }
    // 0x8022EB4C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022EB50: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    // 0x8022EB54: jal         0x80071A70
    // 0x8022EB58: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x8022EB58: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    after_1:
    // 0x8022EB5C: bne         $v0, $zero, L_8022EB74
    if (ctx->r2 != 0) {
        // 0x8022EB60: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022EB74;
    }
    // 0x8022EB60: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022EB64:
    // 0x8022EB64: jal         0x8004F62C
    // 0x8022EB68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_2;
    // 0x8022EB68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022EB6C: j           L_8022EC00
    // 0x8022EB70: nop

        goto L_8022EC00;
    // 0x8022EB70: nop

L_8022EB74:
    // 0x8022EB74: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022EB78: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EB7C: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x8022EB80: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022EB84: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022EB88: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022EB8C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022EB90: lbu         $v1, 0x1751($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1751);
    // 0x8022EB94: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EB98: sb          $v1, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r3;
    // 0x8022EB9C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022EBA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EBA4: lbu         $v1, 0x178B($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X178B);
    // 0x8022EBA8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EBAC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EBB0: sb          $v1, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r3;
    // 0x8022EBB4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022EBB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EBBC: lbu         $v1, 0x17C5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X17C5);
    // 0x8022EBC0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022EBC4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EBC8: sb          $v1, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r3;
    // 0x8022EBCC: lbu         $v1, 0x10($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10);
    // 0x8022EBD0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EBD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EBD8: lbu         $v0, 0x17FF($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X17FF);
    // 0x8022EBDC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022EBE0: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x8022EBE4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EBE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EBEC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022EBF0: lbu         $v1, 0x1839($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1839);
    // 0x8022EBF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EBF8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022EBFC: sb          $v1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r3;
L_8022EC00:
    // 0x8022EC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC08: jr          $ra
    // 0x8022EC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E9D8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E9DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E9E0: jal         0x8022EA78
    // 0x8022E9E4: nop

    func_8022EA78_ovl29(rdram, ctx);
        goto after_0;
    // 0x8022E9E4: nop

    after_0:
    // 0x8022E9E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E9EC: beq         $v0, $zero, L_8022EA58
    if (ctx->r2 == 0) {
        // 0x8022E9F0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022EA58;
    }
    // 0x8022E9F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E9F4: jal         0x8006033C
    // 0x8022E9F8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022E9F8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_1:
    // 0x8022E9FC: bne         $v0, $zero, L_8022EA48
    if (ctx->r2 != 0) {
        // 0x8022EA00: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022EA48;
    }
    // 0x8022EA00: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EA04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EA08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EA0C: jal         0x800610AC
    // 0x8022EA10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022EA10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8022EA14: jal         0x8006036C
    // 0x8022EA18: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8022EA18: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    after_3:
    // 0x8022EA1C: jal         0x8006036C
    // 0x8022EA20: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022EA20: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    after_4:
    // 0x8022EA24: jal         0x8006036C
    // 0x8022EA28: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8022EA28: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    after_5:
    // 0x8022EA2C: jal         0x8006036C
    // 0x8022EA30: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022EA30: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_6:
    // 0x8022EA34: jal         0x8006036C
    // 0x8022EA38: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8022EA38: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_7:
    // 0x8022EA3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EA40: j           L_8022EA6C
    // 0x8022EA44: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
        goto L_8022EA6C;
    // 0x8022EA44: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
L_8022EA48:
    // 0x8022EA48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EA4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EA50: j           L_8022EA64
    // 0x8022EA54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_8022EA64;
    // 0x8022EA54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_8022EA58:
    // 0x8022EA58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EA5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EA60: addiu       $a3, $zero, 0x22
    ctx->r7 = ADD32(0, 0X22);
L_8022EA64:
    // 0x8022EA64: jal         0x800610AC
    // 0x8022EA68: nop

    func_800610AC_3C4AC(rdram, ctx);
        goto after_8;
    // 0x8022EA68: nop

    after_8:
L_8022EA6C:
    // 0x8022EA6C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA70: jr          $ra
    // 0x8022EA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257A0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257B4: bne         $v0, $zero, L_80225808
    if (ctx->r2 != 0) {
        // 0x802257B8: nop
    
            goto L_80225808;
    }
    // 0x802257B8: nop

    // 0x802257BC: jal         0x8006033C
    // 0x802257C0: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802257C0: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_0:
    // 0x802257C4: bne         $v0, $zero, L_802257F4
    if (ctx->r2 != 0) {
        // 0x802257C8: nop
    
            goto L_802257F4;
    }
    // 0x802257C8: nop

    // 0x802257CC: jal         0x8006033C
    // 0x802257D0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802257D0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_1:
    // 0x802257D4: beq         $v0, $zero, L_802257F4
    if (ctx->r2 == 0) {
        // 0x802257D8: nop
    
            goto L_802257F4;
    }
    // 0x802257D8: nop

    // 0x802257DC: jal         0x80060690
    // 0x802257E0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x802257E0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_2:
    // 0x802257E4: jal         0x8006036C
    // 0x802257E8: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802257E8: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_3:
    // 0x802257EC: j           L_80225804
    // 0x802257F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225804;
    // 0x802257F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802257F4:
    // 0x802257F4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257F8: jal         0x800607C4
    // 0x802257FC: addiu       $a0, $a0, 0x424
    ctx->r4 = ADD32(ctx->r4, 0X424);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_4;
    // 0x802257FC: addiu       $a0, $a0, 0x424
    ctx->r4 = ADD32(ctx->r4, 0X424);
    after_4:
    // 0x80225800: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225804:
    // 0x80225804: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225808:
    // 0x80225808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022580C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225810: jr          $ra
    // 0x80225814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802253D8: jal         0x80060798
    // 0x802253DC: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x802253DC: nop

    after_0:
    // 0x802253E0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802253E4: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x802253E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802253EC: addiu       $v0, $v0, 0x5AC
    ctx->r2 = ADD32(ctx->r2, 0X5AC);
    // 0x802253F0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253F4: addiu       $a0, $a0, 0x5A4
    ctx->r4 = ADD32(ctx->r4, 0X5A4);
    // 0x802253F8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802253FC: jal         0x8006100C
    // 0x80225400: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x80225400: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x80225404: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225408: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x8022540C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225410: jr          $ra
    // 0x80225414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ACF8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ACFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AD0C: bne         $v0, $zero, L_8022AD28
    if (ctx->r2 != 0) {
        // 0x8022AD10: addiu       $a1, $zero, 0x1B
        ctx->r5 = ADD32(0, 0X1B);
            goto L_8022AD28;
    }
    // 0x8022AD10: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x8022AD14: jal         0x80050294
    // 0x8022AD18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022AD18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022AD1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AD20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AD24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AD28:
    // 0x8022AD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD30: jr          $ra
    // 0x8022AD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AD38: nop

    // 0x8022AD3C: nop

;}
RECOMP_FUNC void func_8022F040_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F04C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F050: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F058: beq         $v1, $v0, L_8022F0C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022F05C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F0C0;
    }
    // 0x8022F05C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F060: beql        $v0, $zero, L_8022F078
    if (ctx->r2 == 0) {
        // 0x8022F064: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F078;
    }
    goto skip_0;
    // 0x8022F064: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F068: beq         $v1, $zero, L_8022F088
    if (ctx->r3 == 0) {
        // 0x8022F06C: nop
    
            goto L_8022F088;
    }
    // 0x8022F06C: nop

    // 0x8022F070: j           L_8022F184
    // 0x8022F074: nop

        goto L_8022F184;
    // 0x8022F074: nop

L_8022F078:
    // 0x8022F078: beq         $v1, $v0, L_8022F0F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022F07C: nop
    
            goto L_8022F0F8;
    }
    // 0x8022F07C: nop

    // 0x8022F080: j           L_8022F184
    // 0x8022F084: nop

        goto L_8022F184;
    // 0x8022F084: nop

L_8022F088:
    // 0x8022F088: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F08C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F090: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022F094: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022F098: jal         0x8006033C
    // 0x8022F09C: lw          $a0, 0x18B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022F09C: lw          $a0, 0x18B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18B0);
    after_0:
    // 0x8022F0A0: beq         $v0, $zero, L_8022F184
    if (ctx->r2 == 0) {
        // 0x8022F0A4: nop
    
            goto L_8022F184;
    }
    // 0x8022F0A4: nop

    // 0x8022F0A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F0AC: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x8022F0B0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022F0B4: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022F0B8: j           L_8022F0E8
    // 0x8022F0BC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
        goto L_8022F0E8;
    // 0x8022F0BC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_8022F0C0:
    // 0x8022F0C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F0C4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F0C8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F0CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F0D0: bne         $v0, $zero, L_8022F184
    if (ctx->r2 != 0) {
        // 0x8022F0D4: nop
    
            goto L_8022F184;
    }
    // 0x8022F0D4: nop

    // 0x8022F0D8: jal         0x80036E48
    // 0x8022F0DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x8022F0DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8022F0E0: jal         0x80036B58
    // 0x8022F0E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_2;
    // 0x8022F0E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
L_8022F0E8:
    // 0x8022F0E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F0EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F0F0: j           L_8022F184
    // 0x8022F0F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022F184;
    // 0x8022F0F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F0F8:
    // 0x8022F0F8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F0FC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022F100: bne         $v0, $zero, L_8022F184
    if (ctx->r2 != 0) {
        // 0x8022F104: nop
    
            goto L_8022F184;
    }
    // 0x8022F104: nop

    // 0x8022F108: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022F10C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022F110: bne         $v0, $zero, L_8022F184
    if (ctx->r2 != 0) {
        // 0x8022F114: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F184;
    }
    // 0x8022F114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F118: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F11C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022F120: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022F124: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F128: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022F12C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F130: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022F134: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F138: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022F13C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F140: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022F144: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F148: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022F14C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F150: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022F154: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F158: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022F15C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F160: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022F164: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F168: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022F16C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022F170: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F174: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F178: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x8022F17C: jal         0x8004F62C
    // 0x8022F180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_3;
    // 0x8022F180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022F184:
    // 0x8022F184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F188: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F18C: jr          $ra
    // 0x8022F190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F194: nop

    // 0x8022F198: nop

    // 0x8022F19C: nop

;}
RECOMP_FUNC void func_8022E390_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E394: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E398: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E39C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022E3A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E3A4: jal         0x8003E6BC
    // 0x8022E3A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022E3A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E3AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022E3B0: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022E3B4: jal         0x8003E6BC
    // 0x8022E3B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022E3B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022E3BC: bne         $s0, $v0, L_8022E3E4
    if (ctx->r16 != ctx->r2) {
        // 0x8022E3C0: nop
    
            goto L_8022E3E4;
    }
    // 0x8022E3C0: nop

    // 0x8022E3C4: jal         0x8006033C
    // 0x8022E3C8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022E3C8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022E3CC: beq         $v0, $zero, L_8022E3E4
    if (ctx->r2 == 0) {
        // 0x8022E3D0: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022E3E4;
    }
    // 0x8022E3D0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022E3D4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E3D8: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x8022E3DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E3E0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022E3E4:
    // 0x8022E3E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E3E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E3EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3F0: jr          $ra
    // 0x8022E3F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E3F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225AF8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B08: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B0C: bne         $v0, $zero, L_80225BC0
    if (ctx->r2 != 0) {
        // 0x80225B10: nop
    
            goto L_80225BC0;
    }
    // 0x80225B10: nop

    // 0x80225B14: jal         0x8006033C
    // 0x80225B18: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225B18: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_0:
    // 0x80225B1C: beq         $v0, $zero, L_80225B4C
    if (ctx->r2 == 0) {
        // 0x80225B20: nop
    
            goto L_80225B4C;
    }
    // 0x80225B20: nop

    // 0x80225B24: jal         0x8006036C
    // 0x80225B28: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225B28: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    after_1:
    // 0x80225B2C: jal         0x8006036C
    // 0x80225B30: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225B30: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x80225B34: jal         0x8006036C
    // 0x80225B38: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225B38: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x80225B3C: jal         0x8006036C
    // 0x80225B40: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225B40: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    after_4:
    // 0x80225B44: j           L_80225BC0
    // 0x80225B48: nop

        goto L_80225BC0;
    // 0x80225B48: nop

L_80225B4C:
    // 0x80225B4C: jal         0x8006033C
    // 0x80225B50: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225B50: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    after_5:
    // 0x80225B54: bne         $v0, $zero, L_80225B90
    if (ctx->r2 != 0) {
        // 0x80225B58: nop
    
            goto L_80225B90;
    }
    // 0x80225B58: nop

    // 0x80225B5C: jal         0x8006033C
    // 0x80225B60: addiu       $a0, $zero, 0x22C
    ctx->r4 = ADD32(0, 0X22C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225B60: addiu       $a0, $zero, 0x22C
    ctx->r4 = ADD32(0, 0X22C);
    after_6:
    // 0x80225B64: beq         $v0, $zero, L_80225BC0
    if (ctx->r2 == 0) {
        // 0x80225B68: nop
    
            goto L_80225BC0;
    }
    // 0x80225B68: nop

    // 0x80225B6C: jal         0x8006033C
    // 0x80225B70: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80225B70: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_7:
    // 0x80225B74: bne         $v0, $zero, L_80225BC0
    if (ctx->r2 != 0) {
        // 0x80225B78: nop
    
            goto L_80225BC0;
    }
    // 0x80225B78: nop

    // 0x80225B7C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225B80: jal         0x8005FB30
    // 0x80225B84: addiu       $a0, $a0, 0x478
    ctx->r4 = ADD32(ctx->r4, 0X478);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_8;
    // 0x80225B84: addiu       $a0, $a0, 0x478
    ctx->r4 = ADD32(ctx->r4, 0X478);
    after_8:
    // 0x80225B88: j           L_80225BC0
    // 0x80225B8C: nop

        goto L_80225BC0;
    // 0x80225B8C: nop

L_80225B90:
    // 0x80225B90: jal         0x8006033C
    // 0x80225B94: addiu       $a0, $zero, 0x22C
    ctx->r4 = ADD32(0, 0X22C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80225B94: addiu       $a0, $zero, 0x22C
    ctx->r4 = ADD32(0, 0X22C);
    after_9:
    // 0x80225B98: beq         $v0, $zero, L_80225BC0
    if (ctx->r2 == 0) {
        // 0x80225B9C: nop
    
            goto L_80225BC0;
    }
    // 0x80225B9C: nop

    // 0x80225BA0: jal         0x8006033C
    // 0x80225BA4: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x80225BA4: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_10:
    // 0x80225BA8: bne         $v0, $zero, L_80225BC0
    if (ctx->r2 != 0) {
        // 0x80225BAC: nop
    
            goto L_80225BC0;
    }
    // 0x80225BAC: nop

    // 0x80225BB0: jal         0x80060690
    // 0x80225BB4: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    func_80060690_3BA90(rdram, ctx);
        goto after_11;
    // 0x80225BB4: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_11:
    // 0x80225BB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225BBC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BC0:
    // 0x80225BC0: jal         0x8006036C
    // 0x80225BC4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x80225BC4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_12:
    // 0x80225BC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BD4: jr          $ra
    // 0x80225BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
