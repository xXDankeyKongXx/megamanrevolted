#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228FCC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228FD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228FD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228FDC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228FE0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228FE4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228FE8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228FEC: jal         0x8004F820
    // 0x80228FF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228FF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228FF4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228FF8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80228FFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229000: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229004: bgez        $a0, L_80229028
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80229008: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229028;
    }
    // 0x80229008: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022900C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229010: jal         0x80229D48
    // 0x80229014: nop

    func_80229D48_ovl12(rdram, ctx);
        goto after_1;
    // 0x80229014: nop

    after_1:
    // 0x80229018: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022901C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229020: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80229024: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80229028:
    // 0x80229028: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022902C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80229030: bne         $v0, $zero, L_80229054
    if (ctx->r2 != 0) {
        // 0x80229034: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80229054;
    }
    // 0x80229034: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80229038: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022903C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229040: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80229044: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80229048: jal         0x80229D48
    // 0x8022904C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80229D48_ovl12(rdram, ctx);
        goto after_2;
    // 0x8022904C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229050: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229054:
    // 0x80229054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229058: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022905C: jr          $ra
    // 0x80229060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CB44_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CB48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CB4C: jal         0x8004F418
    // 0x8022CB50: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022CB50: nop

    after_0:
    // 0x8022CB54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB58: jr          $ra
    // 0x8022CB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AEDC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AEDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AEE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022AEE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AEE8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022AEEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022AEF0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AEF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022AEF8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022AEFC: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022AF00: beq         $v0, $zero, L_8022B37C
    if (ctx->r2 == 0) {
        // 0x8022AF04: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B37C;
    }
    // 0x8022AF04: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022AF08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AF0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AF10: addu        $at, $at, $v0
    gpr jr_addend_8022AF18 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AF14: lw          $v0, 0x73E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X73E0);
    // 0x8022AF18: jr          $v0
    // 0x8022AF1C: nop

    switch (jr_addend_8022AF18 >> 2) {
        case 0: goto L_8022AF20; break;
        case 1: goto L_8022B004; break;
        case 2: goto L_8022B0AC; break;
        case 3: goto L_8022B0F0; break;
        case 4: goto L_8022B16C; break;
        case 5: goto L_8022B214; break;
        case 6: goto L_8022B290; break;
        case 7: goto L_8022B37C; break;
        case 8: goto L_8022B33C; break;
        default: switch_error(__func__, 0x8022AF18, 0x802373E0);
    }
    // 0x8022AF1C: nop

L_8022AF20:
    // 0x8022AF20: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AF24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AF2C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022AF30: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AF34: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AF38: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022AF3C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022AF40: jal         0x8004D5D4
    // 0x8022AF44: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AF44: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022AF48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AF50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AF54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AF58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AF5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AF60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022AF64: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022AF68: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x8022AF6C: jal         0x8003E934
    // 0x8022AF70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022AF70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022AF74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AF7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF80: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AF84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF88: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AF8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AF90: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022AF94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AF98: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AF9C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AFA0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022AFA4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022AFA8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022AFAC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022AFB0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022AFB4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022AFB8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022AFBC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022AFC0: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022AFC4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022AFC8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022AFCC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022AFD0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022AFD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022AFD8: jal         0x80050294
    // 0x8022AFDC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022AFDC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022AFE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFE4: jal         0x8022B6F8
    // 0x8022AFE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B6F8_ovl12(rdram, ctx);
        goto after_3;
    // 0x8022AFE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022AFEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFF0: jal         0x8022B6D8
    // 0x8022AFF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B6D8_ovl12(rdram, ctx);
        goto after_4;
    // 0x8022AFF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8022AFF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AFFC: j           L_8022B37C
    // 0x8022B000: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B37C;
    // 0x8022B000: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B004:
    // 0x8022B004: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022B008: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022B00C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B010: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B014: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B018: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B01C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022B020: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B024: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B028: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B02C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022B030: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022B034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B038: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022B03C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B040: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B044: jal         0x8022B8B8
    // 0x8022B048: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8022B8B8_ovl12(rdram, ctx);
        goto after_5;
    // 0x8022B048: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022B04C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B050: bne         $v0, $zero, L_8022B380
    if (ctx->r2 != 0) {
        // 0x8022B054: nop
    
            goto L_8022B380;
    }
    // 0x8022B054: nop

    // 0x8022B058: jal         0x8003E934
    // 0x8022B05C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022B05C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022B060: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B064: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B068: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B06C: beq         $a1, $zero, L_8022B07C
    if (ctx->r5 == 0) {
        // 0x8022B070: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022B07C;
    }
    // 0x8022B070: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B074: jal         0x8022B59C
    // 0x8022B078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B59C_ovl12(rdram, ctx);
        goto after_7;
    // 0x8022B078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022B07C:
    // 0x8022B07C: jal         0x8022B61C
    // 0x8022B080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B61C_ovl12(rdram, ctx);
        goto after_8;
    // 0x8022B080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022B084: jal         0x8005044C
    // 0x8022B088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x8022B088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022B08C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B090: bne         $v0, $zero, L_8022B0A4
    if (ctx->r2 != 0) {
        // 0x8022B094: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B0A4;
    }
    // 0x8022B094: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B098: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B09C: j           L_8022B37C
    // 0x8022B0A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B37C;
    // 0x8022B0A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B0A4:
    // 0x8022B0A4: j           L_8022B37C
    // 0x8022B0A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B37C;
    // 0x8022B0A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B0AC:
    // 0x8022B0AC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B0B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B0B4: bne         $v1, $v0, L_8022B0D8
    if (ctx->r3 != ctx->r2) {
        // 0x8022B0B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B0D8;
    }
    // 0x8022B0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0BC: jal         0x8022B59C
    // 0x8022B0C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B59C_ovl12(rdram, ctx);
        goto after_10;
    // 0x8022B0C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x8022B0C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B0C8: jal         0x800A3450
    // 0x8022B0CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8022B0CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022B0D0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022B0D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B0D8:
    // 0x8022B0D8: jal         0x8022B61C
    // 0x8022B0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B61C_ovl12(rdram, ctx);
        goto after_12;
    // 0x8022B0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022B0E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B0E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B0E8: j           L_8022B37C
    // 0x8022B0EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B37C;
    // 0x8022B0EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B0F0:
    // 0x8022B0F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B0F4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022B0F8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022B0FC: jal         0x8004F820
    // 0x8022B100: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x8022B100: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x8022B104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B108: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022B10C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B110: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B114: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B118: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022B11C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B120: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B124: jal         0x8022B8B8
    // 0x8022B128: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8022B8B8_ovl12(rdram, ctx);
        goto after_14;
    // 0x8022B128: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x8022B12C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B130: bne         $v0, $zero, L_8022B380
    if (ctx->r2 != 0) {
        // 0x8022B134: nop
    
            goto L_8022B380;
    }
    // 0x8022B134: nop

    // 0x8022B138: jal         0x8003E934
    // 0x8022B13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x8022B13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8022B140: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B144: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B148: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B14C: beq         $a1, $zero, L_8022B15C
    if (ctx->r5 == 0) {
        // 0x8022B150: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022B15C;
    }
    // 0x8022B150: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B154: jal         0x8022B59C
    // 0x8022B158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B59C_ovl12(rdram, ctx);
        goto after_16;
    // 0x8022B158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_8022B15C:
    // 0x8022B15C: jal         0x8022B61C
    // 0x8022B160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B61C_ovl12(rdram, ctx);
        goto after_17;
    // 0x8022B160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x8022B164: j           L_8022B374
    // 0x8022B168: nop

        goto L_8022B374;
    // 0x8022B168: nop

L_8022B16C:
    // 0x8022B16C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022B170: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B174: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x8022B178: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B17C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B180: beq         $v1, $zero, L_8022B1D8
    if (ctx->r3 == 0) {
        // 0x8022B184: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_8022B1D8;
    }
    // 0x8022B184: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022B188: jal         0x8002A33C
    // 0x8022B18C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x8022B18C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x8022B190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B194: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022B198: jal         0x80050294
    // 0x8022B19C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x8022B19C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x8022B1A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B1A4: jal         0x8022B6F8
    // 0x8022B1A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B6F8_ovl12(rdram, ctx);
        goto after_20;
    // 0x8022B1A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8022B1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B1B0: jal         0x8022B6D8
    // 0x8022B1B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B6D8_ovl12(rdram, ctx);
        goto after_21;
    // 0x8022B1B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x8022B1B8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B1BC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x8022B1C0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022B1C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B1C8: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8022B1CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B1D0: j           L_8022B1E0
    // 0x8022B1D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B1E0;
    // 0x8022B1D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B1D8:
    // 0x8022B1D8: jal         0x8005044C
    // 0x8022B1DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x8022B1DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_8022B1E0:
    // 0x8022B1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B1E4: jal         0x8022B8B8
    // 0x8022B1E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022B8B8_ovl12(rdram, ctx);
        goto after_23;
    // 0x8022B1E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x8022B1EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B1F0: bne         $v0, $zero, L_8022B380
    if (ctx->r2 != 0) {
        // 0x8022B1F4: nop
    
            goto L_8022B380;
    }
    // 0x8022B1F4: nop

    // 0x8022B1F8: jal         0x8003E934
    // 0x8022B1FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8022B1FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x8022B200: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B204: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B208: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B20C: j           L_8022B278
    // 0x8022B210: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022B278;
    // 0x8022B210: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022B214:
    // 0x8022B214: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B218: bgez        $v0, L_8022B254
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B21C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B254;
    }
    // 0x8022B21C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B220: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022B224: jal         0x80050294
    // 0x8022B228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x8022B228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x8022B22C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B230: jal         0x8022B6F8
    // 0x8022B234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B6F8_ovl12(rdram, ctx);
        goto after_26;
    // 0x8022B234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x8022B238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B23C: jal         0x8022B6D8
    // 0x8022B240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B6D8_ovl12(rdram, ctx);
        goto after_27;
    // 0x8022B240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x8022B244: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B24C: j           L_8022B25C
    // 0x8022B250: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B25C;
    // 0x8022B250: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B254:
    // 0x8022B254: jal         0x8005044C
    // 0x8022B258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x8022B258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_8022B25C:
    // 0x8022B25C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B260: jal         0x8022B8B8
    // 0x8022B264: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022B8B8_ovl12(rdram, ctx);
        goto after_29;
    // 0x8022B264: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x8022B268: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B26C: bne         $v0, $zero, L_8022B380
    if (ctx->r2 != 0) {
        // 0x8022B270: nop
    
            goto L_8022B380;
    }
    // 0x8022B270: nop

    // 0x8022B274: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022B278:
    // 0x8022B278: beql        $a1, $zero, L_8022B380
    if (ctx->r5 == 0) {
        // 0x8022B27C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8022B380;
    }
    goto skip_0;
    // 0x8022B27C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x8022B280: jal         0x8022B59C
    // 0x8022B284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B59C_ovl12(rdram, ctx);
        goto after_30;
    // 0x8022B284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x8022B288: j           L_8022B380
    // 0x8022B28C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_8022B380;
    // 0x8022B28C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022B290:
    // 0x8022B290: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B294: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022B298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B29C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B2A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B2A4: jal         0x8003E934
    // 0x8022B2A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x8022B2A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8022B2AC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B2B0: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x8022B2B4: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B2B8: beq         $v0, $zero, L_8022B2CC
    if (ctx->r2 == 0) {
        // 0x8022B2BC: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8022B2CC;
    }
    // 0x8022B2BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022B2C0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022B2C4: j           L_8022B2E4
    // 0x8022B2C8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022B2E4;
    // 0x8022B2C8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B2CC:
    // 0x8022B2CC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022B2D0: beq         $v0, $zero, L_8022B2E0
    if (ctx->r2 == 0) {
        // 0x8022B2D4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022B2E0;
    }
    // 0x8022B2D4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B2D8: j           L_8022B2E4
    // 0x8022B2DC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022B2E4;
    // 0x8022B2DC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B2E0:
    // 0x8022B2E0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022B2E4:
    // 0x8022B2E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2E8: jal         0x8022B8B8
    // 0x8022B2EC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022B8B8_ovl12(rdram, ctx);
        goto after_32;
    // 0x8022B2EC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x8022B2F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B2F4: bne         $v0, $zero, L_8022B380
    if (ctx->r2 != 0) {
        // 0x8022B2F8: nop
    
            goto L_8022B380;
    }
    // 0x8022B2F8: nop

    // 0x8022B2FC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B300: bne         $a1, $zero, L_8022B318
    if (ctx->r5 != 0) {
        // 0x8022B304: nop
    
            goto L_8022B318;
    }
    // 0x8022B304: nop

    // 0x8022B308: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B30C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022B310: bne         $v0, $zero, L_8022B324
    if (ctx->r2 != 0) {
        // 0x8022B314: nop
    
            goto L_8022B324;
    }
    // 0x8022B314: nop

