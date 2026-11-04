#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022A948_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A948: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A94C: beq         $v1, $zero, L_8022A968
    if (ctx->r3 == 0) {
        // 0x8022A950: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022A968;
    }
    // 0x8022A950: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022A954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A958: beq         $v1, $v0, L_8022A990
    if (ctx->r3 == ctx->r2) {
        // 0x8022A95C: nop
    
            goto L_8022A990;
    }
    // 0x8022A95C: nop

    // 0x8022A960: j           L_8022A9B4
    // 0x8022A964: nop

        goto L_8022A9B4;
    // 0x8022A964: nop

L_8022A968:
    // 0x8022A968: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x8022A96C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A970: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022A974: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A978: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022A97C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A980: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022A984: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x8022A988: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022A98C: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_8022A990:
    // 0x8022A990: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022A994: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A998: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022A99C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A9A0: bgez        $v0, L_8022A9B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A9A4: nop
    
            goto L_8022A9B4;
    }
    // 0x8022A9A4: nop

    // 0x8022A9A8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022A9AC: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022A9B0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022A9B4:
    // 0x8022A9B4: jr          $ra
    // 0x8022A9B8: nop

    TRACE_RETURN()
    return;
    // 0x8022A9B8: nop

;}
RECOMP_FUNC void func_80232AB8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232AB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232ABC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232AC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232AC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232AC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232ACC: lw          $a0, 0x354($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X354);
    // 0x80232AD0: jal         0x800324B4
    // 0x80232AD4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80232AD4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_0:
    // 0x80232AD8: lw          $a0, 0x354($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X354);
    // 0x80232ADC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80232AE0: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x80232AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232AE8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80232AEC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80232AF0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80232AF4: jal         0x80032498
    // 0x80232AF8: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80232AF8: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    after_1:
    // 0x80232AFC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80232B00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232B04: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80232B08: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80232B0C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80232B10: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80232B14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232B18: bgez        $a0, L_80232B9C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232B1C: sh          $v0, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r2;
            goto L_80232B9C;
    }
    // 0x80232B1C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80232B20: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80232B24: bne         $v0, $zero, L_80232B74
    if (ctx->r2 != 0) {
        // 0x80232B28: nop
    
            goto L_80232B74;
    }
    // 0x80232B28: nop

    // 0x80232B2C: jal         0x8004F144
    // 0x80232B30: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80232B30: nop

    after_2:
    // 0x80232B34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232B38: beq         $v1, $zero, L_80232B64
    if (ctx->r3 == 0) {
        // 0x80232B3C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80232B64;
    }
    // 0x80232B3C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80232B40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232B44: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80232B48: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232B4C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80232B50: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80232B54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232B58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232B5C: jal         0x8009A3B4
    // 0x80232B60: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80232B60: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_3:
L_80232B64:
    // 0x80232B64: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232B68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232B6C: j           L_80232B9C
    // 0x80232B70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232B9C;
    // 0x80232B70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232B74:
    // 0x80232B74: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232B78: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80232B7C: bne         $v0, $zero, L_80232B88
    if (ctx->r2 != 0) {
        // 0x80232B80: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80232B88;
    }
    // 0x80232B80: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80232B84: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80232B88:
    // 0x80232B88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232B8C: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x80232B90: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232B94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232B98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232B9C:
    // 0x80232B9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232BA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232BA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232BA8: jr          $ra
    // 0x80232BAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232BAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802274EC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802274F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802274F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802274FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227504: beq         $v1, $v0, L_80227550
    if (ctx->r3 == ctx->r2) {
        // 0x80227508: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_80227550;
    }
    // 0x80227508: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022750C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227510: beql        $v0, $zero, L_80227528
    if (ctx->r2 == 0) {
        // 0x80227514: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227528;
    }
    goto skip_0;
    // 0x80227514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227518: beq         $v1, $zero, L_80227538
    if (ctx->r3 == 0) {
        // 0x8022751C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227538;
    }
    // 0x8022751C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227520: j           L_80227624
    // 0x80227524: nop

        goto L_80227624;
    // 0x80227524: nop

L_80227528:
    // 0x80227528: beq         $v1, $v0, L_80227600
    if (ctx->r3 == ctx->r2) {
        // 0x8022752C: nop
    
            goto L_80227600;
    }
    // 0x8022752C: nop

    // 0x80227530: j           L_80227624
    // 0x80227534: nop

        goto L_80227624;
    // 0x80227534: nop

L_80227538:
    // 0x80227538: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022753C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80227540: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227544: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80227548: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022754C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80227550:
    // 0x80227550: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227554: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227558: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022755C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227560: bgezl       $v0, L_80227580
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227564: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227580;
    }
    goto skip_1;
    // 0x80227564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x80227568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022756C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227570: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227574: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80227578: j           L_80227600
    // 0x8022757C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
        goto L_80227600;
    // 0x8022757C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
L_80227580:
    // 0x80227580: addiu       $a1, $zero, -0xF0
    ctx->r5 = ADD32(0, -0XF0);
    // 0x80227584: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227588: jal         0x8004DA90
    // 0x8022758C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022758C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227590: jal         0x80040F30
    // 0x80227594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80227594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227598: jal         0x8003E934
    // 0x8022759C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022759C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802275A0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802275A4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802275A8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802275AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802275B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802275B4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802275B8: bltz        $v0, L_802275D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802275BC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802275D0;
    }
    // 0x802275BC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802275C0: beq         $v0, $zero, L_802275E0
    if (ctx->r2 == 0) {
        // 0x802275C4: nop
    
            goto L_802275E0;
    }
    // 0x802275C4: nop

    // 0x802275C8: j           L_80227624
    // 0x802275CC: nop

        goto L_80227624;
    // 0x802275CC: nop

L_802275D0:
    // 0x802275D0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802275D4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802275D8: bne         $v0, $zero, L_80227624
    if (ctx->r2 != 0) {
        // 0x802275DC: nop
    
            goto L_80227624;
    }
    // 0x802275DC: nop

L_802275E0:
    // 0x802275E0: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x802275E4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x802275E8: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x802275EC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x802275F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802275F4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802275F8: j           L_80227624
    // 0x802275FC: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_80227624;
    // 0x802275FC: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80227600:
    // 0x80227600: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227604: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227608: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022760C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227610: bgez        $v0, L_80227624
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227614: nop
    
            goto L_80227624;
    }
    // 0x80227614: nop

    // 0x80227618: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022761C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227620: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80227624:
    // 0x80227624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022762C: jr          $ra
    // 0x80227630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238948_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238948: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023894C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238954: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80238958: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023895C: lhu         $v0, 0xDE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XDE);
    // 0x80238960: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80238964: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80238968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023896C: beq         $v1, $v0, L_802389BC
    if (ctx->r3 == ctx->r2) {
        // 0x80238970: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_802389BC;
    }
    // 0x80238970: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80238974: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80238978: beql        $v0, $zero, L_80238990
    if (ctx->r2 == 0) {
        // 0x8023897C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238990;
    }
    goto skip_0;
    // 0x8023897C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80238980: beq         $v1, $zero, L_802389A0
    if (ctx->r3 == 0) {
        // 0x80238984: nop
    
            goto L_802389A0;
    }
    // 0x80238984: nop

    // 0x80238988: j           L_80238A84
    // 0x8023898C: nop

        goto L_80238A84;
    // 0x8023898C: nop

L_80238990:
    // 0x80238990: beq         $v1, $v0, L_80238A3C
    if (ctx->r3 == ctx->r2) {
        // 0x80238994: nop
    
            goto L_80238A3C;
    }
    // 0x80238994: nop

    // 0x80238998: j           L_80238A84
    // 0x8023899C: nop

        goto L_80238A84;
    // 0x8023899C: nop

L_802389A0:
    // 0x802389A0: lhu         $v0, 0xD4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD4);
    // 0x802389A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802389A8: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x802389AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802389B0: bgez        $v0, L_80238A84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802389B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238A84;
    }
    // 0x802389B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802389B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802389BC:
    // 0x802389BC: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x802389C0: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x802389C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802389C8: beq         $v0, $zero, L_802389FC
    if (ctx->r2 == 0) {
        // 0x802389CC: nop
    
            goto L_802389FC;
    }
    // 0x802389CC: nop

    // 0x802389D0: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802389D4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802389D8: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x802389DC: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x802389E0: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x802389E4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802389E8: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x802389EC: bgez        $v0, L_802389F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802389F0: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_802389F8;
    }
    // 0x802389F0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802389F4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_802389F8:
    // 0x802389F8: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_802389FC:
    // 0x802389FC: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80238A00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238A04: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80238A08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238A0C: bltz        $v0, L_80238A34
    if (SIGNED(ctx->r2) < 0) {
        // 0x80238A10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238A34;
    }
    // 0x80238A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238A14: lhu         $a1, 0xA($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XA);
    // 0x80238A18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238A1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238A20: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80238A24: jal         0x8004DA90
    // 0x80238A28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80238A28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x80238A2C: j           L_80238A84
    // 0x80238A30: nop

        goto L_80238A84;
    // 0x80238A30: nop

L_80238A34:
    // 0x80238A34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238A38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238A3C:
    // 0x80238A3C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80238A40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238A44: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80238A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238A4C: bgez        $v0, L_80238A84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80238A50: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80238A84;
    }
    // 0x80238A50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80238A54: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80238A58: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80238A5C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238A60: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238A64: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80238A68: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80238A6C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80238A70: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80238A74: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80238A78: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80238A7C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80238A80: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
L_80238A84:
    // 0x80238A84: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80238A88: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80238A8C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80238A90: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80238A94: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80238A98: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80238A9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238AA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80238AA4: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80238AA8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80238AAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238AB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238AB4: jr          $ra
    // 0x80238AB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238AB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238ABC: nop

;}
RECOMP_FUNC void func_8022AFB8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AFB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AFBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AFC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AFC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AFC8: jal         0x8004F144
    // 0x8022AFCC: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022AFCC: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    after_0:
    // 0x8022AFD0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AFD4: beq         $a0, $zero, L_8022B000
    if (ctx->r4 == 0) {
        // 0x8022AFD8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022B000;
    }
    // 0x8022AFD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AFDC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022AFE0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AFE4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022AFE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AFEC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022AFF0: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8022AFF4: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022AFF8: jal         0x8009A3B4
    // 0x8022AFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_8022B000:
    // 0x8022B000: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B004: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B008: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022B00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B010: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B014: jr          $ra
    // 0x8022B018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C300_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C304: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C308: jal         0x8004F418
    // 0x8022C30C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C30C: nop

    after_0:
    // 0x8022C310: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C314: jr          $ra
    // 0x8022C318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236020_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236020: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236024: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236028: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023602C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236030: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80236034: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80236038: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023603C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80236040: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80236044: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80236048: jal         0x800324B4
    // 0x8023604C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8023604C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    after_0:
    // 0x80236050: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80236054: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236058: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023605C: mflo        $v0
    ctx->r2 = lo;
    // 0x80236060: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x80236064: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80236068: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8023606C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80236070: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80236074: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80236078: jal         0x80032498
    // 0x8023607C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023607C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x80236080: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80236084: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80236088: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x8023608C: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80236090: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x80236094: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236098: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023609C: mflo        $v0
    ctx->r2 = lo;
    // 0x802360A0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802360A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802360A8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802360AC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802360B0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x802360B4: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x802360B8: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x802360BC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x802360C0: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x802360C4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x802360C8: jal         0x8004DD04
    // 0x802360CC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802360CC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_2:
    // 0x802360D0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802360D4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802360D8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x802360DC: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802360E0: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x802360E4: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x802360E8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x802360EC: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x802360F0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802360F4: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x802360F8: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x802360FC: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80236100: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80236104: jal         0x8004DD04
    // 0x80236108: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80236108: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    after_3:
    // 0x8023610C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236110: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80236114: beq         $v0, $zero, L_80236150
    if (ctx->r2 == 0) {
        // 0x80236118: sw          $zero, 0x78($s0)
        MEM_W(0X78, ctx->r16) = 0;
            goto L_80236150;
    }
    // 0x80236118: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023611C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80236120: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236124: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236128: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023612C: lhu         $v1, 0xD58($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD58);
    // 0x80236130: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80236134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236138: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023613C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236140: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236144: lhu         $v0, 0xD5A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD5A);
    // 0x80236148: j           L_80236180
    // 0x8023614C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80236180;
    // 0x8023614C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80236150:
    // 0x80236150: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80236154: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236158: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023615C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236160: lhu         $v1, 0xD40($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XD40);
    // 0x80236164: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80236168: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023616C: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80236170: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236174: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236178: lhu         $v0, 0xD42($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XD42);
    // 0x8023617C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80236180:
    // 0x80236180: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80236184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236188: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023618C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80236190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236194: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80236198: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023619C: jal         0x80236898
    // 0x802361A0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80236898_ovl4(rdram, ctx);
        goto after_4;
    // 0x802361A0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_4:
    // 0x802361A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802361A8: beq         $v0, $zero, L_802361B8
    if (ctx->r2 == 0) {
        // 0x802361AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802361B8;
    }
    // 0x802361AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802361B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802361B4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_802361B8:
    // 0x802361B8: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x802361BC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802361C0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x802361C4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x802361C8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802361CC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802361D0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802361D4: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x802361D8: sh          $a1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r5;
    // 0x802361DC: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x802361E0: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x802361E4: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x802361E8: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x802361EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802361F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802361F4: jr          $ra
    // 0x802361F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802361F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226488_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226488: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022648C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226490: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226494: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226498: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x8022649C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802264A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802264A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802264A8: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x802264AC: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x802264B0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802264B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802264B8: beq         $v0, $zero, L_802264C4
    if (ctx->r2 == 0) {
        // 0x802264BC: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802264C4;
    }
    // 0x802264BC: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802264C0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_802264C4:
    // 0x802264C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802264C8: beq         $v1, $zero, L_802264E0
    if (ctx->r3 == 0) {
        // 0x802264CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802264E0;
    }
    // 0x802264CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264D0: beq         $v1, $v0, L_80226510
    if (ctx->r3 == ctx->r2) {
        // 0x802264D4: nop
    
            goto L_80226510;
    }
    // 0x802264D4: nop

    // 0x802264D8: j           L_8022683C
    // 0x802264DC: nop

        goto L_8022683C;
    // 0x802264DC: nop

L_802264E0:
    // 0x802264E0: lhu         $v0, 0x32A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32A);
    // 0x802264E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802264E8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802264EC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802264F0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802264F4: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x802264F8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802264FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80226500: bne         $v1, $zero, L_80226510
    if (ctx->r3 != 0) {
        // 0x80226504: sh          $v0, 0x35E($s0)
        MEM_H(0X35E, ctx->r16) = ctx->r2;
            goto L_80226510;
    }
    // 0x80226504: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80226508: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x8022650C: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80226510:
    // 0x80226510: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80226514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226518: bnel        $v1, $v0, L_80226530
    if (ctx->r3 != ctx->r2) {
        // 0x8022651C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80226530;
    }
    goto skip_0;
    // 0x8022651C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x80226520: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    // 0x80226524: jal         0x8002A33C
    // 0x80226528: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80226528: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022652C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80226530:
    // 0x80226530: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x80226534: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226538: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022653C: jal         0x8004F820
    // 0x80226540: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80226540: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80226544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226548: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022654C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226550: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226554: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226558: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022655C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226560: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226564: jal         0x8004DA90
    // 0x80226568: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80226568: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022656C: jal         0x80040F30
    // 0x80226570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80226570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226578: jal         0x8003E934
    // 0x8022657C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022657C: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_4:
    // 0x80226580: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226584: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80226588: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022658C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226590: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80226594: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80226598: bltz        $v0, L_802265B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022659C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802265B0;
    }
    // 0x8022659C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802265A0: beq         $v0, $zero, L_802265C0
    if (ctx->r2 == 0) {
        // 0x802265A4: nop
    
            goto L_802265C0;
    }
    // 0x802265A4: nop

    // 0x802265A8: j           L_802265E0
    // 0x802265AC: nop

        goto L_802265E0;
    // 0x802265AC: nop

L_802265B0:
    // 0x802265B0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802265B4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802265B8: bne         $v0, $zero, L_802265E0
    if (ctx->r2 != 0) {
        // 0x802265BC: nop
    
            goto L_802265E0;
    }
    // 0x802265BC: nop

L_802265C0:
    // 0x802265C0: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x802265C4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x802265C8: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x802265CC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x802265D0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802265D4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802265D8: j           L_8022683C
    // 0x802265DC: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_8022683C;
    // 0x802265DC: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_802265E0:
    // 0x802265E0: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x802265E4: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802265E8: beq         $v0, $zero, L_80226614
    if (ctx->r2 == 0) {
        // 0x802265EC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80226614;
    }
    // 0x802265EC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802265F0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802265F4: jal         0x8009A3B4
    // 0x802265F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802265F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802265FC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226600: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80226604: jal         0x8009A3B4
    // 0x80226608: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80226608: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022660C: j           L_8022662C
    // 0x80226610: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8022662C;
    // 0x80226610: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80226614:
    // 0x80226614: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80226618: bne         $v0, $zero, L_80226638
    if (ctx->r2 != 0) {
        // 0x8022661C: nop
    
            goto L_80226638;
    }
    // 0x8022661C: nop

    // 0x80226620: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x80226624: bne         $v0, $zero, L_80226638
    if (ctx->r2 != 0) {
        // 0x80226628: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226638;
    }
    // 0x80226628: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022662C:
    // 0x8022662C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226630: j           L_8022683C
    // 0x80226634: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022683C;
    // 0x80226634: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80226638:
    // 0x80226638: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022663C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80226640: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80226644: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80226648: bne         $v0, $zero, L_80226684
    if (ctx->r2 != 0) {
        // 0x8022664C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80226684;
    }
    // 0x8022664C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80226650: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226654: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226658: sltiu       $v1, $v1, 0xF
    ctx->r3 = ctx->r3 < 0XF ? 1 : 0;
    // 0x8022665C: beq         $v1, $zero, L_80226674
    if (ctx->r3 == 0) {
        // 0x80226660: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80226674;
    }
    // 0x80226660: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226664: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226668: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022666C: j           L_8022683C
    // 0x80226670: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022683C;
    // 0x80226670: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226674:
    // 0x80226674: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226678: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022667C: j           L_8022683C
    // 0x80226680: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022683C;
    // 0x80226680: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226684:
    // 0x80226684: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80226688: bne         $v0, $zero, L_80226728
    if (ctx->r2 != 0) {
        // 0x8022668C: nop
    
            goto L_80226728;
    }
    // 0x8022668C: nop

    // 0x80226690: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x80226694: bne         $v0, $zero, L_80226728
    if (ctx->r2 != 0) {
        // 0x80226698: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226728;
    }
    // 0x80226698: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022669C: lw          $a3, 0x58($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X58);
    // 0x802266A0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802266A4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x802266A8: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x802266AC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802266B0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x802266B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802266B8: jal         0x8004FAEC
    // 0x802266BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_7;
    // 0x802266BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x802266C0: beq         $v0, $zero, L_80226728
    if (ctx->r2 == 0) {
        // 0x802266C4: nop
    
            goto L_80226728;
    }
    // 0x802266C4: nop

    // 0x802266C8: jal         0x80227BF0
    // 0x802266CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227BF0_ovl4(rdram, ctx);
        goto after_8;
    // 0x802266CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802266D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802266D4: beq         $v1, $zero, L_802266EC
    if (ctx->r3 == 0) {
        // 0x802266D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802266EC;
    }
    // 0x802266D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802266DC: beq         $v1, $v0, L_802266FC
    if (ctx->r3 == ctx->r2) {
        // 0x802266E0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_802266FC;
    }
    // 0x802266E0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802266E4: j           L_80226728
    // 0x802266E8: nop

        goto L_80226728;
    // 0x802266E8: nop

