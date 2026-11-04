#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C2D8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2D8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022C2DC: beq         $a1, $zero, L_8022C2EC
    if (ctx->r5 == 0) {
        // 0x8022C2E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022C2EC;
    }
    // 0x8022C2E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C2E4: j           L_8022C2F0
    // 0x8022C2E8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_8022C2F0;
    // 0x8022C2E8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022C2EC:
    // 0x8022C2EC: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_8022C2F0:
    // 0x8022C2F0: jr          $ra
    // 0x8022C2F4: nop

    TRACE_RETURN()
    return;
    // 0x8022C2F4: nop

;}
RECOMP_FUNC void func_8022BADC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BAE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BAE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BAE8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022BAEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BAF0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BAF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BAF8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022BAFC: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022BB00: beq         $v0, $zero, L_8022BF7C
    if (ctx->r2 == 0) {
        // 0x8022BB04: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022BF7C;
    }
    // 0x8022BB04: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022BB08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BB0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BB10: addu        $at, $at, $v0
    gpr jr_addend_8022BB18 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BB14: lw          $v0, -0x6428($at)
    ctx->r2 = ADD32(ctx->r1, -0X6428);
    // 0x8022BB18: jr          $v0
    // 0x8022BB1C: nop

    switch (jr_addend_8022BB18 >> 2) {
        case 0: goto L_8022BB20; break;
        case 1: goto L_8022BC04; break;
        case 2: goto L_8022BCAC; break;
        case 3: goto L_8022BCF0; break;
        case 4: goto L_8022BD6C; break;
        case 5: goto L_8022BE14; break;
        case 6: goto L_8022BE90; break;
        case 7: goto L_8022BF7C; break;
        case 8: goto L_8022BF3C; break;
        default: switch_error(__func__, 0x8022BB18, 0x80239BD8);
    }
    // 0x8022BB1C: nop

L_8022BB20:
    // 0x8022BB20: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BB24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BB2C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BB30: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BB34: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BB38: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BB3C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022BB40: jal         0x8004D5D4
    // 0x8022BB44: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022BB44: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022BB48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BB50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BB54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BB58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BB5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BB60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BB64: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BB68: addiu       $v0, $v0, -0x6A50
    ctx->r2 = ADD32(ctx->r2, -0X6A50);
    // 0x8022BB6C: jal         0x8003E934
    // 0x8022BB70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022BB70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022BB74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BB7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BB80: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BB84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB88: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BB8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BB90: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022BB94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BB98: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022BB9C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BBA0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022BBA4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022BBA8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022BBAC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BBB0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022BBB4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022BBB8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022BBBC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022BBC0: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022BBC4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022BBC8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022BBCC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022BBD0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022BBD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BBD8: jal         0x80050294
    // 0x8022BBDC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022BBDC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022BBE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BBE4: jal         0x8022C2F8
    // 0x8022BBE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022C2F8_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022BBE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022BBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BBF0: jal         0x8022C2D8
    // 0x8022BBF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C2D8_ovl13(rdram, ctx);
        goto after_4;
    // 0x8022BBF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8022BBF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BBFC: j           L_8022BF7C
    // 0x8022BC00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022BF7C;
    // 0x8022BC00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BC04:
    // 0x8022BC04: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022BC08: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022BC0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BC14: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022BC18: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BC1C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022BC20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BC28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022BC2C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022BC30: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022BC34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC38: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022BC3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC40: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BC44: jal         0x8022C4B8
    // 0x8022BC48: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8022C4B8_ovl13(rdram, ctx);
        goto after_5;
    // 0x8022BC48: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022BC4C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BC50: bne         $v0, $zero, L_8022BF80
    if (ctx->r2 != 0) {
        // 0x8022BC54: nop
    
            goto L_8022BF80;
    }
    // 0x8022BC54: nop

    // 0x8022BC58: jal         0x8003E934
    // 0x8022BC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022BC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022BC60: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC64: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BC68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC6C: beq         $a1, $zero, L_8022BC7C
    if (ctx->r5 == 0) {
        // 0x8022BC70: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022BC7C;
    }
    // 0x8022BC70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BC74: jal         0x8022C19C
    // 0x8022BC78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C19C_ovl13(rdram, ctx);
        goto after_7;
    // 0x8022BC78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022BC7C:
    // 0x8022BC7C: jal         0x8022C21C
    // 0x8022BC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C21C_ovl13(rdram, ctx);
        goto after_8;
    // 0x8022BC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022BC84: jal         0x8005044C
    // 0x8022BC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x8022BC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022BC8C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BC90: bne         $v0, $zero, L_8022BCA4
    if (ctx->r2 != 0) {
        // 0x8022BC94: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022BCA4;
    }
    // 0x8022BC94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BC98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BC9C: j           L_8022BF7C
    // 0x8022BCA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022BF7C;
    // 0x8022BCA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BCA4:
    // 0x8022BCA4: j           L_8022BF7C
    // 0x8022BCA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BF7C;
    // 0x8022BCA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BCAC:
    // 0x8022BCAC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BCB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BCB4: bne         $v1, $v0, L_8022BCD8
    if (ctx->r3 != ctx->r2) {
        // 0x8022BCB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BCD8;
    }
    // 0x8022BCB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCBC: jal         0x8022C19C
    // 0x8022BCC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022C19C_ovl13(rdram, ctx);
        goto after_10;
    // 0x8022BCC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x8022BCC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BCC8: jal         0x800A3450
    // 0x8022BCCC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8022BCCC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022BCD0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022BCD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BCD8:
    // 0x8022BCD8: jal         0x8022C21C
    // 0x8022BCDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C21C_ovl13(rdram, ctx);
        goto after_12;
    // 0x8022BCDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022BCE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BCE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BCE8: j           L_8022BF7C
    // 0x8022BCEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BF7C;
    // 0x8022BCEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BCF0:
    // 0x8022BCF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BCF4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022BCF8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022BCFC: jal         0x8004F820
    // 0x8022BD00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x8022BD00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x8022BD04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD08: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022BD0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BD10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BD18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BD1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BD20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BD24: jal         0x8022C4B8
    // 0x8022BD28: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8022C4B8_ovl13(rdram, ctx);
        goto after_14;
    // 0x8022BD28: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x8022BD2C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BD30: bne         $v0, $zero, L_8022BF80
    if (ctx->r2 != 0) {
        // 0x8022BD34: nop
    
            goto L_8022BF80;
    }
    // 0x8022BD34: nop

    // 0x8022BD38: jal         0x8003E934
    // 0x8022BD3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x8022BD3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8022BD40: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD44: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BD48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD4C: beq         $a1, $zero, L_8022BD5C
    if (ctx->r5 == 0) {
        // 0x8022BD50: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022BD5C;
    }
    // 0x8022BD50: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BD54: jal         0x8022C19C
    // 0x8022BD58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C19C_ovl13(rdram, ctx);
        goto after_16;
    // 0x8022BD58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_8022BD5C:
    // 0x8022BD5C: jal         0x8022C21C
    // 0x8022BD60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C21C_ovl13(rdram, ctx);
        goto after_17;
    // 0x8022BD60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x8022BD64: j           L_8022BF74
    // 0x8022BD68: nop

        goto L_8022BF74;
    // 0x8022BD68: nop

L_8022BD6C:
    // 0x8022BD6C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022BD70: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022BD74: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x8022BD78: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022BD7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022BD80: beq         $v1, $zero, L_8022BDD8
    if (ctx->r3 == 0) {
        // 0x8022BD84: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_8022BDD8;
    }
    // 0x8022BD84: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022BD88: jal         0x8002A33C
    // 0x8022BD8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x8022BD8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x8022BD90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD94: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022BD98: jal         0x80050294
    // 0x8022BD9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x8022BD9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x8022BDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BDA4: jal         0x8022C2F8
    // 0x8022BDA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C2F8_ovl13(rdram, ctx);
        goto after_20;
    // 0x8022BDA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8022BDAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BDB0: jal         0x8022C2D8
    // 0x8022BDB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C2D8_ovl13(rdram, ctx);
        goto after_21;
    // 0x8022BDB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x8022BDB8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BDBC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x8022BDC0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022BDC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BDC8: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8022BDCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BDD0: j           L_8022BDE0
    // 0x8022BDD4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022BDE0;
    // 0x8022BDD4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BDD8:
    // 0x8022BDD8: jal         0x8005044C
    // 0x8022BDDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x8022BDDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_8022BDE0:
    // 0x8022BDE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BDE4: jal         0x8022C4B8
    // 0x8022BDE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022C4B8_ovl13(rdram, ctx);
        goto after_23;
    // 0x8022BDE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x8022BDEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BDF0: bne         $v0, $zero, L_8022BF80
    if (ctx->r2 != 0) {
        // 0x8022BDF4: nop
    
            goto L_8022BF80;
    }
    // 0x8022BDF4: nop

    // 0x8022BDF8: jal         0x8003E934
    // 0x8022BDFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8022BDFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x8022BE00: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BE08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BE0C: j           L_8022BE78
    // 0x8022BE10: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022BE78;
    // 0x8022BE10: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022BE14:
    // 0x8022BE14: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022BE18: bgez        $v0, L_8022BE54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BE1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BE54;
    }
    // 0x8022BE1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022BE24: jal         0x80050294
    // 0x8022BE28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x8022BE28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x8022BE2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE30: jal         0x8022C2F8
    // 0x8022BE34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C2F8_ovl13(rdram, ctx);
        goto after_26;
    // 0x8022BE34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x8022BE38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE3C: jal         0x8022C2D8
    // 0x8022BE40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022C2D8_ovl13(rdram, ctx);
        goto after_27;
    // 0x8022BE40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x8022BE44: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BE48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BE4C: j           L_8022BE5C
    // 0x8022BE50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022BE5C;
    // 0x8022BE50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BE54:
    // 0x8022BE54: jal         0x8005044C
    // 0x8022BE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x8022BE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_8022BE5C:
    // 0x8022BE5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE60: jal         0x8022C4B8
    // 0x8022BE64: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022C4B8_ovl13(rdram, ctx);
        goto after_29;
    // 0x8022BE64: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x8022BE68: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BE6C: bne         $v0, $zero, L_8022BF80
    if (ctx->r2 != 0) {
        // 0x8022BE70: nop
    
            goto L_8022BF80;
    }
    // 0x8022BE70: nop

    // 0x8022BE74: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022BE78:
    // 0x8022BE78: beql        $a1, $zero, L_8022BF80
    if (ctx->r5 == 0) {
        // 0x8022BE7C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8022BF80;
    }
    goto skip_0;
    // 0x8022BE7C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x8022BE80: jal         0x8022C19C
    // 0x8022BE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C19C_ovl13(rdram, ctx);
        goto after_30;
    // 0x8022BE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x8022BE88: j           L_8022BF80
    // 0x8022BE8C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_8022BF80;
    // 0x8022BE8C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022BE90:
    // 0x8022BE90: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BE94: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022BE98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BEA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BEA4: jal         0x8003E934
    // 0x8022BEA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x8022BEA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8022BEAC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022BEB0: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x8022BEB4: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022BEB8: beq         $v0, $zero, L_8022BECC
    if (ctx->r2 == 0) {
        // 0x8022BEBC: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8022BECC;
    }
    // 0x8022BEBC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022BEC0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022BEC4: j           L_8022BEE4
    // 0x8022BEC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022BEE4;
    // 0x8022BEC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022BECC:
    // 0x8022BECC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022BED0: beq         $v0, $zero, L_8022BEE0
    if (ctx->r2 == 0) {
        // 0x8022BED4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022BEE0;
    }
    // 0x8022BED4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BED8: j           L_8022BEE4
    // 0x8022BEDC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022BEE4;
    // 0x8022BEDC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022BEE0:
    // 0x8022BEE0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022BEE4:
    // 0x8022BEE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BEE8: jal         0x8022C4B8
    // 0x8022BEEC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022C4B8_ovl13(rdram, ctx);
        goto after_32;
    // 0x8022BEEC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x8022BEF0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BEF4: bne         $v0, $zero, L_8022BF80
    if (ctx->r2 != 0) {
        // 0x8022BEF8: nop
    
            goto L_8022BF80;
    }
    // 0x8022BEF8: nop

    // 0x8022BEFC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022BF00: bne         $a1, $zero, L_8022BF18
    if (ctx->r5 != 0) {
        // 0x8022BF04: nop
    
            goto L_8022BF18;
    }
    // 0x8022BF04: nop

    // 0x8022BF08: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BF0C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022BF10: bne         $v0, $zero, L_8022BF24
    if (ctx->r2 != 0) {
        // 0x8022BF14: nop
    
            goto L_8022BF24;
    }
    // 0x8022BF14: nop

L_8022BF18:
    // 0x8022BF18: jal         0x8022C19C
    // 0x8022BF1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C19C_ovl13(rdram, ctx);
        goto after_33;
    // 0x8022BF1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x8022BF20: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022BF24:
    // 0x8022BF24: jal         0x8022C44C
    // 0x8022BF28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C44C_ovl13(rdram, ctx);
        goto after_34;
    // 0x8022BF28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022BF2C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BF30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BF34: j           L_8022BF74
    // 0x8022BF38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BF74;
    // 0x8022BF38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BF3C:
    // 0x8022BF3C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x8022BF40: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022BF44: jal         0x8004FA7C
    // 0x8022BF48: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x8022BF48: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x8022BF4C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BF50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF54: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BF58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BF5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BF60: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BF64: bne         $v0, $zero, L_8022BF74
    if (ctx->r2 != 0) {
        // 0x8022BF68: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022BF74;
    }
    // 0x8022BF68: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022BF6C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BF70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BF74:
    // 0x8022BF74: jal         0x8005044C
    // 0x8022BF78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x8022BF78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8022BF7C:
    // 0x8022BF7C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022BF80:
    // 0x8022BF80: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BF84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BF88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BF8C: jr          $ra
    // 0x8022BF90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BF90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235A50_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235A50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235A54: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80235A58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80235A5C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80235A60: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80235A64: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80235A68: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235A6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235A70: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x80235A74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235A7C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80235A80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235A84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80235A88: sw          $v1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r3;
    // 0x80235A8C: sw          $v0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r2;
    // 0x80235A90: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x80235A94: jal         0x8004DD04
    // 0x80235A98: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80235A98: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    after_0:
    // 0x80235A9C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80235AA0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80235AA4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80235AA8: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x80235AAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235AB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80235AB4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80235AB8: sh          $v1, 0x90($s2)
    MEM_H(0X90, ctx->r18) = ctx->r3;
    // 0x80235ABC: sh          $v0, 0x92($s2)
    MEM_H(0X92, ctx->r18) = ctx->r2;
    // 0x80235AC0: jal         0x8009A3B4
    // 0x80235AC4: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235AC4: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    after_1:
    // 0x80235AC8: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80235ACC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235AD0: jal         0x8009A3B4
    // 0x80235AD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235AD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235AD8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80235ADC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80235AE0: beq         $v0, $zero, L_80235B1C
    if (ctx->r2 == 0) {
        // 0x80235AE4: nop
    
            goto L_80235B1C;
    }
    // 0x80235AE4: nop

    // 0x80235AE8: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80235AEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235AF0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235AF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235AF8: lhu         $v1, -0x6608($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6608);
    // 0x80235AFC: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80235B00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235B04: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x80235B08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235B0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235B10: lhu         $v0, -0x6606($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6606);
    // 0x80235B14: j           L_80235B4C
    // 0x80235B18: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
        goto L_80235B4C;
    // 0x80235B18: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_80235B1C:
    // 0x80235B1C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80235B20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235B24: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235B28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235B2C: lhu         $v1, -0x6620($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6620);
    // 0x80235B30: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80235B34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235B38: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x80235B3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235B40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235B44: lhu         $v0, -0x661E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X661E);
    // 0x80235B48: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_80235B4C:
    // 0x80235B4C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80235B50: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80235B54: sh          $v1, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r3;
    // 0x80235B58: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235B5C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80235B60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80235B64: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235B68: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235B6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235B70: jr          $ra
    // 0x80235B74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235B74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E1EC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E1F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E1F4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022E1F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E1FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E200: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E204: lh          $v0, 0x32E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X32E);
    // 0x8022E208: beq         $v0, $zero, L_8022E2D8
    if (ctx->r2 == 0) {
        // 0x8022E20C: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022E2D8;
    }
    // 0x8022E20C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022E210: lbu         $v0, 0x333($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X333);
    // 0x8022E214: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x8022E218: bne         $v0, $v1, L_8022E230
    if (ctx->r2 != ctx->r3) {
        // 0x8022E21C: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022E230;
    }
    // 0x8022E21C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022E220: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022E224: jal         0x8002A33C
    // 0x8022E228: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022E228: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x8022E22C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