L_8022B318:
    // 0x8022B318: jal         0x8022B59C
    // 0x8022B31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B59C_ovl12(rdram, ctx);
        goto after_33;
    // 0x8022B31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x8022B320: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022B324:
    // 0x8022B324: jal         0x8022B84C
    // 0x8022B328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B84C_ovl12(rdram, ctx);
        goto after_34;
    // 0x8022B328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022B32C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B330: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B334: j           L_8022B374
    // 0x8022B338: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B374;
    // 0x8022B338: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B33C:
    // 0x8022B33C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x8022B340: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B344: jal         0x8004FA7C
    // 0x8022B348: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x8022B348: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x8022B34C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B350: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B354: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B358: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022B35C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B360: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B364: bne         $v0, $zero, L_8022B374
    if (ctx->r2 != 0) {
        // 0x8022B368: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B374;
    }
    // 0x8022B368: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B36C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B370: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B374:
    // 0x8022B374: jal         0x8005044C
    // 0x8022B378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x8022B378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8022B37C:
    // 0x8022B37C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022B380:
    // 0x8022B380: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B384: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B388: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B38C: jr          $ra
    // 0x8022B390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D378_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D37C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022D380: jr          $ra
    // 0x8022D384: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8022D384: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80231F58_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80231F5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231F60: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80231F64: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80231F68: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80231F6C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80231F70: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231F74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231F78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231F7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231F80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231F84: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80231F88: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231F8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231F90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231F94: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231F98: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80231F9C: blez        $v0, L_802321D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231FA0: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_802321D0;
    }
    // 0x80231FA0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80231FA4: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x80231FA8: addiu       $s7, $s7, -0x2100
    ctx->r23 = ADD32(ctx->r23, -0X2100);
    // 0x80231FAC: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
L_80231FB0:
    // 0x80231FB0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231FB4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80231FB8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231FBC: lbu         $v1, 0x76F0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X76F0);
    // 0x80231FC0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80231FC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231FC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231FCC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231FD0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231FD4: addu        $s2, $v0, $s7
    ctx->r18 = ADD32(ctx->r2, ctx->r23);
    // 0x80231FD8: lbu         $v0, 0xDF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XDF);
    // 0x80231FDC: andi        $v0, $v0, 0xF9
    ctx->r2 = ctx->r2 & 0XF9;
    // 0x80231FE0: sb          $v0, 0xDF($s2)
    MEM_B(0XDF, ctx->r18) = ctx->r2;
    // 0x80231FE4: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80231FE8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231FEC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231FF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231FF4: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231FF8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80231FFC: blez        $v0, L_80232070
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80232000: addiu       $s1, $s2, 0xD0
        ctx->r17 = ADD32(ctx->r18, 0XD0);
            goto L_80232070;
    }
    // 0x80232000: addiu       $s1, $s2, 0xD0
    ctx->r17 = ADD32(ctx->r18, 0XD0);
    // 0x80232004: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80232008: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023200C:
    // 0x8023200C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232010: beq         $s3, $v0, L_80232040
    if (ctx->r19 == ctx->r2) {
        // 0x80232014: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80232040;
    }
    // 0x80232014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232018: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023201C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232020: lbu         $v0, 0x76F0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X76F0);
    // 0x80232024: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x80232028: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023202C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80232030: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80232034: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80232038: jal         0x802321FC
    // 0x8023203C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    func_802321FC_ovl12(rdram, ctx);
        goto after_0;
    // 0x8023203C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    after_0:
L_80232040:
    // 0x80232040: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80232044: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x80232048: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8023204C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232050: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232058: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x8023205C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232060: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80232064: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232068: bne         $v1, $zero, L_8023200C
    if (ctx->r3 != 0) {
        // 0x8023206C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023200C;
    }
    // 0x8023206C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80232070:
    // 0x80232070: lbu         $a0, 0xF($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XF);
    // 0x80232074: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80232078: beq         $v0, $zero, L_802321A0
    if (ctx->r2 == 0) {
        // 0x8023207C: andi        $v1, $a0, 0x50
        ctx->r3 = ctx->r4 & 0X50;
            goto L_802321A0;
    }
    // 0x8023207C: andi        $v1, $a0, 0x50
    ctx->r3 = ctx->r4 & 0X50;
    // 0x80232080: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80232084: bne         $v1, $v0, L_802320B4
    if (ctx->r3 != ctx->r2) {
        // 0x80232088: nop
    
            goto L_802320B4;
    }
    // 0x80232088: nop

    // 0x8023208C: lh          $v0, 0x1C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1C);
    // 0x80232090: blez        $v0, L_802320A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80232094: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802320A4;
    }
    // 0x80232094: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232098: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023209C: j           L_802321A0
    // 0x802320A0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
        goto L_802321A0;
    // 0x802320A0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
L_802320A4:
    // 0x802320A4: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x802320A8: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802320AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802320B0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
L_802320B4:
    // 0x802320B4: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x802320B8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802320BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802320C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802320C4: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x802320C8: blez        $v0, L_80232150
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802320CC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80232150;
    }
    // 0x802320CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802320D0: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x802320D4: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802320D8: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_802320DC:
    // 0x802320DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802320E0: beq         $s3, $v0, L_80232120
    if (ctx->r19 == ctx->r2) {
        // 0x802320E4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80232120;
    }
    // 0x802320E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802320E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802320EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802320F0: lbu         $v0, 0x76F0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X76F0);
    // 0x802320F4: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x802320F8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802320FC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80232100: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80232104: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80232108: jal         0x8023241C
    // 0x8023210C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    func_8023241C_ovl12(rdram, ctx);
        goto after_1;
    // 0x8023210C: addu        $a1, $a1, $s7
    ctx->r5 = ADD32(ctx->r5, ctx->r23);
    after_1:
    // 0x80232110: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80232114: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80232118: beql        $v0, $zero, L_802321A0
    if (ctx->r2 == 0) {
        // 0x8023211C: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_802321A0;
    }
    goto skip_0;
    // 0x8023211C: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    skip_0:
L_80232120:
    // 0x80232120: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80232124: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x80232128: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8023212C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232130: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232134: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232138: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x8023213C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232140: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80232144: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232148: bne         $v1, $zero, L_802320DC
    if (ctx->r3 != 0) {
        // 0x8023214C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_802320DC;
    }
    // 0x8023214C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80232150:
    // 0x80232150: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80232154: beql        $v0, $zero, L_802321A0
    if (ctx->r2 == 0) {
        // 0x80232158: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_802321A0;
    }
    goto skip_1;
    // 0x80232158: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    skip_1:
    // 0x8023215C: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80232160: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232164: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80232168: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023216C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232170: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80232174: bne         $v0, $zero, L_802321A0
    if (ctx->r2 != 0) {
        // 0x80232178: nop
    
            goto L_802321A0;
    }
    // 0x80232178: nop

    // 0x8023217C: lbu         $v1, 0xF($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XF);
    // 0x80232180: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80232184: bne         $v0, $zero, L_80232194
    if (ctx->r2 != 0) {
        // 0x80232188: sh          $zero, 0x1C($s1)
        MEM_H(0X1C, ctx->r17) = 0;
            goto L_80232194;
    }
    // 0x80232188: sh          $zero, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = 0;
    // 0x8023218C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80232190: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_80232194:
    // 0x80232194: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80232198: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x8023219C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_802321A0:
    // 0x802321A0: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x802321A4: addiu       $v1, $s6, 0x1
    ctx->r3 = ADD32(ctx->r22, 0X1);
    // 0x802321A8: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x802321AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802321B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802321B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802321B8: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x802321BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802321C0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802321C4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802321C8: bne         $v1, $zero, L_80231FB0
    if (ctx->r3 != 0) {
        // 0x802321CC: sll         $v0, $s6, 16
        ctx->r2 = S32(ctx->r22 << 16);
            goto L_80231FB0;
    }
    // 0x802321CC: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
L_802321D0:
    // 0x802321D0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802321D4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802321D8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802321DC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802321E0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802321E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802321E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802321EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802321F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802321F4: jr          $ra
    // 0x802321F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802321F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022FFE0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022FFE4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022FFE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FFEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022FFF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FFF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FFF8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022FFFC: jal         0x80047284
    // 0x80230000: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x80230000: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230004: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230008: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023000C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230010: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230014: lw          $v0, 0x6BC0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6BC0);
    // 0x80230018: jalr        $v0
    // 0x8023001C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023001C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230020: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80230024: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230028: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8023002C: jal         0x8009A3B4
    // 0x80230030: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230030: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230034: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230038: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8023003C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80230040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230044: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80230048: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8023004C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80230050: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230054: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x80230058: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023005C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80230060: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230064: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230068: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023006C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80230070: jal         0x80051E18
    // 0x80230074: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80230074: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80230078: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8023007C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80230080: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230084: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230088: jr          $ra
    // 0x8023008C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023008C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80231EE8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231EE8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80231EEC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231EF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231EF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231EF8: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231EFC: blez        $v0, L_80231F50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231F00: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80231F50;
    }
    // 0x80231F00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231F04: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80231F08:
    // 0x80231F08: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80231F0C: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x80231F10: lbu         $v0, 0x14($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X14);
    // 0x80231F14: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231F18: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231F1C: sb          $v0, 0x76F0($at)
    MEM_B(0X76F0, ctx->r1) = ctx->r2;
    // 0x80231F20: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80231F24: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80231F28: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80231F2C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80231F30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231F34: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231F38: lh          $v1, 0x6C60($at)
    ctx->r3 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231F3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231F40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231F44: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80231F48: bne         $v0, $zero, L_80231F08
    if (ctx->r2 != 0) {
        // 0x80231F4C: sll         $v1, $a1, 16
        ctx->r3 = S32(ctx->r5 << 16);
            goto L_80231F08;
    }
    // 0x80231F4C: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80231F50:
    // 0x80231F50: jr          $ra
    // 0x80231F54: nop

    TRACE_RETURN()
    return;
    // 0x80231F54: nop

;}
RECOMP_FUNC void func_8022AD64_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD64: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AD68: lbu         $v1, -0x3A4C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4C);
    // 0x8022AD6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD70: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022AD74: bne         $v1, $v0, L_8022AD8C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AD78: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022AD8C;
    }
    // 0x8022AD78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AD7C: jal         0x8004F418
    // 0x8022AD80: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022AD80: nop

    after_0:
    // 0x8022AD84: j           L_8022ADA8
    // 0x8022AD88: nop

        goto L_8022ADA8;
    // 0x8022AD88: nop

L_8022AD8C:
    // 0x8022AD8C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022AD90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AD94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AD98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AD9C: lw          $v0, 0x65C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65C0);
    // 0x8022ADA0: jalr        $v0
    // 0x8022ADA4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022ADA4: nop

    after_1:
L_8022ADA8:
    // 0x8022ADA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADAC: jr          $ra
    // 0x8022ADB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ADB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B59C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B5A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B5A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B5A8: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022B5AC: bne         $a1, $zero, L_8022B5DC
    if (ctx->r5 != 0) {
        // 0x8022B5B0: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022B5DC;
    }
    // 0x8022B5B0: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022B5B4: jal         0x800A3450
    // 0x8022B5B8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B5B8: nop

    after_0:
    // 0x8022B5BC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022B5C0: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022B5C4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022B5C8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022B5CC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B5D0: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022B5D4: j           L_8022B600
    // 0x8022B5D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022B600;
    // 0x8022B5D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022B5DC:
    // 0x8022B5DC: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8022B5E0: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022B5E4: bnel        $v0, $zero, L_8022B5EC
    if (ctx->r2 != 0) {
        // 0x8022B5E8: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022B5EC;
    }
    goto skip_0;
    // 0x8022B5E8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022B5EC:
    // 0x8022B5EC: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8022B5F0: beq         $v0, $zero, L_8022B600
    if (ctx->r2 == 0) {
        // 0x8022B5F4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022B600;
    }
    // 0x8022B5F4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B5F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B5FC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022B600:
    // 0x8022B600: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022B604: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x8022B608: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022B60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B614: jr          $ra
    // 0x8022B618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F47C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F47C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F480: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F484: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F488: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022F48C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F490: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022F494: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F498: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F49C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F4A0: jal         0x8009A3B4
    // 0x8022F4A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F4A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F4A8: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022F4AC: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022F4B0: jal         0x8009A3B4
    // 0x8022F4B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F4B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F4B8: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022F4BC: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x8022F4C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F4C4: jal         0x8009A3B4
    // 0x8022F4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F4CC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F4D0: lhu         $a1, 0x44($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X44);
    // 0x8022F4D4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022F4D8: lhu         $a2, 0x46($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X46);
    // 0x8022F4DC: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x8022F4E0: lhu         $a3, 0x48($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X48);
    // 0x8022F4E4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022F4E8: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022F4EC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022F4F0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022F4F4: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022F4F8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022F4FC: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022F500: sh          $a0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r4;
    // 0x8022F504: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022F508: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022F50C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F510: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F514: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022F518: slti        $a1, $a1, -0x257
    ctx->r5 = SIGNED(ctx->r5) < -0X257 ? 1 : 0;
    // 0x8022F51C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022F520: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022F524: beq         $a1, $zero, L_8022F53C
    if (ctx->r5 == 0) {
        // 0x8022F528: sw          $a0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r4;
            goto L_8022F53C;
    }
    // 0x8022F528: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022F52C: jal         0x8004F4F8
    // 0x8022F530: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8022F530: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022F534: j           L_8022F58C
    // 0x8022F538: nop

        goto L_8022F58C;
    // 0x8022F538: nop