L_802266EC:
    // 0x802266EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802266F0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802266F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802266F8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_802266FC:
    // 0x802266FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226700: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226704: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x80226708: ori         $v1, $a0, 0x200
    ctx->r3 = ctx->r4 | 0X200;
    // 0x8022670C: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x80226710: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226714: sltiu       $v0, $v0, 0xF
    ctx->r2 = ctx->r2 < 0XF ? 1 : 0;
    // 0x80226718: bne         $v0, $zero, L_80226724
    if (ctx->r2 != 0) {
        // 0x8022671C: ori         $v0, $a0, 0x208
        ctx->r2 = ctx->r4 | 0X208;
            goto L_80226724;
    }
    // 0x8022671C: ori         $v0, $a0, 0x208
    ctx->r2 = ctx->r4 | 0X208;
    // 0x80226720: andi        $v0, $v1, 0xFFF7
    ctx->r2 = ctx->r3 & 0XFFF7;
L_80226724:
    // 0x80226724: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226728:
    // 0x80226728: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022672C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226730: bne         $v1, $v0, L_8022683C
    if (ctx->r3 != ctx->r2) {
        // 0x80226734: nop
    
            goto L_8022683C;
    }
    // 0x80226734: nop

    // 0x80226738: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022673C: bne         $v0, $zero, L_8022683C
    if (ctx->r2 != 0) {
        // 0x80226740: addiu       $s2, $s0, 0x1C
        ctx->r18 = ADD32(ctx->r16, 0X1C);
            goto L_8022683C;
    }
    // 0x80226740: addiu       $s2, $s0, 0x1C
    ctx->r18 = ADD32(ctx->r16, 0X1C);
    // 0x80226744: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226748: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x8022674C: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80226750: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80226754: lw          $a3, 0x58($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X58);
    // 0x80226758: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022675C: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x80226760: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x80226764: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80226768: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022676C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226770: jal         0x8004FAEC
    // 0x80226774: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_9;
    // 0x80226774: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x80226778: beq         $v0, $zero, L_8022683C
    if (ctx->r2 == 0) {
        // 0x8022677C: nop
    
            goto L_8022683C;
    }
    // 0x8022677C: nop

    // 0x80226780: jal         0x8004EFE4
    // 0x80226784: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_10;
    // 0x80226784: nop

    after_10:
    // 0x80226788: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022678C: beq         $v1, $zero, L_8022683C
    if (ctx->r3 == 0) {
        // 0x80226790: sw          $v1, 0x54($s1)
        MEM_W(0X54, ctx->r17) = ctx->r3;
            goto L_8022683C;
    }
    // 0x80226790: sw          $v1, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r3;
    // 0x80226794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226798: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022679C: lw          $v1, 0x54($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X54);
    // 0x802267A0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802267A4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802267A8: lw          $v0, 0x54($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X54);
    // 0x802267AC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x802267B0: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x802267B4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802267B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802267BC: jal         0x8009A3B4
    // 0x802267C0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x802267C0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_11:
    // 0x802267C4: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x802267C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802267CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802267D0: jal         0x8009A3B4
    // 0x802267D4: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x802267D4: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_12:
    // 0x802267D8: lw          $a1, 0x54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X54);
    // 0x802267DC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802267E0: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x802267E4: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x802267E8: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x802267EC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802267F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802267F4: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x802267F8: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x802267FC: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80226800: jal         0x8004DBA0
    // 0x80226804: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_13;
    // 0x80226804: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_13:
    // 0x80226808: lw          $v1, 0x54($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X54);
    // 0x8022680C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226810: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80226814: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x80226818: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022681C: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
    // 0x80226820: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80226824: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226828: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x8022682C: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x80226830: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226834: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80226838: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_8022683C:
    // 0x8022683C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226840: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80226844: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226848: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022684C: jr          $ra
    // 0x80226850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226264_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226264: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226268: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022626C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226270: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226274: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226278: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022627C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226280: beq         $v0, $zero, L_80226290
    if (ctx->r2 == 0) {
        // 0x80226284: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80226290;
    }
    // 0x80226284: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226288: jal         0x80227C58
    // 0x8022628C: nop

    func_80227C58_ovl4(rdram, ctx);
        goto after_0;
    // 0x8022628C: nop

    after_0:
L_80226290:
    // 0x80226290: lhu         $v0, 0x364($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X364);
    // 0x80226294: lbu         $a0, 0x32B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X32B);
    // 0x80226298: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022629C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x802262A0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802262A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802262A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802262AC: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x802262B0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802262B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802262B8: lw          $v0, 0x724($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X724);
    // 0x802262BC: jalr        $v0
    // 0x802262C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802262C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802262C4: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802262C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802262CC: beq         $v0, $zero, L_80226308
    if (ctx->r2 == 0) {
        // 0x802262D0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80226308;
    }
    // 0x802262D0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802262D4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802262D8: beq         $v1, $v0, L_802262F0
    if (ctx->r3 == ctx->r2) {
        // 0x802262DC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802262F0;
    }
    // 0x802262DC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802262E0: beq         $v1, $v0, L_802262F4
    if (ctx->r3 == ctx->r2) {
        // 0x802262E4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802262F4;
    }
    // 0x802262E4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802262E8: j           L_802262F4
    // 0x802262EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802262F4;
    // 0x802262EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802262F0:
    // 0x802262F0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802262F4:
    // 0x802262F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802262F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802262FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226300: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80226304: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226308:
    // 0x80226308: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022630C: beq         $v0, $zero, L_8022631C
    if (ctx->r2 == 0) {
        // 0x80226310: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022631C;
    }
    // 0x80226310: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226314: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226318: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022631C:
    // 0x8022631C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226320: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x80226324: beq         $v0, $zero, L_802263D8
    if (ctx->r2 == 0) {
        // 0x80226328: nop
    
            goto L_802263D8;
    }
    // 0x80226328: nop

    // 0x8022632C: lhu         $v0, 0x36($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X36);
    // 0x80226330: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226334: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
    // 0x80226338: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022633C: bgez        $v0, L_802263D8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226340: nop
    
            goto L_802263D8;
    }
    // 0x80226340: nop

    // 0x80226344: jal         0x8004F144
    // 0x80226348: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80226348: nop

    after_2:
    // 0x8022634C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226350: beq         $v1, $zero, L_8022638C
    if (ctx->r3 == 0) {
        // 0x80226354: sw          $v1, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r3;
            goto L_8022638C;
    }
    // 0x80226354: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x80226358: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022635C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226360: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x80226364: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226368: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022636C: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x80226370: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80226374: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80226378: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8022637C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226380: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226384: jal         0x8009A3B4
    // 0x80226388: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80226388: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_3:
L_8022638C:
    // 0x8022638C: jal         0x8004F418
    // 0x80226390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80226390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226394: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x80226398: jal         0x8004F5C4
    // 0x8022639C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_5;
    // 0x8022639C: nop

    after_5:
    // 0x802263A0: jal         0x8004F5C4
    // 0x802263A4: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x802263A4: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    after_6:
    // 0x802263A8: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x802263AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802263B0: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x802263B4: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x802263B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802263BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802263C0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802263C4: jal         0x8007A290
    // 0x802263C8: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x802263C8: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    after_7:
    // 0x802263CC: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x802263D0: jal         0x8002A33C
    // 0x802263D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802263D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_802263D8:
    // 0x802263D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802263DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802263E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802263E4: jr          $ra
    // 0x802263E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802263E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C11C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C11C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C120: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022C124: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C128: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022C12C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022C130: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022C134: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022C138: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022C13C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022C140: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C144: jal         0x8009A3B4
    // 0x8022C148: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C148: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022C14C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022C150: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022C154: jal         0x8009A3B4
    // 0x8022C158: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C158: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C15C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022C160: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022C164: jal         0x8009A3B4
    // 0x8022C168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C16C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C170: jal         0x800A3450
    // 0x8022C174: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022C174: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022C178: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022C17C: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x8022C180: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C184: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C188: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C18C: lw          $v0, 0x9CC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9CC);
    // 0x8022C190: jalr        $v0
    // 0x8022C194: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022C194: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022C198: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x8022C19C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C1A0: beq         $v0, $zero, L_8022C208
    if (ctx->r2 == 0) {
        // 0x8022C1A4: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022C208;
    }
    // 0x8022C1A4: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022C1A8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022C1AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C1B0: beq         $v1, $v0, L_8022C1F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022C1B4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C1F0;
    }
    // 0x8022C1B4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C1B8: beql        $v0, $zero, L_8022C1D0
    if (ctx->r2 == 0) {
        // 0x8022C1BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C1D0;
    }
    goto skip_0;
    // 0x8022C1BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C1C0: beq         $v1, $zero, L_8022C1F4
    if (ctx->r3 == 0) {
        // 0x8022C1C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C1F4;
    }
    // 0x8022C1C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C1C8: j           L_8022C1FC
    // 0x8022C1CC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022C1FC;
    // 0x8022C1CC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022C1D0:
    // 0x8022C1D0: bnel        $v1, $v0, L_8022C1FC
    if (ctx->r3 != ctx->r2) {
        // 0x8022C1D4: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_8022C1FC;
    }
    goto skip_1;
    // 0x8022C1D4: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_1:
    // 0x8022C1D8: jal         0x8004F418
    // 0x8022C1DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_5;
    // 0x8022C1DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022C1E0: jal         0x8006036C
    // 0x8022C1E4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022C1E4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_6:
    // 0x8022C1E8: j           L_8022C1FC
    // 0x8022C1EC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022C1FC;
    // 0x8022C1EC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022C1F0:
    // 0x8022C1F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C1F4:
    // 0x8022C1F4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022C1F8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022C1FC:
    // 0x8022C1FC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C200: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022C204: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022C208:
    // 0x8022C208: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022C20C: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022C210: beq         $v0, $a1, L_8022C228
    if (ctx->r2 == ctx->r5) {
        // 0x8022C214: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C228;
    }
    // 0x8022C214: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C218: jal         0x80050294
    // 0x8022C21C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022C21C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022C220: j           L_8022C230
    // 0x8022C224: nop

        goto L_8022C230;
    // 0x8022C224: nop

L_8022C228:
    // 0x8022C228: jal         0x8005044C
    // 0x8022C22C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022C22C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_8022C230:
    // 0x8022C230: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C234: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C238: beq         $v0, $zero, L_8022C250
    if (ctx->r2 == 0) {
        // 0x8022C23C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C250;
    }
    // 0x8022C23C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C240: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022C244: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C248: jal         0x8003B564
    // 0x8022C24C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022C24C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_8022C250:
    // 0x8022C250: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C254: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C258: beq         $v0, $zero, L_8022C2E8
    if (ctx->r2 == 0) {
        // 0x8022C25C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C2E8;
    }
    // 0x8022C25C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C260: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022C264: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C268: jal         0x80047284
    // 0x8022C26C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022C26C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8022C270: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C274: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C278: beq         $v0, $zero, L_8022C2E8
    if (ctx->r2 == 0) {
        // 0x8022C27C: nop
    
            goto L_8022C2E8;
    }
    // 0x8022C27C: nop

    // 0x8022C280: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C284: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C288: beq         $v0, $zero, L_8022C2E8
    if (ctx->r2 == 0) {
        // 0x8022C28C: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022C2E8;
    }
    // 0x8022C28C: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022C290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C294: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022C298: jal         0x8009A3B4
    // 0x8022C29C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022C29C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8022C2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2A4: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x8022C2A8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022C2AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C2B0: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022C2B4: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x8022C2B8: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022C2BC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C2C0: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022C2C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C2C8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022C2CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022C2D0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C2D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C2D8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C2DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022C2E0: jal         0x80051E18
    // 0x8022C2E4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x8022C2E4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_12:
L_8022C2E8:
    // 0x8022C2E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022C2EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022C2F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C2F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C2F8: jr          $ra
    // 0x8022C2FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C2FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022A81C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A81C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A824: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A82C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A830: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A834: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A838: beq         $v1, $zero, L_8022A854
    if (ctx->r3 == 0) {
        // 0x8022A83C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A854;
    }
    // 0x8022A83C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A844: beq         $v1, $v0, L_8022A86C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A848: nop
    
            goto L_8022A86C;
    }
    // 0x8022A848: nop

    // 0x8022A84C: j           L_8022A930
    // 0x8022A850: nop

        goto L_8022A930;
    // 0x8022A850: nop

L_8022A854:
    // 0x8022A854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A858: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A85C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A860: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A864: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022A868: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_8022A86C:
    // 0x8022A86C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A870: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A874: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A878: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A87C: bgtz        $v0, L_8022A890
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A880: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A890;
    }
    // 0x8022A880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A884: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A888: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A88C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A890:
    // 0x8022A890: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A894: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022A898: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x8022A89C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A8A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A8A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A8A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A8AC: jal         0x8004DA90
    // 0x8022A8B0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A8B0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A8B4: jal         0x80040F30
    // 0x8022A8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022A8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A8BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A8C0: jal         0x8003E934
    // 0x8022A8C4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022A8C4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022A8C8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A8CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8D0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A8D4: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8022A8D8: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022A8DC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A8E0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022A8E4: bltzl       $v0, L_8022A8EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A8E8: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_8022A8EC;
    }
    goto skip_0;
    // 0x8022A8E8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    skip_0:
L_8022A8EC:
    // 0x8022A8EC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A8F0: beq         $v0, $zero, L_8022A900
    if (ctx->r2 == 0) {
        // 0x8022A8F4: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_8022A900;
    }
    // 0x8022A8F4: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
    // 0x8022A8F8: beq         $v0, $zero, L_8022A930
    if (ctx->r2 == 0) {
        // 0x8022A8FC: nop
    
            goto L_8022A930;
    }
    // 0x8022A8FC: nop

L_8022A900:
    // 0x8022A900: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A904: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A908: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A90C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A910: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A914: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A918: jal         0x8009A3B4
    // 0x8022A91C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A91C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022A920: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A924: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A928: jal         0x8009A3B4
    // 0x8022A92C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A92C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_8022A930:
    // 0x8022A930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A934: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A938: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A93C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A940: jr          $ra
    // 0x8022A944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023080C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023080C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230810: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230818: lb          $v1, 0xA6($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XA6);
    // 0x8023081C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230820: bne         $v1, $v0, L_80230844
    if (ctx->r3 != ctx->r2) {
        // 0x80230824: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_80230844;
    }
    // 0x80230824: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80230828: sh          $v0, 0x46($a1)
    MEM_H(0X46, ctx->r5) = ctx->r2;
    // 0x8023082C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230830: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    // 0x80230834: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80230838: sb          $v0, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r2;
    // 0x8023083C: jal         0x8002A33C
    // 0x80230840: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80230840: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80230844:
    // 0x80230844: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230848: jr          $ra
    // 0x8023084C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023084C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263EC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802263F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802263F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802263F8: jal         0x8004F418
    // 0x802263FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802263FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80226400: lw          $a0, 0x36C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X36C);
    // 0x80226404: jal         0x8004F5C4
    // 0x80226408: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80226408: nop

    after_1:
    // 0x8022640C: jal         0x8004F5C4
    // 0x80226410: lw          $a0, 0x370($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X370);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80226410: lw          $a0, 0x370($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X370);
    after_2:
    // 0x80226414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022641C: jr          $ra
    // 0x80226420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E90_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80231E94: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80231E98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E9C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80231EA0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80231EA4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80231EA8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80231EAC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80231EB0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80231EB4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80231EB8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231EBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231EC0: jal         0x8009A3B4
    // 0x80231EC4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231EC4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231EC8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80231ECC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80231ED0: jal         0x8009A3B4
    // 0x80231ED4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231ED4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231ED8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80231EDC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80231EE0: jal         0x8009A3B4
    // 0x80231EE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231EE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80231EE8: lbu         $v1, 0x74($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X74);
    // 0x80231EEC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231EF0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231EF4: jal         0x800A3450
    // 0x80231EF8: sb          $v1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231EF8: sb          $v1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r3;
    after_3:
    // 0x80231EFC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80231F00: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80231F04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80231F08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231F0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231F10: lw          $v0, 0xBAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XBAC);
    // 0x80231F14: jalr        $v0
    // 0x80231F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80231F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231F1C: addiu       $a0, $s0, 0x388
    ctx->r4 = ADD32(ctx->r16, 0X388);
    // 0x80231F20: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80231F24: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231F28: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80231F2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231F30: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80231F34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231F38: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231F3C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80231F40: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80231F44: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80231F48: jal         0x800540D0
    // 0x80231F4C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_5;
    // 0x80231F4C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_5:
    // 0x80231F50: beq         $v0, $zero, L_80231F64
    if (ctx->r2 == 0) {
        // 0x80231F54: nop
    
            goto L_80231F64;
    }
    // 0x80231F54: nop

    // 0x80231F58: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80231F5C: j           L_80231F6C
    // 0x80231F60: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_80231F6C;
    // 0x80231F60: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_80231F64:
    // 0x80231F64: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80231F68: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_80231F6C:
    // 0x80231F6C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80231F70: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80231F74: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80231F78: beq         $v0, $a1, L_80231F90
    if (ctx->r2 == ctx->r5) {
        // 0x80231F7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231F90;
    }
    // 0x80231F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231F80: jal         0x80050294
    // 0x80231F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80231F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80231F88: j           L_80231F98
    // 0x80231F8C: nop

        goto L_80231F98;
    // 0x80231F8C: nop

