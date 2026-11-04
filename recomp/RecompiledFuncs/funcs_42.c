#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80230760_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230760: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80230764: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230768: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023076C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80230770: bne         $v0, $zero, L_80230784
    if (ctx->r2 != 0) {
        // 0x80230774: nop
    
            goto L_80230784;
    }
    // 0x80230774: nop

    // 0x80230778: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023077C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230780: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230784:
    // 0x80230784: jr          $ra
    // 0x80230788: nop

    TRACE_RETURN()
    return;
    // 0x80230788: nop

;}
RECOMP_FUNC void func_80236378_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236378: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8023637C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80236380: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80236384: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x80236388: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023638C: jr          $ra
    // 0x80236390: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80236390: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_802319CC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802319D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802319D4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802319D8: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x802319DC: jal         0x8004DD04
    // 0x802319E0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x802319E0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802319E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802319E8: jr          $ra
    // 0x802319EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802319EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236370_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236370: jr          $ra
    // 0x80236374: nop

    TRACE_RETURN()
    return;
    // 0x80236374: nop

;}
RECOMP_FUNC void func_8022BAAC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BAB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BAB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BAB8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022BABC: jal         0x8004EFE4
    // 0x8022BAC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022BAC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022BAC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BAC8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022BACC: beq         $v1, $zero, L_8022BB24
    if (ctx->r3 == 0) {
        // 0x8022BAD0: sw          $v1, 0x514($s0)
        MEM_W(0X514, ctx->r16) = ctx->r3;
            goto L_8022BB24;
    }
    // 0x8022BAD0: sw          $v1, 0x514($s0)
    MEM_W(0X514, ctx->r16) = ctx->r3;
    // 0x8022BAD4: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022BAD8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022BADC: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x8022BAE0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BAE4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022BAE8: lw          $v0, 0x514($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X514);
    // 0x8022BAEC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022BAF0: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x8022BAF4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022BAF8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8022BAFC: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x8022BB00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BB04: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022BB08: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x8022BB0C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BB10: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022BB14: lw          $v1, 0x514($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X514);
    // 0x8022BB18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BB1C: j           L_8022BB2C
    // 0x8022BB20: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
        goto L_8022BB2C;
    // 0x8022BB20: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8022BB24:
    // 0x8022BB24: jal         0x8004F488
    // 0x8022BB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x8022BB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022BB2C:
    // 0x8022BB2C: jal         0x8004EFE4
    // 0x8022BB30: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8022BB30: nop

    after_2:
    // 0x8022BB34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BB38: beq         $v1, $zero, L_8022BB9C
    if (ctx->r3 == 0) {
        // 0x8022BB3C: sw          $v1, 0x38($s1)
        MEM_W(0X38, ctx->r17) = ctx->r3;
            goto L_8022BB9C;
    }
    // 0x8022BB3C: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x8022BB40: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022BB44: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022BB48: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022BB4C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BB50: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022BB54: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022BB58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022BB5C: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x8022BB60: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022BB64: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022BB68: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8022BB6C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022BB70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BB74: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022BB78: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BB7C: beq         $v0, $zero, L_8022BB90
    if (ctx->r2 == 0) {
        // 0x8022BB80: nop
    
            goto L_8022BB90;
    }
    // 0x8022BB80: nop

    // 0x8022BB84: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022BB88: j           L_8022BBB0
    // 0x8022BB8C: sb          $a0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r4;
        goto L_8022BBB0;
    // 0x8022BB8C: sb          $a0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r4;
L_8022BB90:
    // 0x8022BB90: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022BB94: j           L_8022BBB0
    // 0x8022BB98: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
        goto L_8022BBB0;
    // 0x8022BB98: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
L_8022BB9C:
    // 0x8022BB9C: jal         0x8004F488
    // 0x8022BBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x8022BBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BBA4: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x8022BBA8: jal         0x8004F4F8
    // 0x8022BBAC: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x8022BBAC: nop

    after_4:
L_8022BBB0:
    // 0x8022BBB0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BBB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BBB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BBBC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BBC0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BBC4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022BBC8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BBCC: jal         0x8004D5D4
    // 0x8022BBD0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_5;
    // 0x8022BBD0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022BBD4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BBD8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BBDC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BBE0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BBE4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022BBE8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022BBEC: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8022BBF0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8022BBF4: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x8022BBF8: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x8022BBFC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BC00: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8022BC04: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8022BC08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BC0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC10: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BC14: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022BC18: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022BC1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC20: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x8022BC24: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x8022BC28: jal         0x800540BC
    // 0x8022BC2C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_6;
    // 0x8022BC2C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_6:
    // 0x8022BC30: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BC34: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8022BC38: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8022BC3C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BC40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC44: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BC48: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022BC4C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022BC50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC54: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022BC58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BC60: addiu       $v0, $v0, -0x1570
    ctx->r2 = ADD32(ctx->r2, -0X1570);
    // 0x8022BC64: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022BC68: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BC6C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022BC70: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022BC74: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022BC78: jal         0x8003E934
    // 0x8022BC7C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x8022BC7C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_7:
    // 0x8022BC80: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BC84: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BC88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC8C: beq         $v1, $zero, L_8022BCE4
    if (ctx->r3 == 0) {
        // 0x8022BC90: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022BCE4;
    }
    // 0x8022BC90: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BC94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BC9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BCA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BCA4: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022BCA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BCAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BCB0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BCB4: jal         0x80050294
    // 0x8022BCB8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x8022BCB8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_8:
    // 0x8022BCBC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022BCC0: ori         $v0, $v0, 0x3050
    ctx->r2 = ctx->r2 | 0X3050;
    // 0x8022BCC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BCCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BCD0: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    // 0x8022BCD4: jal         0x8004A00C
    // 0x8022BCD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_9;
    // 0x8022BCD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022BCDC: j           L_8022BD0C
    // 0x8022BCE0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
        goto L_8022BD0C;
    // 0x8022BCE0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022BCE4:
    // 0x8022BCE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BCEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BCF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BCF4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BCF8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022BCFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BD00: jal         0x80050294
    // 0x8022BD04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022BD04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_10:
    // 0x8022BD08: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022BD0C:
    // 0x8022BD0C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BD10: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BD14: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BD18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD1C: jr          $ra
    // 0x8022BD20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BD20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C5BC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C5C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C5C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C5C8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022C5CC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022C5D0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C5D4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C5D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C5DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C5E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C5E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C5E8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C5EC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022C5F0: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022C5F4: beq         $v1, $zero, L_8022C610
    if (ctx->r3 == 0) {
        // 0x8022C5F8: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_8022C610;
    }
    // 0x8022C5F8: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022C5FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C600: beq         $v1, $v0, L_8022C62C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C604: nop
    
            goto L_8022C62C;
    }
    // 0x8022C604: nop

    // 0x8022C608: j           L_8022C850
    // 0x8022C60C: nop

        goto L_8022C850;
    // 0x8022C60C: nop

L_8022C610:
    // 0x8022C610: lhu         $v0, 0x4E6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E6);
    // 0x8022C614: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C618: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022C61C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022C620: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x8022C624: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
    // 0x8022C628: sh          $v0, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = ctx->r2;
L_8022C62C:
    // 0x8022C62C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022C630: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C634: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022C638: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C63C: bltz        $v0, L_8022C668
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C640: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022C668;
    }
    // 0x8022C640: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022C644: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8022C648: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C64C: bne         $v0, $zero, L_8022C668
    if (ctx->r2 != 0) {
        // 0x8022C650: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_8022C668;
    }
    // 0x8022C650: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x8022C654: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022C658: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x8022C65C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C660: bne         $v0, $zero, L_8022C678
    if (ctx->r2 != 0) {
        // 0x8022C664: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C678;
    }
    // 0x8022C664: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022C668:
    // 0x8022C668: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022C66C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C670: j           L_8022C850
    // 0x8022C674: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_8022C850;
    // 0x8022C674: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022C678:
    // 0x8022C678: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8022C67C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C680: jal         0x8004DA90
    // 0x8022C684: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C684: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022C688: jal         0x80040F30
    // 0x8022C68C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022C68C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022C690: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C694: jal         0x8003E934
    // 0x8022C698: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C698: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022C69C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C6A0: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x8022C6A4: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022C6A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C6AC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022C6B0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C6B4: bltz        $v0, L_8022C6CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C6B8: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C6CC;
    }
    // 0x8022C6B8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C6BC: beq         $v0, $zero, L_8022C6E0
    if (ctx->r2 == 0) {
        // 0x8022C6C0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022C6E0;
    }
    // 0x8022C6C0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C6C4: j           L_8022C720
    // 0x8022C6C8: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
        goto L_8022C720;
    // 0x8022C6C8: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
L_8022C6CC:
    // 0x8022C6CC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C6D0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C6D4: bne         $v0, $zero, L_8022C720
    if (ctx->r2 != 0) {
        // 0x8022C6D8: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_8022C720;
    }
    // 0x8022C6D8: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
    // 0x8022C6DC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022C6E0:
    // 0x8022C6E0: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022C6E4: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022C6E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C6EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C6F0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022C6F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C6F8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022C6FC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022C700: jal         0x8009A3B4
    // 0x8022C704: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C704: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022C708: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022C70C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022C710: jal         0x8009A3B4
    // 0x8022C714: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C714: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022C718: j           L_8022C77C
    // 0x8022C71C: nop

        goto L_8022C77C;
    // 0x8022C71C: nop

L_8022C720:
    // 0x8022C720: beq         $v0, $zero, L_8022C738
    if (ctx->r2 == 0) {
        // 0x8022C724: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C738;
    }
    // 0x8022C724: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C728: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022C72C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022C730: j           L_8022C770
    // 0x8022C734: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022C770;
    // 0x8022C734: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C738:
    // 0x8022C738: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
    // 0x8022C73C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8022C740: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x8022C744: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022C748: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x8022C74C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022C750: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C754: jal         0x8004FC28
    // 0x8022C758: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FC28_2B028(rdram, ctx);
        goto after_5;
    // 0x8022C758: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022C75C: beq         $v0, $zero, L_8022C788
    if (ctx->r2 == 0) {
        // 0x8022C760: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C788;
    }
    // 0x8022C760: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C764: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022C768: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022C76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C770:
    // 0x8022C770: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022C774: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022C778: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
L_8022C77C:
    // 0x8022C77C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022C780: j           L_8022C850
    // 0x8022C784: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
        goto L_8022C850;
    // 0x8022C784: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
L_8022C788:
    // 0x8022C788: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x8022C78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C790: bne         $v1, $v0, L_8022C850
    if (ctx->r3 != ctx->r2) {
        // 0x8022C794: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022C850;
    }
    // 0x8022C794: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022C798: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8022C79C: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8022C7A0: addiu       $s5, $zero, 0x42
    ctx->r21 = ADD32(0, 0X42);
    // 0x8022C7A4: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022C7A8: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8022C7AC: addiu       $s2, $s2, -0x14C8
    ctx->r18 = ADD32(ctx->r18, -0X14C8);
L_8022C7B0:
    // 0x8022C7B0: jal         0x8004F144
    // 0x8022C7B4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x8022C7B4: nop

    after_6:
    // 0x8022C7B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C7BC: beq         $s0, $zero, L_8022C81C
    if (ctx->r16 == 0) {
        // 0x8022C7C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C81C;
    }
    // 0x8022C7C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C7C4: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x8022C7C8: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x8022C7CC: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x8022C7D0: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x8022C7D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C7D8: jal         0x8004DA90
    // 0x8022C7DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022C7DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022C7E0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022C7E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022C7E8: jal         0x8009A3B4
    // 0x8022C7EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022C7EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022C7F0: jal         0x8003E934
    // 0x8022C7F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x8022C7F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8022C7F8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C7FC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022C800: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C804: jal         0x8009A3B4
    // 0x8022C808: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022C808: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_10:
    // 0x8022C80C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022C810: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022C814: jal         0x8009A3B4
    // 0x8022C818: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022C818: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