L_8022F53C:
    // 0x8022F53C: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8022F540: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F544: jal         0x8009A3B4
    // 0x8022F548: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F548: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022F54C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F550: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022F554: jal         0x80031600
    // 0x8022F558: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x8022F558: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022F55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F560: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F564: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F568: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F56C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F570: jal         0x80031DA8
    // 0x8022F574: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8022F574: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022F578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F57C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022F580: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F584: jal         0x8003B564
    // 0x8022F588: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022F588: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022F58C:
    // 0x8022F58C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F590: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F594: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F598: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F59C: jr          $ra
    // 0x8022F5A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F5A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C364_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C368: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022C36C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C370: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x8022C374: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x8022C378: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8022C37C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C380: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C384: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022C388: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8022C38C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C390: bne         $v1, $zero, L_8022C3A4
    if (ctx->r3 != 0) {
        // 0x8022C394: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_8022C3A4;
    }
    // 0x8022C394: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022C398: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C39C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022C3A0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022C3A4:
    // 0x8022C3A4: jal         0x8022C4A8
    // 0x8022C3A8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8022C4A8_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022C3A8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022C3AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C3B0: jr          $ra
    // 0x8022C3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F054_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F054: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022F058: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022F05C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F060: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022F064: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022F068: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022F06C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F070: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F074: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022F078: jal         0x8009A3B4
    // 0x8022F07C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F07C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022F080: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022F084: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022F088: jal         0x8009A3B4
    // 0x8022F08C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F08C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F090: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022F094: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x8022F098: jal         0x8009A3B4
    // 0x8022F09C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F09C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F0A0: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x8022F0A4: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022F0A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F0AC: beq         $v0, $zero, L_8022F1B0
    if (ctx->r2 == 0) {
        // 0x8022F0B0: addiu       $a0, $zero, 0x160
        ctx->r4 = ADD32(0, 0X160);
            goto L_8022F1B0;
    }
    // 0x8022F0B0: addiu       $a0, $zero, 0x160
    ctx->r4 = ADD32(0, 0X160);
    // 0x8022F0B4: jal         0x8002A33C
    // 0x8022F0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022F0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022F0BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F0C0: addiu       $v1, $v1, -0x3A40
    ctx->r3 = ADD32(ctx->r3, -0X3A40);
    // 0x8022F0C4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8022F0C8: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x8022F0CC: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x8022F0D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022F0D4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F0D8: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8022F0DC: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8022F0E0: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022F0E4: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8022F0E8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F0EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F0F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F0F4: bne         $a0, $v0, L_8022F124
    if (ctx->r4 != ctx->r2) {
        // 0x8022F0F8: nop
    
            goto L_8022F124;
    }
    // 0x8022F0F8: nop

    // 0x8022F0FC: jal         0x8004EEAC
    // 0x8022F100: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_4;
    // 0x8022F100: nop

    after_4:
    // 0x8022F104: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F108: beq         $a0, $zero, L_8022F144
    if (ctx->r4 == 0) {
        // 0x8022F10C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022F144;
    }
    // 0x8022F10C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022F110: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F114: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022F118: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022F11C: j           L_8022F144
    // 0x8022F120: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
        goto L_8022F144;
    // 0x8022F120: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_8022F124:
    // 0x8022F124: jal         0x8004EFE4
    // 0x8022F128: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_5;
    // 0x8022F128: nop

    after_5:
    // 0x8022F12C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F130: beq         $v1, $zero, L_8022F144
    if (ctx->r3 == 0) {
        // 0x8022F134: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F144;
    }
    // 0x8022F134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F138: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022F13C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022F140: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_8022F144:
    // 0x8022F144: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F148: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F14C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022F150: sb          $zero, -0x3A45($at)
    MEM_B(-0X3A45, ctx->r1) = 0;
    // 0x8022F154: jal         0x8004EC38
    // 0x8022F158: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x8022F158: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    after_6:
    // 0x8022F15C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022F160: jal         0x800324B4
    // 0x8022F164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8022F164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022F168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F16C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022F170: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F174: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022F178: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F17C: srl         $v1, $v1, 11
    ctx->r3 = S32(U32(ctx->r3) >> 11);
    // 0x8022F180: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022F184: sh          $v1, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r3;
    // 0x8022F188: jal         0x80032498
    // 0x8022F18C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x8022F18C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    after_8:
    // 0x8022F190: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022F194: lbu         $a0, 0x8($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X8);
    // 0x8022F198: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F19C: srl         $v1, $v1, 9
    ctx->r3 = S32(U32(ctx->r3) >> 9);
    // 0x8022F1A0: sh          $v1, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r3;
    // 0x8022F1A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022F1A8: j           L_8022F1D4
    // 0x8022F1AC: sb          $a0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r4;
        goto L_8022F1D4;
    // 0x8022F1AC: sb          $a0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r4;
L_8022F1B0:
    // 0x8022F1B0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022F1B4: blezl       $v0, L_8022F1D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022F1B8: sh          $zero, 0x14($s2)
        MEM_H(0X14, ctx->r18) = 0;
            goto L_8022F1D4;
    }
    goto skip_0;
    // 0x8022F1B8: sh          $zero, 0x14($s2)
    MEM_H(0X14, ctx->r18) = 0;
    skip_0:
    // 0x8022F1BC: lhu         $v0, 0x58($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X58);
    // 0x8022F1C0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x8022F1C4: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x8022F1C8: addiu       $v1, $v1, -0x14
    ctx->r3 = ADD32(ctx->r3, -0X14);
    // 0x8022F1CC: sh          $v0, 0x58($s2)
    MEM_H(0X58, ctx->r18) = ctx->r2;
    // 0x8022F1D0: sh          $v1, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r3;
L_8022F1D4:
    // 0x8022F1D4: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022F1D8: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022F1DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F1E0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022F1E4: lh          $v1, 0x18($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X18);
    // 0x8022F1E8: lh          $a3, 0x16($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X16);
    // 0x8022F1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F1F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F1F4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F1F8: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022F1FC: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022F200: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
    // 0x8022F204: jal         0x8009A3B4
    // 0x8022F208: sw          $a3, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022F208: sw          $a3, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r7;
    after_9:
    // 0x8022F20C: addiu       $a0, $s2, 0x54
    ctx->r4 = ADD32(ctx->r18, 0X54);
    // 0x8022F210: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022F214: jal         0x80031600
    // 0x8022F218: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_10;
    // 0x8022F218: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8022F21C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F220: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022F224: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F228: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022F22C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8022F230: jal         0x80031DA8
    // 0x8022F234: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x8022F234: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_11:
    // 0x8022F238: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022F23C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F240: jal         0x8009A3B4
    // 0x8022F244: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022F244: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x8022F248: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022F24C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8022F250: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F254: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x8022F258: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F25C: addiu       $v0, $s2, 0xC0
    ctx->r2 = ADD32(ctx->r18, 0XC0);
    // 0x8022F260: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F264: lui         $v0, 0xC80
    ctx->r2 = S32(0XC80 << 16);
    // 0x8022F268: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022F26C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022F270: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F274: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F278: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F27C: jal         0x80051E18
    // 0x8022F280: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_13;
    // 0x8022F280: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_13:
    // 0x8022F284: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F288: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022F28C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F290: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F294: jal         0x8003B564
    // 0x8022F298: sw          $zero, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = 0;
    func_8003B564_16964(rdram, ctx);
        goto after_14;
    // 0x8022F298: sw          $zero, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = 0;
    after_14:
    // 0x8022F29C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022F2A0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022F2A4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F2A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022F2AC: jr          $ra
    // 0x8022F2B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022F2B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80225C48_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C58: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C5C: beq         $v1, $zero, L_80225C74
    if (ctx->r3 == 0) {
        // 0x80225C60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225C74;
    }
    // 0x80225C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C64: beq         $v1, $v0, L_80225CAC
    if (ctx->r3 == ctx->r2) {
        // 0x80225C68: nop
    
            goto L_80225CAC;
    }
    // 0x80225C68: nop

    // 0x80225C6C: j           L_80225CE0
    // 0x80225C70: nop

        goto L_80225CE0;
    // 0x80225C70: nop

L_80225C74:
    // 0x80225C74: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225C78: jal         0x800607C4
    // 0x80225C7C: addiu       $a0, $a0, 0x5A5C
    ctx->r4 = ADD32(ctx->r4, 0X5A5C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225C7C: addiu       $a0, $a0, 0x5A5C
    ctx->r4 = ADD32(ctx->r4, 0X5A5C);
    after_0:
    // 0x80225C80: jal         0x8006033C
    // 0x80225C84: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225C84: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x80225C88: beq         $v0, $zero, L_80225CA0
    if (ctx->r2 == 0) {
        // 0x80225C8C: nop
    
            goto L_80225CA0;
    }
    // 0x80225C8C: nop

    // 0x80225C90: jal         0x80060AAC
    // 0x80225C94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x80225C94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80225C98: jal         0x80060AAC
    // 0x80225C9C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225C9C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
L_80225CA0:
    // 0x80225CA0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CA4: j           L_80225CDC
    // 0x80225CA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225CDC;
    // 0x80225CA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225CAC:
    // 0x80225CAC: jal         0x8006033C
    // 0x80225CB0: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225CB0: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x80225CB4: bne         $v0, $zero, L_80225CCC
    if (ctx->r2 != 0) {
        // 0x80225CB8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225CCC;
    }
    // 0x80225CB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225CBC: jal         0x8006033C
    // 0x80225CC0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225CC0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225CC4: beq         $v0, $zero, L_80225CE0
    if (ctx->r2 == 0) {
        // 0x80225CC8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225CE0;
    }
    // 0x80225CC8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225CCC:
    // 0x80225CCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225CD0: jal         0x80060DA0
    // 0x80225CD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225CD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225CD8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225CDC:
    // 0x80225CDC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225CE0:
    // 0x80225CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CE8: jr          $ra
    // 0x80225CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230C30_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230C34: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230C38: bne         $v0, $a0, L_80230C84
    if (ctx->r2 != ctx->r4) {
        // 0x80230C3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230C84;
    }
    // 0x80230C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80230C40: lbu         $v1, 0xC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XC);
    // 0x80230C44: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x80230C48: beq         $v0, $zero, L_80230C58
    if (ctx->r2 == 0) {
        // 0x80230C4C: addiu       $v0, $zero, 0xCB
        ctx->r2 = ADD32(0, 0XCB);
            goto L_80230C58;
    }
    // 0x80230C4C: addiu       $v0, $zero, 0xCB
    ctx->r2 = ADD32(0, 0XCB);
    // 0x80230C50: j           L_80230C7C
    // 0x80230C54: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_80230C7C;
    // 0x80230C54: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80230C58:
    // 0x80230C58: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80230C5C: beql        $v0, $zero, L_80230C74
    if (ctx->r2 == 0) {
        // 0x80230C60: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230C74;
    }
    goto skip_0;
    // 0x80230C60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230C64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230C68: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80230C6C: j           L_80230C7C
    // 0x80230C70: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
        goto L_80230C7C;
    // 0x80230C70: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
L_80230C74:
    // 0x80230C74: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80230C78: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
L_80230C7C:
    // 0x80230C7C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80230C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230C84:
    // 0x80230C84: jr          $ra
    // 0x80230C88: nop

    TRACE_RETURN()
    return;
    // 0x80230C88: nop

;}
RECOMP_FUNC void func_8022FCEC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FCF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FCF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FCFC: jal         0x80053ED8
    // 0x8022FD00: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022FD00: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    after_0:
    // 0x8022FD04: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FD08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FD0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FD10: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022FD14: lw          $v1, 0x6B84($at)
    ctx->r3 = MEM_W(ctx->r1, 0X6B84);
    // 0x8022FD18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD1C: jalr        $v1
    // 0x8022FD20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x8022FD20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022FD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FD28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD2C: jr          $ra
    // 0x8022FD30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FD34: nop

    // 0x8022FD38: nop

    // 0x8022FD3C: nop

;}
RECOMP_FUNC void func_8022EB1C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB1C: jr          $ra
    // 0x8022EB20: nop

    TRACE_RETURN()
    return;
    // 0x8022EB20: nop

;}
RECOMP_FUNC void func_80231E40_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231E44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231E48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231E4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231E50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E58: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231E5C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231E60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231E64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231E68: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231E6C: blez        $v0, L_80231EC0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231E70: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80231EC0;
    }
    // 0x80231E70: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80231E74: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x80231E78: addiu       $s2, $s2, 0x76B0
    ctx->r18 = ADD32(ctx->r18, 0X76B0);
    // 0x80231E7C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80231E80:
    // 0x80231E80: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80231E84: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80231E88: jal         0x8004F4F8
    // 0x80231E8C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80231E8C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x80231E90: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80231E94: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80231E98: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231E9C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80231EA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231EA4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231EA8: lh          $v1, 0x6C60($at)
    ctx->r3 = MEM_H(ctx->r1, 0X6C60);
    // 0x80231EAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231EB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231EB4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80231EB8: bne         $v0, $zero, L_80231E80
    if (ctx->r2 != 0) {
        // 0x80231EBC: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80231E80;
    }
    // 0x80231EBC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80231EC0:
    // 0x80231EC0: jal         0x8004F684
    // 0x80231EC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80231EC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80231EC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231ECC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231ED0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231ED4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231ED8: jr          $ra
    // 0x80231EDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231EDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E0C8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E0CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E0D8: lbu         $v0, 0xDF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDF);
    // 0x8022E0DC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022E0E0: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x8022E0E4: bne         $v0, $v1, L_8022E108
    if (ctx->r2 != ctx->r3) {
        // 0x8022E0E8: addiu       $a1, $s0, 0xD0
        ctx->r5 = ADD32(ctx->r16, 0XD0);
            goto L_8022E108;
    }
    // 0x8022E0E8: addiu       $a1, $s0, 0xD0
    ctx->r5 = ADD32(ctx->r16, 0XD0);
    // 0x8022E0EC: jal         0x8022E7B8
    // 0x8022E0F0: nop

    func_8022E7B8_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022E0F0: nop

    after_0:
    // 0x8022E0F4: lbu         $v1, 0xDF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDF);
    // 0x8022E0F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E0FC: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x8022E100: j           L_8022E274
    // 0x8022E104: sb          $v1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r3;
        goto L_8022E274;
    // 0x8022E104: sb          $v1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r3;