L_8022E230:
    // 0x8022E230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E234: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022E238: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8022E23C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x8022E240: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E244: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022E248: jal         0x8004F820
    // 0x8022E24C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022E24C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022E250: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E254: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E258: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022E25C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022E260: lhu         $a2, 0x32C($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022E264: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E268: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E26C: addu        $a2, $v1, $a2
    ctx->r6 = ADD32(ctx->r3, ctx->r6);
    // 0x8022E270: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022E274: jal         0x8004F820
    // 0x8022E278: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022E278: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    after_2:
    // 0x8022E27C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E280: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022E284: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E288: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022E28C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E290: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x8022E294: sh          $t0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r8;
    // 0x8022E298: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E29C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E2A0: jal         0x8004DA90
    // 0x8022E2A4: sh          $v1, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022E2A4: sh          $v1, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r3;
    after_3:
    // 0x8022E2A8: lhu         $v0, 0x32E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X32E);
    // 0x8022E2AC: lbu         $v1, 0x332($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X332);
    // 0x8022E2B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E2B4: andi        $v1, $v1, 0x10
    ctx->r3 = ctx->r3 & 0X10;
    // 0x8022E2B8: beq         $v1, $zero, L_8022E32C
    if (ctx->r3 == 0) {
        // 0x8022E2BC: sh          $v0, 0x32E($s2)
        MEM_H(0X32E, ctx->r18) = ctx->r2;
            goto L_8022E32C;
    }
    // 0x8022E2BC: sh          $v0, 0x32E($s2)
    MEM_H(0X32E, ctx->r18) = ctx->r2;
    // 0x8022E2C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E2C4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022E2C8: jal         0x8022DD08
    // 0x8022E2CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022DD08_ovl13(rdram, ctx);
        goto after_4;
    // 0x8022E2CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022E2D0: j           L_8022E32C
    // 0x8022E2D4: nop

        goto L_8022E32C;
    // 0x8022E2D4: nop

L_8022E2D8:
    // 0x8022E2D8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E2DC: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022E2E0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022E2E4: bne         $v0, $zero, L_8022E304
    if (ctx->r2 != 0) {
        // 0x8022E2E8: sb          $zero, 0x330($s2)
        MEM_B(0X330, ctx->r18) = 0;
            goto L_8022E304;
    }
    // 0x8022E2E8: sb          $zero, 0x330($s2)
    MEM_B(0X330, ctx->r18) = 0;
    // 0x8022E2EC: lbu         $v0, 0x332($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X332);
    // 0x8022E2F0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E2F4: beq         $v0, $zero, L_8022E32C
    if (ctx->r2 == 0) {
        // 0x8022E2F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E32C;
    }
    // 0x8022E2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E2FC: j           L_8022E32C
    // 0x8022E300: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022E32C;
    // 0x8022E300: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022E304:
    // 0x8022E304: lbu         $v0, 0x332($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X332);
    // 0x8022E308: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E30C: beq         $v0, $zero, L_8022E32C
    if (ctx->r2 == 0) {
        // 0x8022E310: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E32C;
    }
    // 0x8022E310: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E314: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8022E318: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022E31C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E320: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E324: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E328: sh          $v0, 0x32E($s2)
    MEM_H(0X32E, ctx->r18) = ctx->r2;
L_8022E32C:
    // 0x8022E32C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E330: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E334: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E338: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E33C: jr          $ra
    // 0x8022E340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A128_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A128: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022A12C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A130: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022A134: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A138: bne         $v0, $zero, L_8022A144
    if (ctx->r2 != 0) {
        // 0x8022A13C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A144;
    }
    // 0x8022A13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A140: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022A144:
    // 0x8022A144: jr          $ra
    // 0x8022A148: nop

    TRACE_RETURN()
    return;
    // 0x8022A148: nop

;}
RECOMP_FUNC void func_8022954C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022954C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229550: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229554: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229558: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022955C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229560: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80229564: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80229568: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022956C: addiu       $v0, $v0, -0x6C54
    ctx->r2 = ADD32(ctx->r2, -0X6C54);
    // 0x80229570: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80229574: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80229578: jal         0x8022B748
    // 0x8022957C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022B748_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022957C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80229580: jal         0x800A3450
    // 0x80229584: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80229584: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80229588: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022958C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80229590: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80229594: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022959C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x802295A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802295A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802295A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295B0: jr          $ra
    // 0x802295B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802295B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CFE0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CFE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CFE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CFE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CFEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CFF0: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x8022CFF4: sll         $v1, $s0, 7
    ctx->r3 = S32(ctx->r16 << 7);
    // 0x8022CFF8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022CFFC: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8022D000: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D004: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D008: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022D00C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022D010: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8022D014: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D018: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D01C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D020: lw          $v0, -0x6A20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A20);
    // 0x8022D024: addu        $s2, $v1, $a2
    ctx->r18 = ADD32(ctx->r3, ctx->r6);
    // 0x8022D028: jalr        $v0
    // 0x8022D02C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D02C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022D030: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022D034: srav        $v0, $v0, $s0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x8022D038: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D03C: beq         $v0, $zero, L_8022D064
    if (ctx->r2 == 0) {
        // 0x8022D040: nop
    
            goto L_8022D064;
    }
    // 0x8022D040: nop

    // 0x8022D044: lb          $v0, 0xB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XB);
    // 0x8022D048: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x8022D04C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D050: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D058: lw          $v0, -0x6A0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A0C);
    // 0x8022D05C: jalr        $v0
    // 0x8022D060: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022D060: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_8022D064:
    // 0x8022D064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D068: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D06C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D070: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D074: jr          $ra
    // 0x8022D078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FEE0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FEE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FEE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FEEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FEF0: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8022FEF4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FEF8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FF00: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x8022FF04: jal         0x8004D5D4
    // 0x8022FF08: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FF08: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FF0C: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x8022FF10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8022FF14: addiu       $v1, $s0, 0x70
    ctx->r3 = ADD32(ctx->r16, 0X70);
    // 0x8022FF18: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x8022FF1C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FF20: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FF24: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FF28: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
L_8022FF2C:
    // 0x8022FF2C: sh          $a1, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r5;
    // 0x8022FF30: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022FF34: bgez        $a0, L_8022FF2C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022FF38: addiu       $v1, $v1, -0x8
        ctx->r3 = ADD32(ctx->r3, -0X8);
            goto L_8022FF2C;
    }
    // 0x8022FF38: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x8022FF3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022FF40: addiu       $v1, $s1, 0x4
    ctx->r3 = ADD32(ctx->r17, 0X4);
    // 0x8022FF44: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022FF48: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022FF4C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022FF50: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022FF54: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022FF58: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022FF5C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FF60: addiu       $v0, $zero, 0x180C
    ctx->r2 = ADD32(0, 0X180C);
    // 0x8022FF64: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022FF68: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022FF6C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022FF70: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022FF74: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022FF78: sh          $zero, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = 0;
    // 0x8022FF7C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8022FF80: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8022FF84: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x8022FF88: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x8022FF8C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022FF90: sw          $zero, 0x54($s1)
    MEM_W(0X54, ctx->r17) = 0;
    // 0x8022FF94: sw          $zero, 0x60($s1)
    MEM_W(0X60, ctx->r17) = 0;
    // 0x8022FF98: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    // 0x8022FF9C: sw          $zero, 0x80($s1)
    MEM_W(0X80, ctx->r17) = 0;
    // 0x8022FFA0: sw          $zero, 0x84($s1)
    MEM_W(0X84, ctx->r17) = 0;
    // 0x8022FFA4: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x8022FFA8: sh          $zero, 0xF6($s1)
    MEM_H(0XF6, ctx->r17) = 0;
L_8022FFAC:
    // 0x8022FFAC: sw          $zero, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = 0;
    // 0x8022FFB0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022FFB4: bgez        $a0, L_8022FFAC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022FFB8: addiu       $v1, $v1, -0x4
        ctx->r3 = ADD32(ctx->r3, -0X4);
            goto L_8022FFAC;
    }
    // 0x8022FFB8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x8022FFBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FFC0: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
L_8022FFC4:
    // 0x8022FFC4: sw          $zero, 0x90($v1)
    MEM_W(0X90, ctx->r3) = 0;
    // 0x8022FFC8: sw          $zero, 0x94($v1)
    MEM_W(0X94, ctx->r3) = 0;
    // 0x8022FFCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FFD0: slti        $v0, $a0, 0x6
    ctx->r2 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x8022FFD4: bne         $v0, $zero, L_8022FFC4
    if (ctx->r2 != 0) {
        // 0x8022FFD8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8022FFC4;
    }
    // 0x8022FFD8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8022FFDC: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x8022FFE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FFE4: jal         0x800540BC
    // 0x8022FFE8: addiu       $a2, $zero, -0x320
    ctx->r6 = ADD32(0, -0X320);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022FFE8: addiu       $a2, $zero, -0x320
    ctx->r6 = ADD32(0, -0X320);
    after_1:
    // 0x8022FFEC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022FFF0: sh          $v0, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r2;
    // 0x8022FFF4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FFF8: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
    // 0x8022FFFC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230000: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80230004: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230008: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023000C: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80230010: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230014: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230018: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023001C: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80230020: sh          $zero, 0xF0($s1)
    MEM_H(0XF0, ctx->r17) = 0;
    // 0x80230024: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80230028: sh          $v0, 0xF4($s1)
    MEM_H(0XF4, ctx->r17) = ctx->r2;
    // 0x8023002C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80230030: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230034: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023003C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230040: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80230044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230048: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023004C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80230050: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80230054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230058: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023005C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80230060: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80230064: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80230068: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8023006C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230070: sh          $v1, 0xF8($s1)
    MEM_H(0XF8, ctx->r17) = ctx->r3;
    // 0x80230074: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230078: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023007C: jal         0x80050294
    // 0x80230080: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230080: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x80230084: jal         0x802300A0
    // 0x80230088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802300A0_ovl13(rdram, ctx);
        goto after_3;
    // 0x80230088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023008C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230090: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230094: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230098: jr          $ra
    // 0x8023009C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023009C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228A0C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228A10: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228A14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228A18: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80228A1C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228A20: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80228A24: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228A28: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80228A2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228A30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228A34: jal         0x8009A3B4
    // 0x80228A38: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228A38: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80228A3C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80228A40: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80228A44: jal         0x8009A3B4
    // 0x80228A48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228A48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80228A4C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80228A50: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80228A54: jal         0x8009A3B4
    // 0x80228A58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228A58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80228A5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228A60: jal         0x800A3450
    // 0x80228A64: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80228A64: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80228A68: addiu       $a0, $s1, 0x34C
    ctx->r4 = ADD32(ctx->r17, 0X34C);
    // 0x80228A6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228A70: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80228A74: jal         0x800540D0
    // 0x80228A78: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x80228A78: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    after_4:
    // 0x80228A7C: beq         $v0, $zero, L_80228A90
    if (ctx->r2 == 0) {
        // 0x80228A80: nop
    
            goto L_80228A90;
    }
    // 0x80228A80: nop

    // 0x80228A84: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x80228A88: j           L_80228A98
    // 0x80228A8C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_80228A98;
    // 0x80228A8C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80228A90:
    // 0x80228A90: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x80228A94: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
L_80228A98:
    // 0x80228A98: sh          $v0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r2;
    // 0x80228A9C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228AA0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80228AA4: beq         $v0, $zero, L_80228AB4
    if (ctx->r2 == 0) {
        // 0x80228AA8: nop
    
            goto L_80228AB4;
    }
    // 0x80228AA8: nop

    // 0x80228AAC: jal         0x802290D8
    // 0x80228AB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802290D8_ovl13(rdram, ctx);
        goto after_5;
    // 0x80228AB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_80228AB4:
    // 0x80228AB4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80228AB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228ABC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228AC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228AC4: lw          $v0, -0x7214($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7214);
    // 0x80228AC8: jalr        $v0
    // 0x80228ACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80228ACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80228AD0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228AD4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228AD8: beq         $v0, $zero, L_80228B1C
    if (ctx->r2 == 0) {
        // 0x80228ADC: nop
    
            goto L_80228B1C;
    }
    // 0x80228ADC: nop

    // 0x80228AE0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80228AE4: bne         $v0, $zero, L_80228AF4
    if (ctx->r2 != 0) {
        // 0x80228AE8: nop
    
            goto L_80228AF4;
    }
    // 0x80228AE8: nop

    // 0x80228AEC: j           L_80228B0C
    // 0x80228AF0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80228B0C;
    // 0x80228AF0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80228AF4:
    // 0x80228AF4: bltz        $v0, L_80228B0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228AF8: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_80228B0C;
    }
    // 0x80228AF8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80228AFC: beql        $v0, $zero, L_80228B10
    if (ctx->r2 == 0) {
        // 0x80228B00: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_80228B10;
    }
    goto skip_0;
    // 0x80228B00: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_0:
    // 0x80228B04: jal         0x8004F418
    // 0x80228B08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x80228B08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_80228B0C:
    // 0x80228B0C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80228B10:
    // 0x80228B10: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228B14: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80228B18: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80228B1C:
    // 0x80228B1C: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80228B20: beq         $v0, $zero, L_80228B30
    if (ctx->r2 == 0) {
        // 0x80228B24: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228B30;
    }
    // 0x80228B24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228B28: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228B2C: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80228B30:
    // 0x80228B30: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80228B34: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80228B38: beq         $v0, $a1, L_80228B50
    if (ctx->r2 == ctx->r5) {
        // 0x80228B3C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228B50;
    }
    // 0x80228B3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228B40: jal         0x80050294
    // 0x80228B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x80228B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x80228B48: j           L_80228B58
    // 0x80228B4C: nop

        goto L_80228B58;
    // 0x80228B4C: nop

L_80228B50:
    // 0x80228B50: jal         0x8005044C
    // 0x80228B54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80228B54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
L_80228B58:
    // 0x80228B58: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80228B5C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228B60: beq         $v0, $zero, L_80228B78
    if (ctx->r2 == 0) {
        // 0x80228B64: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228B78;
    }
    // 0x80228B64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228B68: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80228B6C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80228B70: jal         0x8003B564
    // 0x80228B74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80228B74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80228B78:
    // 0x80228B78: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80228B7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228B80: beq         $v0, $zero, L_80228BEC
    if (ctx->r2 == 0) {
        // 0x80228B84: nop
    
            goto L_80228BEC;
    }
    // 0x80228B84: nop

    // 0x80228B88: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228B8C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228B90: beq         $v0, $zero, L_80228BEC
    if (ctx->r2 == 0) {
        // 0x80228B94: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80228BEC;
    }
    // 0x80228B94: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80228B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B9C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228BA0: jal         0x8009A3B4
    // 0x80228BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80228BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80228BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BAC: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x80228BB0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80228BB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228BB8: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80228BBC: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x80228BC0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80228BC4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80228BC8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80228BCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228BD0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80228BD4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80228BD8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80228BDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80228BE0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80228BE4: jal         0x80051E18
    // 0x80228BE8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80228BE8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_12:
L_80228BEC:
    // 0x80228BEC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80228BF0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80228BF4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228BF8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228BFC: jr          $ra
    // 0x80228C00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228C00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80227EA8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EA8: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80227EAC: beq         $v1, $zero, L_80227EC8
    if (ctx->r3 == 0) {
        // 0x80227EB0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80227EC8;
    }
    // 0x80227EB0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80227EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227EB8: beq         $v1, $v0, L_80227EE4
    if (ctx->r3 == ctx->r2) {
        // 0x80227EBC: nop
    
            goto L_80227EE4;
    }
    // 0x80227EBC: nop

    // 0x80227EC0: j           L_80227F10
    // 0x80227EC4: nop

        goto L_80227F10;
    // 0x80227EC4: nop

L_80227EC8:
    // 0x80227EC8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227ECC: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80227ED0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80227ED4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80227ED8: sb          $v1, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r3;
    // 0x80227EDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227EE0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227EE4:
    // 0x80227EE4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80227EE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227EEC: slti        $v0, $v0, 0x39
    ctx->r2 = SIGNED(ctx->r2) < 0X39 ? 1 : 0;
    // 0x80227EF0: beq         $v0, $zero, L_80227F00
    if (ctx->r2 == 0) {
        // 0x80227EF4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80227F00;
    }
    // 0x80227EF4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80227EF8: j           L_80227F10
    // 0x80227EFC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_80227F10;
    // 0x80227EFC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80227F00:
    // 0x80227F00: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227F04: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80227F08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F0C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80227F10:
    // 0x80227F10: jr          $ra
    // 0x80227F14: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80227F14: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80225508_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225508: jr          $ra
    // 0x8022550C: nop

    TRACE_RETURN()
    return;
    // 0x8022550C: nop