L_80231F90:
    // 0x80231F90: jal         0x8005044C
    // 0x80231F94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x80231F94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80231F98:
    // 0x80231F98: jal         0x80040F30
    // 0x80231F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x80231F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80231FA0: jal         0x8003E934
    // 0x80231FA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x80231FA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80231FA8: lb          $v1, 0x74($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X74);
    // 0x80231FAC: bne         $v1, $zero, L_80232024
    if (ctx->r3 != 0) {
        // 0x80231FB0: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_80232024;
    }
    // 0x80231FB0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80231FB4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80231FB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231FBC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231FC0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80231FC4: bltz        $v0, L_80231FDC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231FC8: slti        $v0, $v0, 0x101
        ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
            goto L_80231FDC;
    }
    // 0x80231FC8: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80231FCC: beql        $v0, $zero, L_80231FEC
    if (ctx->r2 == 0) {
        // 0x80231FD0: sb          $zero, 0x3($s0)
        MEM_B(0X3, ctx->r16) = 0;
            goto L_80231FEC;
    }
    goto skip_0;
    // 0x80231FD0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    skip_0:
    // 0x80231FD4: j           L_80231FEC
    // 0x80231FD8: nop

        goto L_80231FEC;
    // 0x80231FD8: nop

L_80231FDC:
    // 0x80231FDC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80231FE0: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80231FE4: beql        $v0, $zero, L_80231FEC
    if (ctx->r2 == 0) {
        // 0x80231FE8: sb          $zero, 0x3($s0)
        MEM_B(0X3, ctx->r16) = 0;
            goto L_80231FEC;
    }
    goto skip_1;
    // 0x80231FE8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    skip_1:
L_80231FEC:
    // 0x80231FEC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231FF0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80231FF4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231FF8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80231FFC: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80232000: beq         $v1, $zero, L_80232020
    if (ctx->r3 == 0) {
        // 0x80232004: addiu       $v0, $a0, 0x28
        ctx->r2 = ADD32(ctx->r4, 0X28);
            goto L_80232020;
    }
    // 0x80232004: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x80232008: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023200C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232010: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232014: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232018: beq         $v0, $zero, L_80232028
    if (ctx->r2 == 0) {
        // 0x8023201C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232028;
    }
    // 0x8023201C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232020:
    // 0x80232020: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
L_80232024:
    // 0x80232024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232028:
    // 0x80232028: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023202C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80232030: jal         0x8003B564
    // 0x80232034: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80232034: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x80232038: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023203C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232040: beq         $v0, $zero, L_80232140
    if (ctx->r2 == 0) {
        // 0x80232044: addiu       $s2, $s1, 0x18
        ctx->r18 = ADD32(ctx->r17, 0X18);
            goto L_80232140;
    }
    // 0x80232044: addiu       $s2, $s1, 0x18
    ctx->r18 = ADD32(ctx->r17, 0X18);
    // 0x80232048: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023204C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80232050: jal         0x8009A3B4
    // 0x80232054: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80232054: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80232058: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023205C: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80232060: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80232064: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232068: addiu       $v0, $s1, 0x20
    ctx->r2 = ADD32(ctx->r17, 0X20);
    // 0x8023206C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80232070: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232074: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80232078: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x8023207C: lui         $s4, 0x80
    ctx->r20 = S32(0X80 << 16);
    // 0x80232080: lui         $s3, 0x488
    ctx->r19 = S32(0X488 << 16);
    // 0x80232084: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x80232088: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023208C: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x80232090: jal         0x80051E18
    // 0x80232094: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80232094: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x80232098: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023209C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802320A0: beql        $v0, $zero, L_80232144
    if (ctx->r2 == 0) {
        // 0x802320A4: sw          $zero, 0x20($s1)
        MEM_W(0X20, ctx->r17) = 0;
            goto L_80232144;
    }
    goto skip_2;
    // 0x802320A4: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    skip_2:
    // 0x802320A8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802320AC: jal         0x800324B4
    // 0x802320B0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_13;
    // 0x802320B0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_13:
    // 0x802320B4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802320B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802320BC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802320C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802320C4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x802320C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802320CC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802320D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802320D4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x802320D8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802320DC: jal         0x80032498
    // 0x802320E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_14;
    // 0x802320E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_14:
    // 0x802320E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802320E8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802320EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802320F0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802320F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802320F8: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x802320FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80232100: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80232104: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232108: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8023210C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80232110: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80232114: addiu       $v0, $s1, 0x30
    ctx->r2 = ADD32(ctx->r17, 0X30);
    // 0x80232118: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023211C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80232120: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80232124: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232128: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023212C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x80232130: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80232134: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x80232138: jal         0x80051E18
    // 0x8023213C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_15;
    // 0x8023213C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_15:
L_80232140:
    // 0x80232140: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
L_80232144:
    // 0x80232144: sw          $zero, 0x30($s1)
    MEM_W(0X30, ctx->r17) = 0;
    // 0x80232148: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8023214C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80232150: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80232154: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80232158: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8023215C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80232160: jr          $ra
    // 0x80232164: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80232164: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802330F0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802330F0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802330F4: bgez        $v0, L_80233110
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802330F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233110;
    }
    // 0x802330F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802330FC: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x80233100: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80233104: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80233108: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8023310C: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_80233110:
    // 0x80233110: jr          $ra
    // 0x80233114: nop

    TRACE_RETURN()
    return;
    // 0x80233114: nop

;}
RECOMP_FUNC void func_80232DD0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232DD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232DDC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232DE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232DE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232DE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232DEC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232DF0: beq         $v0, $zero, L_80232E1C
    if (ctx->r2 == 0) {
        // 0x80232DF4: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80232E1C;
    }
    // 0x80232DF4: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80232DF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232DFC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232E00: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    // 0x80232E04: jal         0x8004F820
    // 0x80232E08: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232E08: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x80232E0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232E10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232E14: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232E18: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232E1C:
    // 0x80232E1C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80232E20: bgez        $v0, L_80232FE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232E24: nop
    
            goto L_80232FE0;
    }
    // 0x80232E24: nop

    // 0x80232E28: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232E2C: beq         $v0, $zero, L_80232FBC
    if (ctx->r2 == 0) {
        // 0x80232E30: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232FBC;
    }
    // 0x80232E30: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80232E34: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80232E38: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80232E3C: jal         0x800324B4
    // 0x80232E40: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80232E40: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x80232E44: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232E48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232E4C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80232E50: bgez        $v1, L_80232E7C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80232E54: nop
    
            goto L_80232E7C;
    }
    // 0x80232E54: nop

    // 0x80232E58: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80232E5C: jal         0x800324B4
    // 0x80232E60: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80232E60: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_2:
    // 0x80232E64: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232E68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232E6C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80232E70: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80232E74: j           L_80232E94
    // 0x80232E78: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80232E94;
    // 0x80232E78: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_80232E7C:
    // 0x80232E7C: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80232E80: jal         0x800324B4
    // 0x80232E84: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80232E84: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_3:
    // 0x80232E88: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232E8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232E90: srl         $v0, $v1, 11
    ctx->r2 = S32(U32(ctx->r3) >> 11);
L_80232E94:
    // 0x80232E94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232E98: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232E9C: beq         $v1, $zero, L_80232EE8
    if (ctx->r3 == 0) {
        // 0x80232EA0: nop
    
            goto L_80232EE8;
    }
    // 0x80232EA0: nop

    // 0x80232EA4: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80232EA8: lh          $a0, 0x50($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X50);
    // 0x80232EAC: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80232EB0: bltzl       $v0, L_80232EB8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232EB4: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_80232EB8;
    }
    goto skip_0;
    // 0x80232EB4: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    skip_0:
L_80232EB8:
    // 0x80232EB8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80232EBC: bne         $v1, $zero, L_80232EC8
    if (ctx->r3 != 0) {
        // 0x80232EC0: nop
    
            goto L_80232EC8;
    }
    // 0x80232EC0: nop

    // 0x80232EC4: break       7
    do_break(2149789380);
L_80232EC8:
    // 0x80232EC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80232ECC: bne         $v1, $at, L_80232EE0
    if (ctx->r3 != ctx->r1) {
        // 0x80232ED0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80232EE0;
    }
    // 0x80232ED0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80232ED4: bne         $v0, $at, L_80232EE0
    if (ctx->r2 != ctx->r1) {
        // 0x80232ED8: nop
    
            goto L_80232EE0;
    }
    // 0x80232ED8: nop

    // 0x80232EDC: break       6
    do_break(2149789404);
L_80232EE0:
    // 0x80232EE0: mflo        $v0
    ctx->r2 = lo;
    // 0x80232EE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80232EE8:
    // 0x80232EE8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80232EEC: jal         0x80032498
    // 0x80232EF0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80232EF0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
    // 0x80232EF4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232EF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232EFC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80232F00: bgez        $v1, L_80232F2C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80232F04: nop
    
            goto L_80232F2C;
    }
    // 0x80232F04: nop

    // 0x80232F08: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80232F0C: jal         0x80032498
    // 0x80232F10: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x80232F10: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x80232F14: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232F18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232F1C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80232F20: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80232F24: j           L_80232F44
    // 0x80232F28: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80232F44;
    // 0x80232F28: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_80232F2C:
    // 0x80232F2C: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80232F30: jal         0x80032498
    // 0x80232F34: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x80232F34: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_6:
    // 0x80232F38: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232F3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232F40: srl         $v0, $v1, 11
    ctx->r2 = S32(U32(ctx->r3) >> 11);
L_80232F44:
    // 0x80232F44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232F48: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232F4C: beql        $v1, $zero, L_80232F9C
    if (ctx->r3 == 0) {
        // 0x80232F50: sll         $v1, $s1, 16
        ctx->r3 = S32(ctx->r17 << 16);
            goto L_80232F9C;
    }
    goto skip_1;
    // 0x80232F50: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    skip_1:
    // 0x80232F54: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80232F58: lh          $a0, 0x54($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X54);
    // 0x80232F5C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80232F60: bltzl       $v0, L_80232F68
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232F64: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_80232F68;
    }
    goto skip_2;
    // 0x80232F64: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    skip_2:
L_80232F68:
    // 0x80232F68: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80232F6C: bne         $v1, $zero, L_80232F78
    if (ctx->r3 != 0) {
        // 0x80232F70: nop
    
            goto L_80232F78;
    }
    // 0x80232F70: nop

    // 0x80232F74: break       7
    do_break(2149789556);
L_80232F78:
    // 0x80232F78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80232F7C: bne         $v1, $at, L_80232F90
    if (ctx->r3 != ctx->r1) {
        // 0x80232F80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80232F90;
    }
    // 0x80232F80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80232F84: bne         $v0, $at, L_80232F90
    if (ctx->r2 != ctx->r1) {
        // 0x80232F88: nop
    
            goto L_80232F90;
    }
    // 0x80232F88: nop

    // 0x80232F8C: break       6
    do_break(2149789580);
L_80232F90:
    // 0x80232F90: mflo        $v0
    ctx->r2 = lo;
    // 0x80232F94: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80232F98: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
L_80232F9C:
    // 0x80232F9C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80232FA0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80232FA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232FA8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232FAC: beql        $v1, $zero, L_80232FCC
    if (ctx->r3 == 0) {
        // 0x80232FB0: sh          $s1, 0x4($s3)
        MEM_H(0X4, ctx->r19) = ctx->r17;
            goto L_80232FCC;
    }
    goto skip_3;
    // 0x80232FB0: sh          $s1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r17;
    skip_3:
    // 0x80232FB4: j           L_80232FCC
    // 0x80232FB8: sh          $s2, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r18;
        goto L_80232FCC;
    // 0x80232FB8: sh          $s2, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r18;
L_80232FBC:
    // 0x80232FBC: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x80232FC0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232FC4: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80232FC8: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_80232FCC:
    // 0x80232FCC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232FD0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80232FD4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232FD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232FDC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232FE0:
    // 0x80232FE0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232FE4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232FE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232FEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232FF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232FF4: jr          $ra
    // 0x80232FF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232FF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802385BC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802385BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802385C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802385C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802385C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802385CC: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x802385D0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802385D4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802385D8: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x802385DC: beq         $v1, $zero, L_80238644
    if (ctx->r3 == 0) {
        // 0x802385E0: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_80238644;
    }
    // 0x802385E0: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802385E4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x802385E8: beql        $v0, $zero, L_8023863C
    if (ctx->r2 == 0) {
        // 0x802385EC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023863C;
    }
    goto skip_0;
    // 0x802385EC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x802385F0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802385F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802385F8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x802385FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238600: bgtz        $v0, L_80238620
    if (SIGNED(ctx->r2) > 0) {
        // 0x80238604: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80238620;
    }
    // 0x80238604: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80238608: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023860C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238614: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80238618: j           L_80238624
    // 0x8023861C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80238624;
    // 0x8023861C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80238620:
    // 0x80238620: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
L_80238624:
    // 0x80238624: jal         0x8002A33C
    // 0x80238628: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80238628: nop

    after_0:
    // 0x8023862C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80238630: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80238634: j           L_80238644
    // 0x80238638: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
        goto L_80238644;
    // 0x80238638: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
L_8023863C:
    // 0x8023863C: jal         0x8002A33C
    // 0x80238640: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80238640: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80238644:
    // 0x80238644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023864C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238650: jr          $ra
    // 0x80238654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80238658: nop

    // 0x8023865C: nop

;}
RECOMP_FUNC void func_8022C658_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C658: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C65C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022C660: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C664: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C668: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8022C66C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8022C670: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022C674: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022C678: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C67C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C680: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8022C684: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022C688: beq         $v1, $zero, L_8022C6A4
    if (ctx->r3 == 0) {
        // 0x8022C68C: addiu       $s4, $s2, 0x348
        ctx->r20 = ADD32(ctx->r18, 0X348);
            goto L_8022C6A4;
    }
    // 0x8022C68C: addiu       $s4, $s2, 0x348
    ctx->r20 = ADD32(ctx->r18, 0X348);
    // 0x8022C690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C694: beq         $v1, $v0, L_8022C6DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C698: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_8022C6DC;
    }
    // 0x8022C698: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8022C69C: j           L_8022C8B4
    // 0x8022C6A0: nop

        goto L_8022C8B4;
    // 0x8022C6A0: nop

L_8022C6A4:
    // 0x8022C6A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C6A8: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    // 0x8022C6AC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8022C6B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C6B4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022C6B8: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022C6BC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022C6C0: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022C6C4: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8022C6C8: sh          $v0, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r2;
    // 0x8022C6CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C6D0: jal         0x8006036C
    // 0x8022C6D4: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8022C6D4: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022C6D8: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_8022C6DC:
    // 0x8022C6DC: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022C6E0: addiu       $a1, $s4, 0x34
    ctx->r5 = ADD32(ctx->r20, 0X34);
    // 0x8022C6E4: jal         0x8004F820
    // 0x8022C6E8: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C6E8: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_1:
    // 0x8022C6EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C6F0: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x8022C6F4: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022C6F8: lh          $a2, 0x46($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X46);
    // 0x8022C6FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C700: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C704: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C708: jal         0x8004DA90
    // 0x8022C70C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C70C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    after_2:
    // 0x8022C710: jal         0x80040F30
    // 0x8022C714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C714: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022C718: lh          $a0, 0x16($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X16);
    // 0x8022C71C: lh          $v1, 0x2E($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X2E);
    // 0x8022C720: beq         $a0, $v1, L_8022C738
    if (ctx->r4 == ctx->r3) {
        // 0x8022C724: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8022C738;
    }
    // 0x8022C724: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022C728: lhu         $v0, 0x46($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X46);
    // 0x8022C72C: lhu         $v1, 0x4E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X4E);
    // 0x8022C730: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C734: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_8022C738:
    // 0x8022C738: andi        $v0, $a1, 0x1000
    ctx->r2 = ctx->r5 & 0X1000;
    // 0x8022C73C: beq         $v0, $zero, L_8022C768
    if (ctx->r2 == 0) {
        // 0x8022C740: nop
    
            goto L_8022C768;
    }
    // 0x8022C740: nop

    // 0x8022C744: lh          $v1, 0x46($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X46);
    // 0x8022C748: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022C74C: beq         $v1, $v0, L_8022C760
    if (ctx->r3 == ctx->r2) {
        // 0x8022C750: addiu       $a0, $zero, 0x117
        ctx->r4 = ADD32(0, 0X117);
            goto L_8022C760;
    }
    // 0x8022C750: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    // 0x8022C754: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C758: jal         0x8002A2F8
    // 0x8022C75C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x8022C75C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_8022C760:
    // 0x8022C760: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022C764: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_8022C768:
    // 0x8022C768: lh          $a2, 0x14($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X14);
    // 0x8022C76C: lh          $v1, 0x34($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X34);
    // 0x8022C770: lh          $a0, 0x18($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X18);
    // 0x8022C774: lh          $v0, 0x38($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X38);
    // 0x8022C778: lh          $a1, 0x4($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X4);
    // 0x8022C77C: subu        $s5, $a2, $v1
    ctx->r21 = SUB32(ctx->r6, ctx->r3);
    // 0x8022C780: subu        $s6, $a0, $v0
    ctx->r22 = SUB32(ctx->r4, ctx->r2);
    // 0x8022C784: beq         $a1, $zero, L_8022C7A0
    if (ctx->r5 == 0) {
        // 0x8022C788: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_8022C7A0;
    }
    // 0x8022C788: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8022C78C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C790: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8022C794: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C798: bne         $v0, $zero, L_8022C87C
    if (ctx->r2 != 0) {
        // 0x8022C79C: nop
    
            goto L_8022C87C;
    }
    // 0x8022C79C: nop

L_8022C7A0:
    // 0x8022C7A0: jal         0x8004F144
    // 0x8022C7A4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8022C7A4: nop

    after_5:
    // 0x8022C7A8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022C7AC: beq         $s3, $zero, L_8022C87C
    if (ctx->r19 == 0) {
        // 0x8022C7B0: addiu       $a1, $s2, 0x14
        ctx->r5 = ADD32(ctx->r18, 0X14);
            goto L_8022C87C;
    }
    // 0x8022C7B0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022C7B4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022C7B8: addiu       $s0, $s0, 0x1810
    ctx->r16 = ADD32(ctx->r16, 0X1810);
    // 0x8022C7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C7C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C7C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C7C8: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022C7CC: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022C7D0: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x8022C7D4: jal         0x8009A3B4
    // 0x8022C7D8: sb          $zero, 0x3($s3)
    MEM_B(0X3, ctx->r19) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C7D8: sb          $zero, 0x3($s3)
    MEM_B(0X3, ctx->r19) = 0;
    after_6:
    // 0x8022C7DC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022C7E0: addiu       $s1, $s1, 0x1818
    ctx->r17 = ADD32(ctx->r17, 0X1818);
    // 0x8022C7E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C7E8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022C7EC: jal         0x8009A3B4
    // 0x8022C7F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022C7F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022C7F4: jal         0x800A3450
    // 0x8022C7F8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022C7F8: nop

    after_8:
    // 0x8022C7FC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022C800: lhu         $v1, 0x2($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X2);
    // 0x8022C804: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8022C808: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022C80C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8022C810: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022C814: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022C818: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C81C: lh          $a3, 0x9F4($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X9F4);
    // 0x8022C820: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022C824: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C828: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C82C: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x8022C830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C838: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022C83C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C840: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C844: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C848: lh          $v0, 0x9F8($at)
    ctx->r2 = MEM_H(ctx->r1, 0X9F8);
    // 0x8022C84C: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x8022C850: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022C854: jal         0x8004DBA0
    // 0x8022C858: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_9;
    // 0x8022C858: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022C85C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022C860: sh          $v0, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = ctx->r2;
    // 0x8022C864: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C868: lhu         $v0, 0x1812($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1812);
    // 0x8022C86C: sh          $v0, 0x1E($s3)
    MEM_H(0X1E, ctx->r19) = ctx->r2;
    // 0x8022C870: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C874: lhu         $v0, 0x1814($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1814);
    // 0x8022C878: sh          $v0, 0x20($s3)
    MEM_H(0X20, ctx->r19) = ctx->r2;