L_8022E108:
    // 0x8022E108: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E10C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8022E110: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E114: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E118: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E11C: sra         $a0, $a0, 26
    ctx->r4 = S32(SIGNED(ctx->r4) >> 26);
    // 0x8022E120: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E124: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8022E128: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8022E12C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E130: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022E134: sb          $a0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r4;
    // 0x8022E138: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022E13C: bne         $a0, $zero, L_8022E14C
    if (ctx->r4 != 0) {
        // 0x8022E140: addiu       $a2, $v0, 0x40
        ctx->r6 = ADD32(ctx->r2, 0X40);
            goto L_8022E14C;
    }
    // 0x8022E140: addiu       $a2, $v0, 0x40
    ctx->r6 = ADD32(ctx->r2, 0X40);
    // 0x8022E144: j           L_8022E158
    // 0x8022E148: addiu       $a2, $v0, 0x41
    ctx->r6 = ADD32(ctx->r2, 0X41);
        goto L_8022E158;
    // 0x8022E148: addiu       $a2, $v0, 0x41
    ctx->r6 = ADD32(ctx->r2, 0X41);
L_8022E14C:
    // 0x8022E14C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E150: beql        $a0, $v0, L_8022E158
    if (ctx->r4 == ctx->r2) {
        // 0x8022E154: addiu       $a3, $v1, 0x41
        ctx->r7 = ADD32(ctx->r3, 0X41);
            goto L_8022E158;
    }
    goto skip_0;
    // 0x8022E154: addiu       $a3, $v1, 0x41
    ctx->r7 = ADD32(ctx->r3, 0X41);
    skip_0:
L_8022E158:
    // 0x8022E158: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x8022E15C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022E160: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E164: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E168: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022E16C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8022E170: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E174: bne         $v0, $v1, L_8022E274
    if (ctx->r2 != ctx->r3) {
        // 0x8022E178: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_8022E274;
    }
    // 0x8022E178: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x8022E17C: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8022E180: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022E184: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E188: bne         $v0, $v1, L_8022E274
    if (ctx->r2 != ctx->r3) {
        // 0x8022E18C: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_8022E274;
    }
    // 0x8022E18C: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x8022E190: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022E194: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E198: lbu         $v1, 0xC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC);
    // 0x8022E19C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E1A0: srl         $t0, $v0, 4
    ctx->r8 = S32(U32(ctx->r2) >> 4);
    // 0x8022E1A4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E1A8: andi        $a0, $a0, 0x1FF
    ctx->r4 = ctx->r4 & 0X1FF;
    // 0x8022E1AC: sltiu       $v1, $v1, 0x2
    ctx->r3 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8022E1B0: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8022E1B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022E1B8: beq         $v1, $zero, L_8022E1CC
    if (ctx->r3 == 0) {
        // 0x8022E1BC: sh          $a0, 0x12($a1)
        MEM_H(0X12, ctx->r5) = ctx->r4;
            goto L_8022E1CC;
    }
    // 0x8022E1BC: sh          $a0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r4;
    // 0x8022E1C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E1C4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E1C8: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
L_8022E1CC:
    // 0x8022E1CC: lbu         $a0, 0xC($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XC);
    // 0x8022E1D0: addiu       $v0, $a3, -0x40
    ctx->r2 = ADD32(ctx->r7, -0X40);
    // 0x8022E1D4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8022E1D8: addiu       $v0, $a2, -0x40
    ctx->r2 = ADD32(ctx->r6, -0X40);
    // 0x8022E1DC: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8022E1E0: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8022E1E4: beq         $v0, $zero, L_8022E210
    if (ctx->r2 == 0) {
        // 0x8022E1E8: srl         $v0, $a0, 1
        ctx->r2 = S32(U32(ctx->r4) >> 1);
            goto L_8022E210;
    }
    // 0x8022E1E8: srl         $v0, $a0, 1
    ctx->r2 = S32(U32(ctx->r4) >> 1);
    // 0x8022E1EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E1F0: addiu       $v1, $a2, -0x41
    ctx->r3 = ADD32(ctx->r6, -0X41);
    // 0x8022E1F4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8022E1F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E1FC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E200: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E204: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E208: j           L_8022E230
    // 0x8022E20C: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
        goto L_8022E230;
    // 0x8022E20C: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
L_8022E210:
    // 0x8022E210: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x8022E214: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E218: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8022E21C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E220: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E224: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022E228: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E22C: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
L_8022E230:
    // 0x8022E230: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x8022E234: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x8022E238: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022E23C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8022E240: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8022E244: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x8022E248: beq         $v0, $zero, L_8022E25C
    if (ctx->r2 == 0) {
        // 0x8022E24C: sh          $v1, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r3;
            goto L_8022E25C;
    }
    // 0x8022E24C: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
    // 0x8022E250: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x8022E254: j           L_8022E264
    // 0x8022E258: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
        goto L_8022E264;
    // 0x8022E258: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
L_8022E25C:
    // 0x8022E25C: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x8022E260: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E264:
    // 0x8022E264: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022E268: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022E26C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8022E270: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8022E274:
    // 0x8022E274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E278: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E27C: jr          $ra
    // 0x8022E280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022553C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022553C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225540: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225544: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225548: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022554C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225550: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225554: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225558: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022555C: beq         $v1, $zero, L_80225574
    if (ctx->r3 == 0) {
        // 0x80225560: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225574;
    }
    // 0x80225560: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225564: beq         $v1, $v0, L_80225590
    if (ctx->r3 == ctx->r2) {
        // 0x80225568: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80225590;
    }
    // 0x80225568: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022556C: j           L_80225704
    // 0x80225570: nop

        goto L_80225704;
    // 0x80225570: nop

L_80225574:
    // 0x80225574: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225578: jal         0x800607C4
    // 0x8022557C: addiu       $a0, $a0, 0x5A4C
    ctx->r4 = ADD32(ctx->r4, 0X5A4C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022557C: addiu       $a0, $a0, 0x5A4C
    ctx->r4 = ADD32(ctx->r4, 0X5A4C);
    after_0:
    // 0x80225580: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225588: j           L_80225704
    // 0x8022558C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80225704;
    // 0x8022558C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225590:
    // 0x80225590: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225594: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225598: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022559C: bne         $v0, $zero, L_802256DC
    if (ctx->r2 != 0) {
        // 0x802255A0: nop
    
            goto L_802256DC;
    }
    // 0x802255A0: nop

    // 0x802255A4: jal         0x8006033C
    // 0x802255A8: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802255A8: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_1:
    // 0x802255AC: beq         $v0, $zero, L_802255F4
    if (ctx->r2 == 0) {
        // 0x802255B0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802255F4;
    }
    // 0x802255B0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802255B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802255B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255BC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802255C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802255C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255C8: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802255CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255D0: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802255D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255D8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802255DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255E0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802255E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255E8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802255EC: j           L_802256AC
    // 0x802255F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_802256AC;
    // 0x802255F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802255F4:
    // 0x802255F4: jal         0x8006033C
    // 0x802255F8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802255F8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_2:
    // 0x802255FC: beq         $v0, $zero, L_80225644
    if (ctx->r2 == 0) {
        // 0x80225600: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225644;
    }
    // 0x80225600: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225604: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225608: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022560C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225610: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225614: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225618: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022561C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225620: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80225624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225628: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022562C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225630: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225634: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225638: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022563C: j           L_802256AC
    // 0x80225640: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_802256AC;
    // 0x80225640: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80225644:
    // 0x80225644: jal         0x8006033C
    // 0x80225648: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225648: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_3:
    // 0x8022564C: beq         $v0, $zero, L_802256CC
    if (ctx->r2 == 0) {
        // 0x80225650: nop
    
            goto L_802256CC;
    }
    // 0x80225650: nop

    // 0x80225654: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225658: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
    // 0x8022565C: jal         0x8006036C
    // 0x80225660: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225660: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_4:
    // 0x80225664: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225668: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022566C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225670: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225674: addiu       $v0, $zero, 0x426
    ctx->r2 = ADD32(0, 0X426);
    // 0x80225678: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022567C: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80225680: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225688: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022568C: addiu       $v0, $zero, 0x239F
    ctx->r2 = ADD32(0, 0X239F);
    // 0x80225690: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225694: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80225698: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022569C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256A0: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802256A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256A8: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_802256AC:
    // 0x802256AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802256B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802256BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256C0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802256C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256C8: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
L_802256CC:
    // 0x802256CC: jal         0x80060590
    // 0x802256D0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x802256D0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_5:
    // 0x802256D4: jal         0x80060590
    // 0x802256D8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x802256D8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_6:
L_802256DC:
    // 0x802256DC: lbu         $v0, 0x16B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X16B);
    // 0x802256E0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802256E4: beq         $v0, $zero, L_802256FC
    if (ctx->r2 == 0) {
        // 0x802256E8: nop
    
            goto L_802256FC;
    }
    // 0x802256E8: nop

    // 0x802256EC: jal         0x8006036C
    // 0x802256F0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802256F0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_7:
    // 0x802256F4: j           L_80225704
    // 0x802256F8: nop

        goto L_80225704;
    // 0x802256F8: nop

L_802256FC:
    // 0x802256FC: jal         0x80060590
    // 0x80225700: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_8;
    // 0x80225700: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_8:
L_80225704:
    // 0x80225704: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225708: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022570C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225710: jr          $ra
    // 0x80225714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AE14_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AE1C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022AE20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AE24: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AE28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AE2C: lw          $v0, 0x65B8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65B8);
    // 0x8022AE30: jalr        $v0
    // 0x8022AE34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AE34: nop

    after_0:
    // 0x8022AE38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE3C: jr          $ra
    // 0x8022AE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AE44: nop

    // 0x8022AE48: nop

    // 0x8022AE4C: nop

;}
RECOMP_FUNC void func_80231BC0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231BC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231BC8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80231BCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231BD0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231BD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231BD8: lw          $v0, 0x6CB8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CB8);
    // 0x80231BDC: jalr        $v0
    // 0x80231BE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231BE0: nop

    after_0:
    // 0x80231BE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231BE8: jr          $ra
    // 0x80231BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C48C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C48C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C490: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C494: jal         0x8004F418
    // 0x8022C498: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C498: nop

    after_0:
    // 0x8022C49C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C4A0: jr          $ra
    // 0x8022C4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B61C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B61C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B628: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B62C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022B630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B634: jal         0x8004DDE8
    // 0x8022B638: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022B638: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B63C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B640: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x8022B644: beq         $v0, $zero, L_8022B688
    if (ctx->r2 == 0) {
        // 0x8022B648: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_8022B688;
    }
    // 0x8022B648: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022B64C: beq         $v0, $zero, L_8022B668
    if (ctx->r2 == 0) {
        // 0x8022B650: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B668;
    }
    // 0x8022B650: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B654: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B658: beq         $v1, $v0, L_8022B6C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B65C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B6C8;
    }
    // 0x8022B65C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B660: j           L_8022B6C8
    // 0x8022B664: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B6C8;
    // 0x8022B664: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B668:
    // 0x8022B668: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B66C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B670: beq         $v1, $v0, L_8022B6C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B674: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B6C8;
    }
    // 0x8022B674: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B678: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B680: j           L_8022B6A8
    // 0x8022B684: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022B6A8;
    // 0x8022B684: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022B688:
    // 0x8022B688: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B68C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B690: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022B694: bne         $v0, $zero, L_8022B6C8
    if (ctx->r2 != 0) {
        // 0x8022B698: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B6C8;
    }
    // 0x8022B698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B69C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B6A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022B6A8:
    // 0x8022B6A8: jal         0x80050294
    // 0x8022B6AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022B6AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B6B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6B4: jal         0x8022B6F8
    // 0x8022B6B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B6F8_ovl12(rdram, ctx);
        goto after_2;
    // 0x8022B6B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022B6BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6C0: jal         0x8022B6D8
    // 0x8022B6C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B6D8_ovl12(rdram, ctx);
        goto after_3;
    // 0x8022B6C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8022B6C8:
    // 0x8022B6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6D0: jr          $ra
    // 0x8022B6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233B80_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233B88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233B90: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80233B94: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80233B98: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80233B9C: blez        $a0, L_80233C94
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80233BA0: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_80233C94;
    }
    // 0x80233BA0: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80233BA4: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80233BA8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233BAC: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80233BB0: mfhi        $a1
    ctx->r5 = hi;
    // 0x80233BB4: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80233BB8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233BBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233BC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233BC4: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80233BC8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233BCC: bne         $v0, $zero, L_80233BEC
    if (ctx->r2 != 0) {
        // 0x80233BD0: nop
    
            goto L_80233BEC;
    }
    // 0x80233BD0: nop

    // 0x80233BD4: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80233BD8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80233BDC: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80233BE0: beq         $v0, $zero, L_80233BEC
    if (ctx->r2 == 0) {
        // 0x80233BE4: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80233BEC;
    }
    // 0x80233BE4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80233BE8: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_80233BEC:
    // 0x80233BEC: jal         0x800A3450
    // 0x80233BF0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80233BF0: nop

    after_0:
    // 0x80233BF4: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80233BF8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233BFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233C00: jal         0x800A3450
    // 0x80233C04: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80233C04: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233C08: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80233C0C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80233C10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233C14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233C18: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x80233C1C: bne         $a0, $zero, L_80233C3C
    if (ctx->r4 != 0) {
        // 0x80233C20: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80233C3C;
    }
    // 0x80233C20: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80233C24: jal         0x800A3450
    // 0x80233C28: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233C28: nop

    after_2:
    // 0x80233C2C: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80233C30: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233C34: j           L_80233C50
    // 0x80233C38: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80233C50;
    // 0x80233C38: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80233C3C:
    // 0x80233C3C: jal         0x800A3450
    // 0x80233C40: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233C40: nop

    after_3:
    // 0x80233C44: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80233C48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233C4C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80233C50:
    // 0x80233C50: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233C54: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80233C58: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80233C5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233C60: bne         $v0, $zero, L_80233C74
    if (ctx->r2 != 0) {
        // 0x80233C64: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80233C74;
    }
    // 0x80233C64: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80233C68: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80233C6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233C70: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80233C74:
    // 0x80233C74: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80233C78: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80233C7C: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80233C80: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80233C84: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233C88: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80233C8C: j           L_80233C9C
    // 0x80233C90: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80233C9C;
    // 0x80233C90: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80233C94:
    // 0x80233C94: jal         0x8004F5C4
    // 0x80233C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80233C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80233C9C:
    // 0x80233C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233CA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233CA4: jr          $ra
    // 0x80233CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231438_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023143C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231440: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231444: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231448: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023144C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231450: jal         0x8002C654
    // 0x80231454: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80231454: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80231458: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023145C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231460: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231464: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80231468: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023146C: lhu         $a0, 0x6C30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6C30);
    // 0x80231470: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231474: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231478: jal         0x80031BB4
    // 0x8023147C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_1;
    // 0x8023147C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_1:
    // 0x80231480: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80231484: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231488: jal         0x800319B4
    // 0x8023148C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8023148C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x80231490: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231494: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231498: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023149C: jr          $ra
    // 0x802314A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802314A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225990_ovl12(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802259A0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802259A4: beq         $v1, $zero, L_802259BC
    if (ctx->r3 == 0) {
        // 0x802259A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802259BC;
    }
    // 0x802259A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802259AC: beq         $v1, $v0, L_802259F4
    if (ctx->r3 == ctx->r2) {
        // 0x802259B0: nop
    
            goto L_802259F4;
    }
    // 0x802259B0: nop

    // 0x802259B4: j           L_80225A28
    // 0x802259B8: nop

        goto L_80225A28;
    // 0x802259B8: nop