;}
RECOMP_FUNC void func_8022B0A0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B0A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B0A4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022B0A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022B0AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022B0B0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022B0B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B0B8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022B0BC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022B0C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022B0C4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022B0C8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022B0CC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022B0D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B0D4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022B0D8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022B0DC: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022B0E0: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022B0E4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B0E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B0EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B0F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B0F4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022B0F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B0FC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022B100: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022B104: jal         0x8009A3B4
    // 0x8022B108: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B108: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B10C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022B110: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022B114: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022B118: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B11C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022B120: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022B124: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022B128: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022B12C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B130: jal         0x8004EC38
    // 0x8022B134: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022B134: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022B138: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022B13C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022B140: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022B144: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022B148: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022B14C: jal         0x80034FCC
    // 0x8022B150: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022B150: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022B154: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022B158: jal         0x8022B748
    // 0x8022B15C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022B748_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022B15C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022B160: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B164: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022B168: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B16C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022B170: jal         0x8004F820
    // 0x8022B174: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022B174: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022B178: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B17C: bgez        $v0, L_8022B1A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B180: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022B1A8;
    }
    // 0x8022B180: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B184: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022B188: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B18C: jal         0x8004F820
    // 0x8022B190: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022B190: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022B194: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B198: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B19C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B1A0: j           L_8022B1C0
    // 0x8022B1A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022B1C0;
    // 0x8022B1A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022B1A8:
    // 0x8022B1A8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022B1AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B1B0: jal         0x8004F820
    // 0x8022B1B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022B1B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022B1B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B1BC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022B1C0:
    // 0x8022B1C0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022B1C4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022B1C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B1CC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022B1D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B1D4: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022B1D8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022B1DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022B1E0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022B1E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B1E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022B1EC: jr          $ra
    // 0x8022B1F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022B1F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023674C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023674C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236750: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236754: jal         0x8004F4F8
    // 0x80236758: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80236758: nop

    after_0:
    // 0x8023675C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236760: jr          $ra
    // 0x80236764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80236768: nop

    // 0x8023676C: nop

;}
RECOMP_FUNC void func_80232D60_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232D64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232D70: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232D74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232D78: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232D7C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80232D80: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80232D84: beq         $v0, $zero, L_80233290
    if (ctx->r2 == 0) {
        // 0x80232D88: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_80233290;
    }
    // 0x80232D88: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80232D8C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232D90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232D94: addu        $at, $at, $v0
    gpr jr_addend_80232D9C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232D98: lw          $v0, -0x62F8($at)
    ctx->r2 = ADD32(ctx->r1, -0X62F8);
    // 0x80232D9C: jr          $v0
    // 0x80232DA0: nop

    switch (jr_addend_80232D9C >> 2) {
        case 0: goto L_80232DA4; break;
        case 1: goto L_80232E0C; break;
        case 2: goto L_80232E94; break;
        case 3: goto L_80232EF8; break;
        case 4: goto L_80232F04; break;
        case 5: goto L_80232F34; break;
        case 6: goto L_80232F40; break;
        case 7: goto L_80232FC0; break;
        case 8: goto L_80232FE4; break;
        case 9: goto L_8023304C; break;
        case 10: goto L_80233084; break;
        case 11: goto L_802330DC; break;
        case 12: goto L_802330E8; break;
        case 13: goto L_80233124; break;
        case 14: goto L_802331F0; break;
        case 15: goto L_8023324C; break;
        case 16: goto L_80233264; break;
        default: switch_error(__func__, 0x80232D9C, 0x80239D08);
    }
    // 0x80232DA0: nop

L_80232DA4:
    // 0x80232DA4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232DA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232DB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232DB4: jal         0x8004D5D4
    // 0x80232DB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80232DB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232DBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DC0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232DC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232DC8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80232DCC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80232DD0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80232DD4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232DD8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232DDC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232DE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232DE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232DEC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80232DF0: jal         0x8023350C
    // 0x80232DF4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_8023350C_ovl13(rdram, ctx);
        goto after_1;
    // 0x80232DF4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232DF8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232DFC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232E00: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232E04: j           L_80233258
    // 0x80232E08: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80233258;
    // 0x80232E08: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80232E0C:
    // 0x80232E0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232E10: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80232E14: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80232E18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232E1C: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80232E20: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80233290;
    }
    // 0x80232E20: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80232E24: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80232E28: beq         $a1, $v0, L_80232E70
    if (ctx->r5 == ctx->r2) {
        // 0x80232E2C: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_80232E70;
    }
    // 0x80232E2C: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x80232E30: beq         $v0, $zero, L_80232E48
    if (ctx->r2 == 0) {
        // 0x80232E34: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80232E48;
    }
    // 0x80232E34: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80232E38: beq         $a1, $v0, L_80232E5C
    if (ctx->r5 == ctx->r2) {
        // 0x80232E3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232E5C;
    }
    // 0x80232E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232E40: j           L_80233290
    // 0x80232E44: nop

        goto L_80233290;
    // 0x80232E44: nop

L_80232E48:
    // 0x80232E48: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80232E4C: beq         $a1, $v0, L_80232E88
    if (ctx->r5 == ctx->r2) {
        // 0x80232E50: nop
    
            goto L_80232E88;
    }
    // 0x80232E50: nop

    // 0x80232E54: j           L_80233290
    // 0x80232E58: nop

        goto L_80233290;
    // 0x80232E58: nop

L_80232E5C:
    // 0x80232E5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232E60: jal         0x8023350C
    // 0x80232E64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023350C_ovl13(rdram, ctx);
        goto after_2;
    // 0x80232E64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80232E68: j           L_80233290
    // 0x80232E6C: nop

        goto L_80233290;
    // 0x80232E6C: nop

L_80232E70:
    // 0x80232E70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232E74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232E78: jal         0x8023350C
    // 0x80232E7C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8023350C_ovl13(rdram, ctx);
        goto after_3;
    // 0x80232E7C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80232E80: j           L_80233290
    // 0x80232E84: nop

        goto L_80233290;
    // 0x80232E84: nop

L_80232E88:
    // 0x80232E88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232E8C: j           L_8023325C
    // 0x80232E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80232E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232E94:
    // 0x80232E94: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232E98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232E9C: beq         $v1, $v0, L_80232EC4
    if (ctx->r3 == ctx->r2) {
        // 0x80232EA0: nop
    
            goto L_80232EC4;
    }
    // 0x80232EA0: nop

    // 0x80232EA4: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80232EA8: sltiu       $v0, $v0, 0x25
    ctx->r2 = ctx->r2 < 0X25 ? 1 : 0;
    // 0x80232EAC: bne         $v0, $zero, L_80232EC4
    if (ctx->r2 != 0) {
        // 0x80232EB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232EC4;
    }
    // 0x80232EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232EB4: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x80232EB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232EBC: jal         0x8004DA90
    // 0x80232EC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80232EC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80232EC4:
    // 0x80232EC4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80232EC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232ECC: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80232ED0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233290;
    }
    // 0x80232ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232ED4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80232ED8: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80232EDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233290;
    }
    // 0x80232EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232EE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232EE4: jal         0x8023350C
    // 0x80232EE8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023350C_ovl13(rdram, ctx);
        goto after_5;
    // 0x80232EE8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80232EEC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232EF0: j           L_8023325C
    // 0x80232EF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80232EF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232EF8:
    // 0x80232EF8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232EFC: j           L_80233254
    // 0x80232F00: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80233254;
    // 0x80232F00: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80232F04:
    // 0x80232F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232F08: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80232F0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232F10: jal         0x8004DA90
    // 0x80232F14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x80232F14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80232F18: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232F1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232F20: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80232F24: nop
    
            goto L_80233290;
    }
    // 0x80232F24: nop

    // 0x80232F28: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232F2C: j           L_8023325C
    // 0x80232F30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80232F30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232F34:
    // 0x80232F34: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232F38: j           L_80233254
    // 0x80232F3C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
        goto L_80233254;
    // 0x80232F3C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_80232F40:
    // 0x80232F40: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80232F44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232F48: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80232F4C: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_80233290;
    }
    // 0x80232F4C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80232F50: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80232F54: beq         $a1, $v0, L_80232F9C
    if (ctx->r5 == ctx->r2) {
        // 0x80232F58: slti        $v0, $a1, 0x83
        ctx->r2 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
            goto L_80232F9C;
    }
    // 0x80232F58: slti        $v0, $a1, 0x83
    ctx->r2 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
    // 0x80232F5C: beq         $v0, $zero, L_80232F74
    if (ctx->r2 == 0) {
        // 0x80232F60: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80232F74;
    }
    // 0x80232F60: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80232F64: beq         $a1, $v0, L_80232F88
    if (ctx->r5 == ctx->r2) {
        // 0x80232F68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232F88;
    }
    // 0x80232F68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232F6C: j           L_80233290
    // 0x80232F70: nop

        goto L_80233290;
    // 0x80232F70: nop

L_80232F74:
    // 0x80232F74: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80232F78: beq         $a1, $v0, L_80232FB4
    if (ctx->r5 == ctx->r2) {
        // 0x80232F7C: nop
    
            goto L_80232FB4;
    }
    // 0x80232F7C: nop

    // 0x80232F80: j           L_80233290
    // 0x80232F84: nop

        goto L_80233290;
    // 0x80232F84: nop

L_80232F88:
    // 0x80232F88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232F8C: jal         0x8023350C
    // 0x80232F90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8023350C_ovl13(rdram, ctx);
        goto after_7;
    // 0x80232F90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x80232F94: j           L_80233290
    // 0x80232F98: nop

        goto L_80233290;
    // 0x80232F98: nop

L_80232F9C:
    // 0x80232F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232FA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232FA4: jal         0x8023350C
    // 0x80232FA8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023350C_ovl13(rdram, ctx);
        goto after_8;
    // 0x80232FA8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
    // 0x80232FAC: j           L_80233290
    // 0x80232FB0: nop

        goto L_80233290;
    // 0x80232FB0: nop

L_80232FB4:
    // 0x80232FB4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232FB8: j           L_8023325C
    // 0x80232FBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80232FBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232FC0:
    // 0x80232FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232FC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232FC8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80232FCC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232FD0: jal         0x8023350C
    // 0x80232FD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8023350C_ovl13(rdram, ctx);
        goto after_9;
    // 0x80232FD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_9:
    // 0x80232FD8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232FDC: j           L_8023325C
    // 0x80232FE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80232FE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232FE4:
    // 0x80232FE4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80232FE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232FEC: bne         $v1, $v0, L_80233020
    if (ctx->r3 != ctx->r2) {
        // 0x80232FF0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80233020;
    }
    // 0x80232FF0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232FF4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80232FF8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80232FFC: bne         $v1, $v0, L_8023301C
    if (ctx->r3 != ctx->r2) {
        // 0x80233000: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023301C;
    }
    // 0x80233000: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233008: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023300C: jal         0x8023350C
    // 0x80233010: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8023350C_ovl13(rdram, ctx);
        goto after_10;
    // 0x80233010: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_10:
    // 0x80233014: j           L_80233290
    // 0x80233018: nop

        goto L_80233290;
    // 0x80233018: nop

L_8023301C:
    // 0x8023301C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
L_80233020:
    // 0x80233020: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80233024: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233290;
    }
    // 0x80233024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233028: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8023302C: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80233030: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233290;
    }
    // 0x80233030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233034: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233038: jal         0x8023350C
    // 0x8023303C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023350C_ovl13(rdram, ctx);
        goto after_11;
    // 0x8023303C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80233040: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233044: j           L_8023325C
    // 0x80233048: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80233048: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023304C:
    // 0x8023304C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233050: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233054: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80233058: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023305C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233060: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233064: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80233068: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80233290;
    }
    // 0x80233068: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x8023306C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80233070: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80233074: nop
    
            goto L_80233290;
    }
    // 0x80233074: nop

    // 0x80233078: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023307C: j           L_8023325C
    // 0x80233080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80233080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80233084:
    // 0x80233084: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80233088: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023308C: bne         $v1, $v0, L_802330A4
    if (ctx->r3 != ctx->r2) {
        // 0x80233090: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802330A4;
    }
    // 0x80233090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233094: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233098: jal         0x8023350C
    // 0x8023309C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8023350C_ovl13(rdram, ctx);
        goto after_12;
    // 0x8023309C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_12:
    // 0x802330A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802330A4:
    // 0x802330A4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x802330A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802330AC: jal         0x8004DA90
    // 0x802330B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_13;
    // 0x802330B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x802330B4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802330B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802330BC: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x802330C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233290;
    }
    // 0x802330C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802330C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802330C8: jal         0x8023350C
    // 0x802330CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023350C_ovl13(rdram, ctx);
        goto after_14;
    // 0x802330CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x802330D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802330D4: j           L_8023325C
    // 0x802330D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x802330D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802330DC:
    // 0x802330DC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802330E0: j           L_80233254
    // 0x802330E4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
        goto L_80233254;
    // 0x802330E4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_802330E8:
    // 0x802330E8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802330EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802330F0: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x802330F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233290;
    }
    // 0x802330F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802330F8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802330FC: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80233100: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233290;
    }
    // 0x80233100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233104: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233108: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8023310C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233110: jal         0x8023350C
    // 0x80233114: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8023350C_ovl13(rdram, ctx);
        goto after_15;
    // 0x80233114: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_15:
    // 0x80233118: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023311C: j           L_8023325C
    // 0x80233120: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80233120: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80233124:
    // 0x80233124: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80233128: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023312C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80233130: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80233134: beq         $a1, $v0, L_802331C0
    if (ctx->r5 == ctx->r2) {
        // 0x80233138: slti        $v0, $a1, 0xC9
        ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
            goto L_802331C0;
    }
    // 0x80233138: slti        $v0, $a1, 0xC9
    ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
    // 0x8023313C: beq         $v0, $zero, L_80233180
    if (ctx->r2 == 0) {
        // 0x80233140: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80233180;
    }
    // 0x80233140: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80233144: beq         $a1, $v0, L_80233210
    if (ctx->r5 == ctx->r2) {
        // 0x80233148: slti        $v0, $a1, 0x65
        ctx->r2 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
            goto L_80233210;
    }
    // 0x80233148: slti        $v0, $a1, 0x65
    ctx->r2 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
    // 0x8023314C: beq         $v0, $zero, L_80233164
    if (ctx->r2 == 0) {
        // 0x80233150: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80233164;
    }
    // 0x80233150: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233154: beq         $a1, $v0, L_802331C4
    if (ctx->r5 == ctx->r2) {
        // 0x80233158: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802331C4;
    }
    // 0x80233158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023315C: j           L_80233290
    // 0x80233160: nop

        goto L_80233290;
    // 0x80233160: nop

L_80233164:
    // 0x80233164: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80233168: beq         $a1, $v0, L_802331C0
    if (ctx->r5 == ctx->r2) {
        // 0x8023316C: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_802331C0;
    }
    // 0x8023316C: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80233170: beq         $a1, $v0, L_80233214
    if (ctx->r5 == ctx->r2) {
        // 0x80233174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233214;
    }
    // 0x80233174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233178: j           L_80233290
    // 0x8023317C: nop

        goto L_80233290;
    // 0x8023317C: nop

L_80233180:
    // 0x80233180: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80233184: beq         $a1, $v0, L_802331C0
    if (ctx->r5 == ctx->r2) {
        // 0x80233188: slti        $v0, $a1, 0x105
        ctx->r2 = SIGNED(ctx->r5) < 0X105 ? 1 : 0;
            goto L_802331C0;
    }
    // 0x80233188: slti        $v0, $a1, 0x105
    ctx->r2 = SIGNED(ctx->r5) < 0X105 ? 1 : 0;
    // 0x8023318C: beq         $v0, $zero, L_802331A4
    if (ctx->r2 == 0) {
        // 0x80233190: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_802331A4;
    }
    // 0x80233190: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80233194: beq         $a1, $v0, L_80233214
    if (ctx->r5 == ctx->r2) {
        // 0x80233198: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233214;
    }
    // 0x80233198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023319C: j           L_80233290
    // 0x802331A0: nop

        goto L_80233290;
    // 0x802331A0: nop

L_802331A4:
    // 0x802331A4: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x802331A8: beq         $a1, $v0, L_80233210
    if (ctx->r5 == ctx->r2) {
        // 0x802331AC: addiu       $v0, $zero, 0x15E
        ctx->r2 = ADD32(0, 0X15E);
            goto L_80233210;
    }
    // 0x802331AC: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x802331B0: beq         $a1, $v0, L_802331D8
    if (ctx->r5 == ctx->r2) {
        // 0x802331B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802331D8;
    }
    // 0x802331B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802331B8: j           L_80233290
    // 0x802331BC: nop

        goto L_80233290;
    // 0x802331BC: nop