L_8022C81C:
    // 0x8022C81C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022C820: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x8022C824: bne         $v0, $zero, L_8022C7B0
    if (ctx->r2 != 0) {
        // 0x8022C828: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8022C7B0;
    }
    // 0x8022C828: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x8022C82C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8022C830: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022C834: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022C838: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022C83C: jal         0x8003491C
    // 0x8022C840: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_12;
    // 0x8022C840: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022C844: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    // 0x8022C848: jal         0x8002A33C
    // 0x8022C84C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x8022C84C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_13:
L_8022C850:
    // 0x8022C850: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022C854: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022C858: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022C85C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C860: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C864: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C868: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C86C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C870: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C874: jr          $ra
    // 0x8022C878: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022C878: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228F40_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228F44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228F50: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80228F54: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x80228F58: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80228F5C: lw          $a2, 0x54($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X54);
    // 0x80228F60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228F64: lw          $a3, 0x58($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X58);
    // 0x80228F68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228F6C: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80228F70: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x80228F74: sw          $a1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r5;
    // 0x80228F78: sw          $a2, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r6;
    // 0x80228F7C: sw          $a3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r7;
    // 0x80228F80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228F84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228F88: lw          $v0, -0x1720($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1720);
    // 0x80228F8C: jalr        $v0
    // 0x80228F90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228F90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228F94: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80228F98: lw          $a0, -0x3A2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A2C);
    // 0x80228F9C: jal         0x80048694
    // 0x80228FA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80048694_23A94(rdram, ctx);
        goto after_1;
    // 0x80228FA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228FA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228FAC: jr          $ra
    // 0x80228FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228FB4: nop

    // 0x80228FB8: nop

    // 0x80228FBC: nop

;}
RECOMP_FUNC void func_8023B95C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B95C: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8023B960: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023B964: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8023B968: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8023B96C: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8023B970: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8023B974: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023B978: bgez        $v1, L_8023B9B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023B97C: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8023B9B8;
    }
    // 0x8023B97C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023B980: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B984: bne         $v1, $v0, L_8023B9A4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B988: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8023B9A4;
    }
    // 0x8023B988: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8023B98C: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8023B990: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023B994: bne         $v1, $v0, L_8023B9C4
    if (ctx->r3 != ctx->r2) {
        // 0x8023B998: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023B9C4;
    }
    // 0x8023B998: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B99C: j           L_8023B9E8
    // 0x8023B9A0: nop

        goto L_8023B9E8;
    // 0x8023B9A0: nop

L_8023B9A4:
    // 0x8023B9A4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8023B9A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B9AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B9B0: j           L_8023B9C4
    // 0x8023B9B4: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8023B9C4;
    // 0x8023B9B4: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_8023B9B8:
    // 0x8023B9B8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8023B9BC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023B9C0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8023B9C4:
    // 0x8023B9C4: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023B9C8: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8023B9CC: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8023B9D0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023B9D4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8023B9D8: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8023B9DC: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8023B9E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023B9E4: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_8023B9E8:
    // 0x8023B9E8: jr          $ra
    // 0x8023B9EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023B9EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80231A20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231A24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231A28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231A30: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A34: bne         $v0, $zero, L_80231A58
    if (ctx->r2 != 0) {
        // 0x80231A38: addiu       $v0, $zero, 0x1C
        ctx->r2 = ADD32(0, 0X1C);
            goto L_80231A58;
    }
    // 0x80231A38: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80231A3C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80231A40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231A44: jal         0x80050294
    // 0x80231A48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231A48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231A4C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231A58:
    // 0x80231A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231A5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231A60: jr          $ra
    // 0x80231A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A480_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A484: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A488: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022A48C: beq         $v0, $zero, L_8022A4A4
    if (ctx->r2 == 0) {
        // 0x8022A490: nop
    
            goto L_8022A4A4;
    }
    // 0x8022A490: nop

    // 0x8022A494: jal         0x8022A65C
    // 0x8022A498: nop

    func_8022A65C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8022A498: nop

    after_0:
    // 0x8022A49C: j           L_8022A4AC
    // 0x8022A4A0: nop

        goto L_8022A4AC;
    // 0x8022A4A0: nop

L_8022A4A4:
    // 0x8022A4A4: jal         0x8022A4B8
    // 0x8022A4A8: nop

    func_8022A4B8_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022A4A8: nop

    after_1:
L_8022A4AC:
    // 0x8022A4AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4B0: jr          $ra
    // 0x8022A4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236790_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023679C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802367A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802367A4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802367A8: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x802367AC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802367B0: jal         0x8002C654
    // 0x802367B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x802367B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802367B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802367BC: jal         0x8004D5D4
    // 0x802367C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802367C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x802367C4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802367C8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802367CC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802367D0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802367D4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802367D8: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x802367DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802367E0: addiu       $s1, $s0, 0x2C
    ctx->r17 = ADD32(ctx->r16, 0X2C);
    // 0x802367E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802367E8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802367EC: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x802367F0: beq         $v1, $zero, L_80236800
    if (ctx->r3 == 0) {
        // 0x802367F4: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80236800;
    }
    // 0x802367F4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802367F8: j           L_80236804
    // 0x802367FC: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
        goto L_80236804;
    // 0x802367FC: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_80236800:
    // 0x80236800: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
L_80236804:
    // 0x80236804: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80236808: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x8023680C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236810: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x80236814: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80236818: jal         0x80236834
    // 0x8023681C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_80236834_ovl2(rdram, ctx);
        goto after_2;
    // 0x8023681C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_2:
    // 0x80236820: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236824: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236828: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023682C: jr          $ra
    // 0x80236830: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236830: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AC00_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AC04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AC08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023AC0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AC10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AC14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AC18: lw          $v0, -0x720($at)
    ctx->r2 = MEM_W(ctx->r1, -0X720);
    // 0x8023AC1C: jalr        $v0
    // 0x8023AC20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023AC20: nop

    after_0:
    // 0x8023AC24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AC28: jr          $ra
    // 0x8023AC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233078_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233078: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023307C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233080: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233084: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80233088: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023308C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80233090: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80233094: jal         0x80040F30
    // 0x80233098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80233098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023309C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802330A0: beq         $s2, $zero, L_80233210
    if (ctx->r18 == 0) {
        // 0x802330A4: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_80233210;
    }
    // 0x802330A4: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x802330A8: beq         $v0, $zero, L_802331A8
    if (ctx->r2 == 0) {
        // 0x802330AC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_802331A8;
    }
    // 0x802330AC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802330B0: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x802330B4: bltzl       $v0, L_802330D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802330B8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802330D0;
    }
    goto skip_0;
    // 0x802330B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x802330BC: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x802330C0: bnel        $v0, $zero, L_802330E0
    if (ctx->r2 != 0) {
        // 0x802330C4: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_802330E0;
    }
    goto skip_1;
    // 0x802330C4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x802330C8: j           L_802330FC
    // 0x802330CC: nop

        goto L_802330FC;
    // 0x802330CC: nop

L_802330D0:
    // 0x802330D0: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x802330D4: beq         $v0, $zero, L_802330FC
    if (ctx->r2 == 0) {
        // 0x802330D8: nop
    
            goto L_802330FC;
    }
    // 0x802330D8: nop

    // 0x802330DC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_802330E0:
    // 0x802330E0: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x802330E4: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x802330E8: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x802330EC: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x802330F0: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x802330F4: j           L_8023313C
    // 0x802330F8: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_8023313C;
    // 0x802330F8: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_802330FC:
    // 0x802330FC: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x80233100: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80233104: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233108: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023310C: bltzl       $v0, L_80233114
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233110: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80233114;
    }
    goto skip_2;
    // 0x80233110: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80233114:
    // 0x80233114: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80233118: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8023311C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80233120: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x80233124: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233128: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023312C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233130: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80233134: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80233138: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_8023313C:
    // 0x8023313C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80233140: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80233144: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80233148: bne         $v1, $v0, L_802331C8
    if (ctx->r3 != ctx->r2) {
        // 0x8023314C: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_802331C8;
    }
    // 0x8023314C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80233150: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80233154: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233158: bne         $v1, $v0, L_802331C8
    if (ctx->r3 != ctx->r2) {
        // 0x8023315C: nop
    
            goto L_802331C8;
    }
    // 0x8023315C: nop

    // 0x80233160: jal         0x8004F568
    // 0x80233164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x80233164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80233168: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x8023316C: jal         0x8002A33C
    // 0x80233170: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233170: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80233174: jal         0x8004F144
    // 0x80233178: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80233178: nop

    after_3:
    // 0x8023317C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80233180: beq         $s0, $zero, L_80233194
    if (ctx->r16 == 0) {
        // 0x80233184: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233194;
    }
    // 0x80233184: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233188: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x8023318C: jal         0x8009A3B4
    // 0x80233190: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233190: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_80233194:
    // 0x80233194: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233198: jal         0x8023336C
    // 0x8023319C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8023336C_ovl2(rdram, ctx);
        goto after_5;
    // 0x8023319C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802331A0: j           L_80233208
    // 0x802331A4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_80233208;
    // 0x802331A4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_802331A8:
    // 0x802331A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802331AC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802331B0: bne         $v1, $v0, L_802331C8
    if (ctx->r3 != ctx->r2) {
        // 0x802331B4: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_802331C8;
    }
    // 0x802331B4: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x802331B8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802331BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802331C0: beq         $v1, $v0, L_802331D0
    if (ctx->r3 == ctx->r2) {
        // 0x802331C4: nop
    
            goto L_802331D0;
    }
    // 0x802331C4: nop

L_802331C8:
    // 0x802331C8: jal         0x8002A33C
    // 0x802331CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802331CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_802331D0:
    // 0x802331D0: jal         0x8004F144
    // 0x802331D4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x802331D4: nop

    after_7:
    // 0x802331D8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802331DC: beq         $s0, $zero, L_80233204
    if (ctx->r16 == 0) {
        // 0x802331E0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233204;
    }
    // 0x802331E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802331E4: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x802331E8: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x802331EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802331F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802331F4: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x802331F8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802331FC: jal         0x8009A3B4
    // 0x80233200: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80233200: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_80233204:
    // 0x80233204: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80233208:
    // 0x80233208: jal         0x80040834
    // 0x8023320C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x8023320C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_80233210:
    // 0x80233210: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x80233214: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80233218: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023321C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233220: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233224: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233228: jr          $ra
    // 0x8023322C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023322C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802303B8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802303BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802303C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802303C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802303C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802303CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802303D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802303D4: addu        $at, $at, $v0
    gpr jr_addend_802303DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802303D8: lw          $v0, -0x1148($at)
    ctx->r2 = ADD32(ctx->r1, -0X1148);
    // 0x802303DC: jr          $v0
    // 0x802303E0: nop

    switch (jr_addend_802303DC >> 2) {
        case 0: goto L_8023041C; break;
        case 1: goto L_80230454; break;
        default: switch_error(__func__, 0x802303DC, 0x8023EEB8);
    }
    // 0x802303E0: nop

L_802303E4:
    // 0x802303E4: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802303E8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802303EC: xori        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 ^ 0X3;
    // 0x802303F0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802303F4: xori        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 ^ 0XB;
    // 0x802303F8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802303FC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230400: beq         $v1, $zero, L_80230468
    if (ctx->r3 == 0) {
        // 0x80230404: addiu       $a0, $zero, 0x91
        ctx->r4 = ADD32(0, 0X91);
            goto L_80230468;
    }
    // 0x80230404: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    // 0x80230408: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023040C: jal         0x8002A2F8
    // 0x80230410: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80230410: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80230414: j           L_80230468
    // 0x80230418: nop

        goto L_80230468;
    // 0x80230418: nop