L_8022C87C:
    // 0x8022C87C: nop

    // 0x8022C880: mult        $s5, $s5
    result = S64(S32(ctx->r21)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C884: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C888: nop

    // 0x8022C88C: nop

    // 0x8022C890: mult        $s6, $s6
    result = S64(S32(ctx->r22)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C894: mflo        $v1
    ctx->r3 = lo;
    // 0x8022C898: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C89C: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022C8A0: beq         $v0, $zero, L_8022C8B4
    if (ctx->r2 == 0) {
        // 0x8022C8A4: nop
    
            goto L_8022C8B4;
    }
    // 0x8022C8A4: nop

    // 0x8022C8A8: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8022C8AC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C8B0: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
L_8022C8B4:
    // 0x8022C8B4: lb          $v1, 0xA6($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA6);
    // 0x8022C8B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8BC: bne         $v1, $v0, L_8022C8D0
    if (ctx->r3 != ctx->r2) {
        // 0x8022C8C0: addiu       $a0, $zero, 0x116
        ctx->r4 = ADD32(0, 0X116);
            goto L_8022C8D0;
    }
    // 0x8022C8C0: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    // 0x8022C8C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C8C8: jal         0x8002A2F8
    // 0x8022C8CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x8022C8CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_8022C8D0:
    // 0x8022C8D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C8D4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8022C8D8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022C8DC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022C8E0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C8E4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022C8E8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C8EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C8F0: jr          $ra
    // 0x8022C8F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022C8F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8022C8F8: nop

    // 0x8022C8FC: nop

;}
RECOMP_FUNC void func_80237ED4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237ED4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80237ED8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80237EDC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80237EE0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80237EE4: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80237EE8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80237EEC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80237EF0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80237EF4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80237EF8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80237EFC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80237F00: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x80237F04: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80237F08: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80237F0C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80237F10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237F14: beq         $v0, $zero, L_80237F20
    if (ctx->r2 == 0) {
        // 0x80237F18: addiu       $s0, $s4, 0xC0
        ctx->r16 = ADD32(ctx->r20, 0XC0);
            goto L_80237F20;
    }
    // 0x80237F18: addiu       $s0, $s4, 0xC0
    ctx->r16 = ADD32(ctx->r20, 0XC0);
    // 0x80237F1C: sb          $zero, 0xC8($s4)
    MEM_B(0XC8, ctx->r20) = 0;
L_80237F20:
    // 0x80237F20: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x80237F24: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80237F28: beq         $v0, $zero, L_802384CC
    if (ctx->r2 == 0) {
        // 0x80237F2C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802384CC;
    }
    // 0x80237F2C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237F30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237F34: addu        $at, $at, $v0
    gpr jr_addend_80237F3C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237F38: lw          $v0, 0x16E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X16E8);
    // 0x80237F3C: jr          $v0
    // 0x80237F40: nop

    switch (jr_addend_80237F3C >> 2) {
        case 0: goto L_80237F44; break;
        case 1: goto L_80237F98; break;
        case 2: goto L_80237FE4; break;
        case 3: goto L_80238054; break;
        case 4: goto L_80238120; break;
        case 5: goto L_802381A8; break;
        case 6: goto L_80238338; break;
        case 7: goto L_802383E0; break;
        case 8: goto L_80238468; break;
        default: switch_error(__func__, 0x80237F3C, 0x802416E8);
    }
    // 0x80237F40: nop

L_80237F44:
    // 0x80237F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237F48: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80237F4C: sh          $zero, 0x54($s4)
    MEM_H(0X54, ctx->r20) = 0;
    // 0x80237F50: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80237F54: lbu         $v1, 0xE($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XE);
    // 0x80237F58: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    // 0x80237F5C: lhu         $a1, 0x56($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X56);
    // 0x80237F60: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80237F64: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80237F68: sh          $v0, 0x58($s4)
    MEM_H(0X58, ctx->r20) = ctx->r2;
    // 0x80237F6C: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    // 0x80237F70: sh          $a1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r5;
    // 0x80237F74: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80237F78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237F7C: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80237F80: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80237F84: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x80237F88: andi        $v1, $v1, 0xFFEF
    ctx->r3 = ctx->r3 & 0XFFEF;
    // 0x80237F8C: ori         $v1, $v1, 0x48
    ctx->r3 = ctx->r3 | 0X48;
    // 0x80237F90: jal         0x8002A33C
    // 0x80237F94: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80237F94: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_80237F98:
    // 0x80237F98: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80237F9C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80237FA0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80237FA4: bgez        $v0, L_80237FD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237FA8: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_80237FD0;
    }
    // 0x80237FA8: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80237FAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237FB0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80237FB4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80237FB8: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80237FBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237FC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237FC4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80237FC8: j           L_80237FE4
    // 0x80237FCC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80237FE4;
    // 0x80237FCC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80237FD0:
    // 0x80237FD0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80237FD4: beq         $v0, $zero, L_802384B4
    if (ctx->r2 == 0) {
        // 0x80237FD8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802384B4;
    }
    // 0x80237FD8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80237FDC: j           L_802384BC
    // 0x80237FE0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
        goto L_802384BC;
    // 0x80237FE0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_80237FE4:
    // 0x80237FE4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80237FE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237FEC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80237FF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237FF4: bltz        $v0, L_80238024
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237FF8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80238024;
    }
    // 0x80237FF8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80237FFC: lhu         $v0, 0x44($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X44);
    // 0x80238000: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x80238004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023800C: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80238010: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x80238014: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80238018: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023801C: j           L_802384C4
    // 0x80238020: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
        goto L_802384C4;
    // 0x80238020: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
L_80238024:
    // 0x80238024: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238028: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023802C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80238030: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80238034: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238038: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x8023803C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80238040: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80238044: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80238048: sh          $v0, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r2;
    // 0x8023804C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238050: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80238054:
    // 0x80238054: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80238058: beq         $v0, $zero, L_8023807C
    if (ctx->r2 == 0) {
        // 0x8023805C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8023807C;
    }
    // 0x8023805C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80238060: lhu         $v0, 0x44($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X44);
    // 0x80238064: lhu         $v1, 0x4C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X4C);
    // 0x80238068: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023806C: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80238070: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80238074: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238078: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023807C:
    // 0x8023807C: lhu         $a1, 0x44($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X44);
    // 0x80238080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238084: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238088: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8023808C: jal         0x8004DA90
    // 0x80238090: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80238090: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x80238094: jal         0x80040F30
    // 0x80238098: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80238098: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8023809C: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x802380A0: bne         $v0, $zero, L_802380B8
    if (ctx->r2 != 0) {
        // 0x802380A4: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_802380B8;
    }
    // 0x802380A4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802380A8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802380AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802380B0: beql        $v0, $zero, L_802380F0
    if (ctx->r2 == 0) {
        // 0x802380B4: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_802380F0;
    }
    goto skip_0;
    // 0x802380B4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    skip_0:
L_802380B8:
    // 0x802380B8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x802380BC: bne         $v0, $zero, L_802380F0
    if (ctx->r2 != 0) {
        // 0x802380C0: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_802380F0;
    }
    // 0x802380C0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802380C4: lbu         $v1, 0xE($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XE);
    // 0x802380C8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802380CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802380D0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802380D4: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x802380D8: jal         0x80034904
    // 0x802380DC: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    func_80034904_FD04(rdram, ctx);
        goto after_3;
    // 0x802380DC: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    after_3:
    // 0x802380E0: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    // 0x802380E4: jal         0x8002A33C
    // 0x802380E8: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802380E8: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_4:
    // 0x802380EC: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
L_802380F0:
    // 0x802380F0: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x802380F4: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x802380F8: lh          $v1, 0x56($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X56);
    // 0x802380FC: addiu       $a3, $s4, 0x1C
    ctx->r7 = ADD32(ctx->r20, 0X1C);
    // 0x80238100: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80238104: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80238108: jal         0x8004FC28
    // 0x8023810C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FC28_2B028(rdram, ctx);
        goto after_5;
    // 0x8023810C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80238110: beq         $v0, $zero, L_802384CC
    if (ctx->r2 == 0) {
        // 0x80238114: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802384CC;
    }
    // 0x80238114: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238118: j           L_802384CC
    // 0x8023811C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
        goto L_802384CC;
    // 0x8023811C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
L_80238120:
    // 0x80238120: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80238124: lhu         $a1, 0x44($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X44);
    // 0x80238128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023812C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238130: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80238134: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80238138: jal         0x8004DA90
    // 0x8023813C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023813C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_6:
    // 0x80238140: jal         0x80040F30
    // 0x80238144: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80238144: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80238148: lhu         $v1, 0x44($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X44);
    // 0x8023814C: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80238150: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238154: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80238158: beq         $v0, $zero, L_80238188
    if (ctx->r2 == 0) {
        // 0x8023815C: sh          $v1, 0x44($s4)
        MEM_H(0X44, ctx->r20) = ctx->r3;
            goto L_80238188;
    }
    // 0x8023815C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x80238160: lbu         $v1, 0xE($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XE);
    // 0x80238164: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80238168: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023816C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80238170: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80238174: jal         0x80034904
    // 0x80238178: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    func_80034904_FD04(rdram, ctx);
        goto after_8;
    // 0x80238178: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    after_8:
    // 0x8023817C: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    // 0x80238180: jal         0x8002A33C
    // 0x80238184: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x80238184: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_9:
L_80238188:
    // 0x80238188: lh          $v0, 0x44($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X44);
    // 0x8023818C: bne         $v0, $zero, L_802384CC
    if (ctx->r2 != 0) {
        // 0x80238190: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802384CC;
    }
    // 0x80238190: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80238194: lbu         $v0, 0xE($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE);
    // 0x80238198: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
    // 0x8023819C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802381A0: j           L_802384CC
    // 0x802381A4: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
        goto L_802384CC;
    // 0x802381A4: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
L_802381A8:
    // 0x802381A8: lbu         $v0, 0xE($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE);
    // 0x802381AC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802381B0: beq         $v0, $zero, L_802384CC
    if (ctx->r2 == 0) {
        // 0x802381B4: addiu       $s2, $s4, 0x14
        ctx->r18 = ADD32(ctx->r20, 0X14);
            goto L_802384CC;
    }
    // 0x802381B4: addiu       $s2, $s4, 0x14
    ctx->r18 = ADD32(ctx->r20, 0X14);
    // 0x802381B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802381BC: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x802381C0: lb          $a0, 0xD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0XD);
    // 0x802381C4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802381C8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802381CC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x802381D0: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x802381D4: jal         0x8004F820
    // 0x802381D8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8004F820_2AC20(rdram, ctx);
        goto after_10;
    // 0x802381D8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_10:
    // 0x802381DC: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x802381E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802381E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802381E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802381EC: bne         $v0, $zero, L_802384CC
    if (ctx->r2 != 0) {
        // 0x802381F0: sh          $v1, 0x56($s4)
        MEM_H(0X56, ctx->r20) = ctx->r3;
            goto L_802384CC;
    }
    // 0x802381F0: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x802381F4: addiu       $s7, $sp, 0x18
    ctx->r23 = ADD32(ctx->r29, 0X18);
    // 0x802381F8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x802381FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80238200: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238204: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238208: jal         0x8009A3B4
    // 0x8023820C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023820C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_11:
    // 0x80238210: addiu       $s6, $sp, 0x28
    ctx->r22 = ADD32(ctx->r29, 0X28);
    // 0x80238214: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80238218: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x8023821C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80238220: jal         0x8009A3B4
    // 0x80238224: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80238224: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x80238228: addiu       $s5, $sp, 0x20
    ctx->r21 = ADD32(ctx->r29, 0X20);
    // 0x8023822C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80238230: addiu       $s1, $s4, 0x54
    ctx->r17 = ADD32(ctx->r20, 0X54);
    // 0x80238234: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238238: jal         0x8009A3B4
    // 0x8023823C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8023823C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80238240: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x80238244: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238248: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023824C: jal         0x8009A3B4
    // 0x80238250: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80238250: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    after_14:
    // 0x80238254: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80238258: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x8023825C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80238260: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238264: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80238268: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023826C: jal         0x8009A3B4
    // 0x80238270: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80238270: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_15:
    // 0x80238274: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80238278: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8023827C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238280: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x80238284: lh          $v1, 0x16($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X16);
    // 0x80238288: lh          $t0, 0x18($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X18);
    // 0x8023828C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238290: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238294: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238298: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8023829C: sw          $v0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r2;
    // 0x802382A0: sw          $v1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r3;
    // 0x802382A4: jal         0x8004DA90
    // 0x802382A8: sw          $t0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_16;
    // 0x802382A8: sw          $t0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r8;
    after_16:
    // 0x802382AC: lh          $v1, 0x14($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X14);
    // 0x802382B0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x802382B4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802382B8: bltzl       $v0, L_802382C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802382BC: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802382C0;
    }
    goto skip_1;
    // 0x802382BC: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_1:
L_802382C0:
    // 0x802382C0: lh          $v1, 0x16($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X16);
    // 0x802382C4: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x802382C8: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x802382CC: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x802382D0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802382D4: bltzl       $v0, L_802382DC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802382D8: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802382DC;
    }
    goto skip_2;
    // 0x802382D8: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_2:
L_802382DC:
    // 0x802382DC: lh          $v1, 0x18($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X18);
    // 0x802382E0: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x802382E4: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x802382E8: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x802382EC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802382F0: bltzl       $v0, L_802382F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802382F4: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802382F8;
    }
    goto skip_3;
    // 0x802382F4: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_3:
L_802382F8:
    // 0x802382F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802382FC: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x80238300: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238304: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80238308: jal         0x8009A3B4
    // 0x8023830C: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8023830C: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    after_17:
    // 0x80238310: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80238314: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80238318: jal         0x8009A3B4
    // 0x8023831C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x8023831C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x80238320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238324: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80238328: jal         0x8009A3B4
    // 0x8023832C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023832C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x80238330: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80238334: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80238338:
    // 0x80238338: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023833C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238340: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80238344: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238348: bgez        $v0, L_802383F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023834C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802383F8;
    }
    // 0x8023834C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80238350: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80238354: lb          $v0, 0xD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XD);
    // 0x80238358: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8023835C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80238360: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238364: lh          $v1, 0x180($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X180);
    // 0x80238368: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x8023836C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80238370: bltzl       $v0, L_80238378
    if (SIGNED(ctx->r2) < 0) {
        // 0x80238374: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80238378;
    }
    goto skip_4;
    // 0x80238374: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_4:
L_80238378:
    // 0x80238378: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023837C: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80238380: lb          $v0, 0xD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XD);
    // 0x80238384: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80238388: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023838C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238390: lh          $v1, 0x182($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X182);
    // 0x80238394: lh          $v0, 0x16($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X16);
    // 0x80238398: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8023839C: bltzl       $v0, L_802383A4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802383A0: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802383A4;
    }
    goto skip_5;
    // 0x802383A0: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_5:
L_802383A4:
    // 0x802383A4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802383A8: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x802383AC: lb          $v0, 0xD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XD);
    // 0x802383B0: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802383B4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802383B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802383BC: lh          $v1, 0x184($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X184);
    // 0x802383C0: lh          $v0, 0x18($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X18);
    // 0x802383C4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802383C8: bltzl       $v0, L_802383D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802383CC: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802383D0;
    }
    goto skip_6;
    // 0x802383CC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_6:
L_802383D0:
    // 0x802383D0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802383D4: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x802383D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802383DC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_802383E0:
    // 0x802383E0: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802383E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802383E8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802383EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802383F0: bltz        $v0, L_80238450
    if (SIGNED(ctx->r2) < 0) {
        // 0x802383F4: addiu       $a0, $zero, 0xC7
        ctx->r4 = ADD32(0, 0XC7);
            goto L_80238450;
    }
    // 0x802383F4: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
L_802383F8:
    // 0x802383F8: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    // 0x802383FC: lhu         $a1, 0x44($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X44);
    // 0x80238400: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    // 0x80238404: lhu         $a2, 0x46($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X46);
    // 0x80238408: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x8023840C: lhu         $a3, 0x48($s4)
    ctx->r7 = MEM_HU(ctx->r20, 0X48);
    // 0x80238410: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80238414: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x80238418: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x8023841C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80238420: sh          $v1, 0x16($s4)
    MEM_H(0X16, ctx->r20) = ctx->r3;
    // 0x80238424: lh          $v1, 0x16($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X16);
    // 0x80238428: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8023842C: sh          $a0, 0x18($s4)
    MEM_H(0X18, ctx->r20) = ctx->r4;
    // 0x80238430: lh          $a0, 0x18($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X18);
    // 0x80238434: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238438: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023843C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80238440: sw          $v0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r2;
    // 0x80238444: sw          $v1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r3;
    // 0x80238448: j           L_802384CC
    // 0x8023844C: sw          $a0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r4;
        goto L_802384CC;
    // 0x8023844C: sw          $a0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r4;
L_80238450:
    // 0x80238450: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80238454: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238458: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023845C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238460: jal         0x8002A33C
    // 0x80238464: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x80238464: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_20:
L_80238468:
    // 0x80238468: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023846C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80238470: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80238474: bgez        $v0, L_802384A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80238478: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_802384A0;
    }
    // 0x80238478: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8023847C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80238480: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
    // 0x80238484: andi        $v0, $v0, 0xFFB7
    ctx->r2 = ctx->r2 & 0XFFB7;
    // 0x80238488: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8023848C: lbu         $v0, 0xE($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE);
    // 0x80238490: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238494: andi        $v0, $v0, 0xE7
    ctx->r2 = ctx->r2 & 0XE7;
    // 0x80238498: j           L_802384CC
    // 0x8023849C: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
        goto L_802384CC;
    // 0x8023849C: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