L_802259BC:
    // 0x802259BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802259C0: jal         0x800607C4
    // 0x802259C4: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802259C4: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    after_0:
    // 0x802259C8: jal         0x8006033C
    // 0x802259CC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802259CC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x802259D0: beq         $v0, $zero, L_802259E8
    if (ctx->r2 == 0) {
        // 0x802259D4: nop
    
            goto L_802259E8;
    }
    // 0x802259D4: nop

    // 0x802259D8: jal         0x80060AAC
    // 0x802259DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x802259DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802259E0: jal         0x80060AAC
    // 0x802259E4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x802259E4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
L_802259E8:
    // 0x802259E8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259EC: j           L_80225A24
    // 0x802259F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225A24;
    // 0x802259F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802259F4:
    // 0x802259F4: jal         0x8006033C
    // 0x802259F8: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802259F8: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x802259FC: bne         $v0, $zero, L_80225A14
    if (ctx->r2 != 0) {
        // 0x80225A00: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225A14;
    }
    // 0x80225A00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225A04: jal         0x8006033C
    // 0x80225A08: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225A08: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225A0C: beq         $v0, $zero, L_80225A28
    if (ctx->r2 == 0) {
        // 0x80225A10: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225A28;
    }
    // 0x80225A10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225A14:
    // 0x80225A14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225A18: jal         0x80060DA0
    // 0x80225A1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225A1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225A20: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225A24:
    // 0x80225A24: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A28:
    // 0x80225A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A30: jr          $ra
    // 0x80225A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233CAC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233CB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233CB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233CB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233CBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233CC0: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80233CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233CC8: bne         $v1, $v0, L_80233DB0
    if (ctx->r3 != ctx->r2) {
        // 0x80233CCC: nop
    
            goto L_80233DB0;
    }
    // 0x80233CCC: nop

    // 0x80233CD0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80233CD4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80233CD8: bne         $v0, $zero, L_80233D98
    if (ctx->r2 != 0) {
        // 0x80233CDC: nop
    
            goto L_80233D98;
    }
    // 0x80233CDC: nop

    // 0x80233CE0: jal         0x8004F144
    // 0x80233CE4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233CE4: nop

    after_0:
    // 0x80233CE8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80233CEC: beq         $s0, $zero, L_80233D98
    if (ctx->r16 == 0) {
        // 0x80233CF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233D98;
    }
    // 0x80233CF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233CF4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233CF8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80233CFC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80233D00: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80233D04: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80233D08: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80233D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233D10: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80233D14: jal         0x800A3450
    // 0x80233D18: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80233D18: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233D1C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80233D20: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80233D24: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233D28: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80233D2C: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80233D30: jal         0x800A3450
    // 0x80233D34: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233D34: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80233D38: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80233D3C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80233D40: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233D44: jal         0x800A3450
    // 0x80233D48: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233D48: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80233D4C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80233D50: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80233D54: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80233D58: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80233D5C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233D60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80233D64: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80233D68: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80233D6C: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80233D70: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80233D74: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80233D78: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80233D7C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80233D80: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80233D84: jal         0x800A3450
    // 0x80233D88: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80233D88: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x80233D8C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80233D90: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x80233D94: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80233D98:
    // 0x80233D98: jal         0x800A3450
    // 0x80233D9C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80233D9C: nop

    after_5:
    // 0x80233DA0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233DA4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233DA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233DAC: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80233DB0:
    // 0x80233DB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233DB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233DB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233DBC: jr          $ra
    // 0x80233DC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233DC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802306CC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802306D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802306D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802306D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802306DC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802306E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802306E4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802306E8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802306EC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802306F0: sltiu       $v0, $v1, 0x2A
    ctx->r2 = ctx->r3 < 0X2A ? 1 : 0;
    // 0x802306F4: beq         $v0, $zero, L_80230B7C
    if (ctx->r2 == 0) {
        // 0x802306F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230B7C;
    }
    // 0x802306F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802306FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230700: addu        $at, $at, $v0
    gpr jr_addend_80230708 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230704: lw          $v0, 0x7570($at)
    ctx->r2 = ADD32(ctx->r1, 0X7570);
    // 0x80230708: jr          $v0
    // 0x8023070C: nop

    switch (jr_addend_80230708 >> 2) {
        case 0: goto L_80230710; break;
        case 1: goto L_80230738; break;
        case 2: goto L_80230B7C; break;
        case 3: goto L_80230B7C; break;
        case 4: goto L_80230B7C; break;
        case 5: goto L_80230B7C; break;
        case 6: goto L_80230B7C; break;
        case 7: goto L_80230B7C; break;
        case 8: goto L_80230B7C; break;
        case 9: goto L_80230B7C; break;
        case 10: goto L_80230798; break;
        case 11: goto L_802307C0; break;
        case 12: goto L_802307E8; break;
        case 13: goto L_8023083C; break;
        case 14: goto L_80230850; break;
        case 15: goto L_80230878; break;
        case 16: goto L_802308AC; break;
        case 17: goto L_802308D8; break;
        case 18: goto L_80230B7C; break;
        case 19: goto L_80230B7C; break;
        case 20: goto L_80230904; break;
        case 21: goto L_80230960; break;
        case 22: goto L_802309F0; break;
        case 23: goto L_80230A40; break;
        case 24: goto L_80230A50; break;
        case 25: goto L_80230B7C; break;
        case 26: goto L_80230B7C; break;
        case 27: goto L_80230B7C; break;
        case 28: goto L_80230B7C; break;
        case 29: goto L_80230B7C; break;
        case 30: goto L_80230A64; break;
        case 31: goto L_80230AF4; break;
        case 32: goto L_80230B7C; break;
        case 33: goto L_80230B7C; break;
        case 34: goto L_80230B7C; break;
        case 35: goto L_80230B7C; break;
        case 36: goto L_80230B7C; break;
        case 37: goto L_80230B7C; break;
        case 38: goto L_80230B7C; break;
        case 39: goto L_80230B7C; break;
        case 40: goto L_80230B0C; break;
        case 41: goto L_80230B58; break;
        default: switch_error(__func__, 0x80230708, 0x80237570);
    }
    // 0x8023070C: nop

L_80230710:
    // 0x80230710: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80230714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230718: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023071C: jal         0x80070E54
    // 0x80230720: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x80230720: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_0:
    // 0x80230724: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x80230728: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230B7C;
    }
    // 0x80230728: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8023072C:
    // 0x8023072C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80230730: j           L_80230B48
    // 0x80230734: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
        goto L_80230B48;
    // 0x80230734: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_80230738:
    // 0x80230738: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8023073C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230740: beq         $v0, $zero, L_80230750
    if (ctx->r2 == 0) {
        // 0x80230744: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80230750;
    }
    // 0x80230744: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80230748: j           L_80230B7C
    // 0x8023074C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80230B7C;
    // 0x8023074C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230750:
    // 0x80230750: jal         0x800A3450
    // 0x80230754: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80230754: nop

    after_1:
    // 0x80230758: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023075C: beq         $v0, $zero, L_80230788
    if (ctx->r2 == 0) {
        // 0x80230760: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230788;
    }
    // 0x80230760: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230764: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x80230768: jal         0x80230D34
    // 0x8023076C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230D34_ovl12(rdram, ctx);
        goto after_2;
    // 0x8023076C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80230770: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80230774: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80230778: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8023077C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230780: j           L_80230B7C
    // 0x80230784: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_80230B7C;
    // 0x80230784: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80230788:
    // 0x80230788: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8023078C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230790: j           L_80230B7C
    // 0x80230794: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80230B7C;
    // 0x80230794: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230798:
    // 0x80230798: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8023079C: bne         $v0, $zero, L_802309FC
    if (ctx->r2 != 0) {
        // 0x802307A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802309FC;
    }
    // 0x802307A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802307A4: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x802307A8: jal         0x8002A33C
    // 0x802307AC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802307AC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_3:
    // 0x802307B0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802307B4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802307B8: j           L_80230B4C
    // 0x802307BC: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_80230B4C;
    // 0x802307BC: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_802307C0:
    // 0x802307C0: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x802307C4: bne         $v0, $zero, L_802309FC
    if (ctx->r2 != 0) {
        // 0x802307C8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802309FC;
    }
    // 0x802307C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802307CC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802307D0: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x802307D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802307D8:
    // 0x802307D8: jal         0x80061510
    // 0x802307DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x802307DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x802307E0: j           L_80230B48
    // 0x802307E4: nop

        goto L_80230B48;
    // 0x802307E4: nop

L_802307E8:
    // 0x802307E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802307EC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802307F0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802307F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802307F8: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x802307FC: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80230B7C;
    }
    // 0x802307FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80230800: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230804: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230808: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x8023080C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230810: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80230814: jal         0x80061510
    // 0x80230818: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x80230818: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    after_5:
    // 0x8023081C: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x80230820: jal         0x8002A33C
    // 0x80230824: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230824: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_6:
    // 0x80230828: lh          $a0, 0xB0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XB0);
    // 0x8023082C: jal         0x80070F38
    // 0x80230830: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_7;
    // 0x80230830: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x80230834: j           L_80230B48
    // 0x80230838: nop

        goto L_80230B48;
    // 0x80230838: nop

L_8023083C:
    // 0x8023083C: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80230840: bltz        $v0, L_80230B48
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230844: nop
    
            goto L_80230B48;
    }
    // 0x80230844: nop

    // 0x80230848: j           L_80230B7C
    // 0x8023084C: nop

        goto L_80230B7C;
    // 0x8023084C: nop

L_80230850:
    // 0x80230850: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230854: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230858: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023085C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230860: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x80230864: nop
    
            goto L_80230B7C;
    }
    // 0x80230864: nop

    // 0x80230868: jal         0x80060D38
    // 0x8023086C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060D38_3C138(rdram, ctx);
        goto after_8;
    // 0x8023086C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x80230870: j           L_80230B48
    // 0x80230874: nop

        goto L_80230B48;
    // 0x80230874: nop

L_80230878:
    // 0x80230878: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023087C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230880: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230884: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230888: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x8023088C: nop
    
            goto L_80230B7C;
    }
    // 0x8023088C: nop

    // 0x80230890: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230894: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x80230898: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023089C: jal         0x80061510
    // 0x802308A0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_9;
    // 0x802308A0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_9:
    // 0x802308A4: j           L_8023072C
    // 0x802308A8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_8023072C;
    // 0x802308A8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_802308AC:
    // 0x802308AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802308B0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802308B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802308B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802308BC: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x802308C0: nop
    
            goto L_80230B7C;
    }
    // 0x802308C0: nop

    // 0x802308C4: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x802308C8: bgez        $v0, L_80230B7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802308CC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230B7C;
    }
    // 0x802308CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802308D0: j           L_8023072C
    // 0x802308D4: nop

        goto L_8023072C;
    // 0x802308D4: nop

L_802308D8:
    // 0x802308D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802308DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802308E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802308E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802308E8: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x802308EC: nop
    
            goto L_80230B7C;
    }
    // 0x802308EC: nop

    // 0x802308F0: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x802308F4: bgez        $v0, L_80230B7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802308F8: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80230B7C;
    }
    // 0x802308F8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802308FC: j           L_80230B04
    // 0x80230900: nop

        goto L_80230B04;
    // 0x80230900: nop

L_80230904:
    // 0x80230904: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80230908: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023090C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80230910: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230914: jal         0x8004D5D4
    // 0x80230918: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_10;
    // 0x80230918: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_10:
    // 0x8023091C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230920: jal         0x8002C654
    // 0x80230924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_11;
    // 0x80230924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x80230928: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x8023092C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230930: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80230934: jal         0x800319B4
    // 0x80230938: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_12;
    // 0x80230938: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_12:
    // 0x8023093C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230940: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x80230944: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230948: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8023094C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230950: jal         0x8002A33C
    // 0x80230954: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x80230954: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_13:
    // 0x80230958: j           L_80230B7C
    // 0x8023095C: nop

        goto L_80230B7C;
    // 0x8023095C: nop