L_8023041C:
    // 0x8023041C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230420: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80230424: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230428: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023042C: jal         0x80050294
    // 0x80230430: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80230430: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230434: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230438: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023043C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230440: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230444: lw          $v1, -0x3A28($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A28);
    // 0x80230448: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023044C: j           L_802303E4
    // 0x80230450: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
        goto L_802303E4;
    // 0x80230450: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80230454:
    // 0x80230454: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80230458: lui         $v1, 0xFFE0
    ctx->r3 = S32(0XFFE0 << 16);
    // 0x8023045C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230460: j           L_802303E4
    // 0x80230464: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
        goto L_802303E4;
    // 0x80230464: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_80230468:
    // 0x80230468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023046C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230470: jr          $ra
    // 0x80230474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B88_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B88: jr          $ra
    // 0x80226B8C: nop

    TRACE_RETURN()
    return;
    // 0x80226B8C: nop

;}
RECOMP_FUNC void func_8022CD84_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CD88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022CD8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CD90: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CD94: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022CD98: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CD9C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022CDA0: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x8022CDA4: beq         $v1, $zero, L_8022CDC0
    if (ctx->r3 == 0) {
        // 0x8022CDA8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022CDC0;
    }
    // 0x8022CDA8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022CDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CDB0: beq         $v1, $v0, L_8022CF2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CDB4: nop
    
            goto L_8022CF2C;
    }
    // 0x8022CDB4: nop

    // 0x8022CDB8: j           L_8022CF94
    // 0x8022CDBC: nop

        goto L_8022CF94;
    // 0x8022CDBC: nop

L_8022CDC0:
    // 0x8022CDC0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022CDC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CDC8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CDCC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CDD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CDD4: slti        $v0, $a1, 0x801
    ctx->r2 = SIGNED(ctx->r5) < 0X801 ? 1 : 0;
    // 0x8022CDD8: bne         $v0, $zero, L_8022CE40
    if (ctx->r2 != 0) {
        // 0x8022CDDC: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022CE40;
    }
    // 0x8022CDDC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022CDE0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022CDE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CDE8: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022CDEC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8022CDF0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022CDF4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CDF8: jal         0x8004FAEC
    // 0x8022CDFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8022CDFC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022CE00: bne         $v0, $zero, L_8022CEA0
    if (ctx->r2 != 0) {
        // 0x8022CE04: nop
    
            goto L_8022CEA0;
    }
    // 0x8022CE04: nop

    // 0x8022CE08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CE0C: lhu         $v0, -0x1520($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1520);
    // 0x8022CE10: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CE14: lhu         $v1, -0x1524($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1524);
    // 0x8022CE18: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022CE1C: lhu         $a0, -0x151E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X151E);
    // 0x8022CE20: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8022CE24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE28: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022CE2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CE30: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CE34: lhu         $v0, -0x1522($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1522);
    // 0x8022CE38: j           L_8022CED4
    // 0x8022CE3C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
        goto L_8022CED4;
    // 0x8022CE3C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_8022CE40:
    // 0x8022CE40: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022CE44: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CE48: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022CE4C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8022CE50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022CE54: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CE58: jal         0x8004FAEC
    // 0x8022CE5C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022CE5C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022CE60: beq         $v0, $zero, L_8022CEA0
    if (ctx->r2 == 0) {
        // 0x8022CE64: nop
    
            goto L_8022CEA0;
    }
    // 0x8022CE64: nop

    // 0x8022CE68: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CE6C: lhu         $v0, -0x1520($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1520);
    // 0x8022CE70: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CE74: lhu         $v1, -0x1524($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1524);
    // 0x8022CE78: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022CE7C: lhu         $a0, -0x151E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X151E);
    // 0x8022CE80: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8022CE84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE88: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022CE8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CE90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CE94: lhu         $v0, -0x1522($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1522);
    // 0x8022CE98: j           L_8022CED4
    // 0x8022CE9C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
        goto L_8022CED4;
    // 0x8022CE9C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_8022CEA0:
    // 0x8022CEA0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CEA4: lhu         $v0, -0x1544($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1544);
    // 0x8022CEA8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CEAC: lhu         $v1, -0x1548($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1548);
    // 0x8022CEB0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022CEB4: lhu         $a0, -0x1542($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X1542);
    // 0x8022CEB8: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8022CEBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CEC0: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022CEC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CEC8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CECC: lhu         $v0, -0x1546($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1546);
    // 0x8022CED0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_8022CED4:
    // 0x8022CED4: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022CED8: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x8022CEDC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CEE0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8022CEE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CEE8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CEEC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022CEF0: jal         0x8004F820
    // 0x8022CEF4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022CEF4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022CEF8: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x8022CEFC: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8022CF00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CF04: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CF08: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CF0C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8022CF10: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022CF14: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8022CF18: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022CF1C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CF20: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022CF24: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022CF28: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022CF2C:
    // 0x8022CF2C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CF30: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x8022CF34: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022CF38: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CF3C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CF40: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022CF44: beq         $v1, $zero, L_8022CF58
    if (ctx->r3 == 0) {
        // 0x8022CF48: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_8022CF58;
    }
    // 0x8022CF48: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022CF4C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x8022CF50: jal         0x8002A33C
    // 0x8022CF54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022CF54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8022CF58:
    // 0x8022CF58: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022CF5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CF60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022CF64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CF68: bgtz        $v0, L_8022CF94
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022CF6C: nop
    
            goto L_8022CF94;
    }
    // 0x8022CF6C: nop

    // 0x8022CF70: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8022CF74: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x8022CF78: bne         $v0, $zero, L_8022CF84
    if (ctx->r2 != 0) {
        // 0x8022CF7C: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_8022CF84;
    }
    // 0x8022CF7C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022CF80: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_8022CF84:
    // 0x8022CF84: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022CF88: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CF8C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CF90: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CF94:
    // 0x8022CF94: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022CF98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022CF9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022CFA0: jr          $ra
    // 0x8022CFA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CFA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80239D20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239D20: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80239D24: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80239D28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239D2C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80239D30: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80239D34: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80239D38: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80239D3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239D40: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80239D44: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80239D48: lh          $a1, 0x34($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X34);
    // 0x80239D4C: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x80239D50: addiu       $a0, $a0, -0x147A
    ctx->r4 = ADD32(ctx->r4, -0X147A);
    // 0x80239D54: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x80239D58: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80239D5C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239D60: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80239D64: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80239D68: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80239D6C: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
    // 0x80239D70: bgez        $v0, L_80239D88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80239D74: sh          $a0, 0x2C($s0)
        MEM_H(0X2C, ctx->r16) = ctx->r4;
            goto L_80239D88;
    }
    // 0x80239D74: sh          $a0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r4;
    // 0x80239D78: jal         0x8004F5C4
    // 0x80239D7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239D7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80239D80: j           L_80239E24
    // 0x80239D84: nop

        goto L_80239E24;
    // 0x80239D84: nop

L_80239D88:
    // 0x80239D88: jal         0x80032498
    // 0x80239D8C: nop

    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80239D8C: nop

    after_1:
    // 0x80239D90: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80239D94: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80239D98: mflo        $v0
    ctx->r2 = lo;
    // 0x80239D9C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80239DA0: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80239DA4: jal         0x800324B4
    // 0x80239DA8: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80239DA8: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    after_2:
    // 0x80239DAC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80239DB0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80239DB4: mflo        $v0
    ctx->r2 = lo;
    // 0x80239DB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80239DBC: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80239DC0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80239DC4: jal         0x8002C654
    // 0x80239DC8: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80239DC8: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_3:
    // 0x80239DCC: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x80239DD0: jal         0x800319B4
    // 0x80239DD4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80239DD4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80239DD8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80239DDC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80239DE0: jal         0x80031270
    // 0x80239DE4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_5;
    // 0x80239DE4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x80239DE8: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80239DEC: lhu         $v1, 0x38($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X38);
    // 0x80239DF0: lhu         $v0, 0x1C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1C);
    // 0x80239DF4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80239DF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239DFC: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80239E00: lhu         $v0, 0x1E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1E);
    // 0x80239E04: lhu         $v1, 0x3A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3A);
    // 0x80239E08: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80239E0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239E10: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80239E14: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x80239E18: lhu         $v1, 0x3C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3C);
    // 0x80239E1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239E20: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80239E24:
    // 0x80239E24: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80239E28: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80239E2C: jr          $ra
    // 0x80239E30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80239E30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802308BC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802308C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802308C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802308C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802308CC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802308D0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802308D4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802308D8: bne         $v1, $v0, L_802308FC
    if (ctx->r3 != ctx->r2) {
        // 0x802308DC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802308FC;
    }
    // 0x802308DC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802308E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802308E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802308E8: jal         0x80050294
    // 0x802308EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802308EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802308F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802308F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802308F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802308FC:
    // 0x802308FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230904: jr          $ra
    // 0x80230908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231C20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231C2C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80231C30: addiu       $a2, $a2, 0xF4
    ctx->r6 = ADD32(ctx->r6, 0XF4);
    // 0x80231C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231C38: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80231C3C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231C40: lw          $a0, 0xF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XF0);
    // 0x80231C44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231C48: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80231C4C: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80231C50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231C54: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231C58: bne         $v0, $v1, L_80231CB4
    if (ctx->r2 != ctx->r3) {
        // 0x80231C5C: addiu       $v1, $a0, 0x4
        ctx->r3 = ADD32(ctx->r4, 0X4);
            goto L_80231CB4;
    }
    // 0x80231C5C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80231C60: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231C64: sw          $v1, 0xF0($at)
    MEM_W(0XF0, ctx->r1) = ctx->r3;
    // 0x80231C68: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x80231C6C: bgtz        $v0, L_80231C80
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231C70: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80231C80;
    }
    // 0x80231C70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231C74: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231C7C: sw          $v0, 0xF0($at)
    MEM_W(0XF0, ctx->r1) = ctx->r2;
L_80231C80:
    // 0x80231C80: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231C84: lw          $v0, 0xF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XF0);
    // 0x80231C88: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80231C8C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80231C90: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80231C94: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231C98: jal         0x8003B85C
    // 0x80231C9C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80231C9C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80231CA0: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80231CA4: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80231CA8: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80231CAC: jal         0x8003B840
    // 0x80231CB0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80231CB0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80231CB4:
    // 0x80231CB4: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80231CB8: addiu       $a2, $a2, 0xFC
    ctx->r6 = ADD32(ctx->r6, 0XFC);
    // 0x80231CBC: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80231CC0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231CC4: lw          $a0, 0xF8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XF8);
    // 0x80231CC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231CCC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80231CD0: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80231CD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231CD8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231CDC: bne         $v0, $v1, L_80231D38
    if (ctx->r2 != ctx->r3) {
        // 0x80231CE0: addiu       $v1, $a0, 0x4
        ctx->r3 = ADD32(ctx->r4, 0X4);
            goto L_80231D38;
    }
    // 0x80231CE0: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80231CE4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231CE8: sw          $v1, 0xF8($at)
    MEM_W(0XF8, ctx->r1) = ctx->r3;
    // 0x80231CEC: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x80231CF0: bgtz        $v0, L_80231D04
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231CF4: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80231D04;
    }
    // 0x80231CF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231CF8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80231CFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231D00: sw          $v0, 0xF8($at)
    MEM_W(0XF8, ctx->r1) = ctx->r2;