L_802384A0:
    // 0x802384A0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802384A4: beq         $v0, $zero, L_802384B4
    if (ctx->r2 == 0) {
        // 0x802384A8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802384B4;
    }
    // 0x802384A8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802384AC: j           L_802384BC
    // 0x802384B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
        goto L_802384BC;
    // 0x802384B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_802384B4:
    // 0x802384B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802384B8: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
L_802384BC:
    // 0x802384BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802384C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_802384C4:
    // 0x802384C4: jal         0x8004DA90
    // 0x802384C8: nop

    func_8004DA90_28E90(rdram, ctx);
        goto after_21;
    // 0x802384C8: nop

    after_21:
L_802384CC:
    // 0x802384CC: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x802384D0: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x802384D4: beq         $v0, $zero, L_80238590
    if (ctx->r2 == 0) {
        // 0x802384D8: nop
    
            goto L_80238590;
    }
    // 0x802384D8: nop

    // 0x802384DC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802384E0: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x802384E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802384E8: bne         $v0, $zero, L_80238590
    if (ctx->r2 != 0) {
        // 0x802384EC: sh          $v1, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r3;
            goto L_80238590;
    }
    // 0x802384EC: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x802384F0: jal         0x8004F144
    // 0x802384F4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_22;
    // 0x802384F4: nop

    after_22:
    // 0x802384F8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x802384FC: beq         $s5, $zero, L_80238590
    if (ctx->r21 == 0) {
        // 0x80238500: addiu       $s3, $sp, 0x18
        ctx->r19 = ADD32(ctx->r29, 0X18);
            goto L_80238590;
    }
    // 0x80238500: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x80238504: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80238508: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8023850C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80238510: jal         0x8009A3B4
    // 0x80238514: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x80238514: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x80238518: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x8023851C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80238520: addiu       $s1, $s4, 0x1C
    ctx->r17 = ADD32(ctx->r20, 0X1C);
    // 0x80238524: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238528: jal         0x8009A3B4
    // 0x8023852C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_24;
    // 0x8023852C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_24:
    // 0x80238530: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80238534: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x80238538: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023853C: jal         0x8004DA90
    // 0x80238540: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_25;
    // 0x80238540: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_25:
    // 0x80238544: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238548: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
    // 0x8023854C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80238550: sb          $v0, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r2;
    // 0x80238554: sb          $zero, 0x3($s5)
    MEM_B(0X3, ctx->r21) = 0;
    // 0x80238558: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    // 0x8023855C: sh          $v0, 0x1C($s5)
    MEM_H(0X1C, ctx->r21) = ctx->r2;
    // 0x80238560: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80238564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238568: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x8023856C: lhu         $v0, 0x18($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X18);
    // 0x80238570: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80238574: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238578: jal         0x8009A3B4
    // 0x8023857C: sh          $v0, 0x20($s5)
    MEM_H(0X20, ctx->r21) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_26;
    // 0x8023857C: sh          $v0, 0x20($s5)
    MEM_H(0X20, ctx->r21) = ctx->r2;
    after_26:
    // 0x80238580: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238584: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80238588: jal         0x8009A3B4
    // 0x8023858C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_27;
    // 0x8023858C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_27:
L_80238590:
    // 0x80238590: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80238594: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80238598: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8023859C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802385A0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x802385A4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802385A8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802385AC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802385B0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802385B4: jr          $ra
    // 0x802385B8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802385B8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80231B7C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231B80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231B84: lhu         $v0, 0x380($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X380);
    // 0x80231B88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231B8C: sh          $v0, 0x380($a0)
    MEM_H(0X380, ctx->r4) = ctx->r2;
    // 0x80231B90: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231B94: bne         $v0, $zero, L_80231BA4
    if (ctx->r2 != 0) {
        // 0x80231B98: nop
    
            goto L_80231BA4;
    }
    // 0x80231B98: nop

    // 0x80231B9C: jal         0x80231E3C
    // 0x80231BA0: nop

    func_80231E3C_ovl4(rdram, ctx);
        goto after_0;
    // 0x80231BA0: nop

    after_0:
L_80231BA4:
    // 0x80231BA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231BA8: jr          $ra
    // 0x80231BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A384_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A388: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A38C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A390: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A398: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A39C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022A3A0: beq         $v0, $zero, L_8022A568
    if (ctx->r2 == 0) {
        // 0x8022A3A4: addiu       $s0, $s1, 0x348
        ctx->r16 = ADD32(ctx->r17, 0X348);
            goto L_8022A568;
    }
    // 0x8022A3A4: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    // 0x8022A3A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A3AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A3B0: addu        $at, $at, $v0
    gpr jr_addend_8022A3B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A3B4: lw          $v0, 0x1580($at)
    ctx->r2 = ADD32(ctx->r1, 0X1580);
    // 0x8022A3B8: jr          $v0
    // 0x8022A3BC: nop

    switch (jr_addend_8022A3B8 >> 2) {
        case 0: goto L_8022A3C0; break;
        case 1: goto L_8022A3F4; break;
        case 2: goto L_8022A42C; break;
        case 3: goto L_8022A4C8; break;
        case 4: goto L_8022A524; break;
        default: switch_error(__func__, 0x8022A3B8, 0x80241580);
    }
    // 0x8022A3BC: nop

L_8022A3C0:
    // 0x8022A3C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3C4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A3C8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022A3CC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022A3D0: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A3D4: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    // 0x8022A3D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022A3DC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022A3E0: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8022A3E4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A3E8: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022A3EC: jal         0x8002A33C
    // 0x8022A3F0: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022A3F0: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_8022A3F4:
    // 0x8022A3F4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A3F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A3FC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A400: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A404: bgez        $v0, L_8022A568
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A408: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A568;
    }
    // 0x8022A408: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A40C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A410: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A414: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A418: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A41C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022A420: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8022A424: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022A428: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_8022A42C:
    // 0x8022A42C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A430: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A434: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A438: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A43C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A440: bltz        $v0, L_8022A4B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A444: addiu       $a0, $zero, 0xBB
        ctx->r4 = ADD32(0, 0XBB);
            goto L_8022A4B0;
    }
    // 0x8022A444: addiu       $a0, $zero, 0xBB
    ctx->r4 = ADD32(0, 0XBB);
    // 0x8022A448: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A44C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A450: lbu         $v0, 0x848($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X848);
    // 0x8022A454: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A458: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A45C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A460: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A464: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022A468: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A46C: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022A470: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022A474: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8022A478: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A47C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A480: lbu         $v0, 0x848($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X848);
    // 0x8022A484: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A488: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8022A48C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A490: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A494: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A498: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022A49C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A4A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A4A4: lh          $v0, 0x840($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X840);
    // 0x8022A4A8: j           L_8022A568
    // 0x8022A4AC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
        goto L_8022A568;
    // 0x8022A4AC: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_8022A4B0:
    // 0x8022A4B0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022A4B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A4B8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A4BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A4C0: jal         0x8002A33C
    // 0x8022A4C4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022A4C4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_1:
L_8022A4C8:
    // 0x8022A4C8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A4CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A4D0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A4D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4D8: bltz        $v0, L_8022A510
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A4DC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A510;
    }
    // 0x8022A4DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A4E0: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A4E4: addiu       $v0, $v0, 0x11
    ctx->r2 = ADD32(ctx->r2, 0X11);
    // 0x8022A4E8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A4EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4F0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A4F4: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A4F8: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022A4FC: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x8022A500: addiu       $v1, $v1, -0x555
    ctx->r3 = ADD32(ctx->r3, -0X555);
    // 0x8022A504: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A508: j           L_8022A568
    // 0x8022A50C: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
        goto L_8022A568;
    // 0x8022A50C: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
L_8022A510:
    // 0x8022A510: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A514: sb          $v0, 0x108($s1)
    MEM_B(0X108, ctx->r17) = ctx->r2;
    // 0x8022A518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A51C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8022A520: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_8022A524:
    // 0x8022A524: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A528: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A52C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A530: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A534: bgez        $v0, L_8022A568
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A538: nop
    
            goto L_8022A568;
    }
    // 0x8022A538: nop

    // 0x8022A53C: jal         0x8003E934
    // 0x8022A540: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022A540: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022A544: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x8022A548: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A54C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A550: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A554: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A558: addiu       $v1, $zero, -0x32
    ctx->r3 = ADD32(0, -0X32);
    // 0x8022A55C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022A560: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A564: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022A568:
    // 0x8022A568: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A56C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A574: jr          $ra
    // 0x8022A578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E3C8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E3CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E3D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E3D4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022E3D8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E3DC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E3E0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E3E4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022E3E8: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022E3EC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022E3F0: beq         $a0, $zero, L_8022E424
    if (ctx->r4 == 0) {
        // 0x8022E3F4: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_8022E424;
    }
    // 0x8022E3F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022E3F8: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022E3FC: jal         0x800540D0
    // 0x8022E400: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022E400: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022E404: beq         $v0, $zero, L_8022E418
    if (ctx->r2 == 0) {
        // 0x8022E408: nop
    
            goto L_8022E418;
    }
    // 0x8022E408: nop

    // 0x8022E40C: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8022E410: j           L_8022E420
    // 0x8022E414: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8022E420;
    // 0x8022E414: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8022E418:
    // 0x8022E418: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8022E41C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_8022E420:
    // 0x8022E420: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_8022E424:
    // 0x8022E424: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E428: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E42C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E430: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E434: lw          $v0, 0xA68($at)
    ctx->r2 = MEM_W(ctx->r1, 0XA68);
    // 0x8022E438: jalr        $v0
    // 0x8022E43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022E43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E440: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E444: bne         $v0, $zero, L_8022E468
    if (ctx->r2 != 0) {
        // 0x8022E448: addiu       $a0, $s1, 0x8
        ctx->r4 = ADD32(ctx->r17, 0X8);
            goto L_8022E468;
    }
    // 0x8022E448: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x8022E44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E454: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022E458: jal         0x80047284
    // 0x8022E45C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022E45C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_2:
    // 0x8022E460: j           L_8022E498
    // 0x8022E464: nop

        goto L_8022E498;
    // 0x8022E464: nop

L_8022E468:
    // 0x8022E468: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022E46C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E470: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x8022E474: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E478: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E47C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8022E480: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E484: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E488: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E48C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022E490: jal         0x80051E18
    // 0x8022E494: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022E494: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_8022E498:
    // 0x8022E498: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022E49C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E4A0: bnel        $v1, $v0, L_8022E4B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022E4A4: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_8022E4B4;
    }
    goto skip_0;
    // 0x8022E4A4: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x8022E4A8: jal         0x8005044C
    // 0x8022E4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022E4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E4B0: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_8022E4B4:
    // 0x8022E4B4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022E4B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E4BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E4C0: jr          $ra
    // 0x8022E4C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E4C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80239A30_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239A34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239A38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239A3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239A40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239A44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239A48: lw          $v0, 0xE80($at)
    ctx->r2 = MEM_W(ctx->r1, 0XE80);
    // 0x80239A4C: jalr        $v0
    // 0x80239A50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239A50: nop

    after_0:
    // 0x80239A54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239A58: jr          $ra
    // 0x80239A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B8C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236B94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B98: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80236B9C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80236BA0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80236BA4: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80236BA8: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80236BAC: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80236BB0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80236BB4: jal         0x8009A3B4
    // 0x80236BB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236BB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80236BBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236BC0: jr          $ra
    // 0x80236BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80236BC8: nop

    // 0x80236BCC: nop

;}
RECOMP_FUNC void func_8022FCB4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FCBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FCC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FCC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FCC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FCCC: jal         0x80050294
    // 0x8022FCD0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022FCD0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x8022FCD4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022FCD8: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022FCDC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022FCE0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x8022FCE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FCE8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FCEC: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022FCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FCF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FCF8: jr          $ra
    // 0x8022FCFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FCFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E9A4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E9A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E9AC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022E9B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E9B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E9B8: jal         0x8004EFE4
    // 0x8022E9BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022E9BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E9C0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E9C4: beq         $s1, $zero, L_8022EA78
    if (ctx->r17 == 0) {
        // 0x8022E9C8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022EA78;
    }
    // 0x8022E9C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E9CC: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x8022E9D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E9D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E9D8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022E9DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E9E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E9E4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022E9E8: jal         0x8004DA90
    // 0x8022E9EC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022E9EC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x8022E9F0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022E9F4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022E9F8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022E9FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EA00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EA04: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x8022EA08: jal         0x8009A3B4
    // 0x8022EA0C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EA0C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    after_2:
    // 0x8022EA10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EA14: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022EA18: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022EA1C: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x8022EA20: addiu       $a1, $s2, 0x2C
    ctx->r5 = ADD32(ctx->r18, 0X2C);
    // 0x8022EA24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EA28: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EA2C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022EA30: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022EA34: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022EA38: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x8022EA3C: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022EA40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EA44: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022EA48: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x8022EA4C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EA50: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x8022EA54: jal         0x8009A3B4
    // 0x8022EA58: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022EA58: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022EA5C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022EA60: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x8022EA64: jal         0x8009A3B4
    // 0x8022EA68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022EA68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022EA6C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022EA70: jal         0x8002A33C
    // 0x8022EA74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022EA74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_8022EA78:
    // 0x8022EA78: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x8022EA7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EA80: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EA84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EA88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA8C: jr          $ra
    // 0x8022EA90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EA90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022EA94: nop

    // 0x8022EA98: nop

    // 0x8022EA9C: nop

;}
RECOMP_FUNC void func_80238FDC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238FE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238FE4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80238FE8: bne         $v0, $zero, L_80239000
    if (ctx->r2 != 0) {
        // 0x80238FEC: nop
    
            goto L_80239000;
    }
    // 0x80238FEC: nop

    // 0x80238FF0: jal         0x80239014
    // 0x80238FF4: nop

    func_80239014_ovl4(rdram, ctx);
        goto after_0;
    // 0x80238FF4: nop

    after_0:
    // 0x80238FF8: j           L_80239008
    // 0x80238FFC: nop

        goto L_80239008;
    // 0x80238FFC: nop

L_80239000:
    // 0x80239000: jal         0x80239048
    // 0x80239004: nop

    func_80239048_ovl4(rdram, ctx);
        goto after_1;
    // 0x80239004: nop

    after_1:
L_80239008:
    // 0x80239008: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023900C: jr          $ra
    // 0x80239010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B04_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225B0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225B10: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80225B14: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80225B18: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225B1C: lw          $v1, 0x690($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X690);
    // 0x80225B20: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80225B24: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x80225B28: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225B2C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80225B30: beq         $v1, $zero, L_80225BC0
    if (ctx->r3 == 0) {
        // 0x80225B34: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80225BC0;
    }
    // 0x80225B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B38: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80225B3C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225B40: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80225B44: lw          $s0, 0x1920($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1920);
    // 0x80225B48: jal         0x8004DA68
    // 0x80225B4C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80225B4C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80225B50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225B54: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80225B58: beq         $v1, $v0, L_80225B68
    if (ctx->r3 == ctx->r2) {
        // 0x80225B5C: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80225B68;
    }
    // 0x80225B5C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80225B60: bne         $v1, $v0, L_80225BA4
    if (ctx->r3 != ctx->r2) {
        // 0x80225B64: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_80225BA4;
    }
    // 0x80225B64: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80225B68:
    // 0x80225B68: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225B6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225B70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225B74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225B78: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x80225B7C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225B80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225B84: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B88: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80225B8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225B90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225B94: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225B98: jalr        $v0
    // 0x80225B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225BA0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80225BA4:
    // 0x80225BA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225BA8: lw          $v1, 0x690($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X690);
    // 0x80225BAC: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x80225BB0: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80225BB4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80225BB8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225BBC: sw          $v1, 0x690($at)
    MEM_W(0X690, ctx->r1) = ctx->r3;
L_80225BC0:
    // 0x80225BC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225BC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225BC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BCC: jr          $ra
    // 0x80225BD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225BD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225BD4: nop

    // 0x80225BD8: nop

    // 0x80225BDC: nop

;}
RECOMP_FUNC void func_80236C00_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236C00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236C04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236C08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236C0C: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x80236C10: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x80236C14: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80236C18: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x80236C1C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236C20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236C24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236C28: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236C2C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80236C30: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x80236C34: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x80236C38: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236C3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80236C40: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80236C44: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80236C48: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
    // 0x80236C4C: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x80236C50: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80236C54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236C58: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80236C5C: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80236C60: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x80236C64: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x80236C68: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x80236C6C: jal         0x8009A3B4
    // 0x80236C70: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236C70: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x80236C74: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236C78: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236C7C: jal         0x8009A3B4
    // 0x80236C80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236C80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236C84: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80236C88: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80236C8C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80236C90: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80236C94: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80236C98: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80236C9C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80236CA0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80236CA4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80236CA8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80236CAC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236CB4: beq         $v1, $v0, L_80236DC8
    if (ctx->r3 == ctx->r2) {
        // 0x80236CB8: sh          $zero, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = 0;
            goto L_80236DC8;
    }
    // 0x80236CB8: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80236CBC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236CC0: beql        $v0, $zero, L_80236CD8
    if (ctx->r2 == 0) {
        // 0x80236CC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236CD8;
    }
    goto skip_0;
    // 0x80236CC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236CC8: beq         $v1, $zero, L_80236D00
    if (ctx->r3 == 0) {
        // 0x80236CCC: nop
    
            goto L_80236D00;
    }
    // 0x80236CCC: nop

    // 0x80236CD0: j           L_80236E64
    // 0x80236CD4: nop

        goto L_80236E64;
    // 0x80236CD4: nop

L_80236CD8:
    // 0x80236CD8: beq         $v1, $v0, L_80236E14
    if (ctx->r3 == ctx->r2) {
        // 0x80236CDC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236E14;
    }
    // 0x80236CDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236CE0: bne         $v1, $v0, L_80236E64
    if (ctx->r3 != ctx->r2) {
        // 0x80236CE4: lui         $v0, 0x2C80
        ctx->r2 = S32(0X2C80 << 16);
            goto L_80236E64;
    }
    // 0x80236CE4: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80236CE8: ori         $v0, $v0, 0x80FF
    ctx->r2 = ctx->r2 | 0X80FF;
    // 0x80236CEC: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80236CF0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80236CF4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80236CF8: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80236CFC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80236D00:
    // 0x80236D00: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80236D04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236D08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236D0C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80236D10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236D14: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236D18: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80236D1C: jal         0x800324B4
    // 0x80236D20: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80236D20: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_2:
    // 0x80236D24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236D2C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236D30: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80236D34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236D38: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80236D3C: jal         0x8004DDE8
    // 0x80236D40: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    func_8004DDE8_291E8(rdram, ctx);
        goto after_3;
    // 0x80236D40: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    after_3:
    // 0x80236D44: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80236D48: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x80236D4C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x80236D50: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236D54: lh          $v1, 0x3EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3EA);
    // 0x80236D58: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80236D5C: mfhi        $t3
    ctx->r11 = hi;
    // 0x80236D60: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236D64: srl         $v0, $t3, 3
    ctx->r2 = S32(U32(ctx->r11) >> 3);
    // 0x80236D68: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80236D6C: bne         $v0, $zero, L_80236D78
    if (ctx->r2 != 0) {
        // 0x80236D70: nop
    
            goto L_80236D78;
    }
    // 0x80236D70: nop

    // 0x80236D74: break       7
    do_break(2149805428);