L_80230960:
    // 0x80230960: jal         0x8004F144
    // 0x80230964: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x80230964: nop

    after_14:
    // 0x80230968: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023096C: beq         $s0, $zero, L_80230B7C
    if (ctx->r16 == 0) {
        // 0x80230970: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230B7C;
    }
    // 0x80230970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230974: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230978: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023097C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230980: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230984: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80230988: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023098C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80230990: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230994: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80230998: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023099C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802309A0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802309A4: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x802309A8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802309AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802309B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802309B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802309B8: lhu         $v0, 0x6BE8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6BE8);
    // 0x802309BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802309C0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x802309C4: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802309C8: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x802309CC: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x802309D0: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x802309D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802309D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802309DC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x802309E0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802309E4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802309E8: j           L_80230B4C
    // 0x802309EC: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_80230B4C;
    // 0x802309EC: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_802309F0:
    // 0x802309F0: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x802309F4: beq         $v0, $zero, L_80230A08
    if (ctx->r2 == 0) {
        // 0x802309F8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230A08;
    }
    // 0x802309F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_802309FC:
    // 0x802309FC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230A00: j           L_80230B7C
    // 0x80230A04: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_80230B7C;
    // 0x80230A04: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_80230A08:
    // 0x80230A08: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80230A0C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80230A10: beq         $v0, $zero, L_80230A34
    if (ctx->r2 == 0) {
        // 0x80230A14: nop
    
            goto L_80230A34;
    }
    // 0x80230A14: nop

    // 0x80230A18: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230A1C: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80230A20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230A24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230A28: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80230A2C: j           L_80230B7C
    // 0x80230A30: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
        goto L_80230B7C;
    // 0x80230A30: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
L_80230A34:
    // 0x80230A34: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230A38: j           L_80230B4C
    // 0x80230A3C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80230B4C;
    // 0x80230A3C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80230A40:
    // 0x80230A40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230A44: lw          $a1, 0x2B2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B2C);
    // 0x80230A48: j           L_802307D8
    // 0x80230A4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_802307D8;
    // 0x80230A4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80230A50:
    // 0x80230A50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230A54: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230A58: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230A5C: j           L_80230AFC
    // 0x80230A60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_80230AFC;
    // 0x80230A60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80230A64:
    // 0x80230A64: jal         0x8004F144
    // 0x80230A68: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_15;
    // 0x80230A68: nop

    after_15:
    // 0x80230A6C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230A70: beq         $s0, $zero, L_80230B7C
    if (ctx->r16 == 0) {
        // 0x80230A74: addiu       $a1, $s1, 0x38
        ctx->r5 = ADD32(ctx->r17, 0X38);
            goto L_80230B7C;
    }
    // 0x80230A74: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230A78: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230A7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230A80: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230A84: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230A88: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230A8C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230A90: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80230A94: jal         0x8009A3B4
    // 0x80230A98: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80230A98: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_16:
    // 0x80230A9C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230AA0: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80230AA4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80230AA8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230AAC: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80230AB0: sw          $s0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r16;
    // 0x80230AB4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230AB8: andi        $v1, $v1, 0x8
    ctx->r3 = ctx->r3 & 0X8;
    // 0x80230ABC: bne         $v1, $zero, L_80230ACC
    if (ctx->r3 != 0) {
        // 0x80230AC0: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80230ACC;
    }
    // 0x80230AC0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230AC4: jal         0x80230C8C
    // 0x80230AC8: nop

    func_80230C8C_ovl12(rdram, ctx);
        goto after_17;
    // 0x80230AC8: nop

    after_17:
L_80230ACC:
    // 0x80230ACC: jal         0x80060D38
    // 0x80230AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D38_3C138(rdram, ctx);
        goto after_18;
    // 0x80230AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x80230AD4: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80230AD8: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x80230ADC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230AE0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80230AE4: jal         0x80230D34
    // 0x80230AE8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_80230D34_ovl12(rdram, ctx);
        goto after_19;
    // 0x80230AE8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_19:
    // 0x80230AEC: j           L_80230B48
    // 0x80230AF0: nop

        goto L_80230B48;
    // 0x80230AF0: nop

L_80230AF4:
    // 0x80230AF4: lw          $s0, 0x44($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X44);
    // 0x80230AF8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
L_80230AFC:
    // 0x80230AFC: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x80230B00: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80230B7C;
    }
    // 0x80230B00: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_80230B04:
    // 0x80230B04: j           L_80230B7C
    // 0x80230B08: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80230B7C;
    // 0x80230B08: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230B0C:
    // 0x80230B0C: jal         0x8003516C
    // 0x80230B10: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_20;
    // 0x80230B10: nop

    after_20:
    // 0x80230B14: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x80230B18: nop
    
            goto L_80230B7C;
    }
    // 0x80230B18: nop

    // 0x80230B1C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80230B20: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80230B24: bne         $v0, $zero, L_80230B48
    if (ctx->r2 != 0) {
        // 0x80230B28: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80230B48;
    }
    // 0x80230B28: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80230B2C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80230B30: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
    // 0x80230B34: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230B38: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x80230B3C: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x80230B40: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80230B44: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_80230B48:
    // 0x80230B48: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80230B4C:
    // 0x80230B4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230B50: j           L_80230B7C
    // 0x80230B54: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80230B7C;
    // 0x80230B54: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230B58:
    // 0x80230B58: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80230B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230B60: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230B64: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80230B68: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x80230B6C: beq         $v1, $zero, L_80230B7C
    if (ctx->r3 == 0) {
        // 0x80230B70: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80230B7C;
    }
    // 0x80230B70: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230B74: jal         0x8004F684
    // 0x80230B78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_21;
    // 0x80230B78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
L_80230B7C:
    // 0x80230B7C: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80230B80: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80230B84: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80230B88: beq         $v0, $zero, L_80230BCC
    if (ctx->r2 == 0) {
        // 0x80230B8C: nop
    
            goto L_80230BCC;
    }
    // 0x80230B8C: nop

    // 0x80230B90: jal         0x80061724
    // 0x80230B94: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_22;
    // 0x80230B94: nop

    after_22:
    // 0x80230B98: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80230B9C: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x80230BA0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80230BA4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80230BA8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80230BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230BB0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230BB4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80230BB8: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x80230BBC: beq         $v1, $zero, L_80230BCC
    if (ctx->r3 == 0) {
        // 0x80230BC0: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80230BCC;
    }
    // 0x80230BC0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230BC4: jal         0x8004F684
    // 0x80230BC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_23;
    // 0x80230BC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_23:
L_80230BCC:
    // 0x80230BCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80230BD0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230BD4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230BD8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230BDC: jr          $ra
    // 0x80230BE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80230BE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229288_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022928C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229290: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229294: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229298: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022929C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802292A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802292A4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802292A8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802292AC: bne         $v0, $zero, L_80229308
    if (ctx->r2 != 0) {
        // 0x802292B0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229308;
    }
    // 0x802292B0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802292B4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802292B8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802292BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802292C0: jal         0x8004F820
    // 0x802292C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802292C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802292C8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802292CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802292D0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x802292D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802292D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802292DC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802292E0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x802292E4: beq         $a0, $zero, L_80229308
    if (ctx->r4 == 0) {
        // 0x802292E8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229308;
    }
    // 0x802292E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802292EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802292F0: jal         0x80229CB0
    // 0x802292F4: nop

    func_80229CB0_ovl12(rdram, ctx);
        goto after_1;
    // 0x802292F4: nop

    after_1:
    // 0x802292F8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802292FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229300: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229304: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80229308:
    // 0x80229308: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022930C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80229310: bne         $v0, $zero, L_80229334
    if (ctx->r2 != 0) {
        // 0x80229314: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80229334;
    }
    // 0x80229314: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80229318: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022931C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80229320: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80229324: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80229328: jal         0x80229D48
    // 0x8022932C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_2;
    // 0x8022932C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80229330: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229334:
    // 0x80229334: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229338: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022933C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229340: jr          $ra
    // 0x80229344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231B5C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231B60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231B64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231B6C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80231B70: beq         $a0, $zero, L_80231B88
    if (ctx->r4 == 0) {
        // 0x80231B74: nop
    
            goto L_80231B88;
    }
    // 0x80231B74: nop

    // 0x80231B78: jal         0x8006033C
    // 0x80231B7C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80231B7C: nop

    after_0:
    // 0x80231B80: beq         $v0, $zero, L_80231BB0
    if (ctx->r2 == 0) {
        // 0x80231B84: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231BB0;
    }
    // 0x80231B84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231B88:
    // 0x80231B88: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80231B8C: jal         0x8006033C
    // 0x80231B90: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80231B90: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x80231B94: bne         $v0, $zero, L_80231BB0
    if (ctx->r2 != 0) {
        // 0x80231B98: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231BB0;
    }
    // 0x80231B98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80231B9C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80231BA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231BA4: bne         $v1, $v0, L_80231BB0
    if (ctx->r3 != ctx->r2) {
        // 0x80231BA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231BB0;
    }
    // 0x80231BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231BAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231BB0:
    // 0x80231BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231BB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231BB8: jr          $ra
    // 0x80231BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802297F4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802297F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802297FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229800: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80229804: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80229808: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022980C: jal         0x8003516C
    // 0x80229810: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80229810: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80229814: bne         $v0, $zero, L_80229838
    if (ctx->r2 != 0) {
        // 0x80229818: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229838;
    }
    // 0x80229818: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022981C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80229820: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80229824: jal         0x800610AC
    // 0x80229828: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80229828: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022982C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229834: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80229838:
    // 0x80229838: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022983C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80229840: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229844: jal         0x8004F820
    // 0x80229848: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229848: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022984C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229850: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80229854: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80229858: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022985C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229860: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229864: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229868: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022986C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229870: jr          $ra
    // 0x80229874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225A78_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A88: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A8C: beq         $v1, $zero, L_80225AA4
    if (ctx->r3 == 0) {
        // 0x80225A90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225AA4;
    }
    // 0x80225A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A94: beq         $v1, $v0, L_80225ADC
    if (ctx->r3 == ctx->r2) {
        // 0x80225A98: nop
    
            goto L_80225ADC;
    }
    // 0x80225A98: nop

    // 0x80225A9C: j           L_80225B10
    // 0x80225AA0: nop

        goto L_80225B10;
    // 0x80225AA0: nop

L_80225AA4:
    // 0x80225AA4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225AA8: jal         0x800607C4
    // 0x80225AAC: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225AAC: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    after_0:
    // 0x80225AB0: jal         0x8006033C
    // 0x80225AB4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225AB4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x80225AB8: beq         $v0, $zero, L_80225AD0
    if (ctx->r2 == 0) {
        // 0x80225ABC: nop
    
            goto L_80225AD0;
    }
    // 0x80225ABC: nop

    // 0x80225AC0: jal         0x80060AAC
    // 0x80225AC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x80225AC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80225AC8: jal         0x80060AAC
    // 0x80225ACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225ACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
L_80225AD0:
    // 0x80225AD0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225AD4: j           L_80225B0C
    // 0x80225AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225B0C;
    // 0x80225AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225ADC:
    // 0x80225ADC: jal         0x8006033C
    // 0x80225AE0: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225AE0: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x80225AE4: bne         $v0, $zero, L_80225AFC
    if (ctx->r2 != 0) {
        // 0x80225AE8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225AFC;
    }
    // 0x80225AE8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225AEC: jal         0x8006033C
    // 0x80225AF0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225AF0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225AF4: beq         $v0, $zero, L_80225B10
    if (ctx->r2 == 0) {
        // 0x80225AF8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225B10;
    }
    // 0x80225AF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225AFC:
    // 0x80225AFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225B00: jal         0x80060DA0
    // 0x80225B04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225B04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225B08: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225B0C:
    // 0x80225B0C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225B10:
    // 0x80225B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B18: jr          $ra
    // 0x80225B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254B4_ovl12(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802254C4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254C8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802254CC: beq         $v1, $zero, L_80225510
    if (ctx->r3 == 0) {
        // 0x802254D0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80225510;
    }
    // 0x802254D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254D8: bne         $v1, $v0, L_80225514
    if (ctx->r3 != ctx->r2) {
        // 0x802254DC: nop
    
            goto L_80225514;
    }
    // 0x802254DC: nop

    // 0x802254E0: jal         0x8006033C
    // 0x802254E4: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254E4: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_0:
    // 0x802254E8: bne         $v0, $zero, L_80225500
    if (ctx->r2 != 0) {
        // 0x802254EC: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225500;
    }
    // 0x802254EC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802254F0: jal         0x8006033C
    // 0x802254F4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802254F4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x802254F8: beq         $v0, $zero, L_80225514
    if (ctx->r2 == 0) {
        // 0x802254FC: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225514;
    }
    // 0x802254FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225500:
    // 0x80225500: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225504: jal         0x80060DA0
    // 0x80225508: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_2;
    // 0x80225508: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022550C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225510:
    // 0x80225510: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225514:
    // 0x80225514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022551C: jr          $ra
    // 0x80225520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229170_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229174: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229178: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022917C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229180: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229184: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229188: lw          $v0, 0x6550($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6550);
    // 0x8022918C: jalr        $v0
    // 0x80229190: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229190: nop

    after_0:
    // 0x80229194: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229198: jr          $ra
    // 0x8022919C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022919C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FF4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225FFC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226000: bne         $v0, $zero, L_802260AC
    if (ctx->r2 != 0) {
        // 0x80226004: nop
    
            goto L_802260AC;
    }
    // 0x80226004: nop

    // 0x80226008: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022600C: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80226010: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80226014: beq         $v0, $zero, L_80226024
    if (ctx->r2 == 0) {
        // 0x80226018: nop
    
            goto L_80226024;
    }
    // 0x80226018: nop

    // 0x8022601C: jal         0x80060590
    // 0x80226020: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x80226020: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    after_0:
L_80226024:
    // 0x80226024: jal         0x8006033C
    // 0x80226028: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80226028: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    after_1:
    // 0x8022602C: beq         $v0, $zero, L_8022604C
    if (ctx->r2 == 0) {
        // 0x80226030: nop
    
            goto L_8022604C;
    }
    // 0x80226030: nop

    // 0x80226034: jal         0x8006033C
    // 0x80226038: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80226038: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_2:
    // 0x8022603C: bne         $v0, $zero, L_8022604C
    if (ctx->r2 != 0) {
        // 0x80226040: nop
    
            goto L_8022604C;
    }
    // 0x80226040: nop

    // 0x80226044: jal         0x80060690
    // 0x80226048: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x80226048: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    after_3:
L_8022604C:
    // 0x8022604C: jal         0x8006033C
    // 0x80226050: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80226050: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_4:
    // 0x80226054: beq         $v0, $zero, L_80226078
    if (ctx->r2 == 0) {
        // 0x80226058: nop
    
            goto L_80226078;
    }
    // 0x80226058: nop

    // 0x8022605C: jal         0x8006033C
    // 0x80226060: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80226060: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    after_5:
    // 0x80226064: beq         $v0, $zero, L_80226078
    if (ctx->r2 == 0) {
        // 0x80226068: nop
    
            goto L_80226078;
    }
    // 0x80226068: nop

    // 0x8022606C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226070: jal         0x8005FB30
    // 0x80226074: addiu       $a0, $a0, 0x5C64
    ctx->r4 = ADD32(ctx->r4, 0X5C64);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_6;
    // 0x80226074: addiu       $a0, $a0, 0x5C64
    ctx->r4 = ADD32(ctx->r4, 0X5C64);
    after_6:
L_80226078:
    // 0x80226078: jal         0x8006033C
    // 0x8022607C: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022607C: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    after_7:
    // 0x80226080: beq         $v0, $zero, L_802260A4
    if (ctx->r2 == 0) {
        // 0x80226084: nop
    
            goto L_802260A4;
    }
    // 0x80226084: nop

    // 0x80226088: jal         0x8006033C
    // 0x8022608C: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022608C: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    after_8:
    // 0x80226090: bne         $v0, $zero, L_802260A4
    if (ctx->r2 != 0) {
        // 0x80226094: nop
    
            goto L_802260A4;
    }
    // 0x80226094: nop

    // 0x80226098: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022609C: jal         0x8005FB30
    // 0x802260A0: addiu       $a0, $a0, 0x5C78
    ctx->r4 = ADD32(ctx->r4, 0X5C78);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_9;
    // 0x802260A0: addiu       $a0, $a0, 0x5C78
    ctx->r4 = ADD32(ctx->r4, 0X5C78);
    after_9:
L_802260A4:
    // 0x802260A4: jal         0x8006036C
    // 0x802260A8: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x802260A8: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    after_10:
L_802260AC:
    // 0x802260AC: jal         0x8006036C
    // 0x802260B0: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x802260B0: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_11:
    // 0x802260B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802260B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802260BC: jr          $ra
    // 0x802260C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FE48_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FE4C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FE50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FE54: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022FE58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022FE5C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FE60: beq         $v0, $zero, L_8022FEB4
    if (ctx->r2 == 0) {
        // 0x8022FE64: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022FEB4;
    }
    // 0x8022FE64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FE68: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022FE6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE70: jal         0x8002C678
    // 0x8022FE74: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022FE74: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022FE78: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FE7C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022FE80: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022FE84: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022FE88: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FE8C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022FE90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FE94: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022FE98: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022FE9C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022FEA0: nop

    // 0x8022FEA4: jal         0x800319B4
    // 0x8022FEA8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022FEA8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022FEAC: j           L_8022FEC0
    // 0x8022FEB0: nop

        goto L_8022FEC0;
    // 0x8022FEB0: nop

L_8022FEB4:
    // 0x8022FEB4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022FEB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FEBC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022FEC0:
    // 0x8022FEC0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022FEC4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FEC8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FECC: jr          $ra
    // 0x8022FED0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FED0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022996C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022996C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229970: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022997C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229980: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229984: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80229988: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022998C: jal         0x8004FA7C
    // 0x80229990: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229990: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80229994: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229998: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022999C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802299A0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802299A4: beq         $v0, $zero, L_802299BC
    if (ctx->r2 == 0) {
        // 0x802299A8: nop
    
            goto L_802299BC;
    }
    // 0x802299A8: nop

    // 0x802299AC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802299B0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802299B4: beq         $v0, $zero, L_80229A08
    if (ctx->r2 == 0) {
        // 0x802299B8: nop
    
            goto L_80229A08;
    }
    // 0x802299B8: nop

L_802299BC:
    // 0x802299BC: jal         0x8003516C
    // 0x802299C0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802299C0: nop

    after_1:
    // 0x802299C4: bne         $v0, $zero, L_80229A08
    if (ctx->r2 != 0) {
        // 0x802299C8: nop
    
            goto L_80229A08;
    }
    // 0x802299C8: nop

    // 0x802299CC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802299D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299D4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802299D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299DC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x802299E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802299E4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802299E8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802299EC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x802299F0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x802299F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802299F8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x802299FC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80229A00: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229A04: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80229A08:
    // 0x80229A08: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229A0C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229A10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229A14: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229A18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229A1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229A20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229A24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A28: jr          $ra
    // 0x80229A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DAD0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022DAD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022DAD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DADC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022DAE0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022DAE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022DAE8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022DAEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DAF0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022DAF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DAF8: lw          $v1, 0x6A58($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6A58);
    // 0x8022DAFC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022DB00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB04: sw          $v1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r3;
    // 0x8022DB08: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022DB0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DB10: lw          $v1, 0x6A84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6A84);
    // 0x8022DB14: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022DB18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB1C: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    // 0x8022DB20: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022DB24: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022DB28: lw          $a1, 0x6AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6AB0);
    // 0x8022DB2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DB30: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022DB34: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x8022DB38: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x8022DB3C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DB40: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022DB44: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022DB48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022DB4C: sw          $a1, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r5;
    // 0x8022DB50: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022DB54: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022DB58: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x8022DB5C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x8022DB60: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8022DB64: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022DB68: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022DB6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022DB70: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022DB74: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8022DB78: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8022DB7C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022DB80: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DB84: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8022DB88: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022DB8C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022DB90: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022DB94: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022DB98: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022DB9C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022DBA0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022DBA4: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x8022DBA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DBAC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022DBB0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022DBB4: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8022DBB8: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x8022DBBC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DBC0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DBC4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022DBC8: lw          $a1, 0xD4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD4);
    // 0x8022DBCC: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x8022DBD0: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022DBD4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022DBD8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022DBDC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022DBE0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x8022DBE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022DBE8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DBEC: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x8022DBF0: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8022DBF4: sb          $v0, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r2;
    // 0x8022DBF8: jal         0x8009A3B4
    // 0x8022DBFC: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DBFC: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DC00: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DC04: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022DC08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DC0C: jal         0x8009A3B4
    // 0x8022DC10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DC10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022DC14: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DC18: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x8022DC1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022DC20: jal         0x8009A3B4
    // 0x8022DC24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DC24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DC28: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022DC2C: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x8022DC30: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022DC34: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022DC38: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8022DC3C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8022DC40: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022DC44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DC48: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8022DC4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DC50: sb          $zero, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = 0;
    // 0x8022DC54: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DC58: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022DC5C: jal         0x8003ECF0
    // 0x8022DC60: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_3;
    // 0x8022DC60: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022DC64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC68: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022DC6C: jal         0x8022E688
    // 0x8022DC70: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8022E688_ovl12(rdram, ctx);
        goto after_4;
    // 0x8022DC70: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022DC74: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022DC78: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022DC7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DC80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DC84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DC88: jal         0x8009A3B4
    // 0x8022DC8C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022DC8C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022DC90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022DC94: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022DC98: jal         0x80031428
    // 0x8022DC9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031428_C828(rdram, ctx);
        goto after_6;
    // 0x8022DC9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022DCA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DCA4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022DCA8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DCAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022DCB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DCB4: jal         0x80031DA8
    // 0x8022DCB8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x8022DCB8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_7:
    // 0x8022DCBC: lui         $a2, 0x80
    ctx->r6 = S32(0X80 << 16);
    // 0x8022DCC0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022DCC4: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x8022DCC8: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x8022DCCC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022DCD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DCD4: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022DCD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DCDC: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022DCE0: sw          $a2, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r6;
    // 0x8022DCE4: jal         0x8004D5D4
    // 0x8022DCE8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x8022DCE8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_8:
    // 0x8022DCEC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DCF0: sh          $zero, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = 0;
    // 0x8022DCF4: sh          $zero, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = 0;
    // 0x8022DCF8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022DCFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DD00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DD04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DD08: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022DD0C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022DD10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022DD14: jr          $ra
    // 0x8022DD18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DD18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80230E4C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80230E50: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80230E54: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230E58: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80230E5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80230E60: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80230E64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230E68: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230E6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230E70: lw          $v0, 0x6C0C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C0C);
    // 0x80230E74: jalr        $v0
    // 0x80230E78: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230E78: nop

    after_0:
    // 0x80230E7C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80230E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230E84: beq         $v1, $v0, L_80230EF8
    if (ctx->r3 == ctx->r2) {
        // 0x80230E88: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80230EF8;
    }
    // 0x80230E88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230E8C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80230E90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230E94: jal         0x80047284
    // 0x80230E98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x80230E98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80230E9C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80230EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230EA4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230EA8: jal         0x8009A3B4
    // 0x80230EAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230EAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230EB4: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80230EB8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80230EBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230EC0: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80230EC4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80230EC8: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80230ECC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230ED0: addiu       $v0, $s1, 0x4C
    ctx->r2 = ADD32(ctx->r17, 0X4C);
    // 0x80230ED4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230ED8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80230EDC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230EE0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230EE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80230EE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80230EEC: jal         0x80051E18
    // 0x80230EF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80230EF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80230EF4: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_80230EF8:
    // 0x80230EF8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80230EFC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230F00: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230F04: jr          $ra
    // 0x80230F08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80230F08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022CA44_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CA48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CA4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CA54: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CA58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CA5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CA60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CA64: lw          $v0, 0x6650($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6650);
    // 0x8022CA68: jalr        $v0
    // 0x8022CA6C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CA6C: nop

    after_0:
    // 0x8022CA70: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CA74: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CA78: beq         $v0, $zero, L_8022CA90
    if (ctx->r2 == 0) {
        // 0x8022CA7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CA90;
    }
    // 0x8022CA7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA80: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8022CA84: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022CA88: jal         0x8003B564
    // 0x8022CA8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_1;
    // 0x8022CA8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_8022CA90:
    // 0x8022CA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CA94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CA98: jr          $ra
    // 0x8022CA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C4C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229C50: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80229C54: bne         $a1, $a0, L_80229CA8
    if (ctx->r5 != ctx->r4) {
        // 0x80229C58: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_80229CA8;
    }
    // 0x80229C58: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x80229C5C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80229C60: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80229C64: bne         $v1, $v0, L_80229C74
    if (ctx->r3 != ctx->r2) {
        // 0x80229C68: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80229C74;
    }
    // 0x80229C68: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80229C6C: j           L_80229C90
    // 0x80229C70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80229C90;
    // 0x80229C70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80229C74:
    // 0x80229C74: bne         $v1, $v0, L_80229C84
    if (ctx->r3 != ctx->r2) {
        // 0x80229C78: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80229C84;
    }
    // 0x80229C78: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80229C7C: j           L_80229C90
    // 0x80229C80: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80229C90;
    // 0x80229C80: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80229C84:
    // 0x80229C84: bne         $v1, $v0, L_80229C90
    if (ctx->r3 != ctx->r2) {
        // 0x80229C88: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229C90;
    }
    // 0x80229C88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229C8C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229C90:
    // 0x80229C90: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80229C94: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80229C98: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80229C9C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80229CA0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80229CA4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80229CA8:
    // 0x80229CA8: jr          $ra
    // 0x80229CAC: nop

    TRACE_RETURN()
    return;
    // 0x80229CAC: nop