L_80231D04:
    // 0x80231D04: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231D08: lw          $v0, 0xF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XF8);
    // 0x80231D0C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80231D10: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80231D14: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80231D18: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231D1C: jal         0x8003B85C
    // 0x80231D20: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80231D20: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80231D24: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80231D28: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80231D2C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80231D30: jal         0x8003B840
    // 0x80231D34: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80231D34: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80231D38:
    // 0x80231D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231D3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231D40: jr          $ra
    // 0x80231D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BAC8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023BACC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BAD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023BAD8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023BADC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023BAE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BAE4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023BAE8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023BAEC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023BAF0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023BAF4: beq         $v1, $zero, L_8023BB14
    if (ctx->r3 == 0) {
        // 0x8023BAF8: nop
    
            goto L_8023BB14;
    }
    // 0x8023BAF8: nop

    // 0x8023BAFC: jal         0x8023BEE4
    // 0x8023BB00: nop

    func_8023BEE4_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023BB00: nop

    after_0:
    // 0x8023BB04: beq         $v0, $zero, L_8023BB14
    if (ctx->r2 == 0) {
        // 0x8023BB08: nop
    
            goto L_8023BB14;
    }
    // 0x8023BB08: nop

    // 0x8023BB0C: jal         0x8004F62C
    // 0x8023BB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8023BB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023BB14:
    // 0x8023BB14: jal         0x8023BB2C
    // 0x8023BB18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023BB2C_ovl2(rdram, ctx);
        goto after_2;
    // 0x8023BB18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023BB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023BB20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BB24: jr          $ra
    // 0x8023BB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023BB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231D48_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231D4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231D50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231D54: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231D58: lw          $a0, 0x100($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X100);
    // 0x80231D5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231D60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231D64: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80231D68: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80231D6C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80231D70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231D74: beq         $v1, $v0, L_80231E00
    if (ctx->r3 == ctx->r2) {
        // 0x80231D78: nop
    
            goto L_80231E00;
    }
    // 0x80231D78: nop

    // 0x80231D7C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80231D80: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231D84: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80231D88: bne         $v1, $v0, L_80231E00
    if (ctx->r3 != ctx->r2) {
        // 0x80231D8C: nop
    
            goto L_80231E00;
    }
    // 0x80231D8C: nop

    // 0x80231D90: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80231D94: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231D98: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x80231D9C: bne         $v1, $v0, L_80231E00
    if (ctx->r3 != ctx->r2) {
        // 0x80231DA0: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80231E00;
    }
    // 0x80231DA0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80231DA4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80231DA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231DAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231DB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231DB4: lw          $v0, -0xE68($at)
    ctx->r2 = MEM_W(ctx->r1, -0XE68);
    // 0x80231DB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231DBC: sh          $zero, 0xF4($at)
    MEM_H(0XF4, ctx->r1) = 0;
    // 0x80231DC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231DC4: sw          $v0, 0xF0($at)
    MEM_W(0XF0, ctx->r1) = ctx->r2;
    // 0x80231DC8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80231DCC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231DD0: jal         0x8003B85C
    // 0x80231DD4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80231DD4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80231DD8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80231DDC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80231DE0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80231DE4: jal         0x8003B840
    // 0x80231DE8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80231DE8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80231DEC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231DF0: lw          $v0, 0x100($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X100);
    // 0x80231DF4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80231DF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231DFC: sw          $v0, 0x100($at)
    MEM_W(0X100, ctx->r1) = ctx->r2;
L_80231E00:
    // 0x80231E00: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231E04: lw          $a0, 0x104($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X104);
    // 0x80231E08: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80231E0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231E10: beq         $v1, $v0, L_80231E94
    if (ctx->r3 == ctx->r2) {
        // 0x80231E14: nop
    
            goto L_80231E94;
    }
    // 0x80231E14: nop

    // 0x80231E18: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80231E1C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80231E20: bne         $v1, $v0, L_80231E94
    if (ctx->r3 != ctx->r2) {
        // 0x80231E24: nop
    
            goto L_80231E94;
    }
    // 0x80231E24: nop

    // 0x80231E28: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80231E2C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80231E30: bne         $v1, $v0, L_80231E94
    if (ctx->r3 != ctx->r2) {
        // 0x80231E34: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80231E94;
    }
    // 0x80231E34: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80231E38: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80231E3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231E40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231E48: lw          $v0, -0xE5C($at)
    ctx->r2 = MEM_W(ctx->r1, -0XE5C);
    // 0x80231E4C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E50: sh          $zero, 0xFC($at)
    MEM_H(0XFC, ctx->r1) = 0;
    // 0x80231E54: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E58: sw          $v0, 0xF8($at)
    MEM_W(0XF8, ctx->r1) = ctx->r2;
    // 0x80231E5C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80231E60: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231E64: jal         0x8003B85C
    // 0x80231E68: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80231E68: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80231E6C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80231E70: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80231E74: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80231E78: jal         0x8003B840
    // 0x80231E7C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80231E7C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80231E80: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231E84: lw          $v0, 0x104($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X104);
    // 0x80231E88: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80231E8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E90: sw          $v0, 0x104($at)
    MEM_W(0X104, ctx->r1) = ctx->r2;
L_80231E94:
    // 0x80231E94: jal         0x80231C20
    // 0x80231E98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231C20_ovl2(rdram, ctx);
        goto after_4;
    // 0x80231E98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231E9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231EA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231EA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231EA8: jr          $ra
    // 0x80231EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239B44_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239B48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239B4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239B54: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80239B58: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239B5C: bne         $v0, $zero, L_80239C40
    if (ctx->r2 != 0) {
        // 0x80239B60: nop
    
            goto L_80239C40;
    }
    // 0x80239B60: nop

    // 0x80239B64: jal         0x8004F144
    // 0x80239B68: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80239B68: nop

    after_0:
    // 0x80239B6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80239B70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239B74: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80239B78: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80239B7C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80239B80: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80239B84: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80239B88: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80239B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239B90: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80239B94: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80239B98: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80239B9C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80239BA0: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80239BA4: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x80239BA8: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80239BAC: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x80239BB0: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80239BB4: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80239BB8: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80239BBC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80239BC0: bne         $v1, $v0, L_80239BDC
    if (ctx->r3 != ctx->r2) {
        // 0x80239BC4: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_80239BDC;
    }
    // 0x80239BC4: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80239BC8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80239BCC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80239BD0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80239BD4: j           L_80239C0C
    // 0x80239BD8: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
        goto L_80239C0C;
    // 0x80239BD8: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
L_80239BDC:
    // 0x80239BDC: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80239BE0: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80239BE4: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80239BE8: lui         $v1, 0xAE00
    ctx->r3 = S32(0XAE00 << 16);
    // 0x80239BEC: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80239BF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239BF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239BF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239BFC: lw          $v0, -0x790($at)
    ctx->r2 = MEM_W(ctx->r1, -0X790);
    // 0x80239C00: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80239C04: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80239C08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80239C0C:
    // 0x80239C0C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80239C10: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80239C14: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80239C18: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x80239C1C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80239C20: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x80239C24: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80239C28: bne         $v1, $zero, L_80239C38
    if (ctx->r3 != 0) {
        // 0x80239C2C: sh          $v0, 0x24($a0)
        MEM_H(0X24, ctx->r4) = ctx->r2;
            goto L_80239C38;
    }
    // 0x80239C2C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80239C30: j           L_80239C3C
    // 0x80239C34: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
        goto L_80239C3C;
    // 0x80239C34: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
L_80239C38:
    // 0x80239C38: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_80239C3C:
    // 0x80239C3C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_80239C40:
    // 0x80239C40: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80239C44: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x80239C48: bne         $v0, $zero, L_80239C60
    if (ctx->r2 != 0) {
        // 0x80239C4C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80239C60;
    }
    // 0x80239C4C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80239C50: jal         0x8004F5C4
    // 0x80239C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80239C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80239C58: j           L_80239C64
    // 0x80239C5C: nop

        goto L_80239C64;
    // 0x80239C5C: nop

L_80239C60:
    // 0x80239C60: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80239C64:
    // 0x80239C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239C68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239C6C: jr          $ra
    // 0x80239C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802316B8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802316BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802316C0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802316C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802316C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802316CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802316D0: lw          $v0, -0xEFC($at)
    ctx->r2 = MEM_W(ctx->r1, -0XEFC);
    // 0x802316D4: jalr        $v0
    // 0x802316D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802316D8: nop

    after_0:
    // 0x802316DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802316E0: jr          $ra
    // 0x802316E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802316E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802274D4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802274D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802274E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802274E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802274E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802274EC: beq         $v1, $zero, L_80227508
    if (ctx->r3 == 0) {
        // 0x802274F0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80227508;
    }
    // 0x802274F0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802274F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274F8: beq         $v1, $v0, L_80227518
    if (ctx->r3 == ctx->r2) {
        // 0x802274FC: nop
    
            goto L_80227518;
    }
    // 0x802274FC: nop

    // 0x80227500: j           L_80227640
    // 0x80227504: nop

        goto L_80227640;
    // 0x80227504: nop

L_80227508:
    // 0x80227508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022750C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227510: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227514: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80227518:
    // 0x80227518: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022751C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227520: bnel        $v1, $v0, L_80227538
    if (ctx->r3 != ctx->r2) {
        // 0x80227524: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227538;
    }
    goto skip_0;
    // 0x80227524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80227528: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022752C: jal         0x8002A33C
    // 0x80227530: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227530: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80227534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227538:
    // 0x80227538: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022753C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x80227540: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x80227544: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227548: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022754C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227550: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227554: jal         0x8004DA90
    // 0x80227558: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227558: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022755C: jal         0x80040F30
    // 0x80227560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80227560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227568: jal         0x8003E934
    // 0x8022756C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022756C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_3:
    // 0x80227570: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227574: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80227578: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022757C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227580: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227584: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80227588: bltz        $v0, L_802275A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022758C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802275A0;
    }
    // 0x8022758C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227590: beq         $v0, $zero, L_802275B0
    if (ctx->r2 == 0) {
        // 0x80227594: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802275B0;
    }
    // 0x80227594: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227598: j           L_802275F0
    // 0x8022759C: nop

        goto L_802275F0;
    // 0x8022759C: nop

L_802275A0:
    // 0x802275A0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802275A4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802275A8: bne         $v0, $zero, L_802275F0
    if (ctx->r2 != 0) {
        // 0x802275AC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802275F0;
    }
    // 0x802275AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802275B0:
    // 0x802275B0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802275B4: jal         0x8009A3B4
    // 0x802275B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802275B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802275BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802275C0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x802275C4: jal         0x8009A3B4
    // 0x802275C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802275C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802275CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802275D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802275D4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802275D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802275DC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802275E0: bne         $v0, $zero, L_80227618
    if (ctx->r2 != 0) {
        // 0x802275E4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227618;
    }
    // 0x802275E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802275E8: j           L_80227624
    // 0x802275EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227624;
    // 0x802275EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802275F0:
    // 0x802275F0: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x802275F4: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802275F8: beq         $v0, $zero, L_8022762C
    if (ctx->r2 == 0) {
        // 0x802275FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022762C;
    }
    // 0x802275FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227600: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227604: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227608: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022760C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80227610: beq         $v0, $zero, L_80227620
    if (ctx->r2 == 0) {
        // 0x80227614: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227620;
    }
    // 0x80227614: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80227618:
    // 0x80227618: j           L_80227640
    // 0x8022761C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80227640;
    // 0x8022761C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80227620:
    // 0x80227620: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227624:
    // 0x80227624: j           L_80227640
    // 0x80227628: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80227640;
    // 0x80227628: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022762C:
    // 0x8022762C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80227630: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80227634: beq         $v0, $zero, L_80227640
    if (ctx->r2 == 0) {
        // 0x80227638: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80227640;
    }
    // 0x80227638: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022763C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80227640:
    // 0x80227640: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227644: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022764C: jr          $ra
    // 0x80227650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231FE4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231FE4: jr          $ra
    // 0x80231FE8: nop

    TRACE_RETURN()
    return;
    // 0x80231FE8: nop

;}
RECOMP_FUNC void func_8023198C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023198C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231990: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231994: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80231998: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023199C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802319A0: bne         $v1, $v0, L_802319B4
    if (ctx->r3 != ctx->r2) {
        // 0x802319A4: addiu       $a1, $zero, -0x17
        ctx->r5 = ADD32(0, -0X17);
            goto L_802319B4;
    }
    // 0x802319A4: addiu       $a1, $zero, -0x17
    ctx->r5 = ADD32(0, -0X17);
    // 0x802319A8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802319AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802319B0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802319B4:
    // 0x802319B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802319B8: jal         0x8004DA90
    // 0x802319BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802319BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802319C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802319C4: jr          $ra
    // 0x802319C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802319C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023629C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023629C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802362A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802362A4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802362A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802362AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802362B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802362B4: lw          $v0, -0xB68($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB68);
    // 0x802362B8: jalr        $v0
    // 0x802362BC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802362BC: nop

    after_0:
    // 0x802362C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802362C4: jr          $ra
    // 0x802362C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802362C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802382A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802382A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802382A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802382A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802382AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802382B0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802382B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802382B8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802382BC: bne         $v1, $zero, L_802382DC
    if (ctx->r3 != 0) {
        // 0x802382C0: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_802382DC;
    }
    // 0x802382C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802382C4: jal         0x8002A46C
    // 0x802382C8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8002A46C_586C(rdram, ctx);
        goto after_0;
    // 0x802382C8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x802382CC: jal         0x8004F684
    // 0x802382D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x802382D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802382D4: j           L_80238314
    // 0x802382D8: nop

        goto L_80238314;
    // 0x802382D8: nop