L_802331C0:
    // 0x802331C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802331C4:
    // 0x802331C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802331C8: jal         0x8023350C
    // 0x802331CC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023350C_ovl13(rdram, ctx);
        goto after_16;
    // 0x802331CC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_16:
    // 0x802331D0: j           L_80233290
    // 0x802331D4: nop

        goto L_80233290;
    // 0x802331D4: nop

L_802331D8:
    // 0x802331D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802331DC: jal         0x8023350C
    // 0x802331E0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023350C_ovl13(rdram, ctx);
        goto after_17;
    // 0x802331E0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_17:
    // 0x802331E4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802331E8: j           L_8023325C
    // 0x802331EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x802331EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802331F0:
    // 0x802331F0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802331F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802331F8: bne         $v1, $v0, L_8023322C
    if (ctx->r3 != ctx->r2) {
        // 0x802331FC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8023322C;
    }
    // 0x802331FC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233200: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80233204: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x80233208: bne         $v1, $v0, L_80233228
    if (ctx->r3 != ctx->r2) {
        // 0x8023320C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80233228;
    }
    // 0x8023320C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80233210:
    // 0x80233210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80233214:
    // 0x80233214: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233218: jal         0x8023350C
    // 0x8023321C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023350C_ovl13(rdram, ctx);
        goto after_18;
    // 0x8023321C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_18:
    // 0x80233220: j           L_80233290
    // 0x80233224: nop

        goto L_80233290;
    // 0x80233224: nop

L_80233228:
    // 0x80233228: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
L_8023322C:
    // 0x8023322C: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x80233230: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80233290;
    }
    // 0x80233230: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233234: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80233238: bne         $v1, $v0, L_80233290
    if (ctx->r3 != ctx->r2) {
        // 0x8023323C: nop
    
            goto L_80233290;
    }
    // 0x8023323C: nop

    // 0x80233240: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233244: j           L_8023325C
    // 0x80233248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023325C;
    // 0x80233248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023324C:
    // 0x8023324C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233250: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80233254:
    // 0x80233254: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_80233258:
    // 0x80233258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023325C:
    // 0x8023325C: j           L_80233290
    // 0x80233260: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80233290;
    // 0x80233260: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233264:
    // 0x80233264: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80233268: sltiu       $v0, $v0, 0x12
    ctx->r2 = ctx->r2 < 0X12 ? 1 : 0;
    // 0x8023326C: bne         $v0, $zero, L_80233290
    if (ctx->r2 != 0) {
        // 0x80233270: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80233290;
    }
    // 0x80233270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233274: addiu       $a1, $zero, -0xA0
    ctx->r5 = ADD32(0, -0XA0);
    // 0x80233278: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8023327C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233280: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233284: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80233288: jal         0x8004DA90
    // 0x8023328C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_19;
    // 0x8023328C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_19:
L_80233290:
    // 0x80233290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233294: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233298: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023329C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802332A0: jr          $ra
    // 0x802332A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802332A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229CCC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229CD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229CD4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80229CD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229CDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229CE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229CE4: lw          $v0, -0x6B78($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B78);
    // 0x80229CE8: jalr        $v0
    // 0x80229CEC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229CEC: nop

    after_0:
    // 0x80229CF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229CF4: jr          $ra
    // 0x80229CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B018_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B01C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B028: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B02C: bgez        $v0, L_8022B060
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B030: nop
    
            goto L_8022B060;
    }
    // 0x8022B030: nop

    // 0x8022B034: jal         0x8022B748
    // 0x8022B038: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B748_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022B038: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022B03C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022B040: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B044: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B048: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B04C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022B050: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022B054: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022B058: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022B05C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022B060:
    // 0x8022B060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B064: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B068: jr          $ra
    // 0x8022B06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C3C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228C40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228C44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228C48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228C4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C50: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80228C54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228C58: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80228C5C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80228C60: beq         $v0, $zero, L_80228F04
    if (ctx->r2 == 0) {
        // 0x80228C64: addiu       $s0, $s1, 0x328
        ctx->r16 = ADD32(ctx->r17, 0X328);
            goto L_80228F04;
    }
    // 0x80228C64: addiu       $s0, $s1, 0x328
    ctx->r16 = ADD32(ctx->r17, 0X328);
    // 0x80228C68: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228C6C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228C70: addu        $at, $at, $v0
    gpr jr_addend_80228C78 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C74: lw          $v0, -0x6448($at)
    ctx->r2 = ADD32(ctx->r1, -0X6448);
    // 0x80228C78: jr          $v0
    // 0x80228C7C: nop

    switch (jr_addend_80228C78 >> 2) {
        case 0: goto L_80228C80; break;
        case 1: goto L_80228CE8; break;
        case 2: goto L_80228D68; break;
        case 3: goto L_80228DDC; break;
        case 4: goto L_80228E5C; break;
        case 5: goto L_80228EA0; break;
        case 6: goto L_80228EE8; break;
        default: switch_error(__func__, 0x80228C78, 0x80239BB8);
    }
    // 0x80228C7C: nop

L_80228C80:
    // 0x80228C80: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228C84: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80228C88: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80228C8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C90: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228C94: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228C98: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80228C9C: jal         0x8004EFE4
    // 0x80228CA0: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80228CA0: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    after_0:
    // 0x80228CA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228CA8: beq         $v1, $zero, L_80228CE8
    if (ctx->r3 == 0) {
        // 0x80228CAC: sw          $v1, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r3;
            goto L_80228CE8;
    }
    // 0x80228CAC: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x80228CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228CB4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228CB8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228CBC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228CC0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228CC4: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228CC8: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x80228CCC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80228CD0: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228CD4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228CD8: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80228CDC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228CE0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228CE4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80228CE8:
    // 0x80228CE8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228CEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228CF0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80228CF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228CF8: bgez        $v0, L_80228D0C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228CFC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228D0C;
    }
    // 0x80228CFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228D00: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228D04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D08: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80228D0C:
    // 0x80228D0C: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80228D10: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80228D14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228D18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228D1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D20: jal         0x8004DA90
    // 0x80228D24: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228D24: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228D28: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x80228D2C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80228D30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80228D34: jal         0x8009A3B4
    // 0x80228D38: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228D38: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_2:
    // 0x80228D3C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80228D40: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228D44: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80228D48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D4C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80228D50: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x80228D54: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x80228D58: jal         0x8004DD04
    // 0x80228D5C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80228D5C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_3:
    // 0x80228D60: j           L_80228F04
    // 0x80228D64: nop

        goto L_80228F04;
    // 0x80228D64: nop

L_80228D68:
    // 0x80228D68: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80228D6C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80228D70: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80228D74: jal         0x8004F820
    // 0x80228D78: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80228D78: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_4:
    // 0x80228D7C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80228D80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228D84: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228D88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D8C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228D90: bltz        $v0, L_80228DAC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228D94: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_80228DAC;
    }
    // 0x80228D94: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80228D98: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80228D9C: beq         $v0, $zero, L_80228F04
    if (ctx->r2 == 0) {
        // 0x80228DA0: nop
    
            goto L_80228F04;
    }
    // 0x80228DA0: nop

    // 0x80228DA4: j           L_80228DBC
    // 0x80228DA8: nop

        goto L_80228DBC;
    // 0x80228DA8: nop

L_80228DAC:
    // 0x80228DAC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228DB0: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80228DB4: beq         $v0, $zero, L_80228F04
    if (ctx->r2 == 0) {
        // 0x80228DB8: nop
    
            goto L_80228F04;
    }
    // 0x80228DB8: nop

L_80228DBC:
    // 0x80228DBC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228DC0: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80228DC4: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80228DC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DCC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228DD0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80228DD4: j           L_80228F04
    // 0x80228DD8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80228F04;
    // 0x80228DD8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228DDC:
    // 0x80228DDC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228DE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228DE4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80228DE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DEC: bne         $v0, $zero, L_80228F04
    if (ctx->r2 != 0) {
        // 0x80228DF0: nop
    
            goto L_80228F04;
    }
    // 0x80228DF0: nop

    // 0x80228DF4: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228DF8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80228DFC: beq         $v0, $zero, L_80228E44
    if (ctx->r2 == 0) {
        // 0x80228E00: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80228E44;
    }
    // 0x80228E00: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228E04: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228E08: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80228E0C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80228E10: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x80228E14: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228E18: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80228E1C: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80228E20: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228E24: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228E28: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x80228E2C: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80228E30: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228E34: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x80228E38: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228E3C: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80228E40: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80228E44:
    // 0x80228E44: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228E48: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80228E4C: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80228E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E54: j           L_80228F04
    // 0x80228E58: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80228F04;
    // 0x80228E58: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80228E5C:
    // 0x80228E5C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80228E60: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80228E64: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228E68: jal         0x8004F820
    // 0x80228E6C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80228E6C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_5:
    // 0x80228E70: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80228E74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E78: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228E7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E80: bne         $v0, $zero, L_80228F04
    if (ctx->r2 != 0) {
        // 0x80228E84: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_80228F04;
    }
    // 0x80228E84: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80228E88: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E90: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228E94: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228E98: j           L_80228F04
    // 0x80228E9C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80228F04;
    // 0x80228E9C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228EA0:
    // 0x80228EA0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80228EA4: lhu         $v1, 0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4);
    // 0x80228EA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228EAC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80228EB0: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80228EB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228EB8: bgez        $v1, L_80228ECC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80228EBC: sh          $v0, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r2;
            goto L_80228ECC;
    }
    // 0x80228EBC: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80228EC0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228EC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228EC8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80228ECC:
    // 0x80228ECC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228ED0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80228ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228ED8: jal         0x8004DA90
    // 0x80228EDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x80228EDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80228EE0: j           L_80228F04
    // 0x80228EE4: nop

        goto L_80228F04;
    // 0x80228EE4: nop

L_80228EE8:
    // 0x80228EE8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228EEC: lw          $v1, 0x40($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X40);
    // 0x80228EF0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228EF4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80228EF8: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80228EFC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228F00: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_80228F04:
    // 0x80228F04: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x80228F08: beq         $v0, $zero, L_80228F18
    if (ctx->r2 == 0) {
        // 0x80228F0C: addiu       $a0, $zero, 0xD7
        ctx->r4 = ADD32(0, 0XD7);
            goto L_80228F18;
    }
    // 0x80228F0C: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    // 0x80228F10: jal         0x8002A33C
    // 0x80228F14: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80228F14: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_7:
L_80228F18:
    // 0x80228F18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228F1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228F20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F24: jr          $ra
    // 0x80228F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A90C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A90C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A910: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A914: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A918: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A91C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A920: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A924: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A928: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022A92C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022A930: bne         $v0, $zero, L_8022A98C
    if (ctx->r2 != 0) {
        // 0x8022A934: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A98C;
    }
    // 0x8022A934: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A938: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A93C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A940: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A944: jal         0x8004F820
    // 0x8022A948: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A948: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022A94C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A950: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A954: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022A958: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A95C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A960: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022A964: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022A968: beq         $a0, $zero, L_8022A98C
    if (ctx->r4 == 0) {
        // 0x8022A96C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A98C;
    }
    // 0x8022A96C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A970: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A974: jal         0x8022B6B0
    // 0x8022A978: nop

    func_8022B6B0_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022A978: nop

    after_1:
    // 0x8022A97C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A980: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A984: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A988: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022A98C:
    // 0x8022A98C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A990: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A994: bne         $v0, $zero, L_8022A9B8
    if (ctx->r2 != 0) {
        // 0x8022A998: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022A9B8;
    }
    // 0x8022A998: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A99C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A9A0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022A9A4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022A9A8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022A9AC: jal         0x8022B748
    // 0x8022A9B0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B748_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022A9B0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022A9B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A9B8:
    // 0x8022A9B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A9BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A9C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A9C4: jr          $ra
    // 0x8022A9C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A9C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226548_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022654C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226550: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226558: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022655C: bne         $v0, $zero, L_802265AC
    if (ctx->r2 != 0) {
        // 0x80226560: nop
    
            goto L_802265AC;
    }
    // 0x80226560: nop

    // 0x80226564: jal         0x8004F684
    // 0x80226568: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80226568: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_0:
    // 0x8022656C: jal         0x8004F684
    // 0x80226570: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80226570: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_1:
    // 0x80226574: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226578: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022657C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80226580: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226584: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226588: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022658C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80226590: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226594: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226598: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x8022659C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265A0: sb          $v0, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = ctx->r2;
    // 0x802265A4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802265A8: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_802265AC:
    // 0x802265AC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802265B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265B4: beq         $v1, $v0, L_802265E0
    if (ctx->r3 == ctx->r2) {
        // 0x802265B8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802265E0;
    }
    // 0x802265B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802265BC: beq         $v0, $zero, L_802265FC
    if (ctx->r2 == 0) {
        // 0x802265C0: nop
    
            goto L_802265FC;
    }
    // 0x802265C0: nop

    // 0x802265C4: bne         $v1, $zero, L_802265FC
    if (ctx->r3 != 0) {
        // 0x802265C8: nop
    
            goto L_802265FC;
    }
    // 0x802265C8: nop

    // 0x802265CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802265D0: sb          $zero, -0x621C($at)
    MEM_B(-0X621C, ctx->r1) = 0;
    // 0x802265D4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802265D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265DC: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_802265E0:
    // 0x802265E0: jal         0x802267FC
    // 0x802265E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802267FC_ovl13(rdram, ctx);
        goto after_2;
    // 0x802265E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802265E8: beq         $v0, $zero, L_802265FC
    if (ctx->r2 == 0) {
        // 0x802265EC: nop
    
            goto L_802265FC;
    }
    // 0x802265EC: nop

    // 0x802265F0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802265F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265F8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_802265FC:
    // 0x802265FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226600: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226604: jr          $ra
    // 0x80226608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E710_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E71C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E720: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E728: beq         $v1, $v0, L_8022E78C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E72C: sb          $zero, 0x330($s0)
        MEM_B(0X330, ctx->r16) = 0;
            goto L_8022E78C;
    }
    // 0x8022E72C: sb          $zero, 0x330($s0)
    MEM_B(0X330, ctx->r16) = 0;
    // 0x8022E730: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022E734: beql        $v0, $zero, L_8022E74C
    if (ctx->r2 == 0) {
        // 0x8022E738: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E74C;
    }
    goto skip_0;
    // 0x8022E738: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E73C: beq         $v1, $zero, L_8022E75C
    if (ctx->r3 == 0) {
        // 0x8022E740: nop
    
            goto L_8022E75C;
    }
    // 0x8022E740: nop

    // 0x8022E744: j           L_8022E848
    // 0x8022E748: nop

        goto L_8022E848;
    // 0x8022E748: nop

L_8022E74C:
    // 0x8022E74C: beq         $v1, $v0, L_8022E7EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E750: nop
    
            goto L_8022E7EC;
    }
    // 0x8022E750: nop

    // 0x8022E754: j           L_8022E848
    // 0x8022E758: nop

        goto L_8022E848;
    // 0x8022E758: nop

L_8022E75C:
    // 0x8022E75C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022E760: beq         $v0, $zero, L_8022E7CC
    if (ctx->r2 == 0) {
        // 0x8022E764: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022E7CC;
    }
    // 0x8022E764: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E768: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E76C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022E770: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E774: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E778: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022E77C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E780: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022E784: j           L_8022E7B4
    // 0x8022E788: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_8022E7B4;
    // 0x8022E788: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_8022E78C:
    // 0x8022E78C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022E790: beq         $v0, $zero, L_8022E7CC
    if (ctx->r2 == 0) {
        // 0x8022E794: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022E7CC;
    }
    // 0x8022E794: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E798: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E79C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022E7A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E7A4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E7A8: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022E7AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E7B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_8022E7B4:
    // 0x8022E7B4: jal         0x8004DBA0
    // 0x8022E7B8: nop

    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022E7B8: nop

    after_0:
    // 0x8022E7BC: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022E7C0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022E7C4: j           L_8022E848
    // 0x8022E7C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022E848;
    // 0x8022E7C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022E7CC:
    // 0x8022E7CC: lbu         $v1, 0x332($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X332);
    // 0x8022E7D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E7D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E7D8: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022E7DC: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022E7E0: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x8022E7E4: j           L_8022E848
    // 0x8022E7E8: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
        goto L_8022E848;
    // 0x8022E7E8: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
L_8022E7EC:
    // 0x8022E7EC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022E7F0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E7F4: beq         $v0, $a1, L_8022E804
    if (ctx->r2 == ctx->r5) {
        // 0x8022E7F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E804;
    }
    // 0x8022E7F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7FC: j           L_8022E838
    // 0x8022E800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022E838;
    // 0x8022E800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022E804:
    // 0x8022E804: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E808: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E80C: bne         $v1, $v0, L_8022E848
    if (ctx->r3 != ctx->r2) {
        // 0x8022E810: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022E848;
    }
    // 0x8022E810: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E814: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022E818: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E81C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E820: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022E824: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022E828: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022E82C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022E830: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x8022E834: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