;}
RECOMP_FUNC void func_8022991C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022991C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229920: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80229924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229928: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022992C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229930: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229934: bne         $v1, $v0, L_8022995C
    if (ctx->r3 != ctx->r2) {
        // 0x80229938: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022995C;
    }
    // 0x80229938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022993C: jal         0x80061724
    // 0x80229940: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80229940: nop

    after_0:
    // 0x80229944: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229948: jal         0x800616FC
    // 0x8022994C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022994C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x80229950: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229954: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229958: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022995C:
    // 0x8022995C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229964: jr          $ra
    // 0x80229968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232880_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232880: lbu         $v0, 0xDE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDE);
    // 0x80232884: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x80232888: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023288C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232890: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x80232894: lbu         $v1, 0xDF($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XDF);
    // 0x80232898: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8023289C: bne         $v0, $zero, L_80232948
    if (ctx->r2 != 0) {
        // 0x802328A0: andi        $a2, $a1, 0xE0
        ctx->r6 = ctx->r5 & 0XE0;
            goto L_80232948;
    }
    // 0x802328A0: andi        $a2, $a1, 0xE0
    ctx->r6 = ctx->r5 & 0XE0;
    // 0x802328A4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802328A8: beq         $v0, $zero, L_8023291C
    if (ctx->r2 == 0) {
        // 0x802328AC: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8023291C;
    }
    // 0x802328AC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x802328B0: lh          $v0, 0x44($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X44);
    // 0x802328B4: bne         $v0, $zero, L_80232948
    if (ctx->r2 != 0) {
        // 0x802328B8: sh          $zero, 0xE0($a0)
        MEM_H(0XE0, ctx->r4) = 0;
            goto L_80232948;
    }
    // 0x802328B8: sh          $zero, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = 0;
    // 0x802328BC: andi        $v0, $a1, 0x80
    ctx->r2 = ctx->r5 & 0X80;
    // 0x802328C0: beq         $v0, $zero, L_80232908
    if (ctx->r2 == 0) {
        // 0x802328C4: andi        $v1, $a2, 0xFF
        ctx->r3 = ctx->r6 & 0XFF;
            goto L_80232908;
    }
    // 0x802328C4: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x802328C8: lbu         $v0, 0xDF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDF);
    // 0x802328CC: ori         $v0, $v0, 0x60
    ctx->r2 = ctx->r2 | 0X60;
    // 0x802328D0: sb          $v0, 0xDF($a0)
    MEM_B(0XDF, ctx->r4) = ctx->r2;
    // 0x802328D4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802328D8: bne         $v1, $v0, L_802328EC
    if (ctx->r3 != ctx->r2) {
        // 0x802328DC: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_802328EC;
    }
    // 0x802328DC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802328E0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802328E4: j           L_80232914
    // 0x802328E8: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_80232914;
    // 0x802328E8: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_802328EC:
    // 0x802328EC: bne         $v1, $v0, L_80232900
    if (ctx->r3 != ctx->r2) {
        // 0x802328F0: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_80232900;
    }
    // 0x802328F0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802328F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802328F8: j           L_80232914
    // 0x802328FC: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_80232914;
    // 0x802328FC: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_80232900:
    // 0x80232900: j           L_80232914
    // 0x80232904: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_80232914;
    // 0x80232904: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_80232908:
    // 0x80232908: lbu         $v0, 0xDF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDF);
    // 0x8023290C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80232910: sb          $v0, 0xDF($a0)
    MEM_B(0XDF, ctx->r4) = ctx->r2;
L_80232914:
    // 0x80232914: j           L_80232948
    // 0x80232918: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
        goto L_80232948;
    // 0x80232918: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
L_8023291C:
    // 0x8023291C: bne         $v0, $zero, L_80232948
    if (ctx->r2 != 0) {
        // 0x80232920: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_80232948;
    }
    // 0x80232920: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80232924: bne         $v0, $zero, L_80232944
    if (ctx->r2 != 0) {
        // 0x80232928: addiu       $v0, $zero, 0x140
        ctx->r2 = ADD32(0, 0X140);
            goto L_80232944;
    }
    // 0x80232928: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023292C: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80232930: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x80232934: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232938: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023293C: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80232940: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
L_80232944:
    // 0x80232944: sh          $v0, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r2;
L_80232948:
    // 0x80232948: jr          $ra
    // 0x8023294C: nop

    TRACE_RETURN()
    return;
    // 0x8023294C: nop

;}
RECOMP_FUNC void func_80227CB8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227CBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227CC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227CC8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227CCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227CD0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80227CD4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227CD8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80227CDC: jal         0x80229D98
    // 0x80227CE0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80229D98_ovl12(rdram, ctx);
        goto after_0;
    // 0x80227CE0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227CE4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227CE8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227CEC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227CF0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227CF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227CF8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D04: jr          $ra
    // 0x80227D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D56C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D56C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D570: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D574: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D578: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022D57C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022D580: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D584: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D588: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D58C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D590: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022D594: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022D598: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D59C: beq         $v0, $zero, L_8022D73C
    if (ctx->r2 == 0) {
        // 0x8022D5A0: addiu       $s3, $s2, 0x348
        ctx->r19 = ADD32(ctx->r18, 0X348);
            goto L_8022D73C;
    }
    // 0x8022D5A0: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x8022D5A4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D5A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D5AC: addu        $at, $at, $v0
    gpr jr_addend_8022D5B4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D5B0: lw          $v0, 0x74F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X74F8);
    // 0x8022D5B4: jr          $v0
    // 0x8022D5B8: nop

    switch (jr_addend_8022D5B4 >> 2) {
        case 0: goto L_8022D5BC; break;
        case 1: goto L_8022D5E8; break;
        case 2: goto L_8022D5FC; break;
        case 3: goto L_8022D6B8; break;
        case 4: goto L_8022D6DC; break;
        default: switch_error(__func__, 0x8022D5B4, 0x802374F8);
    }
    // 0x8022D5B8: nop

L_8022D5BC:
    // 0x8022D5BC: jal         0x8006FF84
    // 0x8022D5C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022D5C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x8022D5C4: beq         $v0, $zero, L_8022D73C
    if (ctx->r2 == 0) {
        // 0x8022D5C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D73C;
    }
    // 0x8022D5C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D5CC: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x8022D5D0: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022D5D4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x8022D5D8: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D5DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D5E0: j           L_8022D73C
    // 0x8022D5E4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022D73C;
    // 0x8022D5E4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022D5E8:
    // 0x8022D5E8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022D5EC: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x8022D5F0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D5F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D5F8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022D5FC:
    // 0x8022D5FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D600: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022D604: bne         $v0, $zero, L_8022D73C
    if (ctx->r2 != 0) {
        // 0x8022D608: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022D73C;
    }
    // 0x8022D608: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022D60C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D610: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D618: jal         0x800610AC
    // 0x8022D61C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022D61C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x8022D620: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D624: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022D628: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022D62C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D630: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D634: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022D638: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x8022D63C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022D640: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022D644: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022D648: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022D64C: jal         0x8009A3B4
    // 0x8022D650: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D650: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    after_2:
    // 0x8022D654: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x8022D658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D65C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D660: jal         0x8009A3B4
    // 0x8022D664: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D664: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D668: addiu       $a0, $s3, 0x24
    ctx->r4 = ADD32(ctx->r19, 0X24);
    // 0x8022D66C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D670: jal         0x8009A3B4
    // 0x8022D674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D678: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8022D67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D680: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x8022D684: jal         0x8009A3B4
    // 0x8022D688: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D688: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022D68C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022D690: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D694: jal         0x8009A3B4
    // 0x8022D698: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D698: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022D69C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D6A0: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022D6A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D6A8: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x8022D6AC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022D6B0: j           L_8022D73C
    // 0x8022D6B4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
        goto L_8022D73C;
    // 0x8022D6B4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
L_8022D6B8:
    // 0x8022D6B8: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022D6BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D6C0: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022D6C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D6C8: bnel        $v0, $zero, L_8022D6E0
    if (ctx->r2 != 0) {
        // 0x8022D6CC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022D6E0;
    }
    goto skip_0;
    // 0x8022D6CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x8022D6D0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D6D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D6D8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022D6DC:
    // 0x8022D6DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022D6E0:
    // 0x8022D6E0: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x8022D6E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D6E8: jal         0x8004DA90
    // 0x8022D6EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022D6EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022D6F0: jal         0x80040F30
    // 0x8022D6F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x8022D6F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x8022D6F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D6FC: jal         0x8022D884
    // 0x8022D700: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8022D884_ovl12(rdram, ctx);
        goto after_9;
    // 0x8022D700: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
    // 0x8022D704: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D708: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D70C: bne         $v0, $zero, L_8022D73C
    if (ctx->r2 != 0) {
        // 0x8022D710: nop
    
            goto L_8022D73C;
    }
    // 0x8022D710: nop

    // 0x8022D714: jal         0x80070050
    // 0x8022D718: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x8022D718: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x8022D71C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022D720: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x8022D724: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D728: jal         0x8006036C
    // 0x8022D72C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8022D72C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    after_11:
    // 0x8022D730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D734: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022D738: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8022D73C:
    // 0x8022D73C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022D740: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022D744: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D748: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D74C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D750: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D754: jr          $ra
    // 0x8022D758: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D758: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EF04_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EF0C: jal         0x8004F4F8
    // 0x8022EF10: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022EF10: nop

    after_0:
    // 0x8022EF14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF18: jr          $ra
    // 0x8022EF1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802345E0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802345E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802345E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802345E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802345EC: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x802345F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802345F4: jal         0x80071A70
    // 0x802345F8: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x802345F8: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    after_0:
    // 0x802345FC: bne         $v0, $zero, L_80234614
    if (ctx->r2 != 0) {
        // 0x80234600: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80234614;
    }
    // 0x80234600: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234604: jal         0x8004F62C
    // 0x80234608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80234608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023460C: j           L_802346A0
    // 0x80234610: nop

        goto L_802346A0;
    // 0x80234610: nop

L_80234614:
    // 0x80234614: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x80234618: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x8023461C: sb          $zero, 0x18($s0)
    MEM_B(0X18, ctx->r16) = 0;
    // 0x80234620: sb          $zero, 0x17($s0)
    MEM_B(0X17, ctx->r16) = 0;
    // 0x80234624: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    // 0x80234628: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x8023462C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234630: lbu         $v1, 0x7191($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7191);
    // 0x80234634: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234638: sb          $v1, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r3;
    // 0x8023463C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234640: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234644: lbu         $v1, 0x71CB($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X71CB);
    // 0x80234648: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x8023464C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234650: sb          $v1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r3;
    // 0x80234654: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234658: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023465C: lbu         $v1, 0x7205($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7205);
    // 0x80234660: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x80234664: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234668: sb          $v1, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r3;
    // 0x8023466C: lbu         $v1, 0x18($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X18);
    // 0x80234670: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234674: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234678: lbu         $v0, 0x723F($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X723F);
    // 0x8023467C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234680: sb          $v0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r2;
    // 0x80234684: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234688: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023468C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80234690: lbu         $v1, 0x7279($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X7279);
    // 0x80234694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234698: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023469C: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
L_802346A0:
    // 0x802346A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802346A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802346A8: jr          $ra
    // 0x802346AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802346AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6D8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6D8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022B6DC: beq         $a1, $zero, L_8022B6EC
    if (ctx->r5 == 0) {
        // 0x8022B6E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022B6EC;
    }
    // 0x8022B6E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B6E4: j           L_8022B6F0
    // 0x8022B6E8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_8022B6F0;
    // 0x8022B6E8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022B6EC:
    // 0x8022B6EC: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_8022B6F0:
    // 0x8022B6F0: jr          $ra
    // 0x8022B6F4: nop

    TRACE_RETURN()
    return;
    // 0x8022B6F4: nop

;}
RECOMP_FUNC void func_80226350_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226358: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022635C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226360: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80226364: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226368: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x8022636C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80226370:
    // 0x80226370: jal         0x8004EEAC
    // 0x80226374: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80226374: nop

    after_0:
    // 0x80226378: beql        $v0, $zero, L_80226390
    if (ctx->r2 == 0) {
        // 0x8022637C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80226390;
    }
    goto skip_0;
    // 0x8022637C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80226380: sb          $s2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r18;
    // 0x80226384: sb          $s1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r17;
    // 0x80226388: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x8022638C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80226390:
    // 0x80226390: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80226394: bne         $v0, $zero, L_80226370
    if (ctx->r2 != 0) {
        // 0x80226398: nop
    
            goto L_80226370;
    }
    // 0x80226398: nop

    // 0x8022639C: jal         0x8004EFE4
    // 0x802263A0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x802263A0: nop

    after_1:
    // 0x802263A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802263A8: beq         $v1, $zero, L_802263BC
    if (ctx->r3 == 0) {
        // 0x802263AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802263BC;
    }
    // 0x802263AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802263B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802263B4: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x802263B8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_802263BC:
    // 0x802263BC: jal         0x8004F2C4
    // 0x802263C0: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x802263C0: nop

    after_2:
    // 0x802263C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802263C8: beq         $a0, $zero, L_802263E0
    if (ctx->r4 == 0) {
        // 0x802263CC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802263E0;
    }
    // 0x802263CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802263D0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x802263D4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802263D8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802263DC: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_802263E0:
    // 0x802263E0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802263E4: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x802263E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802263EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263F0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802263F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802263F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263FC: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80226400: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226404: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226408: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022640C: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
    // 0x80226410: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226414: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80226418: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022641C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226420: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80226424: lui         $v0, 0xFF20
    ctx->r2 = S32(0XFF20 << 16);
    // 0x80226428: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022642C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80226430: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226434: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226438: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8022643C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226440: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80226444: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226448: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022644C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226450: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80226454: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226458: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022645C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226460: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80226464: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226468: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022646C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80226470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226474: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226478: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022647C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226480: jr          $ra
    // 0x80226484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225FA0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225FA8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225FAC: bne         $v0, $zero, L_80225FDC
    if (ctx->r2 != 0) {
        // 0x80225FB0: nop
    
            goto L_80225FDC;
    }
    // 0x80225FB0: nop

    // 0x80225FB4: jal         0x8006033C
    // 0x80225FB8: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225FB8: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_0:
    // 0x80225FBC: beq         $v0, $zero, L_80225FDC
    if (ctx->r2 == 0) {
        // 0x80225FC0: nop
    
            goto L_80225FDC;
    }
    // 0x80225FC0: nop

    // 0x80225FC4: jal         0x8006033C
    // 0x80225FC8: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225FC8: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    after_1:
    // 0x80225FCC: bne         $v0, $zero, L_80225FDC
    if (ctx->r2 != 0) {
        // 0x80225FD0: nop
    
            goto L_80225FDC;
    }
    // 0x80225FD0: nop

    // 0x80225FD4: jal         0x8006036C
    // 0x80225FD8: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225FD8: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    after_2:
L_80225FDC:
    // 0x80225FDC: jal         0x8006036C
    // 0x80225FE0: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225FE0: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_3:
    // 0x80225FE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225FE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225FEC: jr          $ra
    // 0x80225FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