L_802382DC:
    // 0x802382DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802382E0: bne         $v1, $v0, L_80238308
    if (ctx->r3 != ctx->r2) {
        // 0x802382E4: nop
    
            goto L_80238308;
    }
    // 0x802382E4: nop

    // 0x802382E8: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x802382EC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802382F0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802382F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802382F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802382FC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80238300: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80238304: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_80238308:
    // 0x80238308: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023830C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80238310: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80238314:
    // 0x80238314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023831C: jr          $ra
    // 0x80238320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023ABC0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ABC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023ABC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023ABC8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023ABCC: bne         $v0, $zero, L_8023ABE4
    if (ctx->r2 != 0) {
        // 0x8023ABD0: nop
    
            goto L_8023ABE4;
    }
    // 0x8023ABD0: nop

    // 0x8023ABD4: jal         0x8023A83C
    // 0x8023ABD8: nop

    func_8023A83C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023ABD8: nop

    after_0:
    // 0x8023ABDC: j           L_8023ABEC
    // 0x8023ABE0: nop

        goto L_8023ABEC;
    // 0x8023ABE0: nop

L_8023ABE4:
    // 0x8023ABE4: jal         0x8023A72C
    // 0x8023ABE8: nop

    func_8023A72C_ovl2(rdram, ctx);
        goto after_1;
    // 0x8023ABE8: nop

    after_1:
L_8023ABEC:
    // 0x8023ABEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023ABF0: jr          $ra
    // 0x8023ABF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023ABF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023ABF8: nop

    // 0x8023ABFC: nop

;}
RECOMP_FUNC void func_80232024_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232024: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80232028: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023202C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80232030: bne         $v1, $v0, L_80232044
    if (ctx->r3 != ctx->r2) {
        // 0x80232034: nop
    
            goto L_80232044;
    }
    // 0x80232034: nop

    // 0x80232038: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023203C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232040: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80232044:
    // 0x80232044: jr          $ra
    // 0x80232048: nop

    TRACE_RETURN()
    return;
    // 0x80232048: nop

;}
RECOMP_FUNC void func_80236670_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236670: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80236674: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80236678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023667C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80236680: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236684: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236688: bne         $v0, $v1, L_8023669C
    if (ctx->r2 != ctx->r3) {
        // 0x8023668C: nop
    
            goto L_8023669C;
    }
    // 0x8023668C: nop

    // 0x80236690: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236698: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8023669C:
    // 0x8023669C: lhu         $v0, 0x3C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3C);
    // 0x802366A0: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802366A4: jr          $ra
    // 0x802366A8: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802366A8: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80225460_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225464: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225468: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022546C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225470: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225474: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225478: bne         $v1, $v0, L_80225488
    if (ctx->r3 != ctx->r2) {
        // 0x8022547C: nop
    
            goto L_80225488;
    }
    // 0x8022547C: nop

    // 0x80225480: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225484: sb          $zero, 0x60($at)
    MEM_B(0X60, ctx->r1) = 0;
L_80225488:
    // 0x80225488: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022548C: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80225490: beq         $v0, $zero, L_80225570
    if (ctx->r2 == 0) {
        // 0x80225494: nop
    
            goto L_80225570;
    }
    // 0x80225494: nop

    // 0x80225498: jal         0x8004F144
    // 0x8022549C: lw          $s1, 0x24($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X24);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022549C: lw          $s1, 0x24($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X24);
    after_0:
    // 0x802254A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802254A4: beq         $s0, $zero, L_80225504
    if (ctx->r16 == 0) {
        // 0x802254A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225504;
    }
    // 0x802254A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254AC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802254B0: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x802254B4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802254B8: jal         0x800A3450
    // 0x802254BC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802254BC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_1:
    // 0x802254C0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802254C4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802254C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802254CC: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x802254D0: jal         0x800A3450
    // 0x802254D4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802254D4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_2:
    // 0x802254D8: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802254DC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802254E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802254E4: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x802254E8: jal         0x800A3450
    // 0x802254EC: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802254EC: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_3:
    // 0x802254F0: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x802254F4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802254F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802254FC: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x80225500: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_80225504:
    // 0x80225504: jal         0x8004F144
    // 0x80225508: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80225508: nop

    after_4:
    // 0x8022550C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80225510: beq         $s0, $zero, L_80225570
    if (ctx->r16 == 0) {
        // 0x80225514: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225570;
    }
    // 0x80225514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225518: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022551C: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80225520: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80225524: jal         0x800A3450
    // 0x80225528: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80225528: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_5:
    // 0x8022552C: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80225530: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80225534: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225538: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x8022553C: jal         0x800A3450
    // 0x80225540: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80225540: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_6:
    // 0x80225544: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80225548: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022554C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225550: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x80225554: jal         0x800A3450
    // 0x80225558: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80225558: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_7:
    // 0x8022555C: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80225560: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80225564: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225568: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x8022556C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_80225570:
    // 0x80225570: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225574: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022557C: jr          $ra
    // 0x80225580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802322CC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802322D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802322D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802322D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802322DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802322E0: bne         $v0, $zero, L_802322FC
    if (ctx->r2 != 0) {
        // 0x802322E4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802322FC;
    }
    // 0x802322E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802322E8: jal         0x80050294
    // 0x802322EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802322EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802322F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802322F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802322F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802322FC:
    // 0x802322FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232300: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232304: jr          $ra
    // 0x80232308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802375B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802375B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802375B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802375BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802375C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802375C4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802375C8: jal         0x8006033C
    // 0x802375CC: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802375CC: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x802375D0: bne         $v0, $zero, L_802376C0
    if (ctx->r2 != 0) {
        // 0x802375D4: nop
    
            goto L_802376C0;
    }
    // 0x802375D4: nop

    // 0x802375D8: jal         0x8006033C
    // 0x802375DC: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802375DC: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    after_1:
    // 0x802375E0: bne         $v0, $zero, L_802376C0
    if (ctx->r2 != 0) {
        // 0x802375E4: nop
    
            goto L_802376C0;
    }
    // 0x802375E4: nop

    // 0x802375E8: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x802375EC: beq         $v1, $zero, L_80237604
    if (ctx->r3 == 0) {
        // 0x802375F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237604;
    }
    // 0x802375F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802375F4: beq         $v1, $v0, L_80237678
    if (ctx->r3 == ctx->r2) {
        // 0x802375F8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237678;
    }
    // 0x802375F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802375FC: j           L_802376C0
    // 0x80237600: nop

        goto L_802376C0;
    // 0x80237600: nop

L_80237604:
    // 0x80237604: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237608: jal         0x80238028
    // 0x8023760C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x8023760C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237610: beq         $v0, $zero, L_80237670
    if (ctx->r2 == 0) {
        // 0x80237614: addiu       $v0, $zero, -0xC1
        ctx->r2 = ADD32(0, -0XC1);
            goto L_80237670;
    }
    // 0x80237614: addiu       $v0, $zero, -0xC1
    ctx->r2 = ADD32(0, -0XC1);
    // 0x80237618: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023761C: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x80237620: bnel        $v1, $v0, L_802376C0
    if (ctx->r3 != ctx->r2) {
        // 0x80237624: sh          $zero, 0xC($s0)
        MEM_H(0XC, ctx->r16) = 0;
            goto L_802376C0;
    }
    goto skip_0;
    // 0x80237624: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    skip_0:
    // 0x80237628: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x8023762C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237630: slti        $v0, $v0, 0x5A
    ctx->r2 = SIGNED(ctx->r2) < 0X5A ? 1 : 0;
    // 0x80237634: bnel        $v0, $zero, L_80237668
    if (ctx->r2 != 0) {
        // 0x80237638: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80237668;
    }
    goto skip_1;
    // 0x80237638: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x8023763C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237640: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237648: jal         0x800616FC
    // 0x8023764C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8023764C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80237650: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237654: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237658: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x8023765C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237660: j           L_802376A8
    // 0x80237664: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_802376A8;
    // 0x80237664: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80237668:
    // 0x80237668: j           L_802376C0
    // 0x8023766C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
        goto L_802376C0;
    // 0x8023766C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
L_80237670:
    // 0x80237670: j           L_802376C0
    // 0x80237674: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
        goto L_802376C0;
    // 0x80237674: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
L_80237678:
    // 0x80237678: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023767C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237680: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237684: bne         $v0, $zero, L_802376C0
    if (ctx->r2 != 0) {
        // 0x80237688: nop
    
            goto L_802376C0;
    }
    // 0x80237688: nop

    // 0x8023768C: jal         0x8006036C
    // 0x80237690: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80237690: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    after_4:
    // 0x80237694: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237698: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8023769C: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x802376A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802376A4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_802376A8:
    // 0x802376A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802376AC: jal         0x8004CB2C
    // 0x802376B0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x802376B0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_5:
    // 0x802376B4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802376B8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802376BC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_802376C0:
    // 0x802376C0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802376C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802376C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802376CC: jr          $ra
    // 0x802376D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802376D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235FBC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235FC0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235FC4: jal         0x8002C654
    // 0x80235FC8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80235FC8: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x80235FCC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235FD0: jr          $ra
    // 0x80235FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238178_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023817C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238180: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238188: jal         0x8006033C
    // 0x8023818C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023818C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_0:
    // 0x80238190: beq         $v0, $zero, L_802381D4
    if (ctx->r2 == 0) {
        // 0x80238194: addiu       $a0, $zero, 0x119
        ctx->r4 = ADD32(0, 0X119);
            goto L_802381D4;
    }
    // 0x80238194: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    // 0x80238198: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023819C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802381A0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802381A4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802381A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802381AC: jal         0x8002A33C
    // 0x802381B0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802381B0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_1:
    // 0x802381B4: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x802381B8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802381BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802381C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802381C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802381C8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802381CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802381D0: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_802381D4:
    // 0x802381D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802381D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802381DC: jr          $ra
    // 0x802381E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802381E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231ADC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231ADC: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80231AE0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80231AE4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80231AE8: bne         $v1, $v0, L_80231AFC
    if (ctx->r3 != ctx->r2) {
        // 0x80231AEC: nop
    
            goto L_80231AFC;
    }
    // 0x80231AEC: nop

    // 0x80231AF0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231AF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231AF8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80231AFC:
    // 0x80231AFC: jr          $ra
    // 0x80231B00: nop

    TRACE_RETURN()
    return;
    // 0x80231B00: nop

;}
RECOMP_FUNC void func_80236408_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236408: jr          $ra
    // 0x8023640C: nop

    TRACE_RETURN()
    return;
    // 0x8023640C: nop

;}
RECOMP_FUNC void func_80226BD4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BD4: jr          $ra
    // 0x80226BD8: nop

    TRACE_RETURN()
    return;
    // 0x80226BD8: nop