L_8022E838:
    // 0x8022E838: jal         0x800502EC
    // 0x8022E83C: nop

    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022E83C: nop

    after_1:
    // 0x8022E840: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E844: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8022E848:
    // 0x8022E848: jal         0x80040F30
    // 0x8022E84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022E84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E850: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022E854: bne         $v0, $zero, L_8022E870
    if (ctx->r2 != 0) {
        // 0x8022E858: nop
    
            goto L_8022E870;
    }
    // 0x8022E858: nop

    // 0x8022E85C: jal         0x8003E934
    // 0x8022E860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022E860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E864: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022E868: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E86C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022E870:
    // 0x8022E870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E878: jr          $ra
    // 0x8022E87C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E87C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802336A8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802336A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802336AC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802336B0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802336B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802336B8: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x802336BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802336C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802336C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802336C8: addiu       $a2, $s3, 0x18
    ctx->r6 = ADD32(ctx->r19, 0X18);
    // 0x802336CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802336D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802336D4: jal         0x8022C8BC
    // 0x802336D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8022C8BC_ovl13(rdram, ctx);
        goto after_0;
    // 0x802336D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802336DC: addiu       $v1, $zero, 0x3F
    ctx->r3 = ADD32(0, 0X3F);
    // 0x802336E0: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x802336E4: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
L_802336E8:
    // 0x802336E8: sll         $s1, $s2, 24
    ctx->r17 = S32(ctx->r18 << 24);
    // 0x802336EC: sra         $s1, $s1, 21
    ctx->r17 = S32(SIGNED(ctx->r17) >> 21);
    // 0x802336F0: addu        $s0, $s1, $s3
    ctx->r16 = ADD32(ctx->r17, ctx->r19);
    // 0x802336F4: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x802336F8: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x802336FC: jal         0x8009A3B4
    // 0x80233700: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233700: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233704: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80233708: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023370C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80233710: lhu         $v1, -0x679C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X679C);
    // 0x80233714: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233718: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023371C: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x80233720: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233724: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80233728: lhu         $v1, -0x679A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X679A);
    // 0x8023372C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233730: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80233734: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80233738: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023373C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x80233740: lhu         $a0, -0x6798($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X6798);
    // 0x80233744: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x80233748: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023374C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233750: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233754: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x80233758: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023375C: bne         $v0, $zero, L_802336E8
    if (ctx->r2 != 0) {
        // 0x80233760: sh          $v1, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r3;
            goto L_802336E8;
    }
    // 0x80233760: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80233764: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233768: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023376C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80233770: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233774: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023377C: jr          $ra
    // 0x80233780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80233784: nop

    // 0x80233788: nop

    // 0x8023378C: nop

;}
RECOMP_FUNC void func_8022F564_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F568: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F570: jal         0x8004F144
    // 0x8022F574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022F574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022F578: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F57C: beq         $v1, $zero, L_8022F5B4
    if (ctx->r3 == 0) {
        // 0x8022F580: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022F5B4;
    }
    // 0x8022F580: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022F584: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022F588: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F58C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F590: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022F594: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F598: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022F59C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F5A0: jal         0x8009A3B4
    // 0x8022F5A4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F5A4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022F5A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5AC: jal         0x8007A1B8
    // 0x8022F5B0: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022F5B0: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022F5B4:
    // 0x8022F5B4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F5B8: bne         $v0, $zero, L_8022F63C
    if (ctx->r2 != 0) {
        // 0x8022F5BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F63C;
    }
    // 0x8022F5BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F5C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F5C4: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022F5C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F5D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022F5D4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022F5D8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022F5DC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022F5E0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022F5E4: jal         0x8009A3B4
    // 0x8022F5E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F5E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_3:
    // 0x8022F5EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5F0: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022F5F4: lh          $v0, 0x190($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X190);
    // 0x8022F5F8: lh          $v1, 0x192($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X192);
    // 0x8022F5FC: lh          $a3, 0x194($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X194);
    // 0x8022F600: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022F604: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F608: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F60C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022F610: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022F614: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F618: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022F61C: jal         0x8004DA90
    // 0x8022F620: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022F620: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x8022F624: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022F628: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022F62C: jal         0x8009A3B4
    // 0x8022F630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022F630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022F634: j           L_8022F640
    // 0x8022F638: nop

        goto L_8022F640;
    // 0x8022F638: nop

L_8022F63C:
    // 0x8022F63C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F640:
    // 0x8022F640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F644: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F648: jr          $ra
    // 0x8022F64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: bne         $v0, $zero, L_802251E0
    if (ctx->r2 != 0) {
        // 0x802251C8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E0;
    }
    // 0x802251C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D0: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251D8: j           L_802251E8
    // 0x802251DC: addiu       $a1, $a1, 0x7F14
    ctx->r5 = ADD32(ctx->r5, 0X7F14);
        goto L_802251E8;
    // 0x802251DC: addiu       $a1, $a1, 0x7F14
    ctx->r5 = ADD32(ctx->r5, 0X7F14);
L_802251E0:
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251E8:
    // 0x802251E8: jal         0x80037D80
    // 0x802251EC: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251EC: nop

    after_0:
    // 0x802251F0: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251F4: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251F8: lb          $t1, 0x0($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X0);
    // 0x802251FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225200: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225204: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80225208: addiu       $a3, $a3, 0xCB4
    ctx->r7 = ADD32(ctx->r7, 0XCB4);
    // 0x8022520C: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225210: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225214: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80225218: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022521C: sh          $a2, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r6;
    // 0x80225220: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x80225224: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225228: sh          $t0, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r8;
    // 0x8022522C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80225230: lui         $t3, 0x7FE9
    ctx->r11 = S32(0X7FE9 << 16);
    // 0x80225234: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225238: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022523C: sb          $t2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r10;
    // 0x80225240: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x80225244: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225248: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x8022524C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80225250: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225254: sb          $v1, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r3;
    // 0x80225258: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022525C: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80225260: lw          $a0, 0x7E1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7E1C);
    // 0x80225264: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x80225268: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x8022526C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225270: sb          $a2, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r6;
    // 0x80225274: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80225278: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022527C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225280: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225284: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225288: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022528C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225290: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225294: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80225298: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022529C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252A4: sb          $t4, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r12;
    // 0x802252A8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252AC: sb          $t0, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r8;
    // 0x802252B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252B4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802252B8: lw          $v0, 0x7E68($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7E68);
    // 0x802252BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C0: jal         0x8004C790
    // 0x802252C4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252C4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252C8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252D0: addiu       $a0, $a0, 0x7E78
    ctx->r4 = ADD32(ctx->r4, 0X7E78);
    // 0x802252D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E0: lw          $v1, 0x7F10($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7F10);
    // 0x802252E4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252EC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252F4: addiu       $v0, $v0, 0x7E6C
    ctx->r2 = ADD32(ctx->r2, 0X7E6C);
    // 0x802252F8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252FC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225300: jal         0x80054FB8
    // 0x80225304: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225304: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225308: jal         0x8004A614
    // 0x8022530C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x8022530C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225310: jal         0x80225330
    // 0x80225314: nop

    func_80225330_ovl13(rdram, ctx);
        goto after_4;
    // 0x80225314: nop

    after_4:
    // 0x80225318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022531C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225320: jr          $ra
    // 0x80225324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225328: nop

    // 0x8022532C: nop

;}
RECOMP_FUNC void func_802337FC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802337FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233800: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233804: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233808: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023380C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233810: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80233814: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80233818: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8023381C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233820: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80233824: bne         $v0, $zero, L_8023386C
    if (ctx->r2 != 0) {
        // 0x80233828: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8023386C;
    }
    // 0x80233828: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8023382C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233830: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80233834: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80233838: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8023383C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233840: bne         $v0, $zero, L_80233854
    if (ctx->r2 != 0) {
        // 0x80233844: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_80233854;
    }
    // 0x80233844: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x80233848: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8023384C: j           L_8023385C
    // 0x80233850: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8023385C;
    // 0x80233850: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80233854:
    // 0x80233854: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x80233858: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_8023385C:
    // 0x8023385C: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80233860: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80233864: j           L_802338BC
    // 0x80233868: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_802338BC;
    // 0x80233868: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_8023386C:
    // 0x8023386C: bne         $v0, $zero, L_80233890
    if (ctx->r2 != 0) {
        // 0x80233870: nop
    
            goto L_80233890;
    }
    // 0x80233870: nop

    // 0x80233874: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233878: lbu         $v0, -0x6760($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6760);
    // 0x8023387C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80233880: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233884: lbu         $v0, -0x675F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X675F);
    // 0x80233888: j           L_802338A8
    // 0x8023388C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802338A8;
    // 0x8023388C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233890:
    // 0x80233890: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233894: lbu         $v0, -0x6754($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6754);
    // 0x80233898: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8023389C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802338A0: lbu         $v0, -0x6753($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6753);
    // 0x802338A4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802338A8:
    // 0x802338A8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x802338AC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802338B0: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802338B4: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802338B8: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_802338BC:
    // 0x802338BC: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x802338C0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802338C4: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802338C8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802338CC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802338D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802338D4: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802338D8: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x802338DC: bne         $v0, $zero, L_80233908
    if (ctx->r2 != 0) {
        // 0x802338E0: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_80233908;
    }
    // 0x802338E0: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x802338E4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802338E8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802338EC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802338F0: bne         $v0, $zero, L_80233900
    if (ctx->r2 != 0) {
        // 0x802338F4: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_80233900;
    }
    // 0x802338F4: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x802338F8: j           L_80233914
    // 0x802338FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80233914;
    // 0x802338FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233900:
    // 0x80233900: j           L_80233914
    // 0x80233904: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80233914;
    // 0x80233904: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80233908:
    // 0x80233908: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023390C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80233910: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233914:
    // 0x80233914: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233918: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023391C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80233920: bne         $v0, $zero, L_8023392C
    if (ctx->r2 != 0) {
        // 0x80233924: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8023392C;
    }
    // 0x80233924: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80233928: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8023392C:
    // 0x8023392C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233930: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80233934: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233938: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8023393C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233940: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80233944: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80233948: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8023394C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233950: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233954: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233958: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023395C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233960: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80233964: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233968: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8023396C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233970: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233974: jal         0x80051E18
    // 0x80233978: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80233978: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8023397C: jal         0x8003F754
    // 0x80233980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x80233980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233984: bne         $v0, $zero, L_80233994
    if (ctx->r2 != 0) {
        // 0x80233988: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233994;
    }
    // 0x80233988: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023398C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80233994:
    // 0x80233994: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233998: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023399C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802339A0: jr          $ra
    // 0x802339A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802339A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E344_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E344: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E348: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022E34C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022E350: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022E354: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022E358: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022E35C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022E360: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022E364: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022E368: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E36C: lbu         $v0, 0xAD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAD);
    // 0x8022E370: lbu         $a1, 0xAC($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022E374: addiu       $s0, $s2, 0x2E8
    ctx->r16 = ADD32(ctx->r18, 0X2E8);
    // 0x8022E378: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022E37C: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022E380: beq         $v0, $a1, L_8022E57C
    if (ctx->r2 == ctx->r5) {
        // 0x8022E384: sb          $zero, 0x330($s2)
        MEM_B(0X330, ctx->r18) = 0;
            goto L_8022E57C;
    }
    // 0x8022E384: sb          $zero, 0x330($s2)
    MEM_B(0X330, ctx->r18) = 0;
    // 0x8022E388: lbu         $t0, 0x33B($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X33B);
    // 0x8022E38C: bne         $t0, $zero, L_8022E50C
    if (ctx->r8 != 0) {
        // 0x8022E390: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_8022E50C;
    }
    // 0x8022E390: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8022E394: jal         0x800502EC
    // 0x8022E398: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022E398: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022E39C: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022E3A0: jal         0x8004EFE4
    // 0x8022E3A4: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022E3A4: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    after_1:
    // 0x8022E3A8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022E3AC: beq         $s3, $zero, L_8022E624
    if (ctx->r19 == 0) {
        // 0x8022E3B0: addiu       $a0, $zero, 0xDD
        ctx->r4 = ADD32(0, 0XDD);
            goto L_8022E624;
    }
    // 0x8022E3B0: addiu       $a0, $zero, 0xDD
    ctx->r4 = ADD32(0, 0XDD);
    // 0x8022E3B4: jal         0x8002A33C
    // 0x8022E3B8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022E3B8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x8022E3BC: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8022E3C0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022E3C4: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
    // 0x8022E3C8: sb          $s6, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r22;
    // 0x8022E3CC: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x8022E3D0: sb          $s5, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r21;
    // 0x8022E3D4: lhu         $v0, 0x188($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X188);
    // 0x8022E3D8: sh          $v0, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r2;
    // 0x8022E3DC: lhu         $v0, 0x18A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18A);
    // 0x8022E3E0: addiu       $v0, $v0, -0x41
    ctx->r2 = ADD32(ctx->r2, -0X41);
    // 0x8022E3E4: sh          $v0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r2;
    // 0x8022E3E8: lhu         $v0, 0x18C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18C);
    // 0x8022E3EC: lh          $v1, 0x16($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X16);
    // 0x8022E3F0: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x8022E3F4: sh          $v0, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r2;
    // 0x8022E3F8: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022E3FC: lh          $a1, 0x18($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X18);
    // 0x8022E400: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E404: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E408: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x8022E40C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E410: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022E414: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x8022E418: sw          $a1, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r5;
    // 0x8022E41C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022E420: lh          $v0, 0x32C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X32C);
    // 0x8022E424: addiu       $a3, $zero, 0xC00
    ctx->r7 = ADD32(0, 0XC00);
    // 0x8022E428: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022E42C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E430: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022E434: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022E438: jal         0x8004DBA0
    // 0x8022E43C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022E43C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022E440: addiu       $s0, $s4, 0xC4
    ctx->r16 = ADD32(ctx->r20, 0XC4);
    // 0x8022E444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E44C: jal         0x8009A3B4
    // 0x8022E450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022E450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022E454: lh          $v0, 0xC4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0XC4);
    // 0x8022E458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E45C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022E460: addiu       $a1, $s2, 0x318
    ctx->r5 = ADD32(ctx->r18, 0X318);
    // 0x8022E464: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E468: sw          $v0, 0x318($s2)
    MEM_W(0X318, ctx->r18) = ctx->r2;
    // 0x8022E46C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E470: lh          $v0, 0x4A76($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A76);
    // 0x8022E474: lh          $v1, 0x32C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X32C);
    // 0x8022E478: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    // 0x8022E47C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E480: sw          $v0, 0x31C($s2)
    MEM_W(0X31C, ctx->r18) = ctx->r2;
    // 0x8022E484: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E488: lh          $v0, 0x4A78($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A78);
    // 0x8022E48C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022E490: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022E494: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E498: sw          $v0, 0x320($s2)
    MEM_W(0X320, ctx->r18) = ctx->r2;
    // 0x8022E49C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E4A0: jal         0x8004DBA0
    // 0x8022E4A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8022E4A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x8022E4A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022E4AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E4B0: lhu         $v0, 0x4A76($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A76);
    // 0x8022E4B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E4B8: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x8022E4BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E4C0: sh          $v0, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r2;
    // 0x8022E4C4: jal         0x8004E99C
    // 0x8022E4C8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8004E99C_29D9C(rdram, ctx);
        goto after_6;
    // 0x8022E4C8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_6:
    // 0x8022E4CC: jal         0x8004F144
    // 0x8022E4D0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8022E4D0: nop

    after_7:
    // 0x8022E4D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E4D8: beq         $v1, $zero, L_8022E624
    if (ctx->r3 == 0) {
        // 0x8022E4DC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8022E624;
    }
    // 0x8022E4DC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022E4E0: sb          $s5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r21;
    // 0x8022E4E4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022E4E8: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x8022E4EC: sb          $s6, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r22;
    // 0x8022E4F0: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022E4F4: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022E4F8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022E4FC: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022E500: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x8022E504: j           L_8022E624
    // 0x8022E508: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
        goto L_8022E624;
    // 0x8022E508: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022E50C:
    // 0x8022E50C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E510: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022E514: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022E518: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022E51C: addiu       $a2, $s2, 0x310
    ctx->r6 = ADD32(ctx->r18, 0X310);
    // 0x8022E520: addiu       $a3, $s2, 0x318
    ctx->r7 = ADD32(ctx->r18, 0X318);
    // 0x8022E524: sb          $t0, 0x33B($s2)
    MEM_B(0X33B, ctx->r18) = ctx->r8;
    // 0x8022E528: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E52C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E530: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E534: jal         0x8004E150
    // 0x8022E538: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_8;
    // 0x8022E538: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022E53C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E540: bne         $v0, $zero, L_8022E624
    if (ctx->r2 != 0) {
        // 0x8022E544: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022E624;
    }
    // 0x8022E544: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E548: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E54C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E550: jal         0x800502EC
    // 0x8022E554: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_9;
    // 0x8022E554: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_9:
    // 0x8022E558: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022E55C: lbu         $a0, 0x334($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X334);
    // 0x8022E560: lbu         $a1, 0x335($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X335);
    // 0x8022E564: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022E568: sb          $v0, 0x33B($s2)
    MEM_B(0X33B, ctx->r18) = ctx->r2;
    // 0x8022E56C: sb          $v1, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r3;
    // 0x8022E570: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
    // 0x8022E574: j           L_8022E624
    // 0x8022E578: sb          $a1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r5;
        goto L_8022E624;
    // 0x8022E578: sb          $a1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r5;