L_80236D78:
    // 0x80236D78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80236D7C: bne         $v0, $at, L_80236D90
    if (ctx->r2 != ctx->r1) {
        // 0x80236D80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80236D90;
    }
    // 0x80236D80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80236D84: bne         $v1, $at, L_80236D90
    if (ctx->r3 != ctx->r1) {
        // 0x80236D88: nop
    
            goto L_80236D90;
    }
    // 0x80236D88: nop

    // 0x80236D8C: break       6
    do_break(2149805452);
L_80236D90:
    // 0x80236D90: mflo        $v1
    ctx->r3 = lo;
    // 0x80236D94: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80236D98: nop

    // 0x80236D9C: jal         0x80032498
    // 0x80236DA0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80236DA0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80236DA4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236DA8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80236DAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236DB0: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80236DB4: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80236DB8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80236DBC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80236DC0: j           L_80236E64
    // 0x80236DC4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
        goto L_80236E64;
    // 0x80236DC4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
L_80236DC8:
    // 0x80236DC8: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80236DCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236DD0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236DD4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80236DD8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80236DDC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236DE0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236DE4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236DE8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80236DEC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80236DF0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80236DF4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80236DF8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80236DFC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80236E00: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80236E04: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80236E08: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236E0C: j           L_80236E64
    // 0x80236E10: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80236E64;
    // 0x80236E10: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80236E14:
    // 0x80236E14: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80236E18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236E1C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236E20: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80236E24: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80236E28: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80236E2C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236E30: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236E34: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80236E38: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80236E3C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80236E40: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80236E44: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80236E48: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80236E4C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80236E50: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236E54: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236E58: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80236E5C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80236E60: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80236E64:
    // 0x80236E64: jal         0x8003F754
    // 0x80236E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80236E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80236E6C: beql        $v0, $zero, L_80236E80
    if (ctx->r2 == 0) {
        // 0x80236E70: sw          $zero, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = 0;
            goto L_80236E80;
    }
    goto skip_1;
    // 0x80236E70: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    skip_1:
    // 0x80236E74: jal         0x8004F4F8
    // 0x80236E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80236E78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80236E7C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_80236E80:
    // 0x80236E80: addiu       $a0, $zero, 0x1AF
    ctx->r4 = ADD32(0, 0X1AF);
    // 0x80236E84: jal         0x8002A33C
    // 0x80236E88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80236E88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x80236E8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236E98: jr          $ra
    // 0x80236E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226B84_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B84: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80226B88: beq         $v1, $zero, L_80226BA4
    if (ctx->r3 == 0) {
        // 0x80226B8C: addiu       $a1, $a0, 0x328
        ctx->r5 = ADD32(ctx->r4, 0X328);
            goto L_80226BA4;
    }
    // 0x80226B8C: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x80226B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B94: beq         $v1, $v0, L_80226BC0
    if (ctx->r3 == ctx->r2) {
        // 0x80226B98: nop
    
            goto L_80226BC0;
    }
    // 0x80226B98: nop

    // 0x80226B9C: j           L_80226BF4
    // 0x80226BA0: nop

        goto L_80226BF4;
    // 0x80226BA0: nop

L_80226BA4:
    // 0x80226BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BA8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80226BAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226BB0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80226BB4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80226BB8: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x80226BBC: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
L_80226BC0:
    // 0x80226BC0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80226BC4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80226BC8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226BCC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80226BD0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80226BD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226BD8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80226BDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226BE0: bgtz        $v0, L_80226BF4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80226BE4: nop
    
            goto L_80226BF4;
    }
    // 0x80226BE4: nop

    // 0x80226BE8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80226BEC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226BF0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80226BF4:
    // 0x80226BF4: jr          $ra
    // 0x80226BF8: nop

    TRACE_RETURN()
    return;
    // 0x80226BF8: nop

;}
RECOMP_FUNC void func_802395A4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802395A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802395A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802395AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802395B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802395B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802395B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802395BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802395C0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802395C4: jal         0x8004F820
    // 0x802395C8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802395C8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x802395CC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802395D0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802395D4: beq         $v0, $zero, L_802395F0
    if (ctx->r2 == 0) {
        // 0x802395D8: nop
    
            goto L_802395F0;
    }
    // 0x802395D8: nop

    // 0x802395DC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802395E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802395E4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802395E8: j           L_802395FC
    // 0x802395EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_802395FC;
    // 0x802395EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802395F0:
    // 0x802395F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802395F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802395F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802395FC:
    // 0x802395FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239600: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239604: jr          $ra
    // 0x80239608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B40_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B44: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80236B48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236B4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B50: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80236B54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236B58: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80236B5C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80236B60: bne         $v0, $zero, L_80236B6C
    if (ctx->r2 != 0) {
        // 0x80236B64: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236B6C;
    }
    // 0x80236B64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236B68: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_80236B6C:
    // 0x80236B6C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80236B70: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80236B74: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80236B78: jal         0x8009A3B4
    // 0x80236B7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236B7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80236B80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236B84: jr          $ra
    // 0x80236B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E3C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231E40: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231E44: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80231E48: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231E4C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80231E50: sh          $v0, 0x382($a0)
    MEM_H(0X382, ctx->r4) = ctx->r2;
    // 0x80231E54: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231E58: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80231E5C: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80231E60: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80231E64: jr          $ra
    // 0x80231E68: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80231E68: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8022CC24_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CC28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CC2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC30: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022CC34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CC38: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CC3C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022CC40: beq         $v0, $zero, L_8022CC74
    if (ctx->r2 == 0) {
        // 0x8022CC44: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CC74;
    }
    // 0x8022CC44: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CC48: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022CC4C: jal         0x800540D0
    // 0x8022CC50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022CC50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022CC54: beq         $v0, $zero, L_8022CC68
    if (ctx->r2 == 0) {
        // 0x8022CC58: nop
    
            goto L_8022CC68;
    }
    // 0x8022CC58: nop

    // 0x8022CC5C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CC60: j           L_8022CC70
    // 0x8022CC64: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_8022CC70;
    // 0x8022CC64: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_8022CC68:
    // 0x8022CC68: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CC6C: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
L_8022CC70:
    // 0x8022CC70: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022CC74:
    // 0x8022CC74: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CC78: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CC7C: beq         $v0, $zero, L_8022CC8C
    if (ctx->r2 == 0) {
        // 0x8022CC80: nop
    
            goto L_8022CC8C;
    }
    // 0x8022CC80: nop

    // 0x8022CC84: jal         0x8022DBBC
    // 0x8022CC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DBBC_ovl4(rdram, ctx);
        goto after_1;
    // 0x8022CC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022CC8C:
    // 0x8022CC8C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CC90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CC94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CC98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CC9C: lw          $v0, 0xA2C($at)
    ctx->r2 = MEM_W(ctx->r1, 0XA2C);
    // 0x8022CCA0: jalr        $v0
    // 0x8022CCA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022CCA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CCA8: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CCAC: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8022CCB0: beq         $v0, $zero, L_8022CD1C
    if (ctx->r2 == 0) {
        // 0x8022CCB4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022CD1C;
    }
    // 0x8022CCB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CCB8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CCBC: beq         $v1, $v0, L_8022CCE8
    if (ctx->r3 == ctx->r2) {
        // 0x8022CCC0: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_8022CCE8;
    }
    // 0x8022CCC0: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8022CCC4: beq         $v0, $zero, L_8022CCDC
    if (ctx->r2 == 0) {
        // 0x8022CCC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CCDC;
    }
    // 0x8022CCC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CCCC: beq         $v1, $v0, L_8022CCF4
    if (ctx->r3 == ctx->r2) {
        // 0x8022CCD0: andi        $v0, $a0, 0x10
        ctx->r2 = ctx->r4 & 0X10;
            goto L_8022CCF4;
    }
    // 0x8022CCD0: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022CCD4: j           L_8022CD04
    // 0x8022CCD8: nop

        goto L_8022CD04;
    // 0x8022CCD8: nop

L_8022CCDC:
    // 0x8022CCDC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CCE0: bne         $v1, $v0, L_8022CD04
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCE4: nop
    
            goto L_8022CD04;
    }
    // 0x8022CCE4: nop

L_8022CCE8:
    // 0x8022CCE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CCEC: j           L_8022CD0C
    // 0x8022CCF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022CD0C;
    // 0x8022CCF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022CCF4:
    // 0x8022CCF4: beq         $v0, $zero, L_8022CD04
    if (ctx->r2 == 0) {
        // 0x8022CCF8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CD04;
    }
    // 0x8022CCF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CCFC: j           L_8022CD0C
    // 0x8022CD00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022CD0C;
    // 0x8022CD00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022CD04:
    // 0x8022CD04: jal         0x8022DAF8
    // 0x8022CD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DAF8_ovl4(rdram, ctx);
        goto after_3;
    // 0x8022CD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022CD0C:
    // 0x8022CD0C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022CD10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CD14: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022CD18: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CD1C:
    // 0x8022CD1C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022CD20: beq         $v0, $zero, L_8022CD30
    if (ctx->r2 == 0) {
        // 0x8022CD24: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022CD30;
    }
    // 0x8022CD24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CD28: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022CD2C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022CD30:
    // 0x8022CD30: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CD34: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022CD38: beq         $v0, $zero, L_8022CDB4
    if (ctx->r2 == 0) {
        // 0x8022CD3C: nop
    
            goto L_8022CDB4;
    }
    // 0x8022CD3C: nop

    // 0x8022CD40: lhu         $v0, 0x36($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X36);
    // 0x8022CD44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CD48: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
    // 0x8022CD4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD50: bgez        $v0, L_8022CDB4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CD54: nop
    
            goto L_8022CDB4;
    }
    // 0x8022CD54: nop

    // 0x8022CD58: jal         0x8004F144
    // 0x8022CD5C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8022CD5C: nop

    after_4:
    // 0x8022CD60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CD64: beq         $v1, $zero, L_8022CD90
    if (ctx->r3 == 0) {
        // 0x8022CD68: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022CD90;
    }
    // 0x8022CD68: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022CD6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CD70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CD74: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022CD78: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022CD7C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022CD80: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022CD84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CD88: jal         0x8009A3B4
    // 0x8022CD8C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CD8C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_5:
L_8022CD90:
    // 0x8022CD90: jal         0x8004F418
    // 0x8022CD94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022CD94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022CD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CD9C: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x8022CDA0: jal         0x8007A1B8
    // 0x8022CDA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_7;
    // 0x8022CDA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022CDA8: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8022CDAC: jal         0x8002A33C
    // 0x8022CDB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022CDB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_8022CDB4:
    // 0x8022CDB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CDB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CDBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CDC0: jr          $ra
    // 0x8022CDC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CDC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237490_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237494: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023749C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802374A0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802374A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802374A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802374AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802374B0: lw          $v0, 0xDB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0XDB0);
    // 0x802374B4: jalr        $v0
    // 0x802374B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802374B8: nop

    after_0:
    // 0x802374BC: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x802374C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802374C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802374C8: jr          $ra
    // 0x802374CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802374CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023103C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023103C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231040: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231048: jal         0x8005044C
    // 0x8023104C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023104C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80231050: jal         0x80040F30
    // 0x80231054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80231054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023105C: jal         0x8003E934
    // 0x80231060: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80231060: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    after_2:
    // 0x80231064: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80231068: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8023106C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80231070: bnel        $v1, $zero, L_802310A4
    if (ctx->r3 != 0) {
        // 0x80231074: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_802310A4;
    }
    goto skip_0;
    // 0x80231074: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x80231078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023107C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231080: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80231084: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231088: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8023108C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231090: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80231094: jal         0x80050294
    // 0x80231098: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80231098: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_3:
    // 0x8023109C: j           L_802310AC
    // 0x802310A0: nop

        goto L_802310AC;
    // 0x802310A0: nop

L_802310A4:
    // 0x802310A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802310A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802310AC:
    // 0x802310AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802310B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802310B4: jr          $ra
    // 0x802310B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802310B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802310BC: nop

;}
RECOMP_FUNC void func_80230E94_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230E98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230E9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230EA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230EA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230EA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230EB0: jal         0x80050294
    // 0x80230EB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230EB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230EB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230EBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230EC0: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80230EC4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230EC8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230ECC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x80230ED0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80230ED4: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80230ED8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230EDC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x80230EE0: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x80230EE4: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80230EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230EEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230EF0: jr          $ra
    // 0x80230EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239260_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239268: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023926C: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x80239270: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239274: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80239278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023927C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80239280: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80239284: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80239288: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8023928C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80239290: addiu       $v0, $zero, 0xE80
    ctx->r2 = ADD32(0, 0XE80);
    // 0x80239294: jal         0x8002A33C
    // 0x80239298: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80239298: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023929C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802392A0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802392A4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802392A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802392AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802392B0: jal         0x8004DA90
    // 0x802392B4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802392B4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_1:
    // 0x802392B8: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x802392BC: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x802392C0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802392C4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x802392C8: lw          $a1, -0x14F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X14F0);
    // 0x802392CC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802392D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802392D4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802392D8: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802392DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802392E0: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x802392E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802392E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802392EC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802392F0: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
    // 0x802392F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802392F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802392FC: jr          $ra
    // 0x80239300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235D04_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235D08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235D0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80235D14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235D18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235D1C: lw          $v1, 0x4F4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4F4);
    // 0x80235D20: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80235D24: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235D28: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x80235D2C: beq         $s1, $zero, L_80235EF8
    if (ctx->r17 == 0) {
        // 0x80235D30: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_80235EF8;
    }
    // 0x80235D30: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x80235D34: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x80235D38: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80235D3C: beql        $v0, $zero, L_80235EF0
    if (ctx->r2 == 0) {
        // 0x80235D40: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80235EF0;
    }
    goto skip_0;
    // 0x80235D40: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80235D44: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80235D48: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80235D4C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80235D50: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80235D54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235D58: bgtz        $v0, L_80235DE4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80235D5C: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80235DE4;
    }
    // 0x80235D5C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80235D60: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80235D64: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80235D68: beq         $v0, $zero, L_80235DBC
    if (ctx->r2 == 0) {
        // 0x80235D6C: nop
    
            goto L_80235DBC;
    }
    // 0x80235D6C: nop

    // 0x80235D70: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x80235D74: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80235D78: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80235D7C: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x80235D80: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80235D84: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80235D88: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80235D8C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80235D90: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80235D94: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x80235D98: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235D9C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80235DA0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80235DA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235DA8: lbu         $s1, 0x9($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X9);
    // 0x80235DAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235DB0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235DB4: j           L_80235DE4
    // 0x80235DB8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80235DE4;
    // 0x80235DB8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80235DBC:
    // 0x80235DBC: jal         0x8006FF58
    // 0x80235DC0: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x80235DC0: nop

    after_0:
    // 0x80235DC4: beq         $v0, $zero, L_80235DE0
    if (ctx->r2 == 0) {
        // 0x80235DC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235DE0;
    }
    // 0x80235DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235DCC: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x80235DD0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80235DD4: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80235DD8: j           L_80235DE4
    // 0x80235DDC: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
        goto L_80235DE4;
    // 0x80235DDC: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
L_80235DE0:
    // 0x80235DE0: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_80235DE4:
    // 0x80235DE4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235DE8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80235DEC: beq         $v0, $zero, L_80235E70
    if (ctx->r2 == 0) {
        // 0x80235DF0: slti        $v0, $s1, 0xA
        ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_80235E70;
    }
    // 0x80235DF0: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80235DF4: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x80235DF8: bne         $v0, $zero, L_80235E04
    if (ctx->r2 != 0) {
        // 0x80235DFC: addiu       $v0, $v1, 0xA
        ctx->r2 = ADD32(ctx->r3, 0XA);
            goto L_80235E04;
    }
    // 0x80235DFC: addiu       $v0, $v1, 0xA
    ctx->r2 = ADD32(ctx->r3, 0XA);
    // 0x80235E00: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
L_80235E04:
    // 0x80235E04: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
    // 0x80235E08: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80235E0C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80235E10: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x80235E14: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80235E18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E1C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E20: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80235E24: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80235E28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235E2C: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80235E30: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80235E34: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235E38: beq         $v0, $zero, L_80235E54
    if (ctx->r2 == 0) {
        // 0x80235E3C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80235E54;
    }
    // 0x80235E3C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80235E40: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80235E44: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235E48: bne         $v0, $zero, L_80235EBC
    if (ctx->r2 != 0) {
        // 0x80235E4C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80235EBC;
    }
    // 0x80235E4C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80235E50: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80235E54:
    // 0x80235E54: jal         0x8002A33C
    // 0x80235E58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80235E58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80235E5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235E60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235E64: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80235E68: j           L_80235EC4
    // 0x80235E6C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_80235EC4;
    // 0x80235E6C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80235E70:
    // 0x80235E70: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80235E74: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80235E78: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x80235E7C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80235E80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E84: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E88: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80235E8C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80235E90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235E94: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80235E98: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80235E9C: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235EA0: beq         $v0, $zero, L_80235EBC
    if (ctx->r2 == 0) {
        // 0x80235EA4: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80235EBC;
    }
    // 0x80235EA4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80235EA8: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80235EAC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235EB0: bne         $v0, $zero, L_80235EBC
    if (ctx->r2 != 0) {
        // 0x80235EB4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80235EBC;
    }
    // 0x80235EB4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80235EB8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80235EBC:
    // 0x80235EBC: jal         0x8002A33C
    // 0x80235EC0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80235EC0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_80235EC4:
    // 0x80235EC4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80235EC8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80235ECC: lw          $v1, 0x34($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X34);
    // 0x80235ED0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235ED4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80235ED8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80235EDC: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x80235EE0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80235EE4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80235EE8: j           L_80235EF8
    // 0x80235EEC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_80235EF8;
    // 0x80235EEC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80235EF0:
    // 0x80235EF0: jal         0x8002A33C
    // 0x80235EF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80235EF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80235EF8:
    // 0x80235EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235F00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235F04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235F0C: jr          $ra
    // 0x80235F10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235F10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80235F14: nop

    // 0x80235F18: nop

    // 0x80235F1C: nop