;}
RECOMP_FUNC void func_80238E88_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238E88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238E8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80238E90: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80238E94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80238E98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238EA0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80238EA4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80238EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238EAC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80238EB0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80238EB4: bne         $v0, $v1, L_80238FA8
    if (ctx->r2 != ctx->r3) {
        // 0x80238EB8: nop
    
            goto L_80238FA8;
    }
    // 0x80238EB8: nop

    // 0x80238EBC: jal         0x8004F144
    // 0x80238EC0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80238EC0: nop

    after_0:
    // 0x80238EC4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80238EC8: beq         $s1, $zero, L_80238FA8
    if (ctx->r17 == 0) {
        // 0x80238ECC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238FA8;
    }
    // 0x80238ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238ED0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80238ED4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80238ED8: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80238EDC: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80238EE0: jal         0x800A3450
    // 0x80238EE4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80238EE4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x80238EE8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80238EEC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80238EF0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80238EF4: jal         0x800A3450
    // 0x80238EF8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80238EF8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x80238EFC: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80238F00: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80238F04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238F08: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x80238F0C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80238F10: jal         0x800A3450
    // 0x80238F14: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80238F14: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80238F18: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80238F1C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80238F20: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80238F24: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80238F28: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x80238F2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238F30: jal         0x800A3450
    // 0x80238F34: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80238F34: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80238F38: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238F3C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80238F40: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80238F44: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80238F48: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x80238F4C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80238F50: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238F54: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238F58: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x80238F5C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80238F60: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80238F64: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80238F68: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x80238F6C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x80238F70: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80238F74: blez        $v0, L_80238F98
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80238F78: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80238F98;
    }
    // 0x80238F78: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80238F7C:
    // 0x80238F7C: jal         0x80238DB0
    // 0x80238F80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80238DB0_ovl2(rdram, ctx);
        goto after_5;
    // 0x80238F80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80238F84: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80238F88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80238F8C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80238F90: bne         $v0, $zero, L_80238F7C
    if (ctx->r2 != 0) {
        // 0x80238F94: nop
    
            goto L_80238F7C;
    }
    // 0x80238F94: nop

L_80238F98:
    // 0x80238F98: jal         0x800A3450
    // 0x80238F9C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80238F9C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x80238FA0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238FA4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80238FA8:
    // 0x80238FA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80238FAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238FB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238FB8: jr          $ra
    // 0x80238FBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238FBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231BA8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231BAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231BB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231BBC: bnel        $v0, $zero, L_80231C00
    if (ctx->r2 != 0) {
        // 0x80231BC0: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80231C00;
    }
    goto skip_0;
    // 0x80231BC0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80231BC4: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x80231BC8: lui         $v0, 0x1F4
    ctx->r2 = S32(0X1F4 << 16);
    // 0x80231BCC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80231BD0: lui         $v0, 0xE5EA
    ctx->r2 = S32(0XE5EA << 16);
    // 0x80231BD4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80231BD8: lui         $v0, 0xFB2C
    ctx->r2 = S32(0XFB2C << 16);
    // 0x80231BDC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80231BE0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80231BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231BE8: jal         0x80050294
    // 0x80231BEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231BEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231BF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231BF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231BFC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80231C00:
    // 0x80231C00: jal         0x8004DD04
    // 0x80231C04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80231C04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80231C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C10: jr          $ra
    // 0x80231C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231C18: nop

    // 0x80231C1C: nop

;}
RECOMP_FUNC void func_8022B5C0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B5C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B5C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B5CC: jal         0x8004F144
    // 0x8022B5D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022B5D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022B5D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B5D8: beq         $v1, $zero, L_8022B614
    if (ctx->r3 == 0) {
        // 0x8022B5DC: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022B614;
    }
    // 0x8022B5DC: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022B5E0: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x8022B5E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B5E8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B5EC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B5F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B5F4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B5F8: jal         0x8009A3B4
    // 0x8022B5FC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B5FC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x8022B600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B604: jal         0x8007A1B8
    // 0x8022B608: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022B608: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022B60C: jal         0x8004F418
    // 0x8022B610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022B610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022B614:
    // 0x8022B614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B618: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B61C: jr          $ra
    // 0x8022B620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE28_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EE2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EE30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EE34: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022EE38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022EE3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EE40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE44: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EE48: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022EE4C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022EE50: beq         $v1, $zero, L_8022EE6C
    if (ctx->r3 == 0) {
        // 0x8022EE54: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_8022EE6C;
    }
    // 0x8022EE54: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022EE58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE5C: beq         $v1, $v0, L_8022EE84
    if (ctx->r3 == ctx->r2) {
        // 0x8022EE60: nop
    
            goto L_8022EE84;
    }
    // 0x8022EE60: nop

    // 0x8022EE64: j           L_8022F0A4
    // 0x8022EE68: nop

        goto L_8022F0A4;
    // 0x8022EE68: nop

L_8022EE6C:
    // 0x8022EE6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE70: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022EE74: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EE78: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022EE7C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022EE80: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
L_8022EE84:
    // 0x8022EE84: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022EE88: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022EE8C: bne         $v0, $zero, L_8022EEAC
    if (ctx->r2 != 0) {
        // 0x8022EE90: nop
    
            goto L_8022EEAC;
    }
    // 0x8022EE90: nop

    // 0x8022EE94: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022EE98: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022EE9C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022EEA0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022EEA4: j           L_8022F0A4
    // 0x8022EEA8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_8022F0A4;
    // 0x8022EEA8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022EEAC:
    // 0x8022EEAC: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x8022EEB0: bne         $v0, $zero, L_8022EFA4
    if (ctx->r2 != 0) {
        // 0x8022EEB4: lui         $v0, 0x1F
        ctx->r2 = S32(0X1F << 16);
            goto L_8022EFA4;
    }
    // 0x8022EEB4: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x8022EEB8: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022EEBC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022EEC0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EEC4: bne         $v0, $zero, L_8022EFA4
    if (ctx->r2 != 0) {
        // 0x8022EEC8: nop
    
            goto L_8022EFA4;
    }
    // 0x8022EEC8: nop

    // 0x8022EECC: jal         0x8004EFE4
    // 0x8022EED0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022EED0: nop

    after_0:
    // 0x8022EED4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022EED8: beq         $s0, $zero, L_8022EF4C
    if (ctx->r16 == 0) {
        // 0x8022EEDC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EF4C;
    }
    // 0x8022EEDC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EEE0: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022EEE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EEE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EEEC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022EEF0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022EEF4: jal         0x8009A3B4
    // 0x8022EEF8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EEF8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EEFC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022EF00: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022EF04: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x8022EF08: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022EF0C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022EF10: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022EF14: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EF18: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022EF1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EF20: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EF24: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022EF28: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022EF2C: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022EF30: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022EF34: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022EF38: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x8022EF3C: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x8022EF40: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EF44: jal         0x8002A33C
    // 0x8022EF48: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022EF48: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_2:
L_8022EF4C:
    // 0x8022EF4C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022EF50: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022EF54: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022EF58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EF60: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022EF64: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022EF68: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x8022EF6C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022EF70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EF74: lbu         $v0, 0xB($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XB);
    // 0x8022EF78: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8022EF7C: beq         $v0, $zero, L_8022EF94
    if (ctx->r2 == 0) {
        // 0x8022EF80: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022EF94;
    }
    // 0x8022EF80: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022EF84: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022EF88: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022EF8C: j           L_8022EFD4
    // 0x8022EF90: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
        goto L_8022EFD4;
    // 0x8022EF90: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
L_8022EF94:
    // 0x8022EF94: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022EF98: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022EF9C: j           L_8022EFD4
    // 0x8022EFA0: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
        goto L_8022EFD4;
    // 0x8022EFA0: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
L_8022EFA4:
    // 0x8022EFA4: lh          $v0, 0x36($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X36);
    // 0x8022EFA8: bne         $v0, $zero, L_8022EFD8
    if (ctx->r2 != 0) {
        // 0x8022EFAC: addiu       $s2, $s1, 0x14
        ctx->r18 = ADD32(ctx->r17, 0X14);
            goto L_8022EFD8;
    }
    // 0x8022EFAC: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022EFB0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022EFB4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022EFB8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022EFBC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EFC0: bne         $v0, $zero, L_8022EFDC
    if (ctx->r2 != 0) {
        // 0x8022EFC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022EFDC;
    }
    // 0x8022EFC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EFC8: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022EFCC: j           L_8022F044
    // 0x8022EFD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022F044;
    // 0x8022EFD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022EFD4:
    // 0x8022EFD4: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
L_8022EFD8:
    // 0x8022EFD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022EFDC:
    // 0x8022EFDC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022EFE0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022EFE4: jal         0x8004F820
    // 0x8022EFE8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022EFE8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x8022EFEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EFF0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022EFF4: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EFF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EFFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F000: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8022F004: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F008: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F00C: jal         0x8004DA90
    // 0x8022F010: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022F010: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_4:
    // 0x8022F014: jal         0x80040F30
    // 0x8022F018: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022F018: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022F01C: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x8022F020: beq         $v1, $zero, L_8022F034
    if (ctx->r3 == 0) {
        // 0x8022F024: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_8022F034;
    }
    // 0x8022F024: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022F028: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x8022F02C: jal         0x8002A33C
    // 0x8022F030: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022F030: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_8022F034:
    // 0x8022F034: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
    // 0x8022F038: beq         $v0, $zero, L_8022F054
    if (ctx->r2 == 0) {
        // 0x8022F03C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022F054;
    }
    // 0x8022F03C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022F040: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
L_8022F044:
    // 0x8022F044: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022F048: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022F04C: j           L_8022F0A4
    // 0x8022F050: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
        goto L_8022F0A4;
    // 0x8022F050: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
L_8022F054:
    // 0x8022F054: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x8022F058: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022F05C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022F060: bltz        $v0, L_8022F078
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F064: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022F078;
    }
    // 0x8022F064: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022F068: beq         $v0, $zero, L_8022F088
    if (ctx->r2 == 0) {
        // 0x8022F06C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022F088;
    }
    // 0x8022F06C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022F070: j           L_8022F0A4
    // 0x8022F074: nop

        goto L_8022F0A4;
    // 0x8022F074: nop

L_8022F078:
    // 0x8022F078: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022F07C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022F080: bne         $v0, $zero, L_8022F0A4
    if (ctx->r2 != 0) {
        // 0x8022F084: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022F0A4;
    }
    // 0x8022F084: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022F088:
    // 0x8022F088: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022F08C: jal         0x8009A3B4
    // 0x8022F090: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022F090: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022F094: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022F098: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022F09C: jal         0x8009A3B4
    // 0x8022F0A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022F0A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
L_8022F0A4:
    // 0x8022F0A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F0A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F0AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F0B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F0B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F0B8: jr          $ra
    // 0x8022F0BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F0BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236108_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236108: lh          $v1, 0x3A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X3A);
    // 0x8023610C: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x80236110: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80236114: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80236118: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023611C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236120: sw          $v1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r3;
    // 0x80236124: jr          $ra
    // 0x80236128: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80236128: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8022B774_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B774: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022B778: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x8022B77C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8022B780: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022B784: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022B788: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022B78C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8022B790: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8022B794: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8022B798: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8022B79C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022B7A0: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8022B7A4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8022B7A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022B7AC: bgez        $v0, L_8022B7C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B7B0: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_8022B7C0;
    }
    // 0x8022B7B0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x8022B7B4: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x8022B7B8: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x8022B7BC: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_8022B7C0:
    // 0x8022B7C0: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8022B7C4: jal         0x8002C654
    // 0x8022B7C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022B7C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B7CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B7D0: jal         0x800319B4
    // 0x8022B7D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022B7D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7DC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022B7E0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022B7E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8022B7E8: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x8022B7EC: sh          $s2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r18;
    // 0x8022B7F0: sh          $s4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r20;
    // 0x8022B7F4: jal         0x80031270
    // 0x8022B7F8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x8022B7F8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022B7FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022B800: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B804: jal         0x8009A3B4
    // 0x8022B808: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022B808: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022B80C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8022B810: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8022B814: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8022B818: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8022B81C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022B820: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8022B824: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8022B828: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022B82C: jr          $ra
    // 0x8022B830: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022B830: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80236F18_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236F18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236F1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236F20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236F24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236F28: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80236F2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236F30: jal         0x8006033C
    // 0x80236F34: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236F34: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x80236F38: bne         $v0, $zero, L_80236FB4
    if (ctx->r2 != 0) {
        // 0x80236F3C: nop
    
            goto L_80236FB4;
    }
    // 0x80236F3C: nop

    // 0x80236F40: jal         0x8006033C
    // 0x80236F44: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80236F44: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    after_1:
    // 0x80236F48: bne         $v0, $zero, L_80236FB4
    if (ctx->r2 != 0) {
        // 0x80236F4C: nop
    
            goto L_80236FB4;
    }
    // 0x80236F4C: nop

    // 0x80236F50: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80236F54: beq         $v1, $zero, L_80236F6C
    if (ctx->r3 == 0) {
        // 0x80236F58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236F6C;
    }
    // 0x80236F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236F5C: beq         $v1, $v0, L_80236F98
    if (ctx->r3 == ctx->r2) {
        // 0x80236F60: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80236F98;
    }
    // 0x80236F60: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236F64: j           L_80236FB4
    // 0x80236F68: nop

        goto L_80236FB4;
    // 0x80236F68: nop