L_8022E57C:
    // 0x8022E57C: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8022E580: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E584: bne         $v1, $v0, L_8022E624
    if (ctx->r3 != ctx->r2) {
        // 0x8022E588: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022E624;
    }
    // 0x8022E588: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E58C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022E590: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022E594: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022E598: addiu       $a2, $s2, 0x310
    ctx->r6 = ADD32(ctx->r18, 0X310);
    // 0x8022E59C: addiu       $a3, $s2, 0x318
    ctx->r7 = ADD32(ctx->r18, 0X318);
    // 0x8022E5A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E5A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E5A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E5AC: jal         0x8004E150
    // 0x8022E5B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_10;
    // 0x8022E5B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022E5B4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E5B8: beq         $v0, $zero, L_8022E5F4
    if (ctx->r2 == 0) {
        // 0x8022E5BC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022E5F4;
    }
    // 0x8022E5BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E5C0: lbu         $v0, 0x33A($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X33A);
    // 0x8022E5C4: bne         $v0, $zero, L_8022E5F8
    if (ctx->r2 != 0) {
        // 0x8022E5C8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022E5F8;
    }
    // 0x8022E5C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E5CC: lbu         $v0, 0x336($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X336);
    // 0x8022E5D0: lbu         $a0, 0x33A($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X33A);
    // 0x8022E5D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E5D8: sb          $zero, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = 0;
    // 0x8022E5DC: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    // 0x8022E5E0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022E5E4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022E5E8: sb          $v0, 0x336($s2)
    MEM_B(0X336, ctx->r18) = ctx->r2;
    // 0x8022E5EC: j           L_8022E624
    // 0x8022E5F0: sb          $a0, 0x33A($s2)
    MEM_B(0X33A, ctx->r18) = ctx->r4;
        goto L_8022E624;
    // 0x8022E5F0: sb          $a0, 0x33A($s2)
    MEM_B(0X33A, ctx->r18) = ctx->r4;
L_8022E5F4:
    // 0x8022E5F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022E5F8:
    // 0x8022E5F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E5FC: jal         0x800502EC
    // 0x8022E600: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_11;
    // 0x8022E600: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_11:
    // 0x8022E604: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022E608: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    // 0x8022E60C: lbu         $v0, 0x4C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4C);
    // 0x8022E610: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022E614: lbu         $v0, 0x4D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4D);
    // 0x8022E618: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8022E61C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022E620: sb          $v0, 0x53($s0)
    MEM_B(0X53, ctx->r16) = ctx->r2;
L_8022E624:
    // 0x8022E624: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022E628: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022E62C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E630: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022E634: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022E638: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022E63C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E644: jr          $ra
    // 0x8022E648: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E648: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229C90_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229C94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229CA0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80229CA4: bgez        $v0, L_80229CBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229CA8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229CBC;
    }
    // 0x80229CA8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229CAC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229CB0: jal         0x8022B758
    // 0x80229CB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022B758_ovl13(rdram, ctx);
        goto after_0;
    // 0x80229CB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229CB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229CBC:
    // 0x80229CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229CC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229CC4: jr          $ra
    // 0x80229CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A750_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A754: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A758: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A75C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A760: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022A764: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A768: jal         0x8004FA7C
    // 0x8022A76C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A76C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022A770: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A774: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A778: bne         $v0, $zero, L_8022A788
    if (ctx->r2 != 0) {
        // 0x8022A77C: nop
    
            goto L_8022A788;
    }
    // 0x8022A77C: nop

    // 0x8022A780: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022A784: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A788:
    // 0x8022A788: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A78C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A790: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A794: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A79C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A7A0: jr          $ra
    // 0x8022A7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229818_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229818: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022981C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229820: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80229824: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229828: bne         $v0, $zero, L_80229834
    if (ctx->r2 != 0) {
        // 0x8022982C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229834;
    }
    // 0x8022982C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229830: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80229834:
    // 0x80229834: jr          $ra
    // 0x80229838: nop

    TRACE_RETURN()
    return;
    // 0x80229838: nop

;}
RECOMP_FUNC void func_8022AB50_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AB54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AB5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AB60: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022AB64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AB68: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AB6C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022AB70: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022AB74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AB78: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022AB7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022AB80: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AB84: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022AB88: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AB8C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AB90: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AB94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AB98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AB9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022ABA0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022ABA4: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022ABA8: jal         0x8004F820
    // 0x8022ABAC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022ABAC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022ABB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABB4: bgez        $v0, L_8022ABE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022ABB8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022ABE4;
    }
    // 0x8022ABB8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022ABBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ABC0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ABC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ABC8: jal         0x8004F820
    // 0x8022ABCC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022ABCC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022ABD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022ABD8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022ABDC: j           L_8022AC00
    // 0x8022ABE0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022AC00;
    // 0x8022ABE0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022ABE4:
    // 0x8022ABE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ABE8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ABEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ABF0: jal         0x8004F820
    // 0x8022ABF4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022ABF4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022ABF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABFC: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022AC00:
    // 0x8022AC00: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AC04: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022AC08: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022AC0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AC10: jal         0x800610AC
    // 0x8022AC14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022AC14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022AC18: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022AC1C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AC20: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC2C: jr          $ra
    // 0x8022AC30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022AC30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225518_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022551C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225520: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225528: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022552C: bne         $v0, $zero, L_80225548
    if (ctx->r2 != 0) {
        // 0x80225530: nop
    
            goto L_80225548;
    }
    // 0x80225530: nop

    // 0x80225534: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225538: jal         0x800607C4
    // 0x8022553C: addiu       $a0, $a0, 0xB78
    ctx->r4 = ADD32(ctx->r4, 0XB78);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022553C: addiu       $a0, $a0, 0xB78
    ctx->r4 = ADD32(ctx->r4, 0XB78);
    after_0:
    // 0x80225540: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225544: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225548:
    // 0x80225548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022554C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225550: jr          $ra
    // 0x80225554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D4C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D4C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226D50: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x80226D54: beq         $v1, $zero, L_80226D6C
    if (ctx->r3 == 0) {
        // 0x80226D58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226D6C;
    }
    // 0x80226D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D5C: beq         $v1, $v0, L_80226D88
    if (ctx->r3 == ctx->r2) {
        // 0x80226D60: lui         $v1, 0xFFFB
        ctx->r3 = S32(0XFFFB << 16);
            goto L_80226D88;
    }
    // 0x80226D60: lui         $v1, 0xFFFB
    ctx->r3 = S32(0XFFFB << 16);
    // 0x80226D64: j           L_80226DB8
    // 0x80226D68: nop

        goto L_80226DB8;
    // 0x80226D68: nop

L_80226D6C:
    // 0x80226D6C: lbu         $v1, 0xD($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XD);
    // 0x80226D70: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80226D74: sb          $v0, 0x448($a1)
    MEM_B(0X448, ctx->r5) = ctx->r2;
    // 0x80226D78: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80226D7C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226D80: j           L_80226DB8
    // 0x80226D84: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
        goto L_80226DB8;
    // 0x80226D84: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_80226D88:
    // 0x80226D88: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x80226D8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D90: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80226D94: lw          $v0, 0x430($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X430);
    // 0x80226D98: lb          $a0, 0xE($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XE);
    // 0x80226D9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226DA0: sw          $v0, 0x430($a1)
    MEM_W(0X430, ctx->r5) = ctx->r2;
    // 0x80226DA4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226DA8: bne         $a0, $v0, L_80226DB8
    if (ctx->r4 != ctx->r2) {
        // 0x80226DAC: nop
    
            goto L_80226DB8;
    }
    // 0x80226DAC: nop

    // 0x80226DB0: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80226DB4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80226DB8:
    // 0x80226DB8: jr          $ra
    // 0x80226DBC: nop

    TRACE_RETURN()
    return;
    // 0x80226DBC: nop

;}
RECOMP_FUNC void func_8022AD3C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AD40: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022AD44: bne         $a1, $a0, L_8022AD98
    if (ctx->r5 != ctx->r4) {
        // 0x8022AD48: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022AD98;
    }
    // 0x8022AD48: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022AD4C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022AD50: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022AD54: bne         $v1, $v0, L_8022AD64
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD58: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022AD64;
    }
    // 0x8022AD58: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022AD5C: j           L_8022AD80
    // 0x8022AD60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022AD80;
    // 0x8022AD60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022AD64:
    // 0x8022AD64: bne         $v1, $v0, L_8022AD74
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD68: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022AD74;
    }
    // 0x8022AD68: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022AD6C: j           L_8022AD80
    // 0x8022AD70: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022AD80;
    // 0x8022AD70: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022AD74:
    // 0x8022AD74: bne         $v1, $v0, L_8022AD80
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD78: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022AD80;
    }
    // 0x8022AD78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AD7C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022AD80:
    // 0x8022AD80: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022AD84: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022AD88: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022AD8C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022AD90: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022AD94: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022AD98:
    // 0x8022AD98: jr          $ra
    // 0x8022AD9C: nop

    TRACE_RETURN()
    return;
    // 0x8022AD9C: nop

;}
RECOMP_FUNC void func_8022F7A0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7A0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022F7A4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022F7A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022F7AC: beq         $v1, $a0, L_8022F834
    if (ctx->r3 == ctx->r4) {
        // 0x8022F7B0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8022F834;
    }
    // 0x8022F7B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022F7B4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F7B8: beq         $v0, $zero, L_8022F86C
    if (ctx->r2 == 0) {
        // 0x8022F7BC: nop
    
            goto L_8022F86C;
    }
    // 0x8022F7BC: nop

    // 0x8022F7C0: bne         $v1, $zero, L_8022F86C
    if (ctx->r3 != 0) {
        // 0x8022F7C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F86C;
    }
    // 0x8022F7C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F7C8: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8022F7CC: beq         $v1, $a0, L_8022F810
    if (ctx->r3 == ctx->r4) {
        // 0x8022F7D0: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_8022F810;
    }
    // 0x8022F7D0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022F7D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F7D8: beql        $v0, $zero, L_8022F7F0
    if (ctx->r2 == 0) {
        // 0x8022F7DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F7F0;
    }
    goto skip_0;
    // 0x8022F7DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F7E0: beq         $v1, $zero, L_8022F800
    if (ctx->r3 == 0) {
        // 0x8022F7E4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022F800;
    }
    // 0x8022F7E4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022F7E8: j           L_8022F834
    // 0x8022F7EC: nop

        goto L_8022F834;
    // 0x8022F7EC: nop

L_8022F7F0:
    // 0x8022F7F0: beq         $v1, $v0, L_8022F824
    if (ctx->r3 == ctx->r2) {
        // 0x8022F7F4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022F824;
    }
    // 0x8022F7F4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022F7F8: j           L_8022F834
    // 0x8022F7FC: nop

        goto L_8022F834;
    // 0x8022F7FC: nop

L_8022F800:
    // 0x8022F800: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022F804: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022F808: j           L_8022F830
    // 0x8022F80C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022F830;
    // 0x8022F80C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022F810:
    // 0x8022F810: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022F814: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022F818: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022F81C: j           L_8022F830
    // 0x8022F820: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_8022F830;
    // 0x8022F820: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8022F824:
    // 0x8022F824: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022F828: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022F82C: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_8022F830:
    // 0x8022F830: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_8022F834:
    // 0x8022F834: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8022F838: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F83C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022F840: bne         $v0, $zero, L_8022F858
    if (ctx->r2 != 0) {
        // 0x8022F844: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_8022F858;
    }
    // 0x8022F844: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x8022F848: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F84C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022F850: j           L_8022F86C
    // 0x8022F854: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_8022F86C;
    // 0x8022F854: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_8022F858:
    // 0x8022F858: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8022F85C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022F860: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8022F864: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F868: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8022F86C:
    // 0x8022F86C: jr          $ra
    // 0x8022F870: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022F870: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80229F14_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229F18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229F20: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229F24: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229F28: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229F2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229F30: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229F34: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229F38: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229F3C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229F40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229F44: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80229F48: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80229F4C: jal         0x8022AE38
    // 0x80229F50: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022AE38_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229F50: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80229F54: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80229F58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229F5C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229F60: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229F64: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80229F68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229F6C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229F70: jal         0x8004F820
    // 0x80229F74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229F74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229F78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F7C: bgez        $v0, L_80229FAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229F80: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80229FAC;
    }
    // 0x80229F80: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80229F84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229F88: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229F8C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229F90: jal         0x8004F820
    // 0x80229F94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229F94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229F98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F9C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229FA0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229FA4: j           L_80229FC8
    // 0x80229FA8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80229FC8;
    // 0x80229FA8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229FAC:
    // 0x80229FAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229FB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229FB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229FB8: jal         0x8004F820
    // 0x80229FBC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229FBC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80229FC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FC4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80229FC8:
    // 0x80229FC8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229FCC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80229FD0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80229FD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229FD8: jal         0x800610AC
    // 0x80229FDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80229FDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80229FE0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229FE4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229FE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229FEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229FF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229FF4: jr          $ra
    // 0x80229FF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229FF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A260_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A264: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A268: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022A26C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A270: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A274: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A278: lw          $v0, 0x1930($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1930);
    // 0x8022A27C: jalr        $v0
    // 0x8022A280: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A280: nop

    after_0:
    // 0x8022A284: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A288: jr          $ra
    // 0x8022A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E690_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E694: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E698: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E69C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022E6A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E6A4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022E6A8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022E6AC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022E6B0: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x8022E6B4: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8022E6B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E6BC: jal         0x8009A3B4
    // 0x8022E6C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E6C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E6C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E6C8: jr          $ra
    // 0x8022E6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E8D8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E8D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E8DC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022E8E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E8E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E8E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E8EC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8022E8F0: bne         $v1, $v0, L_8022E9BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E8F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022E9BC;
    }
    // 0x8022E8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E8F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8FC: bne         $v0, $zero, L_8022E97C
    if (ctx->r2 != 0) {
        // 0x8022E900: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8022E97C;
    }
    // 0x8022E900: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022E904: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E908: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022E90C: bne         $v0, $s0, L_8022EA08
    if (ctx->r2 != ctx->r16) {
        // 0x8022E910: nop
    
            goto L_8022EA08;
    }
    // 0x8022E910: nop

    // 0x8022E914: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E918: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022E91C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E920: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022E924: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E928: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E92C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E930: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E934: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022E938: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E93C: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022E940: beq         $v0, $zero, L_8022EA08
    if (ctx->r2 == 0) {
        // 0x8022E944: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022EA08;
    }
    // 0x8022E944: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022E948: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E94C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E950: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E954: bne         $v0, $zero, L_8022EA08
    if (ctx->r2 != 0) {
        // 0x8022E958: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022EA08;
    }
    // 0x8022E958: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E95C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022E960: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022E964: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E968: jal         0x800610AC
    // 0x8022E96C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022E96C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x8022E970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E974: j           L_8022EA08
    // 0x8022E978: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022EA08;
    // 0x8022E978: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E97C:
    // 0x8022E97C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022E980: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022E984: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022E988: bne         $v0, $zero, L_8022EA08
    if (ctx->r2 != 0) {
        // 0x8022E98C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022EA08;
    }
    // 0x8022E98C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022E990: bne         $v1, $zero, L_8022E9AC
    if (ctx->r3 != 0) {
        // 0x8022E994: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E9AC;
    }
    // 0x8022E994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E99C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022E9A0: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x8022E9A4: j           L_8022EA08
    // 0x8022E9A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022EA08;
    // 0x8022E9A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022E9AC:
    // 0x8022E9AC: beql        $v1, $v0, L_8022EA08
    if (ctx->r3 == ctx->r2) {
        // 0x8022E9B0: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8022EA08;
    }
    goto skip_0;
    // 0x8022E9B0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022E9B4: j           L_8022EA08
    // 0x8022E9B8: nop

        goto L_8022EA08;
    // 0x8022E9B8: nop