;}
RECOMP_FUNC void func_80234C38_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80234C3C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80234C40: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80234C44: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80234C48: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80234C4C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80234C50: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80234C54: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80234C58: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80234C5C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80234C60: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80234C64: lbu         $v1, 0xA($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XA);
    // 0x80234C68: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80234C6C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80234C70: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80234C74: beq         $v0, $zero, L_8023504C
    if (ctx->r2 == 0) {
        // 0x80234C78: addiu       $s0, $s5, 0x4E0
        ctx->r16 = ADD32(ctx->r21, 0X4E0);
            goto L_8023504C;
    }
    // 0x80234C78: addiu       $s0, $s5, 0x4E0
    ctx->r16 = ADD32(ctx->r21, 0X4E0);
    // 0x80234C7C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234C80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234C84: addu        $at, $at, $v0
    gpr jr_addend_80234C8C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234C88: lw          $v0, 0x1670($at)
    ctx->r2 = ADD32(ctx->r1, 0X1670);
    // 0x80234C8C: jr          $v0
    // 0x80234C90: nop

    switch (jr_addend_80234C8C >> 2) {
        case 0: goto L_80234C94; break;
        case 1: goto L_80234CA8; break;
        case 2: goto L_80234DFC; break;
        case 3: goto L_80234E58; break;
        case 4: goto L_80234FF0; break;
        default: switch_error(__func__, 0x80234C8C, 0x80241670);
    }
    // 0x80234C90: nop

L_80234C94:
    // 0x80234C94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234C98: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x80234C9C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80234CA0: sb          $zero, 0xB($s5)
    MEM_B(0XB, ctx->r21) = 0;
    // 0x80234CA4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80234CA8:
    // 0x80234CA8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234CAC: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80234CB0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80234CB4: bgez        $v0, L_80234CE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234CB8: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_80234CE0;
    }
    // 0x80234CB8: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80234CBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234CC0: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x80234CC4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234CC8: sb          $v0, 0xAC($s5)
    MEM_B(0XAC, ctx->r21) = ctx->r2;
    // 0x80234CCC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234CD0: sb          $v0, 0xAD($s5)
    MEM_B(0XAD, ctx->r21) = ctx->r2;
    // 0x80234CD4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234CD8: j           L_80234DFC
    // 0x80234CDC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80234DFC;
    // 0x80234CDC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80234CE0:
    // 0x80234CE0: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80234CE4: bne         $v0, $zero, L_8023504C
    if (ctx->r2 != 0) {
        // 0x80234CE8: nop
    
            goto L_8023504C;
    }
    // 0x80234CE8: nop

    // 0x80234CEC: jal         0x8004F144
    // 0x80234CF0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80234CF0: nop

    after_0:
    // 0x80234CF4: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80234CF8: beq         $s4, $zero, L_80234DEC
    if (ctx->r20 == 0) {
        // 0x80234CFC: addiu       $s3, $sp, 0x18
        ctx->r19 = ADD32(ctx->r29, 0X18);
            goto L_80234DEC;
    }
    // 0x80234CFC: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x80234D00: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234D04: addiu       $s0, $s5, 0x14
    ctx->r16 = ADD32(ctx->r21, 0X14);
    // 0x80234D08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234D0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234D14: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    // 0x80234D18: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234D1C: sb          $v0, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r2;
    // 0x80234D20: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234D24: jal         0x8009A3B4
    // 0x80234D28: sb          $v0, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234D28: sb          $v0, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r2;
    after_1:
    // 0x80234D2C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x80234D30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80234D34: addiu       $s1, $s5, 0x1C
    ctx->r17 = ADD32(ctx->r21, 0X1C);
    // 0x80234D38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234D3C: jal         0x8009A3B4
    // 0x80234D40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234D40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80234D44: lbu         $v1, 0xB($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XB);
    // 0x80234D48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234D4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D50: lbu         $a1, 0xB($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0XB);
    // 0x80234D54: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x80234D58: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234D5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234D60: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80234D64: lhu         $v1, 0xD18($at)
    ctx->r3 = MEM_HU(ctx->r1, 0XD18);
    // 0x80234D68: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80234D6C: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x80234D70: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x80234D74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234D78: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234D7C: jal         0x8009A3B4
    // 0x80234D80: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234D80: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
    after_3:
    // 0x80234D84: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80234D88: addiu       $a1, $zero, 0xB40
    ctx->r5 = ADD32(0, 0XB40);
    // 0x80234D8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234D90: jal         0x8004DA90
    // 0x80234D94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80234D94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x80234D98: addiu       $a0, $s4, 0x38
    ctx->r4 = ADD32(ctx->r20, 0X38);
    // 0x80234D9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234DA0: jal         0x8009A3B4
    // 0x80234DA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80234DA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80234DA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234DAC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80234DB0: jal         0x8009A3B4
    // 0x80234DB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80234DB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234DB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234DBC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234DC0: jal         0x8009A3B4
    // 0x80234DC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80234DC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80234DC8: lbu         $v1, 0xB($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XB);
    // 0x80234DCC: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x80234DD0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234DD4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234DD8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80234DDC: lhu         $v1, 0xD18($at)
    ctx->r3 = MEM_HU(ctx->r1, 0XD18);
    // 0x80234DE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234DE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234DE8: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
L_80234DEC:
    // 0x80234DEC: lbu         $v0, 0xB($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XB);
    // 0x80234DF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234DF4: j           L_8023504C
    // 0x80234DF8: sb          $v0, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r2;
        goto L_8023504C;
    // 0x80234DF8: sb          $v0, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r2;
L_80234DFC:
    // 0x80234DFC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234E00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234E04: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80234E08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234E0C: bgez        $v0, L_8023504C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234E10: addiu       $s1, $zero, 0x6
        ctx->r17 = ADD32(0, 0X6);
            goto L_8023504C;
    }
    // 0x80234E10: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x80234E14: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80234E18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234E1C: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x80234E20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234E24: sh          $zero, 0x46($s5)
    MEM_H(0X46, ctx->r21) = 0;
    // 0x80234E28: sh          $v0, 0x4E($s5)
    MEM_H(0X4E, ctx->r21) = ctx->r2;
    // 0x80234E2C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80234E30:
    // 0x80234E30: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80234E34: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x80234E38: sb          $v1, 0xFB($v0)
    MEM_B(0XFB, ctx->r2) = ctx->r3;
    // 0x80234E3C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80234E40: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234E44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234E48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234E4C: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80234E50: bne         $v0, $zero, L_80234E30
    if (ctx->r2 != 0) {
        // 0x80234E54: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80234E30;
    }
    // 0x80234E54: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80234E58:
    // 0x80234E58: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80234E5C: lhu         $a2, 0x46($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X46);
    // 0x80234E60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234E64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234E68: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x80234E6C: jal         0x8004DA90
    // 0x80234E70: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x80234E70: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_8:
    // 0x80234E74: lhu         $v1, 0x46($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X46);
    // 0x80234E78: lhu         $a1, 0x4E($s5)
    ctx->r5 = MEM_HU(ctx->r21, 0X4E);
    // 0x80234E7C: lhu         $v0, 0x16($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X16);
    // 0x80234E80: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80234E84: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80234E88: addiu       $v0, $v0, -0x46
    ctx->r2 = ADD32(ctx->r2, -0X46);
    // 0x80234E8C: sh          $v0, 0x16($s5)
    MEM_H(0X16, ctx->r21) = ctx->r2;
    // 0x80234E90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234E94: sh          $v1, 0x46($s5)
    MEM_H(0X46, ctx->r21) = ctx->r3;
    // 0x80234E98: jal         0x80040F30
    // 0x80234E9C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x80234E9C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    after_9:
    // 0x80234EA0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80234EA4: beq         $v0, $zero, L_80234FD8
    if (ctx->r2 == 0) {
        // 0x80234EA8: addiu       $a0, $s2, 0x1C
        ctx->r4 = ADD32(ctx->r18, 0X1C);
            goto L_80234FD8;
    }
    // 0x80234EA8: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80234EAC: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80234EB0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234EB4: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
    // 0x80234EB8: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x80234EBC: lh          $v0, 0x56($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X56);
    // 0x80234EC0: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x80234EC4: addiu       $a3, $s5, 0x1C
    ctx->r7 = ADD32(ctx->r21, 0X1C);
    // 0x80234EC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80234ECC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80234ED0: jal         0x8004FC28
    // 0x80234ED4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004FC28_2B028(rdram, ctx);
        goto after_10;
    // 0x80234ED4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_10:
    // 0x80234ED8: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80234EDC: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x80234EE0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80234EE4: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80234EE8: bne         $v0, $zero, L_80234F14
    if (ctx->r2 != 0) {
        // 0x80234EEC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80234F14;
    }
    // 0x80234EEC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80234EF0: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x80234EF4: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80234EF8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80234EFC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80234F00: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234F04: bne         $v1, $zero, L_80234F10
    if (ctx->r3 != 0) {
        // 0x80234F08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234F10;
    }
    // 0x80234F08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234F10:
    // 0x80234F10: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80234F14:
    // 0x80234F14: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80234F18: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x80234F1C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80234F20: bnel        $v0, $zero, L_80234F50
    if (ctx->r2 != 0) {
        // 0x80234F24: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80234F50;
    }
    goto skip_0;
    // 0x80234F24: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
    // 0x80234F28: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x80234F2C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80234F30: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80234F34: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80234F38: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234F3C: bne         $v1, $zero, L_80234F48
    if (ctx->r3 != 0) {
        // 0x80234F40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234F48;
    }
    // 0x80234F40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234F48:
    // 0x80234F48: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80234F4C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_80234F50:
    // 0x80234F50: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80234F54: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x80234F58: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x80234F5C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80234F60: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80234F64: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x80234F68: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80234F6C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_80234F70:
    // 0x80234F70: jal         0x8004F144
    // 0x80234F74: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x80234F74: nop

    after_11:
    // 0x80234F78: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80234F7C: beq         $s4, $zero, L_80234FD0
    if (ctx->r20 == 0) {
        // 0x80234F80: addiu       $a0, $s4, 0x38
        ctx->r4 = ADD32(ctx->r20, 0X38);
            goto L_80234FD0;
    }
    // 0x80234F80: addiu       $a0, $s4, 0x38
    ctx->r4 = ADD32(ctx->r20, 0X38);
    // 0x80234F84: sll         $s0, $s1, 16
    ctx->r16 = S32(ctx->r17 << 16);
    // 0x80234F88: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80234F8C: sll         $a1, $s0, 3
    ctx->r5 = S32(ctx->r16 << 3);
    // 0x80234F90: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x80234F94: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x80234F98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234F9C: sb          $s7, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r23;
    // 0x80234FA0: sb          $s6, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r22;
    // 0x80234FA4: jal         0x8009A3B4
    // 0x80234FA8: sb          $s3, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80234FA8: sb          $s3, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r19;
    after_12:
    // 0x80234FAC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80234FB0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234FB4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80234FB8: addu        $s0, $s5, $s0
    ctx->r16 = ADD32(ctx->r21, ctx->r16);
    // 0x80234FBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234FC0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234FC4: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x80234FC8: bne         $v0, $zero, L_80234F70
    if (ctx->r2 != 0) {
        // 0x80234FCC: sb          $s2, 0xFB($s0)
        MEM_B(0XFB, ctx->r16) = ctx->r18;
            goto L_80234F70;
    }
    // 0x80234FCC: sb          $s2, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r18;
L_80234FD0:
    // 0x80234FD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234FD4: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
L_80234FD8:
    // 0x80234FD8: lhu         $v0, 0x16($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X16);
    // 0x80234FDC: addiu       $v0, $v0, 0x46
    ctx->r2 = ADD32(ctx->r2, 0X46);
    // 0x80234FE0: sh          $v0, 0x16($s5)
    MEM_H(0X16, ctx->r21) = ctx->r2;
    // 0x80234FE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234FE8: j           L_8023504C
    // 0x80234FEC: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
        goto L_8023504C;
    // 0x80234FEC: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
L_80234FF0:
    // 0x80234FF0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80234FF4: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80234FF8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234FFC: beq         $v0, $zero, L_8023504C
    if (ctx->r2 == 0) {
        // 0x80235000: nop
    
            goto L_8023504C;
    }
    // 0x80235000: nop

    // 0x80235004: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80235008: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8023500C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235010: beq         $v0, $zero, L_8023504C
    if (ctx->r2 == 0) {
        // 0x80235014: nop
    
            goto L_8023504C;
    }
    // 0x80235014: nop

    // 0x80235018: jal         0x8004A0DC
    // 0x8023501C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_13;
    // 0x8023501C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_13:
    // 0x80235020: jal         0x8004F488
    // 0x80235024: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_14;
    // 0x80235024: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_14:
    // 0x80235028: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8023502C: jal         0x8004F4F8
    // 0x80235030: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_15;
    // 0x80235030: nop

    after_15:
    // 0x80235034: jal         0x8004F4F8
    // 0x80235038: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_16;
    // 0x80235038: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_16:
    // 0x8023503C: lbu         $a2, 0x3($s5)
    ctx->r6 = MEM_BU(ctx->r21, 0X3);
    // 0x80235040: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80235044: jal         0x8007A290
    // 0x80235048: addiu       $a1, $a0, 0x180
    ctx->r5 = ADD32(ctx->r4, 0X180);
    func_8007A290_55690(rdram, ctx);
        goto after_17;
    // 0x80235048: addiu       $a1, $a0, 0x180
    ctx->r5 = ADD32(ctx->r4, 0X180);
    after_17:
L_8023504C:
    // 0x8023504C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80235050: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80235054: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80235058: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023505C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80235060: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80235064: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80235068: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023506C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80235070: jr          $ra
    // 0x80235074: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80235074: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022CDC8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CDCC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CDD0: jal         0x8004F418
    // 0x8022CDD4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022CDD4: nop

    after_0:
    // 0x8022CDD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CDDC: jr          $ra
    // 0x8022CDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F798_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F79C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F7A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F7A8: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022F7AC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022F7B0: beq         $v0, $zero, L_8022F810
    if (ctx->r2 == 0) {
        // 0x8022F7B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F810;
    }
    // 0x8022F7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F7B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F7BC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022F7C0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022F7C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F7C8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022F7CC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022F7D0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022F7D4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022F7D8: beq         $v0, $zero, L_8022F7E8
    if (ctx->r2 == 0) {
        // 0x8022F7DC: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8022F7E8;
    }
    // 0x8022F7DC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022F7E0: j           L_8022F7EC
    // 0x8022F7E4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_8022F7EC;
    // 0x8022F7E4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_8022F7E8:
    // 0x8022F7E8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022F7EC:
    // 0x8022F7EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F7F0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F7F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F7F8: jal         0x80050294
    // 0x8022F7FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F7FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022F800: jal         0x8022FA24
    // 0x8022F804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FA24_ovl4(rdram, ctx);
        goto after_1;
    // 0x8022F804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F808: j           L_8022F8C4
    // 0x8022F80C: nop

        goto L_8022F8C4;
    // 0x8022F80C: nop

L_8022F810:
    // 0x8022F810: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F818: jal         0x8004DA90
    // 0x8022F81C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022F81C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022F820: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x8022F824: bne         $v0, $zero, L_8022F8BC
    if (ctx->r2 != 0) {
        // 0x8022F828: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F8BC;
    }
    // 0x8022F828: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F82C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022F830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F834: bne         $v1, $v0, L_8022F8C4
    if (ctx->r3 != ctx->r2) {
        // 0x8022F838: nop
    
            goto L_8022F8C4;
    }
    // 0x8022F838: nop

    // 0x8022F83C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x8022F840: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022F844: bne         $v0, $zero, L_8022F880
    if (ctx->r2 != 0) {
        // 0x8022F848: addiu       $a0, $s0, 0x378
        ctx->r4 = ADD32(ctx->r16, 0X378);
            goto L_8022F880;
    }
    // 0x8022F848: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
    // 0x8022F84C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8022F850: bne         $v0, $zero, L_8022F864
    if (ctx->r2 != 0) {
        // 0x8022F854: nop
    
            goto L_8022F864;
    }
    // 0x8022F854: nop

    // 0x8022F858: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022F85C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F860: sb          $v0, 0x384($s0)
    MEM_B(0X384, ctx->r16) = ctx->r2;
L_8022F864:
    // 0x8022F864: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022F868: beq         $v0, $v1, L_8022F87C
    if (ctx->r2 == ctx->r3) {
        // 0x8022F86C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022F87C;
    }
    // 0x8022F86C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022F870: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022F874: j           L_8022F8C4
    // 0x8022F878: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_8022F8C4;
    // 0x8022F878: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_8022F87C:
    // 0x8022F87C: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
L_8022F880:
    // 0x8022F880: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F884: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F888: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F88C: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8022F890: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022F894: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022F898: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022F89C: jal         0x8009A3B4
    // 0x8022F8A0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F8A0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022F8A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F8A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F8AC: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022F8B0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022F8B4: j           L_8022F8C4
    // 0x8022F8B8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
        goto L_8022F8C4;
    // 0x8022F8B8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8022F8BC:
    // 0x8022F8BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F8C0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8022F8C4:
    // 0x8022F8C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F8C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F8CC: jr          $ra
    // 0x8022F8D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F8D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232C78_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232C7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232C80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232C88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232C8C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232C90: beq         $v0, $zero, L_80232CD0
    if (ctx->r2 == 0) {
        // 0x80232C94: lui         $s1, 0x3800
        ctx->r17 = S32(0X3800 << 16);
            goto L_80232CD0;
    }
    // 0x80232C94: lui         $s1, 0x3800
    ctx->r17 = S32(0X3800 << 16);
    // 0x80232C98: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
    // 0x80232C9C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80232CA0: beq         $v0, $zero, L_80232CB0
    if (ctx->r2 == 0) {
        // 0x80232CA4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80232CB0;
    }
    // 0x80232CA4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80232CA8: jal         0x8002A33C
    // 0x80232CAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80232CAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80232CB0:
    // 0x80232CB0: lw          $v0, 0x378($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X378);
    // 0x80232CB4: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80232CB8: beq         $v0, $zero, L_80232D34
    if (ctx->r2 == 0) {
        // 0x80232CBC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80232D34;
    }
    // 0x80232CBC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80232CC0: jal         0x8002A33C
    // 0x80232CC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80232CC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80232CC8: j           L_80232D34
    // 0x80232CCC: nop

        goto L_80232D34;
    // 0x80232CCC: nop