L_80236F6C:
    // 0x80236F6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236F70: jal         0x80238028
    // 0x80236F74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80236F74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236F78: beq         $v0, $zero, L_80236FB4
    if (ctx->r2 == 0) {
        // 0x80236F7C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80236FB4;
    }
    // 0x80236F7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80236F80: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80236F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236F88: jal         0x800616FC
    // 0x80236F8C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80236F8C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80236F90: j           L_80236FB4
    // 0x80236F94: nop

        goto L_80236FB4;
    // 0x80236F94: nop

L_80236F98:
    // 0x80236F98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236F9C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236FA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236FA4: bne         $v0, $zero, L_80236FB4
    if (ctx->r2 != 0) {
        // 0x80236FA8: nop
    
            goto L_80236FB4;
    }
    // 0x80236FA8: nop

    // 0x80236FAC: jal         0x8006036C
    // 0x80236FB0: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80236FB0: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    after_4:
L_80236FB4:
    // 0x80236FB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236FB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236FBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236FC0: jr          $ra
    // 0x80236FC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236FC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802338BC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802338C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802338C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802338C8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802338CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802338D0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802338D4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802338D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802338DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802338E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802338E4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802338E8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802338EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802338F0: beq         $v1, $v0, L_80233A44
    if (ctx->r3 == ctx->r2) {
        // 0x802338F4: addiu       $s3, $s0, 0xC0
        ctx->r19 = ADD32(ctx->r16, 0XC0);
            goto L_80233A44;
    }
    // 0x802338F4: addiu       $s3, $s0, 0xC0
    ctx->r19 = ADD32(ctx->r16, 0XC0);
    // 0x802338F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802338FC: beql        $v0, $zero, L_80233914
    if (ctx->r2 == 0) {
        // 0x80233900: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233914;
    }
    goto skip_0;
    // 0x80233900: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233904: beq         $v1, $zero, L_80233924
    if (ctx->r3 == 0) {
        // 0x80233908: addiu       $s4, $s2, 0x14
        ctx->r20 = ADD32(ctx->r18, 0X14);
            goto L_80233924;
    }
    // 0x80233908: addiu       $s4, $s2, 0x14
    ctx->r20 = ADD32(ctx->r18, 0X14);
    // 0x8023390C: j           L_80233B50
    // 0x80233910: nop

        goto L_80233B50;
    // 0x80233910: nop

L_80233914:
    // 0x80233914: beq         $v1, $v0, L_80233AE0
    if (ctx->r3 == ctx->r2) {
        // 0x80233918: nop
    
            goto L_80233AE0;
    }
    // 0x80233918: nop

    // 0x8023391C: j           L_80233B50
    // 0x80233920: nop

        goto L_80233B50;
    // 0x80233920: nop

L_80233924:
    // 0x80233924: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233928: addiu       $a0, $a0, 0x138
    ctx->r4 = ADD32(ctx->r4, 0X138);
    // 0x8023392C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80233930: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233938: jal         0x8009A3B4
    // 0x8023393C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023393C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233940: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233944: addiu       $a0, $a0, 0x140
    ctx->r4 = ADD32(ctx->r4, 0X140);
    // 0x80233948: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8023394C: jal         0x8009A3B4
    // 0x80233950: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233950: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233954: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80233958: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x8023395C: lhu         $s5, 0x4A06($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X4A06);
    // 0x80233960: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80233964: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233968: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8023396C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233970: jal         0x8004EC38
    // 0x80233974: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80233974: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_2:
    // 0x80233978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023397C: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    // 0x80233980: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80233984: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80233988: beq         $v0, $zero, L_802339A0
    if (ctx->r2 == 0) {
        // 0x8023398C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802339A0;
    }
    // 0x8023398C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80233990: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233994: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233998: j           L_802339AC
    // 0x8023399C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
        goto L_802339AC;
    // 0x8023399C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
L_802339A0:
    // 0x802339A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802339A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802339A8: addiu       $a3, $zero, -0x800
    ctx->r7 = ADD32(0, -0X800);
L_802339AC:
    // 0x802339AC: jal         0x8004DA90
    // 0x802339B0: nop

    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802339B0: nop

    after_3:
    // 0x802339B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802339B8: jal         0x8004EC38
    // 0x802339BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x802339BC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x802339C0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802339C4: lh          $v1, 0x14($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X14);
    // 0x802339C8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802339CC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802339D0: bltzl       $v0, L_802339D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802339D4: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802339D8;
    }
    goto skip_1;
    // 0x802339D4: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_1:
L_802339D8:
    // 0x802339D8: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x802339DC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802339E0: lh          $v1, 0x18($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X18);
    // 0x802339E4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802339E8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802339EC: bltzl       $v0, L_802339F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802339F0: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802339F4;
    }
    goto skip_2;
    // 0x802339F0: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_2:
L_802339F4:
    // 0x802339F4: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x802339F8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802339FC: addiu       $a1, $a1, 0x138
    ctx->r5 = ADD32(ctx->r5, 0X138);
    // 0x80233A00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233A04: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80233A08: jal         0x8009A3B4
    // 0x80233A0C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80233A0C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_5:
    // 0x80233A10: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80233A14: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233A18: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    // 0x80233A1C: jal         0x8009A3B4
    // 0x80233A20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80233A20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80233A24: sh          $s5, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r21;
    // 0x80233A28: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80233A2C: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x80233A30: sh          $v1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r3;
    // 0x80233A34: sb          $zero, 0x8($s3)
    MEM_B(0X8, ctx->r19) = 0;
    // 0x80233A38: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80233A3C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80233A40: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80233A44:
    // 0x80233A44: lhu         $v1, 0x4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X4);
    // 0x80233A48: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233A4C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80233A50: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233A54: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233A58: sh          $v1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r3;
    // 0x80233A5C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233A60: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233A64: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80233A68: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80233A6C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80233A70: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80233A74: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x80233A78: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80233A7C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80233A80: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80233A84: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80233A88: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80233A8C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80233A90: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80233A94: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80233A98: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80233A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233AA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233AA4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233AA8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80233AAC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80233AB0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80233AB4: jal         0x80040F30
    // 0x80233AB8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80233AB8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_7:
    // 0x80233ABC: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80233AC0: bne         $v0, $zero, L_80233ADC
    if (ctx->r2 != 0) {
        // 0x80233AC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233ADC;
    }
    // 0x80233AC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233AC8: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x80233ACC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233AD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233AD4: beq         $v0, $zero, L_80233B50
    if (ctx->r2 == 0) {
        // 0x80233AD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233B50;
    }
    // 0x80233AD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80233ADC:
    // 0x80233ADC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80233AE0:
    // 0x80233AE0: jal         0x8004F144
    // 0x80233AE4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80233AE4: nop

    after_8:
    // 0x80233AE8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80233AEC: beq         $s1, $zero, L_80233B28
    if (ctx->r17 == 0) {
        // 0x80233AF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233B28;
    }
    // 0x80233AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233AF4: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x80233AF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233AFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233B00: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233B04: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80233B08: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233B0C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80233B10: jal         0x8004DA90
    // 0x80233B14: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x80233B14: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_9:
    // 0x80233B18: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80233B1C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233B20: jal         0x8009A3B4
    // 0x80233B24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80233B24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
L_80233B28:
    // 0x80233B28: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233B2C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80233B30: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80233B34: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80233B38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233B3C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80233B40: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80233B44: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233B48: andi        $v0, $v0, 0xFFA1
    ctx->r2 = ctx->r2 & 0XFFA1;
    // 0x80233B4C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80233B50:
    // 0x80233B50: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80233B54: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80233B58: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80233B5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80233B60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233B6C: jr          $ra
    // 0x80233B70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233B70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B70C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B70C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B710: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x8022B714: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022B718: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B71C: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x8022B720: beq         $a2, $zero, L_8022B76C
    if (ctx->r6 == 0) {
        // 0x8022B724: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8022B76C;
    }
    // 0x8022B724: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022B728: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022B72C: beq         $v0, $zero, L_8022B76C
    if (ctx->r2 == 0) {
        // 0x8022B730: nop
    
            goto L_8022B76C;
    }
    // 0x8022B730: nop

    // 0x8022B734: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x8022B738: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x8022B73C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8022B740: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x8022B744: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x8022B748: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B74C: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x8022B750: bgtz        $v1, L_8022B764
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022B754: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_8022B764;
    }
    // 0x8022B754: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x8022B758: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B75C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022B760: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022B764:
    // 0x8022B764: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022B768: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_8022B76C:
    // 0x8022B76C: jr          $ra
    // 0x8022B770: nop

    TRACE_RETURN()
    return;
    // 0x8022B770: nop

;}
RECOMP_FUNC void func_802294A4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294A4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802294A8: beq         $v1, $zero, L_802294C4
    if (ctx->r3 == 0) {
        // 0x802294AC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_802294C4;
    }
    // 0x802294AC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x802294B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802294B4: beq         $v1, $v0, L_802294E8
    if (ctx->r3 == ctx->r2) {
        // 0x802294B8: nop
    
            goto L_802294E8;
    }
    // 0x802294B8: nop

    // 0x802294BC: j           L_8022950C
    // 0x802294C0: nop

        goto L_8022950C;
    // 0x802294C0: nop

L_802294C4:
    // 0x802294C4: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x802294C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802294CC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x802294D0: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802294D4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802294D8: sh          $v1, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r3;
    // 0x802294DC: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x802294E0: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x802294E4: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
L_802294E8:
    // 0x802294E8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802294EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802294F0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802294F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802294F8: bgez        $v0, L_8022950C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802294FC: nop
    
            goto L_8022950C;
    }
    // 0x802294FC: nop

    // 0x80229500: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80229504: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229508: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022950C:
    // 0x8022950C: jr          $ra
    // 0x80229510: nop

    TRACE_RETURN()
    return;
    // 0x80229510: nop

;}
RECOMP_FUNC void func_802334C8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802334C8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802334CC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x802334D0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802334D4: addiu       $a0, $s5, 0x2C
    ctx->r4 = ADD32(ctx->r21, 0X2C);
    // 0x802334D8: addiu       $a1, $s5, 0x14
    ctx->r5 = ADD32(ctx->r21, 0X14);
    // 0x802334DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802334E0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802334E4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x802334E8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x802334EC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802334F0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802334F4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802334F8: jal         0x8009A3B4
    // 0x802334FC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802334FC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x80233500: addiu       $a0, $s5, 0x34
    ctx->r4 = ADD32(ctx->r21, 0X34);
    // 0x80233504: addiu       $a1, $s5, 0x1C
    ctx->r5 = ADD32(ctx->r21, 0X1C);
    // 0x80233508: jal         0x8009A3B4
    // 0x8023350C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023350C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233510: addiu       $a0, $s5, 0x5C
    ctx->r4 = ADD32(ctx->r21, 0X5C);
    // 0x80233514: addiu       $a1, $s5, 0x54
    ctx->r5 = ADD32(ctx->r21, 0X54);
    // 0x80233518: jal         0x8009A3B4
    // 0x8023351C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023351C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233520: lbu         $a0, 0xE($s5)
    ctx->r4 = MEM_BU(ctx->r21, 0XE);
    // 0x80233524: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80233528: beq         $v0, $zero, L_80233548
    if (ctx->r2 == 0) {
        // 0x8023352C: addiu       $s6, $s5, 0xC0
        ctx->r22 = ADD32(ctx->r21, 0XC0);
            goto L_80233548;
    }
    // 0x8023352C: addiu       $s6, $s5, 0xC0
    ctx->r22 = ADD32(ctx->r21, 0XC0);
    // 0x80233530: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80233534: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80233538: andi        $v0, $a0, 0xDF
    ctx->r2 = ctx->r4 & 0XDF;
    // 0x8023353C: sb          $v0, 0xE($s5)
    MEM_B(0XE, ctx->r21) = ctx->r2;
    // 0x80233540: j           L_80233554
    // 0x80233544: sw          $v1, 0xB4($s5)
    MEM_W(0XB4, ctx->r21) = ctx->r3;
        goto L_80233554;
    // 0x80233544: sw          $v1, 0xB4($s5)
    MEM_W(0XB4, ctx->r21) = ctx->r3;