L_8022E9BC:
    // 0x8022E9BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E9C0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022E9C4: bne         $v0, $s0, L_8022EA08
    if (ctx->r2 != ctx->r16) {
        // 0x8022E9C8: nop
    
            goto L_8022EA08;
    }
    // 0x8022E9C8: nop

    // 0x8022E9CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E9D0: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022E9D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022E9D8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022E9DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E9E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E9E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E9E8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E9EC: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022E9F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E9F4: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022E9F8: beq         $v0, $zero, L_8022EA08
    if (ctx->r2 == 0) {
        // 0x8022E9FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EA08;
    }
    // 0x8022E9FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EA00: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EA04: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_8022EA08:
    // 0x8022EA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EA0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA10: jr          $ra
    // 0x8022EA14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EA14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227060_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227060: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227064: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227068: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022706C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227070: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227078: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8022707C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80227080: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80227084: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80227088: beq         $v0, $zero, L_802276DC
    if (ctx->r2 == 0) {
        // 0x8022708C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802276DC;
    }
    // 0x8022708C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227090: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227094: addu        $at, $at, $v0
    gpr jr_addend_8022709C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227098: lw          $v0, 0x1C28($at)
    ctx->r2 = ADD32(ctx->r1, 0X1C28);
    // 0x8022709C: jr          $v0
    // 0x802270A0: nop

    switch (jr_addend_8022709C >> 2) {
        case 0: goto L_802270A4; break;
        case 1: goto L_802273D0; break;
        case 2: goto L_802273E4; break;
        case 3: goto L_8022740C; break;
        case 4: goto L_80227444; break;
        case 5: goto L_802274F0; break;
        case 6: goto L_8022750C; break;
        case 7: goto L_80227528; break;
        case 8: goto L_80227598; break;
        case 9: goto L_8022762C; break;
        case 10: goto L_80227678; break;
        case 11: goto L_8022769C; break;
        default: switch_error(__func__, 0x8022709C, 0x80231C28);
    }
    // 0x802270A0: nop

L_802270A4:
    // 0x802270A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802270A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802270AC: jal         0x8005F6B4
    // 0x802270B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x802270B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802270B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270B8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802270BC: addiu       $v0, $v0, 0x1010
    ctx->r2 = ADD32(ctx->r2, 0X1010);
    // 0x802270C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802270C4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802270C8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802270CC: addiu       $v0, $v0, 0x115C
    ctx->r2 = ADD32(ctx->r2, 0X115C);
    // 0x802270D0: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x802270D4: jal         0x8006FF84
    // 0x802270D8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x802270D8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_1:
    // 0x802270DC: beq         $v0, $zero, L_802276DC
    if (ctx->r2 == 0) {
        // 0x802270E0: nop
    
            goto L_802276DC;
    }
    // 0x802270E0: nop

    // 0x802270E4: jal         0x8004EFE4
    // 0x802270E8: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x802270E8: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    after_2:
    // 0x802270EC: addiu       $v1, $zero, -0x1AFF
    ctx->r3 = ADD32(0, -0X1AFF);
    // 0x802270F0: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x802270F4: lh          $a0, 0x14($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X14);
    // 0x802270F8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802270FC: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x80227100: lh          $a2, 0x16($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X16);
    // 0x80227104: addiu       $v1, $zero, 0x1DDF
    ctx->r3 = ADD32(0, 0X1DDF);
    // 0x80227108: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x8022710C: lh          $a3, 0x18($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X18);
    // 0x80227110: addiu       $s2, $v0, 0xD0
    ctx->r18 = ADD32(ctx->r2, 0XD0);
    // 0x80227114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227118: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x8022711C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227120: sw          $v0, 0x1D30($at)
    MEM_W(0X1D30, ctx->r1) = ctx->r2;
    // 0x80227124: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x80227128: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x8022712C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80227130: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80227134: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x80227138: sb          $a1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r5;
    // 0x8022713C: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80227140: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80227144: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x80227148: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022714C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80227150: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80227154: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80227158: sw          $a2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r6;
    // 0x8022715C: sw          $a3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r7;
L_80227160:
    // 0x80227160: jal         0x8004EEAC
    // 0x80227164: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x80227164: nop

    after_3:
    // 0x80227168: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022716C: beq         $a1, $zero, L_80227280
    if (ctx->r5 == 0) {
        // 0x80227170: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_80227280;
    }
    // 0x80227170: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80227174: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227178: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022717C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227180: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227184: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227188: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022718C: lbu         $v0, 0xFC0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC0);
    // 0x80227190: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80227194: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227198: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022719C: lbu         $v0, 0xFC2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC2);
    // 0x802271A0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802271A4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802271A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271AC: lbu         $v0, 0xFC3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC3);
    // 0x802271B0: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802271B4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802271B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271BC: lbu         $v0, 0xFC4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC4);
    // 0x802271C0: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x802271C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802271C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271CC: lbu         $v0, 0xFC5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC5);
    // 0x802271D0: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x802271D4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802271D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271DC: lbu         $v0, 0xFC7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC7);
    // 0x802271E0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802271E4: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x802271E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802271EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271F0: lbu         $v0, 0xFC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC8);
    // 0x802271F4: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x802271F8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802271FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227200: lbu         $v0, 0xFC9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFC9);
    // 0x80227204: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80227208: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022720C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227210: lbu         $v0, 0xFCA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFCA);
    // 0x80227214: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80227218: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022721C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227220: lbu         $v0, 0xFCB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XFCB);
    // 0x80227224: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x80227228: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022722C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227230: lhu         $v0, 0xFCC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XFCC);
    // 0x80227234: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80227238: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022723C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227240: lhu         $v0, 0xFCE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XFCE);
    // 0x80227244: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80227248: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022724C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227250: lhu         $v0, 0xFD0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XFD0);
    // 0x80227254: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80227258: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8022725C: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80227260: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x80227264: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227268: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8022726C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227270: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227274: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80227278: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
    // 0x8022727C: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
L_80227280:
    // 0x80227280: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x80227284: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227288: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022728C: bgez        $v0, L_80227160
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227290: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80227160;
    }
    // 0x80227290: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80227294: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_80227298:
    // 0x80227298: jal         0x8004EEAC
    // 0x8022729C: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_4;
    // 0x8022729C: nop

    after_4:
    // 0x802272A0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802272A4: beq         $a1, $zero, L_802273B4
    if (ctx->r5 == 0) {
        // 0x802272A8: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_802273B4;
    }
    // 0x802272A8: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x802272AC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802272B0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802272B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802272B8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802272BC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272C4: lbu         $v0, 0xF70($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF70);
    // 0x802272C8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802272CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272D4: lbu         $v0, 0xF72($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF72);
    // 0x802272D8: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802272DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272E4: lbu         $v0, 0xF73($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF73);
    // 0x802272E8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802272EC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272F4: lbu         $v0, 0xF74($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF74);
    // 0x802272F8: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x802272FC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227300: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227304: lbu         $v0, 0xF75($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF75);
    // 0x80227308: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8022730C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227310: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227314: lbu         $v0, 0xF77($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF77);
    // 0x80227318: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022731C: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80227320: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227328: lbu         $v0, 0xF78($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF78);
    // 0x8022732C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80227330: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227334: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227338: lbu         $v0, 0xF79($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF79);
    // 0x8022733C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80227340: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227344: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227348: lbu         $v0, 0xF7A($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF7A);
    // 0x8022734C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80227350: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227354: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227358: lbu         $v0, 0xF7B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF7B);
    // 0x8022735C: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x80227360: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227364: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227368: lhu         $v0, 0xF7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XF7C);
    // 0x8022736C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80227370: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227374: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227378: lhu         $v0, 0xF7E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XF7E);
    // 0x8022737C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80227380: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227384: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227388: lhu         $v0, 0xF80($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XF80);
    // 0x8022738C: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80227390: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80227394: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80227398: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8022739C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802273A0: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x802273A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802273A8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802273AC: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802273B0: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_802273B4:
    // 0x802273B4: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x802273B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802273BC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802273C0: bltz        $v0, L_80227684
    if (SIGNED(ctx->r2) < 0) {
        // 0x802273C4: nop
    
            goto L_80227684;
    }
    // 0x802273C4: nop

    // 0x802273C8: j           L_80227298
    // 0x802273CC: nop

        goto L_80227298;
    // 0x802273CC: nop

L_802273D0:
    // 0x802273D0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802273D4: jal         0x8004CB2C
    // 0x802273D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x802273D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x802273DC: j           L_80227684
    // 0x802273E0: nop

        goto L_80227684;
    // 0x802273E0: nop

L_802273E4:
    // 0x802273E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802273E8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802273EC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802273F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802273F4: bne         $v0, $zero, L_802276DC
    if (ctx->r2 != 0) {
        // 0x802273F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802276DC;
    }
    // 0x802273F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802273FC: jal         0x800616FC
    // 0x80227400: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x80227400: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x80227404: j           L_80227684
    // 0x80227408: nop

        goto L_80227684;
    // 0x80227408: nop

L_8022740C:
    // 0x8022740C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227410: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227414: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227418: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022741C: bne         $v0, $zero, L_802276DC
    if (ctx->r2 != 0) {
        // 0x80227420: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802276DC;
    }
    // 0x80227420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227424: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227428: jal         0x80034844
    // 0x8022742C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_7;
    // 0x8022742C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_7:
    // 0x80227430: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227434: jal         0x800616FC
    // 0x80227438: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80227438: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_8:
    // 0x8022743C: j           L_80227684
    // 0x80227440: nop

        goto L_80227684;
    // 0x80227440: nop

L_80227444:
    // 0x80227444: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227448: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022744C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80227450: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80227454: bne         $v0, $zero, L_802276DC
    if (ctx->r2 != 0) {
        // 0x80227458: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_802276DC;
    }
    // 0x80227458: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022745C: bne         $v0, $zero, L_802274DC
    if (ctx->r2 != 0) {
        // 0x80227460: nop
    
            goto L_802274DC;
    }
    // 0x80227460: nop

    // 0x80227464: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80227468: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022746C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80227470: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80227474: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80227478: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022747C: sh          $v1, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r3;
    // 0x80227480: lbu         $v1, 0xBD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBD);
    // 0x80227484: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x80227488: sh          $a0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r4;
    // 0x8022748C: lh          $a0, 0x438($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X438);
    // 0x80227490: lh          $a1, 0x43A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43A);
    // 0x80227494: lh          $a2, 0x43C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X43C);
    // 0x80227498: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x8022749C: sh          $zero, 0x442($s0)
    MEM_H(0X442, ctx->r16) = 0;
    // 0x802274A0: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x802274A4: sb          $zero, 0x448($s0)
    MEM_B(0X448, ctx->r16) = 0;
    // 0x802274A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802274AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802274B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274B4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802274B8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802274BC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802274C0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802274C4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802274C8: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    // 0x802274CC: sw          $a0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r4;
    // 0x802274D0: sw          $a1, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r5;
    // 0x802274D4: j           L_802276DC
    // 0x802274D8: sw          $a2, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r6;
        goto L_802276DC;
    // 0x802274D8: sw          $a2, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r6;
L_802274DC:
    // 0x802274DC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x802274E0: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x802274E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274E8: j           L_802276DC
    // 0x802274EC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_802276DC;
    // 0x802274EC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_802274F0:
    // 0x802274F0: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x802274F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274F8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x802274FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227500: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227504: j           L_802276DC
    // 0x80227508: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802276DC;
    // 0x80227508: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022750C:
    // 0x8022750C: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x80227510: lhu         $v1, 0x124($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X124);
    // 0x80227514: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80227518: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    // 0x8022751C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227520: j           L_80227684
    // 0x80227524: sh          $v1, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r3;
        goto L_80227684;
    // 0x80227524: sh          $v1, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r3;
L_80227528:
    // 0x80227528: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022752C: slti        $v0, $v0, 0x1820
    ctx->r2 = SIGNED(ctx->r2) < 0X1820 ? 1 : 0;
    // 0x80227530: beq         $v0, $zero, L_802276DC
    if (ctx->r2 == 0) {
        // 0x80227534: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802276DC;
    }
    // 0x80227534: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227538: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022753C: lw          $v1, 0x1D30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D30);
    // 0x80227540: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227544: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80227548: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022754C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227550: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227554: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80227558: jal         0x8005F6B4
    // 0x8022755C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_9;
    // 0x8022755C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_9:
    // 0x80227560: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227564: addiu       $v0, $v0, 0x105C
    ctx->r2 = ADD32(ctx->r2, 0X105C);
    // 0x80227568: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022756C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80227570: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80227574: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227578: addiu       $v0, $v0, 0x116C
    ctx->r2 = ADD32(ctx->r2, 0X116C);
    // 0x8022757C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80227580: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80227584: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80227588: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8022758C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227590: j           L_802276DC
    // 0x80227594: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
        goto L_802276DC;
    // 0x80227594: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
L_80227598:
    // 0x80227598: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022759C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802275A0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802275A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802275A8: bne         $v0, $zero, L_802276DC
    if (ctx->r2 != 0) {
        // 0x802275AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802276DC;
    }
    // 0x802275AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802275B0: jal         0x800616FC
    // 0x802275B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x802275B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_10:
    // 0x802275B8: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x802275BC: addiu       $a3, $zero, -0x188C
    ctx->r7 = ADD32(0, -0X188C);
    // 0x802275C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802275C4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x802275C8: sh          $a3, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r7;
    // 0x802275CC: lh          $v1, 0x438($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X438);
    // 0x802275D0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802275D4: sh          $a2, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r6;
    // 0x802275D8: lh          $a0, 0x43A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43A);
    // 0x802275DC: addiu       $v0, $zero, 0x14C0
    ctx->r2 = ADD32(0, 0X14C0);
    // 0x802275E0: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x802275E4: lh          $a1, 0x43C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43C);
    // 0x802275E8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802275EC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802275F0: sh          $a3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r7;
    // 0x802275F4: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
    // 0x802275F8: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x802275FC: sh          $zero, 0x442($s0)
    MEM_H(0X442, ctx->r16) = 0;
    // 0x80227600: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x80227604: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227608: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022760C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227610: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80227614: sw          $v1, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r3;
    // 0x80227618: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022761C: sw          $a0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r4;
    // 0x80227620: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80227624: j           L_802276DC
    // 0x80227628: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
        goto L_802276DC;
    // 0x80227628: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
L_8022762C:
    // 0x8022762C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227630: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227634: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227638: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022763C: bne         $v0, $zero, L_802276DC
    if (ctx->r2 != 0) {
        // 0x80227640: addiu       $a0, $zero, 0x17B
        ctx->r4 = ADD32(0, 0X17B);
            goto L_802276DC;
    }
    // 0x80227640: addiu       $a0, $zero, 0x17B
    ctx->r4 = ADD32(0, 0X17B);
    // 0x80227644: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227648: lw          $v0, 0x1D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D30);
    // 0x8022764C: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x80227650: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227654: lw          $a1, 0x1D30($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1D30);
    // 0x80227658: jal         0x8002A33C
    // 0x8022765C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x8022765C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_11:
    // 0x80227660: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80227664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227668: jal         0x800600F8
    // 0x8022766C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_12;
    // 0x8022766C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    after_12:
    // 0x80227670: j           L_802276DC
    // 0x80227674: nop

        goto L_802276DC;
    // 0x80227674: nop