L_80232CD0:
    // 0x80232CD0: jal         0x802332B0
    // 0x80232CD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802332B0_ovl4(rdram, ctx);
        goto after_2;
    // 0x80232CD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232CD8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232CDC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80232CE0: beq         $v0, $zero, L_80232D14
    if (ctx->r2 == 0) {
        // 0x80232CE4: nop
    
            goto L_80232D14;
    }
    // 0x80232CE4: nop

    // 0x80232CE8: bgez        $v0, L_80232D34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232CEC: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80232D34;
    }
    // 0x80232CEC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80232CF0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232CF4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80232CF8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80232CFC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232D00: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232D04: sh          $zero, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = 0;
    // 0x80232D08: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80232D0C: j           L_80232D50
    // 0x80232D10: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80232D50;
    // 0x80232D10: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80232D14:
    // 0x80232D14: jal         0x80233148
    // 0x80232D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233148_ovl4(rdram, ctx);
        goto after_3;
    // 0x80232D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80232D1C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232D20: bgez        $v0, L_80232D34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232D24: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232D34;
    }
    // 0x80232D24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232D28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232D2C: j           L_80232D50
    // 0x80232D30: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232D50;
    // 0x80232D30: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232D34:
    // 0x80232D34: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232D38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232D3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232D40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232D44: lw          $v0, 0xC00($at)
    ctx->r2 = MEM_W(ctx->r1, 0XC00);
    // 0x80232D48: jalr        $v0
    // 0x80232D4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80232D4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80232D50:
    // 0x80232D50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232D54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232D58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232D5C: jr          $ra
    // 0x80232D60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232D60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A57C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A57C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A580: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A584: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A588: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A58C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A590: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A594: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022A598: beq         $v0, $zero, L_8022A808
    if (ctx->r2 == 0) {
        // 0x8022A59C: addiu       $s0, $s1, 0x348
        ctx->r16 = ADD32(ctx->r17, 0X348);
            goto L_8022A808;
    }
    // 0x8022A59C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    // 0x8022A5A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A5A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A5A8: addu        $at, $at, $v0
    gpr jr_addend_8022A5B0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A5AC: lw          $v0, 0x1598($at)
    ctx->r2 = ADD32(ctx->r1, 0X1598);
    // 0x8022A5B0: jr          $v0
    // 0x8022A5B4: nop

    switch (jr_addend_8022A5B0 >> 2) {
        case 0: goto L_8022A5B8; break;
        case 1: goto L_8022A630; break;
        case 2: goto L_8022A694; break;
        case 3: goto L_8022A724; break;
        case 4: goto L_8022A768; break;
        case 5: goto L_8022A7D0; break;
        default: switch_error(__func__, 0x8022A5B0, 0x80241598);
    }
    // 0x8022A5B4: nop

L_8022A5B8:
    // 0x8022A5B8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A5BC: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8022A5C0: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022A5C4: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x8022A5C8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8022A5CC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022A5D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A5D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A5D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A5DC: lbu         $v0, 0x17E1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X17E1);
    // 0x8022A5E0: bne         $v0, $zero, L_8022A5FC
    if (ctx->r2 != 0) {
        // 0x8022A5E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A5FC;
    }
    // 0x8022A5E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A5E8: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022A5EC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x8022A5F0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A5F4: bne         $v0, $zero, L_8022A808
    if (ctx->r2 != 0) {
        // 0x8022A5F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A808;
    }
    // 0x8022A5F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A5FC:
    // 0x8022A5FC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A600: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A604: sb          $v0, 0x108($s1)
    MEM_B(0X108, ctx->r17) = ctx->r2;
    // 0x8022A608: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A60C: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x8022A610: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A614: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A618: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x8022A61C: jal         0x800540B4
    // 0x8022A620: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x8022A620: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A624: addiu       $a0, $zero, 0xBB
    ctx->r4 = ADD32(0, 0XBB);
    // 0x8022A628: jal         0x8002A33C
    // 0x8022A62C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022A62C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
L_8022A630:
    // 0x8022A630: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A634: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A638: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A63C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A640: bltz        $v0, L_8022A678
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A644: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A678;
    }
    // 0x8022A644: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A648: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A64C: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x8022A650: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A654: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A658: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A65C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A660: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022A664: addiu       $v0, $v0, 0x11
    ctx->r2 = ADD32(ctx->r2, 0X11);
    // 0x8022A668: addiu       $v1, $v1, 0x555
    ctx->r3 = ADD32(ctx->r3, 0X555);
    // 0x8022A66C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A670: j           L_8022A808
    // 0x8022A674: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
        goto L_8022A808;
    // 0x8022A674: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
L_8022A678:
    // 0x8022A678: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A67C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A680: sb          $v0, 0x108($s1)
    MEM_B(0X108, ctx->r17) = ctx->r2;
    // 0x8022A684: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A688: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A68C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022A690: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_8022A694:
    // 0x8022A694: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A698: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A69C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A6A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A6A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A6A8: bltzl       $v0, L_8022A718
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A6AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A718;
    }
    goto skip_0;
    // 0x8022A6AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8022A6B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A6B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A6B8: lbu         $v0, 0x854($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X854);
    // 0x8022A6BC: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A6C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A6C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A6C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6CC: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022A6D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A6D4: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022A6D8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022A6DC: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8022A6E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A6E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A6E8: lbu         $v0, 0x854($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X854);
    // 0x8022A6EC: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A6F0: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8022A6F4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A6F8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A6FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A700: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022A704: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A708: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A70C: lh          $v0, 0x84C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X84C);
    // 0x8022A710: j           L_8022A808
    // 0x8022A714: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
        goto L_8022A808;
    // 0x8022A714: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_8022A718:
    // 0x8022A718: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A71C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A720: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022A724:
    // 0x8022A724: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A728: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A72C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A730: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A734: bgez        $v0, L_8022A808
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A738: addiu       $a0, $zero, 0xBC
        ctx->r4 = ADD32(0, 0XBC);
            goto L_8022A808;
    }
    // 0x8022A738: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    // 0x8022A73C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022A740: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A744: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A748: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022A74C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A750: jal         0x8002A33C
    // 0x8022A754: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022A754: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    after_2:
    // 0x8022A758: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A75C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022A760: andi        $v0, $v0, 0xFBDF
    ctx->r2 = ctx->r2 & 0XFBDF;
    // 0x8022A764: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022A768:
    // 0x8022A768: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A76C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A770: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A778: bltz        $v0, L_8022A7A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A77C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022A7A8;
    }
    // 0x8022A77C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A780: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A784: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A788: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A78C: jal         0x8004F820
    // 0x8022A790: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A790: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022A794: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A798: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A79C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A7A0: j           L_8022A808
    // 0x8022A7A4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
        goto L_8022A808;
    // 0x8022A7A4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_8022A7A8:
    // 0x8022A7A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A7AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A7B0: jal         0x8003E934
    // 0x8022A7B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022A7B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022A7B8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A7BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A7C0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A7C4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A7C8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022A7CC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022A7D0:
    // 0x8022A7D0: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022A7D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A7D8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A7DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A7E0: bltz        $v0, L_8022A7F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A7E4: nop
    
            goto L_8022A7F8;
    }
    // 0x8022A7E4: nop

    // 0x8022A7E8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A7EC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A7F0: beq         $v0, $zero, L_8022A808
    if (ctx->r2 == 0) {
        // 0x8022A7F4: nop
    
            goto L_8022A808;
    }
    // 0x8022A7F4: nop

L_8022A7F8:
    // 0x8022A7F8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A7FC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A800: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8022A804: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022A808:
    // 0x8022A808: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A80C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A810: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A814: jr          $ra
    // 0x8022A818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802398B8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802398B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802398BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802398C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802398C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802398C8: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x802398CC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802398D0: bnel        $v0, $zero, L_802398D8
    if (ctx->r2 != 0) {
        // 0x802398D4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802398D8;
    }
    goto skip_0;
    // 0x802398D4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_802398D8:
    // 0x802398D8: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x802398DC: bne         $v0, $zero, L_802398F8
    if (ctx->r2 != 0) {
        // 0x802398E0: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802398F8;
    }
    // 0x802398E0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802398E4: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x802398E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802398EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802398F0: j           L_8023991C
    // 0x802398F4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8023991C;
    // 0x802398F4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802398F8:
    // 0x802398F8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802398FC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80239900: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80239904: jal         0x8004DA90
    // 0x80239908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80239908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023990C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80239910: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80239914: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239918: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8023991C:
    // 0x8023991C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239920: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239924: jr          $ra
    // 0x80239928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238F50_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238F50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80238F54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80238F58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238F5C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80238F60: addiu       $s1, $s0, 0xF4
    ctx->r17 = ADD32(ctx->r16, 0XF4);
    // 0x80238F64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238F68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238F6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238F70: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80238F74: jal         0x8009A3B4
    // 0x80238F78: sw          $zero, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80238F78: sw          $zero, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = 0;
    after_0:
    // 0x80238F7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238F80: lhu         $v0, 0xF6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XF6);
    // 0x80238F84: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80238F88: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80238F8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238F90: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80238F94: sh          $v0, 0xF6($s0)
    MEM_H(0XF6, ctx->r16) = ctx->r2;
    // 0x80238F98: addiu       $v0, $s0, 0xFC
    ctx->r2 = ADD32(ctx->r16, 0XFC);
    // 0x80238F9C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80238FA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80238FA4: lhu         $v1, 0x10C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10C);
    // 0x80238FA8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80238FAC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80238FB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80238FB4: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80238FB8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80238FBC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80238FC0: jal         0x80051E18
    // 0x80238FC4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80238FC4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80238FC8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80238FCC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80238FD0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80238FD4: jr          $ra
    // 0x80238FD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80238FD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022EAA0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EAA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EAA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EAAC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EAB0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EAB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EAB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EABC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EAC0: jal         0x8009A3B4
    // 0x8022EAC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EAC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022EAC8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022EACC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EAD0: jal         0x8009A3B4
    // 0x8022EAD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EAD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022EAD8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022EADC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022EAE0: jal         0x8009A3B4
    // 0x8022EAE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EAE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EAE8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022EAEC: jal         0x800A3450
    // 0x8022EAF0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022EAF0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022EAF4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EAF8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022EAFC: sh          $v0, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r2;
    // 0x8022EB00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB04: bne         $v1, $v0, L_8022EB24
    if (ctx->r3 != ctx->r2) {
        // 0x8022EB08: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022EB24;
    }
    // 0x8022EB08: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022EB0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EB10: beq         $v0, $zero, L_8022EB2C
    if (ctx->r2 == 0) {
        // 0x8022EB14: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022EB2C;
    }
    // 0x8022EB14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EB18: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EB1C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EB20: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022EB24:
    // 0x8022EB24: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EB28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EB2C:
    // 0x8022EB2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EB30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EB34: lw          $v0, 0xAAC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XAAC);
    // 0x8022EB38: jalr        $v0
    // 0x8022EB3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022EB3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022EB40: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EB44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB48: bnel        $v1, $v0, L_8022EC00
    if (ctx->r3 != ctx->r2) {
        // 0x8022EB4C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_8022EC00;
    }
    goto skip_0;
    // 0x8022EB4C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
    // 0x8022EB50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EB54: beq         $v0, $zero, L_8022EBD8
    if (ctx->r2 == 0) {
        // 0x8022EB58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EBD8;
    }
    // 0x8022EB58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB5C: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x8022EB60: beq         $v0, $zero, L_8022EB8C
    if (ctx->r2 == 0) {
        // 0x8022EB64: nop
    
            goto L_8022EB8C;
    }
    // 0x8022EB64: nop

    // 0x8022EB68: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022EB6C: bne         $v0, $zero, L_8022EB80
    if (ctx->r2 != 0) {
        // 0x8022EB70: addiu       $a0, $zero, 0x190
        ctx->r4 = ADD32(0, 0X190);
            goto L_8022EB80;
    }
    // 0x8022EB70: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8022EB74: jal         0x8002A33C
    // 0x8022EB78: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022EB78: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022EB7C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8022EB80:
    // 0x8022EB80: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x8022EB84: bne         $v0, $zero, L_8022EBA8
    if (ctx->r2 != 0) {
        // 0x8022EB88: nop
    
            goto L_8022EBA8;
    }
    // 0x8022EB88: nop

L_8022EB8C:
    // 0x8022EB8C: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022EB90: blez        $v0, L_8022EBA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022EB94: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_8022EBA8;
    }
    // 0x8022EB94: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x8022EB98: jal         0x8002A33C
    // 0x8022EB9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022EB9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8022EBA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBA4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
L_8022EBA8:
    // 0x8022EBA8: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022EBAC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022EBB0: beq         $v0, $zero, L_8022EBD0
    if (ctx->r2 == 0) {
        // 0x8022EBB4: nop
    
            goto L_8022EBD0;
    }
    // 0x8022EBB4: nop

    // 0x8022EBB8: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x8022EBBC: bne         $v0, $zero, L_8022EBD0
    if (ctx->r2 != 0) {
        // 0x8022EBC0: nop
    
            goto L_8022EBD0;
    }
    // 0x8022EBC0: nop

    // 0x8022EBC4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EBC8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022EBCC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022EBD0:
    // 0x8022EBD0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EBD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022EBD8:
    // 0x8022EBD8: bnel        $v1, $v0, L_8022EC00
    if (ctx->r3 != ctx->r2) {
        // 0x8022EBDC: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_8022EC00;
    }
    goto skip_1;
    // 0x8022EBDC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_1:
    // 0x8022EBE0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8022EBE4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022EBE8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022EBEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EBF0: beq         $v0, $zero, L_8022EBFC
    if (ctx->r2 == 0) {
        // 0x8022EBF4: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022EBFC;
    }
    // 0x8022EBF4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022EBF8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022EBFC:
    // 0x8022EBFC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_8022EC00:
    // 0x8022EC00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EC04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC10: jr          $ra
    // 0x8022EC14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EC14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234B20_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234B28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234B30: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80234B34: beq         $v1, $zero, L_80234B50
    if (ctx->r3 == 0) {
        // 0x80234B38: addiu       $a0, $s0, 0x4E0
        ctx->r4 = ADD32(ctx->r16, 0X4E0);
            goto L_80234B50;
    }
    // 0x80234B38: addiu       $a0, $s0, 0x4E0
    ctx->r4 = ADD32(ctx->r16, 0X4E0);
    // 0x80234B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234B40: beq         $v1, $v0, L_80234B7C
    if (ctx->r3 == ctx->r2) {
        // 0x80234B44: nop
    
            goto L_80234B7C;
    }
    // 0x80234B44: nop

    // 0x80234B48: j           L_80234C28
    // 0x80234B4C: nop

        goto L_80234C28;
    // 0x80234B4C: nop

L_80234B50:
    // 0x80234B50: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x80234B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234B58: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80234B5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234B60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234B64: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80234B68: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234B6C: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x80234B70: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x80234B74: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x80234B78: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_80234B7C:
    // 0x80234B7C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80234B80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234B84: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80234B88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234B8C: bgtz        $v0, L_80234BA0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80234B90: nop
    
            goto L_80234BA0;
    }
    // 0x80234B90: nop

    // 0x80234B94: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80234B98: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80234B9C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80234BA0:
    // 0x80234BA0: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80234BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234BAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234BB0: sll         $a1, $a1, 19
    ctx->r5 = S32(ctx->r5 << 19);
    // 0x80234BB4: jal         0x8004DA90
    // 0x80234BB8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80234BB8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x80234BBC: jal         0x80040F30
    // 0x80234BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80234BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234BC4: jal         0x8003E934
    // 0x80234BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80234BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234BCC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234BD0: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80234BD4: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80234BD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234BDC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234BE0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80234BE4: bltz        $v0, L_80234BFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234BE8: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80234BFC;
    }
    // 0x80234BE8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80234BEC: beq         $v0, $zero, L_80234C0C
    if (ctx->r2 == 0) {
        // 0x80234BF0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234C0C;
    }
    // 0x80234BF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234BF4: j           L_80234C28
    // 0x80234BF8: nop

        goto L_80234C28;
    // 0x80234BF8: nop

L_80234BFC:
    // 0x80234BFC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80234C00: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80234C04: bne         $v0, $zero, L_80234C28
    if (ctx->r2 != 0) {
        // 0x80234C08: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234C28;
    }
    // 0x80234C08: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80234C0C:
    // 0x80234C0C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80234C10: jal         0x8009A3B4
    // 0x80234C14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234C14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80234C18: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234C1C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80234C20: jal         0x8009A3B4
    // 0x80234C24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80234C24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_80234C28:
    // 0x80234C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234C30: jr          $ra
    // 0x80234C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B4A0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B4A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B4A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B4AC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x8023B4B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B4B4: jal         0x8006033C
    // 0x8023B4B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023B4B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023B4BC: beq         $v0, $zero, L_8023B52C
    if (ctx->r2 == 0) {
        // 0x8023B4C0: nop
    
            goto L_8023B52C;
    }
    // 0x8023B4C0: nop

    // 0x8023B4C4: jal         0x8006033C
    // 0x8023B4C8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8023B4C8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x8023B4CC: bne         $v0, $zero, L_8023B59C
    if (ctx->r2 != 0) {
        // 0x8023B4D0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023B59C;
    }
    // 0x8023B4D0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023B4D4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B4D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B4DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023B4E0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023B4E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B4E8: jal         0x8002C678
    // 0x8023B4EC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8023B4EC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x8023B4F0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023B4F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B4F8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023B4FC: jal         0x800319B4
    // 0x8023B500: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023B500: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x8023B504: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023B508: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023B50C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B510: jal         0x8006036C
    // 0x8023B514: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023B514: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023B518: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023B51C: jal         0x8002A33C
    // 0x8023B520: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8023B520: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x8023B524: j           L_8023B59C
    // 0x8023B528: nop

        goto L_8023B59C;
    // 0x8023B528: nop

L_8023B52C:
    // 0x8023B52C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B530: jal         0x8003E6BC
    // 0x8023B534: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x8023B534: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x8023B538: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023B53C: beq         $v1, $v0, L_8023B59C
    if (ctx->r3 == ctx->r2) {
        // 0x8023B540: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023B59C;
    }
    // 0x8023B540: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023B544: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B54C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023B550: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023B554: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B558: jal         0x8002C678
    // 0x8023B55C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x8023B55C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x8023B560: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023B564: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B568: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023B56C: jal         0x800319B4
    // 0x8023B570: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x8023B570: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x8023B574: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023B578: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023B57C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B580: jal         0x8006036C
    // 0x8023B584: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8023B584: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x8023B588: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023B58C: jal         0x8002A33C
    // 0x8023B590: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8023B590: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x8023B594: jal         0x80060590
    // 0x8023B598: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8023B598: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_8023B59C:
    // 0x8023B59C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B5A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B5A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B5A8: jr          $ra
    // 0x8023B5AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B5AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E7F8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E7FC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E800: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E804: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022E808: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022E80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E810: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022E814: jal         0x8009A3B4
    // 0x8022E818: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E818: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E81C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022E820: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022E824: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022E828: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E82C: jal         0x8009A3B4
    // 0x8022E830: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E830: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022E834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E838: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E83C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022E840: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E844: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022E848: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022E84C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022E850: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E854: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022E858: jal         0x8004DF78
    // 0x8022E85C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022E85C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022E860: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E864: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022E868: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022E86C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E870: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E874: jr          $ra
    // 0x8022E878: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E878: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