L_80233548:
    // 0x80233548: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023354C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80233550: sw          $v0, 0xB4($s5)
    MEM_W(0XB4, ctx->r21) = ctx->r2;
L_80233554:
    // 0x80233554: jal         0x800A3450
    // 0x80233558: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233558: nop

    after_3:
    // 0x8023355C: sh          $v0, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r2;
    // 0x80233560: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80233564: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80233568: beq         $v0, $zero, L_80233604
    if (ctx->r2 == 0) {
        // 0x8023356C: nop
    
            goto L_80233604;
    }
    // 0x8023356C: nop

    // 0x80233570: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80233574: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233578: beq         $v0, $zero, L_80233604
    if (ctx->r2 == 0) {
        // 0x8023357C: addiu       $s0, $s5, 0x14
        ctx->r16 = ADD32(ctx->r21, 0X14);
            goto L_80233604;
    }
    // 0x8023357C: addiu       $s0, $s5, 0x14
    ctx->r16 = ADD32(ctx->r21, 0X14);
    // 0x80233580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233584: lb          $a1, 0xD($s5)
    ctx->r5 = MEM_B(ctx->r21, 0XD);
    // 0x80233588: lw          $v0, 0x34($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X34);
    // 0x8023358C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233590: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80233594: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80233598: jal         0x8009A3B4
    // 0x8023359C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023359C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_4:
    // 0x802335A0: addiu       $a0, $s5, 0xAC
    ctx->r4 = ADD32(ctx->r21, 0XAC);
    // 0x802335A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802335A8: lh          $v0, 0x14($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X14);
    // 0x802335AC: lh          $v1, 0x16($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X16);
    // 0x802335B0: lh          $a3, 0x18($s5)
    ctx->r7 = MEM_H(ctx->r21, 0X18);
    // 0x802335B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802335B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802335BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802335C0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802335C4: sw          $v0, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r2;
    // 0x802335C8: sw          $v1, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r3;
    // 0x802335CC: jal         0x8009A3B4
    // 0x802335D0: sw          $a3, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802335D0: sw          $a3, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->r7;
    after_5:
    // 0x802335D4: addiu       $a0, $s5, 0x8C
    ctx->r4 = ADD32(ctx->r21, 0X8C);
    // 0x802335D8: lb          $a1, 0xD($s5)
    ctx->r5 = MEM_B(ctx->r21, 0XD);
    // 0x802335DC: lw          $v0, 0x34($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X34);
    // 0x802335E0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802335E4: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x802335E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802335EC: jal         0x8009A3B4
    // 0x802335F0: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802335F0: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    after_6:
    // 0x802335F4: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x802335F8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802335FC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233600: sh          $v0, 0xB2($s5)
    MEM_H(0XB2, ctx->r21) = ctx->r2;
L_80233604:
    // 0x80233604: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80233608: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023360C: beq         $v0, $zero, L_8023361C
    if (ctx->r2 == 0) {
        // 0x80233610: nop
    
            goto L_8023361C;
    }
    // 0x80233610: nop

    // 0x80233614: jal         0x802344DC
    // 0x80233618: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_802344DC_ovl2(rdram, ctx);
        goto after_7;
    // 0x80233618: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_7:
L_8023361C:
    // 0x8023361C: lbu         $v0, 0x9($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X9);
    // 0x80233620: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233624: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233628: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023362C: lw          $v0, -0xD64($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD64);
    // 0x80233630: jalr        $v0
    // 0x80233634: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80233634: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_8:
    // 0x80233638: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x8023363C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233640: beq         $v0, $zero, L_8023365C
    if (ctx->r2 == 0) {
        // 0x80233644: nop
    
            goto L_8023365C;
    }
    // 0x80233644: nop

    // 0x80233648: sb          $zero, 0x9($s5)
    MEM_B(0X9, ctx->r21) = 0;
    // 0x8023364C: sh          $zero, 0xA($s5)
    MEM_H(0XA, ctx->r21) = 0;
    // 0x80233650: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80233654: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80233658: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
L_8023365C:
    // 0x8023365C: lh          $v0, 0xA($s6)
    ctx->r2 = MEM_H(ctx->r22, 0XA);
    // 0x80233660: beq         $v0, $zero, L_80233670
    if (ctx->r2 == 0) {
        // 0x80233664: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233670;
    }
    // 0x80233664: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233668: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023366C: sh          $v0, 0xA($s6)
    MEM_H(0XA, ctx->r22) = ctx->r2;
L_80233670:
    // 0x80233670: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80233674: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233678: bne         $v0, $zero, L_802336F8
    if (ctx->r2 != 0) {
        // 0x8023367C: addiu       $a1, $s5, 0x14
        ctx->r5 = ADD32(ctx->r21, 0X14);
            goto L_802336F8;
    }
    // 0x8023367C: addiu       $a1, $s5, 0x14
    ctx->r5 = ADD32(ctx->r21, 0X14);
    // 0x80233680: addiu       $a0, $s5, 0xAC
    ctx->r4 = ADD32(ctx->r21, 0XAC);
    // 0x80233684: jal         0x8009A3B4
    // 0x80233688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80233688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023368C: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x80233690: lhu         $v1, 0x58($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X58);
    // 0x80233694: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233698: addiu       $a0, $a0, 0x120
    ctx->r4 = ADD32(ctx->r4, 0X120);
    // 0x8023369C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802336A0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802336A4: sh          $v0, 0xB2($s5)
    MEM_H(0XB2, ctx->r21) = ctx->r2;
    // 0x802336A8: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x802336AC: lhu         $v0, 0x54($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X54);
    // 0x802336B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802336B4: sh          $v0, 0x122($at)
    MEM_H(0X122, ctx->r1) = ctx->r2;
    // 0x802336B8: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x802336BC: addiu       $s0, $s5, 0x8C
    ctx->r16 = ADD32(ctx->r21, 0X8C);
    // 0x802336C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802336C4: sh          $v0, 0x124($at)
    MEM_H(0X124, ctx->r1) = ctx->r2;
    // 0x802336C8: jal         0x80031428
    // 0x802336CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_10;
    // 0x802336CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802336D0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802336D4: addiu       $a1, $a1, 0x128
    ctx->r5 = ADD32(ctx->r5, 0X128);
    // 0x802336D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802336DC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802336E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802336E4: sw          $v0, 0x12C($at)
    MEM_W(0X12C, ctx->r1) = ctx->r2;
    // 0x802336E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802336EC: sw          $v0, 0x130($at)
    MEM_W(0X130, ctx->r1) = ctx->r2;
    // 0x802336F0: jal         0x80031DA8
    // 0x802336F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x802336F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
L_802336F8:
    // 0x802336F8: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x802336FC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80233700: beq         $v0, $zero, L_80233784
    if (ctx->r2 == 0) {
        // 0x80233704: addiu       $s1, $s5, 0x14
        ctx->r17 = ADD32(ctx->r21, 0X14);
            goto L_80233784;
    }
    // 0x80233704: addiu       $s1, $s5, 0x14
    ctx->r17 = ADD32(ctx->r21, 0X14);
    // 0x80233708: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8023370C: addiu       $s3, $s3, 0x120
    ctx->r19 = ADD32(ctx->r19, 0X120);
    // 0x80233710: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80233714: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233718: jal         0x8009A3B4
    // 0x8023371C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023371C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80233720: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80233724: addiu       $s2, $s2, 0x128
    ctx->r18 = ADD32(ctx->r18, 0X128);
    // 0x80233728: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023372C: addiu       $s0, $s5, 0x1C
    ctx->r16 = ADD32(ctx->r21, 0X1C);
    // 0x80233730: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233734: jal         0x8009A3B4
    // 0x80233738: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80233738: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_13:
    // 0x8023373C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80233740: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    // 0x80233744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233748: jal         0x8004DA90
    // 0x8023374C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_14;
    // 0x8023374C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x80233750: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80233754: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80233758: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023375C: jal         0x8003B564
    // 0x80233760: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_15;
    // 0x80233760: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
    // 0x80233764: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233768: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023376C: jal         0x8009A3B4
    // 0x80233770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80233770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x80233774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233778: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023377C: jal         0x8009A3B4
    // 0x80233780: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80233780: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_17:
L_80233784:
    // 0x80233784: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80233788: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023378C: beq         $v0, $zero, L_80233870
    if (ctx->r2 == 0) {
        // 0x80233790: nop
    
            goto L_80233870;
    }
    // 0x80233790: nop

    // 0x80233794: lhu         $v0, 0x0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X0);
    // 0x80233798: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023379C: beq         $v0, $zero, L_80233870
    if (ctx->r2 == 0) {
        // 0x802337A0: addiu       $s0, $s5, 0x14
        ctx->r16 = ADD32(ctx->r21, 0X14);
            goto L_80233870;
    }
    // 0x802337A0: addiu       $s0, $s5, 0x14
    ctx->r16 = ADD32(ctx->r21, 0X14);
    // 0x802337A4: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x802337A8: addiu       $s4, $s4, 0x120
    ctx->r20 = ADD32(ctx->r20, 0X120);
    // 0x802337AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802337B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802337B4: jal         0x8009A3B4
    // 0x802337B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x802337B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x802337BC: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x802337C0: addiu       $s3, $s3, 0x128
    ctx->r19 = ADD32(ctx->r19, 0X128);
    // 0x802337C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802337C8: addiu       $s2, $s5, 0x1C
    ctx->r18 = ADD32(ctx->r21, 0X1C);
    // 0x802337CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802337D0: jal         0x8009A3B4
    // 0x802337D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x802337D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x802337D8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802337DC: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    // 0x802337E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802337E4: jal         0x8004DA90
    // 0x802337E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_20;
    // 0x802337E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_20:
    // 0x802337EC: addiu       $s1, $s6, 0xC
    ctx->r17 = ADD32(ctx->r22, 0XC);
    // 0x802337F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802337F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802337F8: jal         0x8009A3B4
    // 0x802337FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x802337FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x80233800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233804: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80233808: jal         0x8009A3B4
    // 0x8023380C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x8023380C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_22:
    // 0x80233810: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80233814: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80233818: jal         0x8009A3B4
    // 0x8023381C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x8023381C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_23:
    // 0x80233820: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233824: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80233828: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023382C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80233830: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x80233834: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233838: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x8023383C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80233840: addiu       $v0, $s6, 0x14
    ctx->r2 = ADD32(ctx->r22, 0X14);
    // 0x80233844: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80233848: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8023384C: lbu         $v1, 0x8($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X8);
    // 0x80233850: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80233854: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80233858: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023385C: lui         $v0, 0x988
    ctx->r2 = S32(0X988 << 16);
    // 0x80233860: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80233864: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233868: jal         0x80051F9C
    // 0x8023386C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_24;
    // 0x8023386C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_24:
L_80233870:
    // 0x80233870: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80233874: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80233878: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023387C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80233880: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80233884: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80233888: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023388C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80233890: jr          $ra
    // 0x80233894: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80233894: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