L_80227678:
    // 0x80227678: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022767C: bne         $v0, $zero, L_80227694
    if (ctx->r2 != 0) {
        // 0x80227680: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80227694;
    }
    // 0x80227680: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80227684:
    // 0x80227684: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80227688: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022768C: j           L_802276DC
    // 0x80227690: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_802276DC;
    // 0x80227690: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80227694:
    // 0x80227694: j           L_802276DC
    // 0x80227698: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_802276DC;
    // 0x80227698: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8022769C:
    // 0x8022769C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802276A0: lw          $a1, 0x1D30($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1D30);
    // 0x802276A4: addiu       $a0, $zero, 0x17D
    ctx->r4 = ADD32(0, 0X17D);
    // 0x802276A8: jal         0x8002A33C
    // 0x802276AC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x802276AC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_13:
    // 0x802276B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802276B4: jal         0x80070050
    // 0x802276B8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_14;
    // 0x802276B8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_14:
    // 0x802276BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802276C0: jal         0x8004CB2C
    // 0x802276C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_15;
    // 0x802276C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x802276C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802276CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276D0: jal         0x80035288
    // 0x802276D4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80035288_10688(rdram, ctx);
        goto after_16;
    // 0x802276D4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_16:
    // 0x802276D8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_802276DC:
    // 0x802276DC: jal         0x8005FB90
    // 0x802276E0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_17;
    // 0x802276E0: nop

    after_17:
    // 0x802276E4: jal         0x80060018
    // 0x802276E8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_18;
    // 0x802276E8: nop

    after_18:
    // 0x802276EC: jal         0x8006072C
    // 0x802276F0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_19;
    // 0x802276F0: nop

    after_19:
    // 0x802276F4: beq         $v0, $zero, L_80227740
    if (ctx->r2 == 0) {
        // 0x802276F8: nop
    
            goto L_80227740;
    }
    // 0x802276F8: nop

    // 0x802276FC: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80227700: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80227704: bne         $v0, $zero, L_80227740
    if (ctx->r2 != 0) {
        // 0x80227708: addiu       $a0, $zero, 0x188
        ctx->r4 = ADD32(0, 0X188);
            goto L_80227740;
    }
    // 0x80227708: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    // 0x8022770C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227710: lw          $a1, 0x1D30($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1D30);
    // 0x80227714: jal         0x8002A33C
    // 0x80227718: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x80227718: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_20:
    // 0x8022771C: jal         0x80061798
    // 0x80227720: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_21;
    // 0x80227720: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x80227724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022772C: jal         0x80034844
    // 0x80227730: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_22;
    // 0x80227730: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_22:
    // 0x80227734: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227738: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8022773C: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
L_80227740:
    // 0x80227740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227744: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227748: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022774C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227750: jr          $ra
    // 0x80227754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E08C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E08C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E090: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E094: jal         0x8004F418
    // 0x8022E098: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022E098: nop

    after_0:
    // 0x8022E09C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0A0: jr          $ra
    // 0x8022E0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E0A8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E0AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E0B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E0B8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E0BC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022E0C0: jal         0x8004DA90
    // 0x8022E0C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022E0C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022E0C8: jal         0x8003E810
    // 0x8022E0CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022E0CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022E0D0: beq         $v0, $zero, L_8022E0E8
    if (ctx->r2 == 0) {
        // 0x8022E0D4: nop
    
            goto L_8022E0E8;
    }
    // 0x8022E0D4: nop

    // 0x8022E0D8: jal         0x8004F418
    // 0x8022E0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022E0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E0E0: j           L_8022E170
    // 0x8022E0E4: nop

        goto L_8022E170;
    // 0x8022E0E4: nop

L_8022E0E8:
    // 0x8022E0E8: jal         0x8003E934
    // 0x8022E0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022E0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E0F0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022E0F4: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022E0F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E0FC: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022E100: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022E104: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E108: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x8022E10C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022E110: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022E114: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E118: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022E11C: lhu         $v1, 0x1A10($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X1A10);
    // 0x8022E120: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8022E124: beq         $v0, $zero, L_8022E144
    if (ctx->r2 == 0) {
        // 0x8022E128: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_8022E144;
    }
    // 0x8022E128: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x8022E12C: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x8022E130: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E134: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022E138: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022E13C: j           L_8022E170
    // 0x8022E140: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022E170;
    // 0x8022E140: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022E144:
    // 0x8022E144: addiu       $v0, $a0, -0x190
    ctx->r2 = ADD32(ctx->r4, -0X190);
    // 0x8022E148: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E14C: beq         $v0, $zero, L_8022E168
    if (ctx->r2 == 0) {
        // 0x8022E150: addiu       $v0, $v1, -0x190
        ctx->r2 = ADD32(ctx->r3, -0X190);
            goto L_8022E168;
    }
    // 0x8022E150: addiu       $v0, $v1, -0x190
    ctx->r2 = ADD32(ctx->r3, -0X190);
    // 0x8022E154: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E158: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022E15C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E160: j           L_8022E170
    // 0x8022E164: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022E170;
    // 0x8022E164: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022E168:
    // 0x8022E168: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8022E16C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_8022E170:
    // 0x8022E170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E174: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E178: jr          $ra
    // 0x8022E17C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E17C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229034_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022903C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229044: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80229048: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022904C: jal         0x8004FA7C
    // 0x80229050: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229050: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80229054: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80229058: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022905C: bne         $v0, $zero, L_80229088
    if (ctx->r2 != 0) {
        // 0x80229060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229088;
    }
    // 0x80229060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229064: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80229068: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022906C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80229070: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229078: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022907C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80229080: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80229084: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80229088:
    // 0x80229088: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022908C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80229090: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229094: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022909C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802290A0: jr          $ra
    // 0x802290A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802290A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C160_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C160: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022C164: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022C168: bne         $v0, $zero, L_8022C188
    if (ctx->r2 != 0) {
        // 0x8022C16C: nop
    
            goto L_8022C188;
    }
    // 0x8022C16C: nop

    // 0x8022C170: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x8022C174: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C178: beq         $v0, $zero, L_8022C1B0
    if (ctx->r2 == 0) {
        // 0x8022C17C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C1B0;
    }
    // 0x8022C17C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C180: j           L_8022C1B0
    // 0x8022C184: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8022C1B0;
    // 0x8022C184: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022C188:
    // 0x8022C188: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x8022C18C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C190: beq         $v0, $zero, L_8022C1B0
    if (ctx->r2 == 0) {
        // 0x8022C194: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C1B0;
    }
    // 0x8022C194: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C198: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8022C19C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022C1A0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022C1A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C1A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C1AC: sh          $v0, 0x32E($a0)
    MEM_H(0X32E, ctx->r4) = ctx->r2;
L_8022C1B0:
    // 0x8022C1B0: jr          $ra
    // 0x8022C1B4: nop

    TRACE_RETURN()
    return;
    // 0x8022C1B4: nop

;}
RECOMP_FUNC void func_80225560_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225560: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225564: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022556C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225570: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225578: beq         $v1, $v0, L_802255C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022557C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802255C0;
    }
    // 0x8022557C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225580: beq         $v0, $zero, L_802255F4
    if (ctx->r2 == 0) {
        // 0x80225584: nop
    
            goto L_802255F4;
    }
    // 0x80225584: nop

    // 0x80225588: bne         $v1, $zero, L_802255F4
    if (ctx->r3 != 0) {
        // 0x8022558C: nop
    
            goto L_802255F4;
    }
    // 0x8022558C: nop

    // 0x80225590: jal         0x8006033C
    // 0x80225594: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225594: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x80225598: bne         $v0, $zero, L_802255B4
    if (ctx->r2 != 0) {
        // 0x8022559C: nop
    
            goto L_802255B4;
    }
    // 0x8022559C: nop

    // 0x802255A0: jal         0x80060690
    // 0x802255A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802255A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x802255A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255AC: j           L_802255F0
    // 0x802255B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802255F0;
    // 0x802255B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802255B4:
    // 0x802255B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255B8: j           L_802255F0
    // 0x802255BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802255F0;
    // 0x802255BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802255C0:
    // 0x802255C0: jal         0x8006033C
    // 0x802255C4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802255C4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_2:
    // 0x802255C8: beq         $v0, $zero, L_802255F4
    if (ctx->r2 == 0) {
        // 0x802255CC: nop
    
            goto L_802255F4;
    }
    // 0x802255CC: nop

    // 0x802255D0: jal         0x800712C4
    // 0x802255D4: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_3;
    // 0x802255D4: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_3:
    // 0x802255D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802255DC: addiu       $a0, $a0, 0xBD0
    ctx->r4 = ADD32(ctx->r4, 0XBD0);
    // 0x802255E0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802255E4: jal         0x8006100C
    // 0x802255E8: addiu       $a1, $a1, 0xBF8
    ctx->r5 = ADD32(ctx->r5, 0XBF8);
    func_8006100C_3C40C(rdram, ctx);
        goto after_4;
    // 0x802255E8: addiu       $a1, $a1, 0xBF8
    ctx->r5 = ADD32(ctx->r5, 0XBF8);
    after_4:
    // 0x802255EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802255F0:
    // 0x802255F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255F4:
    // 0x802255F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802255F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802255FC: jr          $ra
    // 0x80225600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CAFC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CB00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022CB04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CB0C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022CB10: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022CB14: beq         $v0, $zero, L_8022CB9C
    if (ctx->r2 == 0) {
        // 0x8022CB18: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022CB9C;
    }
    // 0x8022CB18: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022CB1C: lb          $v0, 0x330($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X330);
    // 0x8022CB20: bne         $v0, $zero, L_8022CB3C
    if (ctx->r2 != 0) {
        // 0x8022CB24: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022CB3C;
    }
    // 0x8022CB24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CB28: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022CB2C: jal         0x8002A33C
    // 0x8022CB30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022CB30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022CB34: j           L_8022CB40
    // 0x8022CB38: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_8022CB40;
    // 0x8022CB38: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8022CB3C:
    // 0x8022CB3C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022CB40:
    // 0x8022CB40: sb          $v0, 0x330($s0)
    MEM_B(0X330, ctx->r16) = ctx->r2;
    // 0x8022CB44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CB48: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022CB4C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CB50: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CB54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022CB58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022CB5C: jal         0x8004DBA0
    // 0x8022CB60: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_1;
    // 0x8022CB60: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    after_1:
    // 0x8022CB64: jal         0x80040F30
    // 0x8022CB68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022CB68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CB6C: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022CB70: bne         $v0, $zero, L_8022CB8C
    if (ctx->r2 != 0) {
        // 0x8022CB74: nop
    
            goto L_8022CB8C;
    }
    // 0x8022CB74: nop

    // 0x8022CB78: jal         0x8003E934
    // 0x8022CB7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022CB7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CB80: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CB84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB88: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022CB8C:
    // 0x8022CB8C: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022CB90: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CB94: j           L_8022CBAC
    // 0x8022CB98: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
        goto L_8022CBAC;
    // 0x8022CB98: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_8022CB9C:
    // 0x8022CB9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CBA4: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022CBA8: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
L_8022CBAC:
    // 0x8022CBAC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022CBB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022CBB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022CBB8: jr          $ra
    // 0x8022CBBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CBBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225630_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225638: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022563C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225640: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225644: bne         $v0, $zero, L_80225668
    if (ctx->r2 != 0) {
        // 0x80225648: nop
    
            goto L_80225668;
    }
    // 0x80225648: nop

    // 0x8022564C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225650: jal         0x800607C4
    // 0x80225654: addiu       $a0, $a0, 0xB80
    ctx->r4 = ADD32(ctx->r4, 0XB80);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225654: addiu       $a0, $a0, 0xB80
    ctx->r4 = ADD32(ctx->r4, 0XB80);
    after_0:
    // 0x80225658: jal         0x800712C4
    // 0x8022565C: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_1;
    // 0x8022565C: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_1:
    // 0x80225660: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225664: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225668:
    // 0x80225668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022566C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225670: jr          $ra
    // 0x80225674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE38_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE38: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022AE3C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022AE40: jr          $ra
    // 0x8022AE44: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022AE44: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80229574_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229578: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022957C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229580: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229584: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229588: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022958C: bne         $v0, $zero, L_802295CC
    if (ctx->r2 != 0) {
        // 0x80229590: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802295CC;
    }
    // 0x80229590: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229594: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80229598: bne         $v0, $zero, L_802295C0
    if (ctx->r2 != 0) {
        // 0x8022959C: nop
    
            goto L_802295C0;
    }
    // 0x8022959C: nop

    // 0x802295A0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x802295A4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x802295A8: bne         $v1, $v0, L_802295C0
    if (ctx->r3 != ctx->r2) {
        // 0x802295AC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802295C0;
    }
    // 0x802295AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802295B0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x802295B4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802295B8: j           L_802295FC
    // 0x802295BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_802295FC;
    // 0x802295BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_802295C0:
    // 0x802295C0: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x802295C4: beq         $v0, $zero, L_8022962C
    if (ctx->r2 == 0) {
        // 0x802295C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022962C;
    }
    // 0x802295C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802295CC:
    // 0x802295CC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802295D0: bne         $v0, $zero, L_8022962C
    if (ctx->r2 != 0) {
        // 0x802295D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022962C;
    }
    // 0x802295D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802295D8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x802295DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295E0: bne         $v1, $v0, L_8022962C
    if (ctx->r3 != ctx->r2) {
        // 0x802295E4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022962C;
    }
    // 0x802295E4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x802295E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802295EC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802295F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802295F4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802295F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_802295FC:
    // 0x802295FC: jal         0x8009A3B4
    // 0x80229600: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229600: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229604: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80229608: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022960C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80229610: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229614: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229618: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022961C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80229620: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80229624: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80229628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022962C:
    // 0x8022962C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229634: jal         0x8004DA90
    // 0x80229638: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80229638: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022963C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80229640: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229644: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80229648: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022964C: bne         $v0, $zero, L_8022967C
    if (ctx->r2 != 0) {
        // 0x80229650: nop
    
            goto L_8022967C;
    }
    // 0x80229650: nop

    // 0x80229654: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229658: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022965C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229660: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229664: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80229668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022966C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229670: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80229674: j           L_802296CC
    // 0x80229678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802296CC;
    // 0x80229678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022967C:
    // 0x8022967C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80229680: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229684: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80229688: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022968C: bne         $v0, $zero, L_8022969C
    if (ctx->r2 != 0) {
        // 0x80229690: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022969C;
    }
    // 0x80229690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229694: j           L_802296CC
    // 0x80229698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802296CC;
    // 0x80229698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022969C:
    // 0x8022969C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802296A0: jal         0x8022AED4
    // 0x802296A4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_2;
    // 0x802296A4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x802296A8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802296AC: beq         $v0, $zero, L_802296D0
    if (ctx->r2 == 0) {
        // 0x802296B0: nop
    
            goto L_802296D0;
    }
    // 0x802296B0: nop

    // 0x802296B4: jal         0x8022AE38
    // 0x802296B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_3;
    // 0x802296B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x802296BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802296C0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802296C4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802296C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802296CC:
    // 0x802296CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802296D0:
    // 0x802296D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802296D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802296D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802296DC: jr          $ra
    // 0x802296E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802296E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022983C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022983C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229844: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022984C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80229850: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229854: jal         0x8004FA7C
    // 0x80229858: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229858: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022985C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80229860: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80229864: bne         $v0, $zero, L_802298B0
    if (ctx->r2 != 0) {
        // 0x80229868: nop
    
            goto L_802298B0;
    }
    // 0x80229868: nop

    // 0x8022986C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80229870: beq         $v0, $zero, L_80229884
    if (ctx->r2 == 0) {
        // 0x80229874: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229884;
    }
    // 0x80229874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229878: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022987C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229880: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80229884:
    // 0x80229884: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80229888: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022988C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80229890: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229894: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022989C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802298A0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802298A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802298A8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x802298AC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_802298B0:
    // 0x802298B0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802298B4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802298B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802298BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802298C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802298C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802298C8: jr          $ra
    // 0x802298CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225708_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022570C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225718: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022571C: bne         $v0, $zero, L_80225740
    if (ctx->r2 != 0) {
        // 0x80225720: nop
    
            goto L_80225740;
    }
    // 0x80225720: nop

    // 0x80225724: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225728: jal         0x800607C4
    // 0x8022572C: addiu       $a0, $a0, 0xB90
    ctx->r4 = ADD32(ctx->r4, 0XB90);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022572C: addiu       $a0, $a0, 0xB90
    ctx->r4 = ADD32(ctx->r4, 0XB90);
    after_0:
    // 0x80225730: jal         0x800712C4
    // 0x80225734: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_1;
    // 0x80225734: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_1:
    // 0x80225738: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022573C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225740:
    // 0x80225740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225744: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225748: jr          $ra
    // 0x8022574C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022574C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6CC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B6D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B6D8: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022B6DC: bne         $a1, $zero, L_8022B70C
    if (ctx->r5 != 0) {
        // 0x8022B6E0: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022B70C;
    }
    // 0x8022B6E0: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022B6E4: jal         0x800A3450
    // 0x8022B6E8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B6E8: nop

    after_0:
    // 0x8022B6EC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022B6F0: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022B6F4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022B6F8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022B6FC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B700: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022B704: j           L_8022B730
    // 0x8022B708: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022B730;
    // 0x8022B708: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022B70C:
    // 0x8022B70C: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8022B710: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022B714: bnel        $v0, $zero, L_8022B71C
    if (ctx->r2 != 0) {
        // 0x8022B718: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022B71C;
    }
    goto skip_0;
    // 0x8022B718: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022B71C:
    // 0x8022B71C: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8022B720: beq         $v0, $zero, L_8022B730
    if (ctx->r2 == 0) {
        // 0x8022B724: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022B730;
    }
    // 0x8022B724: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B728: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B72C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022B730:
    // 0x8022B730: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022B734: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x8022B738: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022B73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B740: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B744: jr          $ra
    // 0x8022B748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
