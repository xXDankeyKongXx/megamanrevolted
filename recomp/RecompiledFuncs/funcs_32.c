#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_800557D0_30BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800557D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800557D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800557D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800557DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800557E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800557E4: lb          $v1, 0x2($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2);
    // 0x800557E8: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800557EC: addiu       $s0, $s0, -0x3C18
    ctx->r16 = ADD32(ctx->r16, -0X3C18);
    // 0x800557F0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x800557F4: beq         $v0, $zero, L_800559C0
    if (ctx->r2 == 0) {
        // 0x800557F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800559C0;
    }
    // 0x800557F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800557FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055800: addu        $at, $at, $v0
    gpr jr_addend_80055808 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80055804: lw          $v0, 0x24A8($at)
    ctx->r2 = ADD32(ctx->r1, 0X24A8);
    // 0x80055808: jr          $v0
    // 0x8005580C: nop

    switch (jr_addend_80055808 >> 2) {
        case 0: goto L_80055810; break;
        case 1: goto L_80055884; break;
        case 2: goto L_800558C8; break;
        case 3: goto L_800558EC; break;
        case 4: goto L_8005593C; break;
        default: switch_error(__func__, 0x80055808, 0x800D24A8);
    }
    // 0x8005580C: nop

L_80055810:
    // 0x80055810: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80055814: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80055818: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005581C: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x80055820: jal         0x8006033C
    // 0x80055824: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80055824: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    after_0:
    // 0x80055828: bnel        $v0, $zero, L_80055848
    if (ctx->r2 != 0) {
        // 0x8005582C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80055848;
    }
    goto skip_0;
    // 0x8005582C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    skip_0:
    // 0x80055830: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80055834: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80055838: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8005583C: bne         $v1, $v0, L_80055870
    if (ctx->r3 != ctx->r2) {
        // 0x80055840: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80055870;
    }
    // 0x80055840: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80055844: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
L_80055848:
    // 0x80055848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005584C: jal         0x8002A2F8
    // 0x80055850: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80055850: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80055854: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80055858: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005585C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80055860: jal         0x80061510
    // 0x80055864: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80055864: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    after_2:
    // 0x80055868: j           L_8005592C
    // 0x8005586C: nop

        goto L_8005592C;
    // 0x8005586C: nop

L_80055870:
    // 0x80055870: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80055874: jal         0x8002A2F8
    // 0x80055878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80055878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8005587C: j           L_800558E0
    // 0x80055880: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800558E0;
    // 0x80055880: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80055884:
    // 0x80055884: jal         0x80055630
    // 0x80055888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80055630_30A30(rdram, ctx);
        goto after_4;
    // 0x80055888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8005588C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80055890: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80055894: beq         $v0, $zero, L_800558C8
    if (ctx->r2 == 0) {
        // 0x80055898: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800558C8;
    }
    // 0x80055898: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005589C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800558A0: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800558A4: addiu       $a2, $s0, 0x4D
    ctx->r6 = ADD32(ctx->r16, 0X4D);
    // 0x800558A8: jal         0x80061510
    // 0x800558AC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x800558AC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    after_5:
    // 0x800558B0: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x800558B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800558B8: bne         $s0, $zero, L_800558C8
    if (ctx->r16 != 0) {
        // 0x800558BC: sb          $v0, 0x2($s1)
        MEM_B(0X2, ctx->r17) = ctx->r2;
            goto L_800558C8;
    }
    // 0x800558BC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x800558C0: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x800558C4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_800558C8:
    // 0x800558C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800558CC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800558D0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800558D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800558D8: bne         $v0, $zero, L_800559C0
    if (ctx->r2 != 0) {
        // 0x800558DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800559C0;
    }
    // 0x800558DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800558E0:
    // 0x800558E0: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x800558E4: j           L_800559C0
    // 0x800558E8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
        goto L_800559C0;
    // 0x800558E8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
L_800558EC:
    // 0x800558EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800558F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800558F4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800558F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800558FC: bne         $v0, $zero, L_800559C0
    if (ctx->r2 != 0) {
        // 0x80055900: nop
    
            goto L_800559C0;
    }
    // 0x80055900: nop

    // 0x80055904: jal         0x80071F9C
    // 0x80055908: nop

    func_80071F9C_4D39C(rdram, ctx);
        goto after_6;
    // 0x80055908: nop

    after_6:
    // 0x8005590C: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    // 0x80055910: lbu         $v1, 0x7A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7A);
    // 0x80055914: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x80055918: sb          $v0, 0x50($s0)
    MEM_B(0X50, ctx->r16) = ctx->r2;
    // 0x8005591C: jal         0x80036E48
    // 0x80055920: sb          $v1, 0x51($s0)
    MEM_B(0X51, ctx->r16) = ctx->r3;
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x80055920: sb          $v1, 0x51($s0)
    MEM_B(0X51, ctx->r16) = ctx->r3;
    after_7:
    // 0x80055924: jal         0x80036B58
    // 0x80055928: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_8;
    // 0x80055928: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_8:
L_8005592C:
    // 0x8005592C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80055930: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80055934: j           L_800559C0
    // 0x80055938: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
        goto L_800559C0;
    // 0x80055938: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_8005593C:
    // 0x8005593C: jal         0x8003E03C
    // 0x80055940: nop

    func_8003E03C_1943C(rdram, ctx);
        goto after_9;
    // 0x80055940: nop

    after_9:
    // 0x80055944: jal         0x8002A4A4
    // 0x80055948: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_10;
    // 0x80055948: nop

    after_10:
    // 0x8005594C: jal         0x8002A488
    // 0x80055950: nop

    func_8002A488_5888(rdram, ctx);
        goto after_11;
    // 0x80055950: nop

    after_11:
    // 0x80055954: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80055958: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8005595C: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x80055960: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80055964: jal         0x8002A02C
    // 0x80055968: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    func_8002A02C_542C(rdram, ctx);
        goto after_12;
    // 0x80055968: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    after_12:
    // 0x8005596C: jal         0x80061724
    // 0x80055970: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_13;
    // 0x80055970: nop

    after_13:
    // 0x80055974: jal         0x8004B5E8
    // 0x80055978: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_14;
    // 0x80055978: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_14:
    // 0x8005597C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80055980: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80055984: sh          $v0, -0x3BB0($at)
    MEM_H(-0X3BB0, ctx->r1) = ctx->r2;
    // 0x80055988: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005598C: jal         0x80073510
    // 0x80055990: sh          $v0, -0x3BAE($at)
    MEM_H(-0X3BAE, ctx->r1) = ctx->r2;
    func_80073510_4E910(rdram, ctx);
        goto after_15;
    // 0x80055990: sh          $v0, -0x3BAE($at)
    MEM_H(-0X3BAE, ctx->r1) = ctx->r2;
    after_15:
    // 0x80055994: jal         0x80073828
    // 0x80055998: nop

    func_80073828_4EC28(rdram, ctx);
        goto after_16;
    // 0x80055998: nop

    after_16:
    // 0x8005599C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800559A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800559A4: sb          $v0, -0x3C18($at)
    MEM_B(-0X3C18, ctx->r1) = ctx->r2;
    // 0x800559A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800559AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800559B0: sb          $v0, -0x3C17($at)
    MEM_B(-0X3C17, ctx->r1) = ctx->r2;
    // 0x800559B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800559B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800559BC: sh          $v0, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = ctx->r2;
L_800559C0:
    // 0x800559C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800559C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800559C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800559CC: jr          $ra
    // 0x800559D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800559D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005BECC_372CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005BECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005BED0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005BED4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005BED8: addiu       $s0, $s0, -0x3E3E
    ctx->r16 = ADD32(ctx->r16, -0X3E3E);
    // 0x8005BEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BEE0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005BEE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005BEE8: beq         $v1, $v0, L_8005BF4C
    if (ctx->r3 == ctx->r2) {
        // 0x8005BEEC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005BF4C;
    }
    // 0x8005BEEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005BEF0: beql        $v0, $zero, L_8005BF08
    if (ctx->r2 == 0) {
        // 0x8005BEF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005BF08;
    }
    goto skip_0;
    // 0x8005BEF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8005BEF8: beq         $v1, $zero, L_8005BF20
    if (ctx->r3 == 0) {
        // 0x8005BEFC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005BF20;
    }
    // 0x8005BEFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005BF00: j           L_8005BF7C
    // 0x8005BF04: nop

        goto L_8005BF7C;
    // 0x8005BF04: nop

L_8005BF08:
    // 0x8005BF08: beq         $v1, $v0, L_8005BF64
    if (ctx->r3 == ctx->r2) {
        // 0x8005BF0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005BF64;
    }
    // 0x8005BF0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005BF10: beq         $v1, $v0, L_8005BF74
    if (ctx->r3 == ctx->r2) {
        // 0x8005BF14: lui         $v0, 0x302
        ctx->r2 = S32(0X302 << 16);
            goto L_8005BF74;
    }
    // 0x8005BF14: lui         $v0, 0x302
    ctx->r2 = S32(0X302 << 16);
    // 0x8005BF18: j           L_8005BF7C
    // 0x8005BF1C: nop

        goto L_8005BF7C;
    // 0x8005BF1C: nop

L_8005BF20:
    // 0x8005BF20: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005BF24: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005BF28: jal         0x80061510
    // 0x8005BF2C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x8005BF2C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x8005BF30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005BF34: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8005BF38: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BF3C: sh          $v1, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r3;
    // 0x8005BF40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005BF44: j           L_8005BF7C
    // 0x8005BF48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005BF7C;
    // 0x8005BF48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005BF4C:
    // 0x8005BF4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005BF50: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005BF54: bltz        $v0, L_8005BF7C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005BF58: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_8005BF7C;
    }
    // 0x8005BF58: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005BF5C: j           L_8005BF7C
    // 0x8005BF60: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005BF7C;
    // 0x8005BF60: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005BF64:
    // 0x8005BF64: jal         0x8005BF8C
    // 0x8005BF68: nop

    func_8005BF8C_3738C(rdram, ctx);
        goto after_1;
    // 0x8005BF68: nop

    after_1:
    // 0x8005BF6C: j           L_8005BF7C
    // 0x8005BF70: nop

        goto L_8005BF7C;
    // 0x8005BF70: nop

L_8005BF74:
    // 0x8005BF74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BF78: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005BF7C:
    // 0x8005BF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BF80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005BF84: jr          $ra
    // 0x8005BF88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005BF88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800756D8_50AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800756D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800756DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800756E0: lb          $v0, 0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5);
    // 0x800756E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800756E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800756EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800756F0: lw          $v0, 0x48F4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X48F4);
    // 0x800756F4: jalr        $v0
    // 0x800756F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800756F8: nop

    after_0:
    // 0x800756FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80075700: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80075704: jr          $ra
    // 0x80075708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80075708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007B6B4_56AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B6B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007B6B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007B6BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007B6C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8007B6C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8007B6C8: jal         0x80053ED8
    // 0x8007B6CC: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8007B6CC: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8007B6D0: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8007B6D4: jal         0x80053ED8
    // 0x8007B6D8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x8007B6D8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8007B6DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8007B6E0: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x8007B6E4: jal         0x8009A3B4
    // 0x8007B6E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007B6E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8007B6EC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8007B6F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007B6F4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8007B6F8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007B6FC: bne         $v0, $zero, L_8007B714
    if (ctx->r2 != 0) {
        // 0x8007B700: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8007B714;
    }
    // 0x8007B700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007B704: jal         0x8004F568
    // 0x8007B708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_3;
    // 0x8007B708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8007B70C: j           L_8007B780
    // 0x8007B710: nop

        goto L_8007B780;
    // 0x8007B710: nop

L_8007B714:
    // 0x8007B714: jal         0x80071110
    // 0x8007B718: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_4;
    // 0x8007B718: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x8007B71C: beq         $v0, $zero, L_8007B778
    if (ctx->r2 == 0) {
        // 0x8007B720: nop
    
            goto L_8007B778;
    }
    // 0x8007B720: nop

    // 0x8007B724: jal         0x8004F144
    // 0x8007B728: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8007B728: nop

    after_5:
    // 0x8007B72C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8007B730: beq         $v1, $zero, L_8007B760
    if (ctx->r3 == 0) {
        // 0x8007B734: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007B760;
    }
    // 0x8007B734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007B738: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8007B73C: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x8007B740: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8007B744: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8007B748: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8007B74C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8007B750: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8007B754: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8007B758: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8007B75C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8007B760:
    // 0x8007B760: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8007B764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007B768: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8007B76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007B770: j           L_8007B780
    // 0x8007B774: sw          $v0, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r2;
        goto L_8007B780;
    // 0x8007B774: sw          $v0, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->r2;
L_8007B778:
    // 0x8007B778: jal         0x8007B4B0
    // 0x8007B77C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8007B4B0_568B0(rdram, ctx);
        goto after_6;
    // 0x8007B77C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8007B780:
    // 0x8007B780: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8007B784: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007B788: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007B78C: jr          $ra
    // 0x8007B790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8007B790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80061798_3CB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006179C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800617A0: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x800617A4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x800617A8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800617AC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800617B0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800617B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800617B8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800617BC: addiu       $v1, $v1, -0x7790
    ctx->r3 = ADD32(ctx->r3, -0X7790);
    // 0x800617C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800617C4: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x800617C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800617CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800617D0: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x800617D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800617D8: beq         $v0, $zero, L_800617EC
    if (ctx->r2 == 0) {
        // 0x800617DC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800617EC;
    }
    // 0x800617DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800617E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800617E4: jal         0x80036B00
    // 0x800617E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x800617E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_800617EC:
    // 0x800617EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800617F0: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800617F4: lui         $a0, 0xBFC1
    ctx->r4 = S32(0XBFC1 << 16);
    // 0x800617F8: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x800617FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80061800: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x80061804: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80061808: srav        $v0, $v0, $s1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r17 & 31));
    // 0x8006180C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80061810: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80061814: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80061818: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8006181C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80061820: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x80061824: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80061828: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006182C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80061830: jr          $ra
    // 0x80061834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80061834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void alEnvmixerPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096E70: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80096E74: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80096E78: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80096E7C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80096E80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80096E84: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80096E88: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80096E8C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80096E90: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80096E94: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80096E98: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80096E9C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80096EA0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80096EA4: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80096EA8: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x80096EAC: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x80096EB0: sw          $s6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r22;
    // 0x80096EB4: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x80096EB8: beq         $v0, $zero, L_80097308
    if (ctx->r2 == 0) {
        // 0x80096EBC: sh          $zero, 0x18($sp)
        MEM_H(0X18, ctx->r29) = 0;
            goto L_80097308;
    }
    // 0x80096EBC: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x80096EC0: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80096EC4: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x80096EC8: addiu       $s4, $s4, -0xBF0
    ctx->r20 = ADD32(ctx->r20, -0XBF0);
L_80096ECC:
    // 0x80096ECC: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80096ED0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80096ED4: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x80096ED8: subu        $s3, $t0, $v0
    ctx->r19 = SUB32(ctx->r8, ctx->r2);
    // 0x80096EDC: slt         $v0, $s7, $s3
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80096EE0: bne         $v0, $zero, L_80097308
    if (ctx->r2 != 0) {
        // 0x80096EE4: sw          $t0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r8;
            goto L_80097308;
    }
    // 0x80096EE4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80096EE8: lh          $v1, 0x8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X8);
    // 0x80096EEC: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80096EF0: beq         $v0, $zero, L_80097294
    if (ctx->r2 == 0) {
        // 0x80096EF4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80097294;
    }
    // 0x80096EF4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80096EF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80096EFC: addu        $at, $at, $v0
    gpr jr_addend_80096F04 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80096F00: lw          $v0, 0x3000($at)
    ctx->r2 = ADD32(ctx->r1, 0X3000);
    // 0x80096F04: jr          $v0
    // 0x80096F08: nop

    switch (jr_addend_80096F04 >> 2) {
        case 0: goto L_80097270; break;
        case 1: goto L_80097294; break;
        case 2: goto L_80097294; break;
        case 3: goto L_80097294; break;
        case 4: goto L_80097294; break;
        case 5: goto L_80097294; break;
        case 6: goto L_80097294; break;
        case 7: goto L_80097294; break;
        case 8: goto L_80097294; break;
        case 9: goto L_80097294; break;
        case 10: goto L_80097294; break;
        case 11: goto L_8009703C; break;
        case 12: goto L_8009703C; break;
        case 13: goto L_80096F0C; break;
        case 14: goto L_800971F0; break;
        case 15: goto L_80097234; break;
        case 16: goto L_8009703C; break;
        default: switch_error(__func__, 0x80096F04, 0x800D3000);
    }
    // 0x80096F08: nop

L_80096F0C:
    // 0x80096F0C: lw          $s1, 0x3C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X3C);
    // 0x80096F10: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80096F14: beq         $v0, $zero, L_80096F30
    if (ctx->r2 == 0) {
        // 0x80096F18: addu        $s5, $s0, $zero
        ctx->r21 = ADD32(ctx->r16, 0);
            goto L_80096F30;
    }
    // 0x80096F18: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x80096F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80096F20: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80096F24: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80096F28: jalr        $v0
    // 0x80096F2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80096F2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80096F30:
    // 0x80096F30: lw          $a2, 0x18($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X18);
    // 0x80096F34: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80096F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80096F3C: jalr        $v0
    // 0x80096F40: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80096F40: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80096F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80096F48: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80096F4C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80096F50: jalr        $v0
    // 0x80096F54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80096F54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80096F58: sw          $fp, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r30;
    // 0x80096F5C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80096F60: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80096F64: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80096F68: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x80096F6C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80096F70: mflo        $v0
    ctx->r2 = lo;
    // 0x80096F74: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x80096F78: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80096F7C: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x80096F80: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80096F84: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x80096F88: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80096F8C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80096F90: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80096F94: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80096F98: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x80096F9C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x80096FA0: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80096FA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80096FA8: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80096FAC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80096FB0: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x80096FB4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80096FB8: beq         $v0, $zero, L_80096FCC
    if (ctx->r2 == 0) {
        // 0x80096FBC: nop
    
            goto L_80096FCC;
    }
    // 0x80096FBC: nop

    // 0x80096FC0: sh          $fp, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r30;
    // 0x80096FC4: j           L_80097018
    // 0x80096FC8: sh          $fp, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r30;
        goto L_80097018;
    // 0x80096FC8: sh          $fp, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r30;
L_80096FCC:
    // 0x80096FCC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80096FD0: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x80096FD4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80096FD8: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80096FDC: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80096FE0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80096FE4: mflo        $v1
    ctx->r3 = lo;
    // 0x80096FE8: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80096FEC: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80096FF0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80096FF4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80096FF8: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x80096FFC: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80097000: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x80097004: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80097008: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8009700C: mflo        $v1
    ctx->r3 = lo;
    // 0x80097010: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x80097014: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
L_80097018:
    // 0x80097018: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x8009701C: beq         $a0, $zero, L_800972CC
    if (ctx->r4 == 0) {
        // 0x80097020: nop
    
            goto L_800972CC;
    }
    // 0x80097020: nop

    // 0x80097024: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x80097028: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8009702C: jalr        $v0
    // 0x80097030: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80097030: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x80097034: j           L_800972CC
    // 0x80097038: nop

        goto L_800972CC;
    // 0x80097038: nop

L_8009703C:
    // 0x8009703C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80097040: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80097044: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80097048: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8009704C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x80097050: jal         0x80097444
    // 0x80097054: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    _pullSubFrame(rdram, ctx);
        goto after_4;
    // 0x80097054: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_4:
    // 0x80097058: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x8009705C: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80097060: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80097064: bne         $v1, $zero, L_800970D8
    if (ctx->r3 != 0) {
        // 0x80097068: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_800970D8;
    }
    // 0x80097068: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8009706C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80097070: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x80097074: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80097078: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8009707C: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80097080: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80097084: mflo        $v1
    ctx->r3 = lo;
    // 0x80097088: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8009708C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x80097090: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x80097094: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80097098: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8009709C: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x800970A0: sh          $v1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r3;
    // 0x800970A4: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x800970A8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x800970AC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800970B0: mflo        $v1
    ctx->r3 = lo;
    // 0x800970B4: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x800970B8: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x800970BC: sh          $v1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r3;
    // 0x800970C0: lhu         $v1, 0x28($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X28);
    // 0x800970C4: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x800970C8: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x800970CC: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x800970D0: j           L_80097130
    // 0x800970D4: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
        goto L_80097130;
    // 0x800970D4: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
L_800970D8:
    // 0x800970D8: lh          $a2, 0x26($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X26);
    // 0x800970DC: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x800970E0: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x800970E4: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x800970E8: nop

    // 0x800970EC: jal         0x80097A9C
    // 0x800970F0: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    _getVol(rdram, ctx);
        goto after_5;
    // 0x800970F0: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    after_5:
    // 0x800970F4: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x800970F8: lh          $a2, 0x2C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2C);
    // 0x800970FC: lhu         $a3, 0x2A($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X2A);
    // 0x80097100: lh          $v1, 0x1E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1E);
    // 0x80097104: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80097108: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x8009710C: mtc1        $v1, $f12
    ctx->f12.u32l = ctx->r3;
    // 0x80097110: nop

    // 0x80097114: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x80097118: jal         0x80097A9C
    // 0x8009711C: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    _getVol(rdram, ctx);
        goto after_6;
    // 0x8009711C: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    after_6:
    // 0x80097120: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80097124: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80097128: nop

    // 0x8009712C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
L_80097130:
    // 0x80097130: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x80097134: beql        $v0, $zero, L_8009713C
    if (ctx->r2 == 0) {
        // 0x80097138: sh          $fp, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r30;
            goto L_8009713C;
    }
    goto skip_0;
    // 0x80097138: sh          $fp, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r30;
    skip_0:
L_8009713C:
    // 0x8009713C: lh          $v0, 0x1E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1E);
    // 0x80097140: beql        $v0, $zero, L_80097148
    if (ctx->r2 == 0) {
        // 0x80097144: sh          $fp, 0x1E($s0)
        MEM_H(0X1E, ctx->r16) = ctx->r30;
            goto L_80097148;
    }
    goto skip_1;
    // 0x80097144: sh          $fp, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r30;
    skip_1:
L_80097148:
    // 0x80097148: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x8009714C: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x80097150: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80097154: bne         $v1, $v0, L_80097164
    if (ctx->r3 != ctx->r2) {
        // 0x80097158: nop
    
            goto L_80097164;
    }
    // 0x80097158: nop

    // 0x8009715C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80097160: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80097164:
    // 0x80097164: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80097168: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x8009716C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80097170: bne         $v1, $v0, L_800971A0
    if (ctx->r3 != ctx->r2) {
        // 0x80097174: nop
    
            goto L_800971A0;
    }
    // 0x80097174: nop

    // 0x80097178: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x8009717C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80097180: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x80097184: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80097188: mflo        $v0
    ctx->r2 = lo;
    // 0x8009718C: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80097190: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x80097194: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80097198: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x8009719C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_800971A0:
    // 0x800971A0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x800971A4: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x800971A8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x800971AC: bnel        $v1, $v0, L_800972CC
    if (ctx->r3 != ctx->r2) {
        // 0x800971B0: sw          $fp, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->r30;
            goto L_800972CC;
    }
    goto skip_2;
    // 0x800971B0: sw          $fp, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r30;
    skip_2:
    // 0x800971B4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800971B8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x800971BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800971C0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x800971C4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x800971C8: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x800971CC: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x800971D0: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x800971D4: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x800971D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800971DC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x800971E0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x800971E4: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x800971E8: j           L_800972CC
    // 0x800971EC: sw          $fp, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r30;
        goto L_800972CC;
    // 0x800971EC: sw          $fp, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r30;
L_800971F0:
    // 0x800971F0: lw          $s1, 0x3C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X3C);
    // 0x800971F4: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x800971F8: beq         $v0, $zero, L_80097210
    if (ctx->r2 == 0) {
        // 0x800971FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80097210;
    }
    // 0x800971FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80097200: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80097204: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80097208: jalr        $v0
    // 0x8009720C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x8009720C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
L_80097210:
    // 0x80097210: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x80097214: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80097218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009721C: jalr        $v0
    // 0x80097220: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80097220: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_8:
    // 0x80097224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80097228: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8009722C: j           L_80097260
    // 0x80097230: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_80097260;
    // 0x80097230: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80097234:
    // 0x80097234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80097238: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8009723C: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80097240: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x80097244: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x80097248: jal         0x80097444
    // 0x8009724C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    _pullSubFrame(rdram, ctx);
        goto after_9;
    // 0x8009724C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_9:
    // 0x80097250: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80097254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80097258: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8009725C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80097260:
    // 0x80097260: jalr        $v0
    // 0x80097264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80097264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80097268: j           L_800972CC
    // 0x8009726C: nop

        goto L_800972CC;
    // 0x8009726C: nop

L_80097270:
    // 0x80097270: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80097274: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80097278: lw          $a0, -0xAD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XAD0);
    // 0x8009727C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80097280: sw          $zero, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = 0;
    // 0x80097284: jal         0x80099264
    // 0x80097288: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    _freePVoice(rdram, ctx);
        goto after_11;
    // 0x80097288: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    after_11:
    // 0x8009728C: j           L_800972CC
    // 0x80097290: nop

        goto L_800972CC;
    // 0x80097290: nop

L_80097294:
    // 0x80097294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80097298: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8009729C: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x800972A0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x800972A4: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x800972A8: jal         0x80097444
    // 0x800972AC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    _pullSubFrame(rdram, ctx);
        goto after_12;
    // 0x800972AC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_12:
    // 0x800972B0: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x800972B4: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x800972B8: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x800972BC: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x800972C0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x800972C4: jalr        $v1
    // 0x800972C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_13;
    // 0x800972C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
L_800972CC:
    // 0x800972CC: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x800972D0: subu        $s7, $s7, $s3
    ctx->r23 = SUB32(ctx->r23, ctx->r19);
    // 0x800972D4: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x800972D8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x800972DC: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x800972E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800972E4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x800972E8: bne         $a0, $zero, L_800972F4
    if (ctx->r4 != 0) {
        // 0x800972EC: sw          $a0, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r4;
            goto L_800972F4;
    }
    // 0x800972EC: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
    // 0x800972F0: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_800972F4:
    // 0x800972F4: jal         0x800991F8
    // 0x800972F8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    __freeParam(rdram, ctx);
        goto after_14;
    // 0x800972F8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_14:
    // 0x800972FC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80097300: bne         $v0, $zero, L_80096ECC
    if (ctx->r2 != 0) {
        // 0x80097304: nop
    
            goto L_80096ECC;
    }
    // 0x80097304: nop

L_80097308:
    // 0x80097308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009730C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80097310: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80097314: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x80097318: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x8009731C: jal         0x80097444
    // 0x80097320: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    _pullSubFrame(rdram, ctx);
        goto after_15;
    // 0x80097320: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_15:
    // 0x80097324: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x80097328: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8009732C: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80097330: beq         $v1, $zero, L_8009733C
    if (ctx->r3 == 0) {
        // 0x80097334: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8009733C;
    }
    // 0x80097334: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80097338: sw          $a0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r4;
L_8009733C:
    // 0x8009733C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80097340: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80097344: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80097348: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8009734C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80097350: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80097354: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80097358: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8009735C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80097360: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80097364: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80097368: jr          $ra
    // 0x8009736C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8009736C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8008AD34_66134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AD34: bne         $a0, $zero, L_8008AD44
    if (ctx->r4 != 0) {
        // 0x8008AD38: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008AD44;
    }
    // 0x8008AD38: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008AD3C: j           L_8008ADE0
    // 0x8008AD40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008ADE0;
    // 0x8008AD40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008AD44:
    // 0x8008AD44: bne         $a1, $zero, L_8008AD50
    if (ctx->r5 != 0) {
        // 0x8008AD48: addu        $t1, $a1, $zero
        ctx->r9 = ADD32(ctx->r5, 0);
            goto L_8008AD50;
    }
    // 0x8008AD48: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x8008AD4C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_8008AD50:
    // 0x8008AD50: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8008AD54: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AD58: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AD5C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008AD60: lw          $a2, 0x4F8C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4F8C);
    // 0x8008AD64: blez        $v0, L_8008ADDC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008AD68: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8008ADDC;
    }
    // 0x8008AD68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008AD6C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8008AD70: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8008AD74: addiu       $t3, $zero, -0x2
    ctx->r11 = ADD32(0, -0X2);
    // 0x8008AD78: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x8008AD7C: addiu       $v1, $a2, 0x10
    ctx->r3 = ADD32(ctx->r6, 0X10);
L_8008AD80:
    // 0x8008AD80: lw          $v0, 0x34($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X34);
    // 0x8008AD84: bnel        $v0, $a0, L_8008ADCC
    if (ctx->r2 != ctx->r4) {
        // 0x8008AD88: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008ADCC;
    }
    goto skip_0;
    // 0x8008AD88: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x8008AD8C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008AD90: bnel        $v0, $t5, L_8008ADCC
    if (ctx->r2 != ctx->r13) {
        // 0x8008AD94: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8008ADCC;
    }
    goto skip_1;
    // 0x8008AD94: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
    // 0x8008AD98: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008AD9C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8008ADA0: beql        $v0, $zero, L_8008ADC0
    if (ctx->r2 == 0) {
        // 0x8008ADA4: sw          $t1, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r9;
            goto L_8008ADC0;
    }
    goto skip_2;
    // 0x8008ADA4: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    skip_2:
    // 0x8008ADA8: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x8008ADAC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8008ADB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008ADB4: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x8008ADB8: j           L_8008ADC4
    // 0x8008ADBC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_8008ADC4;
    // 0x8008ADBC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_8008ADC0:
    // 0x8008ADC0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
L_8008ADC4:
    // 0x8008ADC4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8008ADC8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_8008ADCC:
    // 0x8008ADCC: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
    // 0x8008ADD0: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8008ADD4: bne         $v0, $zero, L_8008AD80
    if (ctx->r2 != 0) {
        // 0x8008ADD8: addiu       $a2, $a2, 0x13C
        ctx->r6 = ADD32(ctx->r6, 0X13C);
            goto L_8008AD80;
    }
    // 0x8008ADD8: addiu       $a2, $a2, 0x13C
    ctx->r6 = ADD32(ctx->r6, 0X13C);
L_8008ADDC:
    // 0x8008ADDC: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_8008ADE0:
    // 0x8008ADE0: jr          $ra
    // 0x8008ADE4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008ADE4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80050330_2B730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80050334: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005033C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80050340: lbu         $v0, 0xA5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA5);
    // 0x80050344: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80050348: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005034C: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
    // 0x80050350: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80050354: bne         $v0, $zero, L_800503B0
    if (ctx->r2 != 0) {
        // 0x80050358: nop
    
            goto L_800503B0;
    }
    // 0x80050358: nop

    // 0x8005035C: lb          $a1, 0x3($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X3);
    // 0x80050360: bgez        $a1, L_8005039C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80050364: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8005039C;
    }
    // 0x80050364: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80050368: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8005036C: bne         $a1, $v0, L_80050380
    if (ctx->r5 != ctx->r2) {
        // 0x80050370: andi        $v1, $v1, 0x7F
        ctx->r3 = ctx->r3 & 0X7F;
            goto L_80050380;
    }
    // 0x80050370: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80050374: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80050378: j           L_800503B0
    // 0x8005037C: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
        goto L_800503B0;
    // 0x8005037C: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
L_80050380:
    // 0x80050380: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x80050384: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80050388: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005038C: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x80050390: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80050394: j           L_800503B0
    // 0x80050398: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
        goto L_800503B0;
    // 0x80050398: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_8005039C:
    // 0x8005039C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x800503A0: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800503A4: sw          $v1, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r3;
    // 0x800503A8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x800503AC: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_800503B0:
    // 0x800503B0: jal         0x800508D4
    // 0x800503B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800508D4_2BCD4(rdram, ctx);
        goto after_0;
    // 0x800503B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800503B8: jal         0x80050578
    // 0x800503BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050578_2B978(rdram, ctx);
        goto after_1;
    // 0x800503BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800503C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800503C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800503C8: jr          $ra
    // 0x800503CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800503CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80046404_21804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046404: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046408: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004640C: andi        $v0, $v0, 0xC
    ctx->r2 = ctx->r2 & 0XC;
    // 0x80046410: beq         $v0, $zero, L_80046420
    if (ctx->r2 == 0) {
        // 0x80046414: nop
    
            goto L_80046420;
    }
    // 0x80046414: nop

    // 0x80046418: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004641C: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
L_80046420:
    // 0x80046420: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80046424: bgtz        $v0, L_80046430
    if (SIGNED(ctx->r2) > 0) {
        // 0x80046428: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80046430;
    }
    // 0x80046428: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8004642C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80046430:
    // 0x80046430: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80046434: jr          $ra
    // 0x80046438: sb          $v0, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80046438: sb          $v0, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8004C05C_2745C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C060: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004C064: addiu       $v0, $v0, -0x5F40
    ctx->r2 = ADD32(ctx->r2, -0X5F40);
    // 0x8004C068: addiu       $v1, $v0, 0x16B0
    ctx->r3 = ADD32(ctx->r2, 0X16B0);
    // 0x8004C06C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004C070: sw          $v0, 0x58F0($at)
    MEM_W(0X58F0, ctx->r1) = ctx->r2;
    // 0x8004C074: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C07C: beq         $v0, $zero, L_8004C0F8
    if (ctx->r2 == 0) {
        // 0x8004C080: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C0F8;
    }
    // 0x8004C080: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C084: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C088:
    // 0x8004C088: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8004C08C: lw          $a0, 0x58F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58F0);
    // 0x8004C090: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C094: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C098: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C09C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C0A0: beq         $v0, $zero, L_8004C0D8
    if (ctx->r2 == 0) {
        // 0x8004C0A4: nop
    
            goto L_8004C0D8;
    }
    // 0x8004C0A4: nop

    // 0x8004C0A8: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C0AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004C0B0: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x8004C0B4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8004C0B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004C0BC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8004C0C0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8004C0C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004C0C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004C0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004C0D0: jalr        $v0
    // 0x8004C0D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C0D4: nop

    after_0:
L_8004C0D8:
    // 0x8004C0D8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004C0DC: lw          $v0, 0x58F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X58F0);
    // 0x8004C0E0: addiu       $v0, $v0, 0x5AC
    ctx->r2 = ADD32(ctx->r2, 0X5AC);
    // 0x8004C0E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004C0E8: sw          $v0, 0x58F0($at)
    MEM_W(0X58F0, ctx->r1) = ctx->r2;
    // 0x8004C0EC: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C0F0: bne         $v0, $zero, L_8004C088
    if (ctx->r2 != 0) {
        // 0x8004C0F4: nop
    
            goto L_8004C088;
    }
    // 0x8004C0F4: nop

L_8004C0F8:
    // 0x8004C0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C0FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C100: jr          $ra
    // 0x8004C104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004C104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80092860_6DC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092864: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80092868: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009286C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092870: jal         0x80094460
    // 0x80092874: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80092874: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80092878: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009287C: sw          $s0, -0xEE0($at)
    MEM_W(-0XEE0, ctx->r1) = ctx->r16;
    // 0x80092880: jal         0x80094460
    // 0x80092884: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80092884: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80092888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009288C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092890: jr          $ra
    // 0x80092894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80092894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092898: nop

    // 0x8009289C: nop

;}
RECOMP_FUNC void func_80028F58_4358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028F58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80028F5C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80028F60: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80028F64: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80028F68: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80028F6C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80028F70: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
    // 0x80028F74: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80028F78: addiu       $s4, $zero, 0x7F
    ctx->r20 = ADD32(0, 0X7F);
    // 0x80028F7C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80028F80: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80028F84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80028F88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80028F8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_80028F90:
    // 0x80028F90: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80028F94: addiu       $v0, $v0, -0x46D0
    ctx->r2 = ADD32(ctx->r2, -0X46D0);
    // 0x80028F98: addu        $s1, $s3, $v0
    ctx->r17 = ADD32(ctx->r19, ctx->r2);
    // 0x80028F9C: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x80028FA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80028FA4: beq         $v1, $v0, L_80029078
    if (ctx->r3 == ctx->r2) {
        // 0x80028FA8: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_80029078;
    }
    // 0x80028FA8: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80028FAC: beq         $v0, $zero, L_80028FCC
    if (ctx->r2 == 0) {
        // 0x80028FB0: nop
    
            goto L_80028FCC;
    }
    // 0x80028FB0: nop

    // 0x80028FB4: beq         $v1, $s6, L_80028FE4
    if (ctx->r3 == ctx->r22) {
        // 0x80028FB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80028FE4;
    }
    // 0x80028FB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80028FBC: beq         $v1, $v0, L_80029030
    if (ctx->r3 == ctx->r2) {
        // 0x80028FC0: nop
    
            goto L_80029030;
    }
    // 0x80028FC0: nop

    // 0x80028FC4: j           L_80029094
    // 0x80028FC8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80029094;
    // 0x80028FC8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80028FCC:
    // 0x80028FCC: beq         $v1, $s5, L_80029030
    if (ctx->r3 == ctx->r21) {
        // 0x80028FD0: nop
    
            goto L_80029030;
    }
    // 0x80028FD0: nop

    // 0x80028FD4: beq         $v1, $s4, L_80029078
    if (ctx->r3 == ctx->r20) {
        // 0x80028FD8: nop
    
            goto L_80029078;
    }
    // 0x80028FD8: nop

    // 0x80028FDC: j           L_80029094
    // 0x80028FE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80029094;
    // 0x80028FE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80028FE4:
    // 0x80028FE4: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80028FE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80028FEC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80028FF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80028FF4: bnel        $v0, $zero, L_80029094
    if (ctx->r2 != 0) {
        // 0x80028FF8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80029094;
    }
    goto skip_0;
    // 0x80028FF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x80028FFC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80029000: beq         $v0, $zero, L_80029030
    if (ctx->r2 == 0) {
        // 0x80029004: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_80029030;
    }
    // 0x80029004: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80029008: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8002900C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80029010: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80029014: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x80029018: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002901C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80029020: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80029024: addiu       $v0, $v0, 0x4FD0
    ctx->r2 = ADD32(ctx->r2, 0X4FD0);
    // 0x80029028: jal         0x8009A710
    // 0x8002902C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8002902C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
L_80029030:
    // 0x80029030: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80029034: beq         $v0, $s6, L_80029078
    if (ctx->r2 == ctx->r22) {
        // 0x80029038: addiu       $v0, $zero, 0x36
        ctx->r2 = ADD32(0, 0X36);
            goto L_80029078;
    }
    // 0x80029038: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x8002903C: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x80029040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80029044: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x80029048: lw          $v1, 0x1C4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C4);
    // 0x8002904C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80029050: sh          $s4, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r20;
    // 0x80029054: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80029058: addiu       $v1, $v1, 0x1000
    ctx->r3 = ADD32(ctx->r3, 0X1000);
    // 0x8002905C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80029060: lw          $a2, 0x1C0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1C0);
    // 0x80029064: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80029068: jal         0x8009B750
    // 0x8002906C: addiu       $a1, $a1, 0xC8
    ctx->r5 = ADD32(ctx->r5, 0XC8);
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8002906C: addiu       $a1, $a1, 0xC8
    ctx->r5 = ADD32(ctx->r5, 0XC8);
    after_1:
    // 0x80029070: jal         0x8009B9F0
    // 0x80029074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x80029074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80029078:
    // 0x80029078: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8002907C: bnel        $v0, $zero, L_80029094
    if (ctx->r2 != 0) {
        // 0x80029080: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80029094;
    }
    goto skip_1;
    // 0x80029080: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80029084: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80029088: bnel        $v0, $s5, L_80029090
    if (ctx->r2 != ctx->r21) {
        // 0x8002908C: sh          $s4, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r20;
            goto L_80029090;
    }
    goto skip_2;
    // 0x8002908C: sh          $s4, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r20;
    skip_2:
L_80029090:
    // 0x80029090: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80029094:
    // 0x80029094: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80029098: bne         $v0, $zero, L_80028F90
    if (ctx->r2 != 0) {
        // 0x8002909C: addiu       $s3, $s3, 0x1C8
        ctx->r19 = ADD32(ctx->r19, 0X1C8);
            goto L_80028F90;
    }
    // 0x8002909C: addiu       $s3, $s3, 0x1C8
    ctx->r19 = ADD32(ctx->r19, 0X1C8);
    // 0x800290A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800290A4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800290A8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800290AC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800290B0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800290B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800290B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800290BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800290C0: jr          $ra
    // 0x800290C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800290C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80034E04_10204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E04: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80034E08: lw          $v0, 0x2828($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2828);
    // 0x80034E0C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80034E10: lw          $a0, 0x2824($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2824);
    // 0x80034E14: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80034E18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034E1C: sw          $v1, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r3;
    // 0x80034E20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034E24: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x80034E28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80034E2C: sb          $v0, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = ctx->r2;
    // 0x80034E30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80034E34: jr          $ra
    // 0x80034E38: sb          $a0, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80034E38: sb          $a0, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8008EEB0_6A2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EEB0: nop

    // 0x8008EEB4: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008EEB8: mflo        $a0
    ctx->r4 = lo;
    // 0x8008EEBC: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8008EEC0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8008EEC4: divu        $zero, $a0, $a2
    lo = S32(U32(ctx->r4) / U32(ctx->r6)); hi = S32(U32(ctx->r4) % U32(ctx->r6));
    // 0x8008EEC8: bne         $a2, $zero, L_8008EED4
    if (ctx->r6 != 0) {
        // 0x8008EECC: nop
    
            goto L_8008EED4;
    }
    // 0x8008EECC: nop

    // 0x8008EED0: break       7
    do_break(2148069072);
L_8008EED4:
    // 0x8008EED4: mflo        $a0
    ctx->r4 = lo;
    // 0x8008EED8: lui         $v0, 0xB216
    ctx->r2 = S32(0XB216 << 16);
    // 0x8008EEDC: ori         $v0, $v0, 0x42C9
    ctx->r2 = ctx->r2 | 0X42C9;
    // 0x8008EEE0: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008EEE4: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008EEE8: srl         $v0, $t0, 7
    ctx->r2 = S32(U32(ctx->r8) >> 7);
    // 0x8008EEEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008EEF0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8008EEF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008EEF8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8008EEFC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008EF00: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8008EF04: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008EF08: mflo        $a3
    ctx->r7 = lo;
    // 0x8008EF0C: lui         $v0, 0x51EB
    ctx->r2 = S32(0X51EB << 16);
    // 0x8008EF10: ori         $v0, $v0, 0x851F
    ctx->r2 = ctx->r2 | 0X851F;
    // 0x8008EF14: multu       $a3, $v0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008EF18: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EF1C: sw          $v1, 0x5200($at)
    MEM_W(0X5200, ctx->r1) = ctx->r3;
    // 0x8008EF20: addiu       $v0, $v1, -0xB8
    ctx->r2 = ADD32(ctx->r3, -0XB8);
    // 0x8008EF24: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EF28: sw          $v0, 0x5204($at)
    MEM_W(0X5204, ctx->r1) = ctx->r2;
    // 0x8008EF2C: addiu       $v0, $v1, 0xB8
    ctx->r2 = ADD32(ctx->r3, 0XB8);
    // 0x8008EF30: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EF34: sw          $v0, 0x5208($at)
    MEM_W(0X5208, ctx->r1) = ctx->r2;
    // 0x8008EF38: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008EF3C: srl         $v0, $t0, 5
    ctx->r2 = S32(U32(ctx->r8) >> 5);
    // 0x8008EF40: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008EF44: sw          $v0, 0x520C($at)
    MEM_W(0X520C, ctx->r1) = ctx->r2;
    // 0x8008EF48: addiu       $v0, $v0, 0xB8
    ctx->r2 = ADD32(ctx->r2, 0XB8);
    // 0x8008EF4C: jr          $ra
    // 0x8008EF50: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    TRACE_RETURN()
    return;
    // 0x8008EF50: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
;}
RECOMP_FUNC void func_80034510_F910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034510: jr          $ra
    // 0x80034514: nop

    TRACE_RETURN()
    return;
    // 0x80034514: nop

;}
RECOMP_FUNC void func_800521A8_2D5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800521A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800521AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800521B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800521B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800521B8: jal         0x80052AEC
    // 0x800521BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80052AEC_2DEEC(rdram, ctx);
        goto after_0;
    // 0x800521BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800521C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800521C4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x800521C8: jal         0x80053550
    // 0x800521CC: lui         $s2, 0xFF00
    ctx->r18 = S32(0XFF00 << 16);
    func_80053550_2E950(rdram, ctx);
        goto after_1;
    // 0x800521CC: lui         $s2, 0xFF00
    ctx->r18 = S32(0XFF00 << 16);
    after_1:
    // 0x800521D0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x800521D4: lw          $s0, -0x11CC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X11CC);
    // 0x800521D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800521DC: sw          $v0, -0x1B68($at)
    MEM_W(-0X1B68, ctx->r1) = ctx->r2;
    // 0x800521E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800521E4: sw          $zero, -0x11CC($at)
    MEM_W(-0X11CC, ctx->r1) = 0;
    // 0x800521E8: sltiu       $v0, $s0, 0x2
    ctx->r2 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x800521EC: bne         $v0, $zero, L_800522C4
    if (ctx->r2 != 0) {
        // 0x800521F0: addiu       $v0, $s0, -0x1
        ctx->r2 = ADD32(ctx->r16, -0X1);
            goto L_800522C4;
    }
    // 0x800521F0: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x800521F4: beq         $v0, $zero, L_800522C4
    if (ctx->r2 == 0) {
        // 0x800521F8: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_800522C4;
    }
    // 0x800521F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800521FC: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80052200: addiu       $s1, $s1, -0x2782
    ctx->r17 = ADD32(ctx->r17, -0X2782);
L_80052204:
    // 0x80052204: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80052208: j           L_8005229C
    // 0x8005220C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005229C;
    // 0x8005220C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80052210:
    // 0x80052210: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80052214: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052218: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005221C: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80052220: addu        $v0, $a2, $s1
    ctx->r2 = ADD32(ctx->r6, ctx->r17);
    // 0x80052224: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80052228: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8005222C: srl         $a0, $a0, 13
    ctx->r4 = S32(U32(ctx->r4) >> 13);
    // 0x80052230: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052234: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052238: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x8005223C: addu        $v0, $a1, $s1
    ctx->r2 = ADD32(ctx->r5, ctx->r17);
    // 0x80052240: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80052244: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052248: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005224C: lbu         $v0, -0x1B70($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1B70);
    // 0x80052250: srl         $v1, $v1, 13
    ctx->r3 = S32(U32(ctx->r3) >> 13);
    // 0x80052254: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80052258: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8005225C: beq         $v0, $zero, L_80052294
    if (ctx->r2 == 0) {
        // 0x80052260: nop
    
            goto L_80052294;
    }
    // 0x80052260: nop

    // 0x80052264: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80052268: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8005226C: lw          $v0, -0x2780($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2780);
    // 0x80052270: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80052274: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80052278: lw          $v1, -0x2780($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2780);
    // 0x8005227C: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80052280: and         $v0, $v0, $s2
    ctx->r2 = ctx->r2 & ctx->r18;
    // 0x80052284: beq         $v0, $zero, L_80052294
    if (ctx->r2 == 0) {
        // 0x80052288: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80052294;
    }
    // 0x80052288: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8005228C: jal         0x800522DC
    // 0x80052290: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    func_800522DC_2D6DC(rdram, ctx);
        goto after_2;
    // 0x80052290: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    after_2:
L_80052294:
    // 0x80052294: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x80052298: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005229C:
    // 0x8005229C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800522A0: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x800522A4: bne         $v0, $zero, L_80052210
    if (ctx->r2 != 0) {
        // 0x800522A8: addiu       $v1, $s0, -0x1
        ctx->r3 = ADD32(ctx->r16, -0X1);
            goto L_80052210;
    }
    // 0x800522A8: addiu       $v1, $s0, -0x1
    ctx->r3 = ADD32(ctx->r16, -0X1);
    // 0x800522AC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800522B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800522B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800522B8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800522BC: bne         $v0, $zero, L_80052204
    if (ctx->r2 != 0) {
        // 0x800522C0: nop
    
            goto L_80052204;
    }
    // 0x800522C0: nop

L_800522C4:
    // 0x800522C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800522C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800522CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800522D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800522D4: jr          $ra
    // 0x800522D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800522D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005F29C_3A69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F29C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F2A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005F2A4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8005F2A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005F2AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005F2B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005F2B4: lw          $v0, 0x4D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4D4);
    // 0x8005F2B8: jalr        $v0
    // 0x8005F2BC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8005F2BC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    after_0:
    // 0x8005F2C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005F2C4: jr          $ra
    // 0x8005F2C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005F2C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80028C14_4014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80028C1C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80028C20: addiu       $s0, $s0, -0x3C80
    ctx->r16 = ADD32(ctx->r16, -0X3C80);
    // 0x80028C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028C28: jal         0x80093140
    // 0x80028C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80093140_6E540(rdram, ctx);
        goto after_0;
    // 0x80028C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80028C30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80028C34: addiu       $v1, $s0, 0x3
    ctx->r3 = ADD32(ctx->r16, 0X3);
    // 0x80028C38: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80028C3C:
    // 0x80028C3C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80028C40: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80028C44: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80028C48: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x80028C4C: bnel        $v0, $zero, L_80028C54
    if (ctx->r2 != 0) {
        // 0x80028C50: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80028C54;
    }
    goto skip_0;
    // 0x80028C50: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
L_80028C54:
    // 0x80028C54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80028C58: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80028C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80028C60: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x80028C64: bnel        $v0, $zero, L_80028C6C
    if (ctx->r2 != 0) {
        // 0x80028C68: sb          $zero, 0x0($v1)
        MEM_B(0X0, ctx->r3) = 0;
            goto L_80028C6C;
    }
    goto skip_1;
    // 0x80028C68: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    skip_1:
L_80028C6C:
    // 0x80028C6C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80028C70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80028C74: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80028C78: bne         $v0, $zero, L_80028C3C
    if (ctx->r2 != 0) {
        // 0x80028C7C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80028C3C;
    }
    // 0x80028C7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80028C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028C84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80028C88: jr          $ra
    // 0x80028C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8009084C_6BC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009084C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090850: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80090854: jal         0x800903B8
    // 0x80090858: nop

    func_800903B8_6B7B8(rdram, ctx);
        goto after_0;
    // 0x80090858: nop

    after_0:
    // 0x8009085C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80090860: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80090864: jr          $ra
    // 0x80090868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80090868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009086C: nop

;}
RECOMP_FUNC void func_80076E80_52280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076E84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80076E88: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80076E8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076E90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80076E94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80076E98: lw          $v0, -0x36F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X36F0);
    // 0x80076E9C: jalr        $v0
    // 0x80076EA0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80076EA0: nop

    after_0:
    // 0x80076EA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80076EA8: jr          $ra
    // 0x80076EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80076EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80032C58_E058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032C58: lb          $v0, 0x2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2);
    // 0x80032C5C: bgez        $v0, L_80032C68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80032C60: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80032C68;
    }
    // 0x80032C60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80032C64: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80032C68:
    // 0x80032C68: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80032C6C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80032C70: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80032C74: bne         $v0, $zero, L_80032C80
    if (ctx->r2 != 0) {
        // 0x80032C78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80032C80;
    }
    // 0x80032C78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80032C7C: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
L_80032C80:
    // 0x80032C80: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80032C84: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80032C88: slti        $v0, $v1, 0xF
    ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x80032C8C: bne         $v0, $zero, L_80032C98
    if (ctx->r2 != 0) {
        // 0x80032C90: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_80032C98;
    }
    // 0x80032C90: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80032C94: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
L_80032C98:
    // 0x80032C98: lb          $v0, 0x3($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3);
    // 0x80032C9C: bgez        $v0, L_80032CA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80032CA0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80032CA8;
    }
    // 0x80032CA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80032CA4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80032CA8:
    // 0x80032CA8: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80032CAC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80032CB0: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80032CB4: bne         $v0, $zero, L_80032CC0
    if (ctx->r2 != 0) {
        // 0x80032CB8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80032CC0;
    }
    // 0x80032CB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80032CBC: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
L_80032CC0:
    // 0x80032CC0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80032CC4: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80032CC8: slti        $v0, $v1, 0xF
    ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x80032CCC: bne         $v0, $zero, L_80032CD8
    if (ctx->r2 != 0) {
        // 0x80032CD0: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_80032CD8;
    }
    // 0x80032CD0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80032CD4: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
L_80032CD8:
    // 0x80032CD8: sll         $v0, $t1, 24
    ctx->r2 = S32(ctx->r9 << 24);
    // 0x80032CDC: sra         $a3, $v0, 24
    ctx->r7 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80032CE0: slti        $v1, $a3, 0x22
    ctx->r3 = SIGNED(ctx->r7) < 0X22 ? 1 : 0;
    // 0x80032CE4: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x80032CE8: sra         $a2, $v0, 24
    ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80032CEC: slti        $v0, $a2, 0x22
    ctx->r2 = SIGNED(ctx->r6) < 0X22 ? 1 : 0;
    // 0x80032CF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80032CF4: beq         $v1, $zero, L_80032D08
    if (ctx->r3 == 0) {
        // 0x80032CF8: slt         $v0, $a2, $a3
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_80032D08;
    }
    // 0x80032CF8: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80032CFC: beql        $v0, $zero, L_80032D08
    if (ctx->r2 == 0) {
        // 0x80032D00: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_80032D08;
    }
    goto skip_0;
    // 0x80032D00: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    skip_0:
    // 0x80032D04: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_80032D08:
    // 0x80032D08: sll         $v0, $t1, 24
    ctx->r2 = S32(ctx->r9 << 24);
    // 0x80032D0C: beq         $v0, $zero, L_80032D3C
    if (ctx->r2 == 0) {
        // 0x80032D10: sll         $v0, $t0, 24
        ctx->r2 = S32(ctx->r8 << 24);
            goto L_80032D3C;
    }
    // 0x80032D10: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x80032D14: lb          $v0, 0x2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2);
    // 0x80032D18: bgez        $v0, L_80032D2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80032D1C: nop
    
            goto L_80032D2C;
    }
    // 0x80032D1C: nop

    // 0x80032D20: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80032D24: j           L_80032D34
    // 0x80032D28: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
        goto L_80032D34;
    // 0x80032D28: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
L_80032D2C:
    // 0x80032D2C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80032D30: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_80032D34:
    // 0x80032D34: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x80032D38: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
L_80032D3C:
    // 0x80032D3C: beq         $v0, $zero, L_80032D68
    if (ctx->r2 == 0) {
        // 0x80032D40: nop
    
            goto L_80032D68;
    }
    // 0x80032D40: nop

    // 0x80032D44: lb          $v0, 0x3($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3);
    // 0x80032D48: bgez        $v0, L_80032D5C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80032D4C: nop
    
            goto L_80032D5C;
    }
    // 0x80032D4C: nop

    // 0x80032D50: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80032D54: j           L_80032D64
    // 0x80032D58: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80032D64;
    // 0x80032D58: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80032D5C:
    // 0x80032D5C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80032D60: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80032D64:
    // 0x80032D64: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
L_80032D68:
    // 0x80032D68: jr          $ra
    // 0x80032D6C: nop

    TRACE_RETURN()
    return;
    // 0x80032D6C: nop

;}
RECOMP_FUNC void func_80049204_24604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049208: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004920C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80049210: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80049214: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80049218: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004921C: lw          $v0, -0x2F10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F10);
    // 0x80049220: jalr        $v0
    // 0x80049224: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80049224: nop

    after_0:
    // 0x80049228: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004922C: jr          $ra
    // 0x80049230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80049230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80059320_34720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059324: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059328: addiu       $a0, $a0, -0x3E40
    ctx->r4 = ADD32(ctx->r4, -0X3E40);
    // 0x8005932C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80059330: jal         0x8003BDA4
    // 0x80059334: addiu       $a1, $a0, 0xA0
    ctx->r5 = ADD32(ctx->r4, 0XA0);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_0;
    // 0x80059334: addiu       $a1, $a0, 0xA0
    ctx->r5 = ADD32(ctx->r4, 0XA0);
    after_0:
    // 0x80059338: jal         0x80025E1C
    // 0x8005933C: addiu       $a0, $zero, 0xEBC
    ctx->r4 = ADD32(0, 0XEBC);
    func_80025E1C_121C(rdram, ctx);
        goto after_1;
    // 0x8005933C: addiu       $a0, $zero, 0xEBC
    ctx->r4 = ADD32(0, 0XEBC);
    after_1:
    // 0x80059340: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80059344: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059348: sw          $v0, -0x16D0($at)
    MEM_W(-0X16D0, ctx->r1) = ctx->r2;
    // 0x8005934C: jal         0x8009A2B0
    // 0x80059350: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x80059350: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    after_2:
    // 0x80059354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80059358: jr          $ra
    // 0x8005935C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005935C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800610AC_3C4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800610AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800610B0: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x800610B4: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x800610B8: addiu       $t0, $t0, -0x2414
    ctx->r8 = ADD32(ctx->r8, -0X2414);
    // 0x800610BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800610C0: bne         $v1, $v0, L_80061108
    if (ctx->r3 != ctx->r2) {
        // 0x800610C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80061108;
    }
    // 0x800610C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800610C8: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x800610CC: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x800610D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800610D4: sb          $a1, -0x2413($at)
    MEM_B(-0X2413, ctx->r1) = ctx->r5;
    // 0x800610D8: beq         $v0, $zero, L_800610F0
    if (ctx->r2 == 0) {
        // 0x800610DC: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_800610F0;
    }
    // 0x800610DC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x800610E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800610E4: sh          $v0, -0x2412($at)
    MEM_H(-0X2412, ctx->r1) = ctx->r2;
    // 0x800610E8: j           L_800610FC
    // 0x800610EC: sb          $a2, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r6;
        goto L_800610FC;
    // 0x800610EC: sb          $a2, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r6;
L_800610F0:
    // 0x800610F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800610F4: sh          $zero, -0x2412($at)
    MEM_H(-0X2412, ctx->r1) = 0;
    // 0x800610F8: sb          $a2, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r6;
L_800610FC:
    // 0x800610FC: sb          $a3, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r7;
    // 0x80061100: sh          $zero, 0x6($t0)
    MEM_H(0X6, ctx->r8) = 0;
    // 0x80061104: sw          $a0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r4;
L_80061108:
    // 0x80061108: jr          $ra
    // 0x8006110C: nop

    TRACE_RETURN()
    return;
    // 0x8006110C: nop

;}
RECOMP_FUNC void osScGetCmdQ(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009ADD0: jr          $ra
    // 0x8009ADD4: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    TRACE_RETURN()
    return;
    // 0x8009ADD4: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
;}
RECOMP_FUNC void func_8008C0A4_674A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C0A4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008C0A8: lhu         $v1, 0x9A($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X9A);
    // 0x8008C0AC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8008C0B0: beq         $v1, $v0, L_8008C0E8
    if (ctx->r3 == ctx->r2) {
        // 0x8008C0B4: lui         $v1, 0x7FFF
        ctx->r3 = S32(0X7FFF << 16);
            goto L_8008C0E8;
    }
    // 0x8008C0B4: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x8008C0B8: lhu         $v1, 0xB2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XB2);
    // 0x8008C0BC: beq         $v1, $zero, L_8008C0D0
    if (ctx->r3 == 0) {
        // 0x8008C0C0: sll         $v1, $v1, 8
        ctx->r3 = S32(ctx->r3 << 8);
            goto L_8008C0D0;
    }
    // 0x8008C0C0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8008C0C4: lw          $v0, 0x40($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X40);
    // 0x8008C0C8: j           L_8008C0F4
    // 0x8008C0CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8008C0F4;
    // 0x8008C0CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8008C0D0:
    // 0x8008C0D0: lhu         $v0, 0xB4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XB4);
    // 0x8008C0D4: lw          $v1, 0x3C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X3C);
    // 0x8008C0D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008C0DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008C0E0: j           L_8008C0F8
    // 0x8008C0E4: sw          $v1, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r3;
        goto L_8008C0F8;
    // 0x8008C0E4: sw          $v1, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r3;
L_8008C0E8:
    // 0x8008C0E8: lw          $v0, 0x40($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X40);
    // 0x8008C0EC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8008C0F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8008C0F4:
    // 0x8008C0F4: sw          $v0, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r2;
L_8008C0F8:
    // 0x8008C0F8: lbu         $v0, 0xC0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC0);
    // 0x8008C0FC: lbu         $a0, 0xBF($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XBF);
    // 0x8008C100: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8008C104: sb          $v1, 0xC3($a1)
    MEM_B(0XC3, ctx->r5) = ctx->r3;
    // 0x8008C108: sb          $v0, 0xC4($a1)
    MEM_B(0XC4, ctx->r5) = ctx->r2;
    // 0x8008C10C: jr          $ra
    // 0x8008C110: sb          $a0, 0xC5($a1)
    MEM_B(0XC5, ctx->r5) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8008C110: sb          $a0, 0xC5($a1)
    MEM_B(0XC5, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_8004D5FC_289FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D5FC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8004D600: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8004D604: lw          $a1, -0x2364($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2364);
    // 0x8004D608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D60C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004D610: jal         0x8004D64C
    // 0x8004D614: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8004D64C_28A4C(rdram, ctx);
        goto after_0;
    // 0x8004D614: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x8004D618: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004D61C: jr          $ra
    // 0x8004D620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004D620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80036B84_11F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B84: jr          $ra
    // 0x80036B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80036B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80036B8C: nop

;}
RECOMP_FUNC void func_8008D4F4_688F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D4F4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D4F8: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x8008D4FC: sh          $v0, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = ctx->r2;
    // 0x8008D500: jr          $ra
    // 0x8008D504: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D504: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_80056DCC_321CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056DCC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80056DD0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80056DD4: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x80056DD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80056DDC: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x80056DE0: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
L_80056DE4:
    // 0x80056DE4: blez        $v0, L_80056E68
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80056DE8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80056E68;
    }
    // 0x80056DE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80056DEC: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80056DF0: subu        $t0, $v0, $a3
    ctx->r8 = SUB32(ctx->r2, ctx->r7);
    // 0x80056DF4: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80056DF8:
    // 0x80056DF8: lbu         $v0, 0x455($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X455);
    // 0x80056DFC: beql        $v0, $zero, L_80056E5C
    if (ctx->r2 == 0) {
        // 0x80056E00: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80056E5C;
    }
    goto skip_0;
    // 0x80056E00: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80056E04: lbu         $a2, 0x454($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X454);
    // 0x80056E08: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80056E0C: beq         $v1, $zero, L_80056E44
    if (ctx->r3 == 0) {
        // 0x80056E10: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80056E44;
    }
    // 0x80056E10: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80056E14: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80056E18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80056E1C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80056E20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056E24: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80056E28: lb          $v1, -0x1CB8($at)
    ctx->r3 = MEM_B(ctx->r1, -0X1CB8);
    // 0x80056E2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056E30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80056E34: lb          $v0, -0x1CB8($at)
    ctx->r2 = MEM_B(ctx->r1, -0X1CB8);
    // 0x80056E38: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80056E3C: beql        $v1, $zero, L_80056E5C
    if (ctx->r3 == 0) {
        // 0x80056E40: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80056E5C;
    }
    goto skip_1;
    // 0x80056E40: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
L_80056E44:
    // 0x80056E44: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80056E48: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x80056E4C: lbu         $v0, 0x454($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X454);
    // 0x80056E50: sb          $v0, 0x454($a1)
    MEM_B(0X454, ctx->r5) = ctx->r2;
    // 0x80056E54: sb          $a2, 0x454($v1)
    MEM_B(0X454, ctx->r3) = ctx->r6;
    // 0x80056E58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80056E5C:
    // 0x80056E5C: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80056E60: bne         $v0, $zero, L_80056DF8
    if (ctx->r2 != 0) {
        // 0x80056E64: addu        $a1, $t1, $a0
        ctx->r5 = ADD32(ctx->r9, ctx->r4);
            goto L_80056DF8;
    }
    // 0x80056E64: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80056E68:
    // 0x80056E68: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80056E6C: slti        $v0, $a3, 0x1F
    ctx->r2 = SIGNED(ctx->r7) < 0X1F ? 1 : 0;
    // 0x80056E70: bne         $v0, $zero, L_80056DE4
    if (ctx->r2 != 0) {
        // 0x80056E74: subu        $v0, $t2, $a3
        ctx->r2 = SUB32(ctx->r10, ctx->r7);
            goto L_80056DE4;
    }
    // 0x80056E74: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
    // 0x80056E78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80056E7C: jr          $ra
    // 0x80056E80: nop

    TRACE_RETURN()
    return;
    // 0x80056E80: nop

;}
RECOMP_FUNC void func_80040834_1BC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040834: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80040838: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004083C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80040840: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80040844: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80040848: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004084C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80040850: andi        $v0, $s1, 0x300
    ctx->r2 = ctx->r17 & 0X300;
    // 0x80040854: beq         $v0, $zero, L_80040944
    if (ctx->r2 == 0) {
        // 0x80040858: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80040944;
    }
    // 0x80040858: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004085C: andi        $v0, $s1, 0xC00
    ctx->r2 = ctx->r17 & 0XC00;
    // 0x80040860: beq         $v0, $zero, L_80040914
    if (ctx->r2 == 0) {
        // 0x80040864: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80040914;
    }
    // 0x80040864: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80040868: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8004086C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80040870: jal         0x8009A3B4
    // 0x80040874: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80040874: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80040878: andi        $v0, $s1, 0x100
    ctx->r2 = ctx->r17 & 0X100;
    // 0x8004087C: beq         $v0, $zero, L_800408D0
    if (ctx->r2 == 0) {
        // 0x80040880: andi        $v0, $s1, 0x400
        ctx->r2 = ctx->r17 & 0X400;
            goto L_800408D0;
    }
    // 0x80040880: andi        $v0, $s1, 0x400
    ctx->r2 = ctx->r17 & 0X400;
    // 0x80040884: beq         $v0, $zero, L_800408B4
    if (ctx->r2 == 0) {
        // 0x80040888: nop
    
            goto L_800408B4;
    }
    // 0x80040888: nop

    // 0x8004088C: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x80040890: bltzl       $v0, L_80040898
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040894: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80040898;
    }
    goto skip_0;
    // 0x80040894: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_80040898:
    // 0x80040898: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8004089C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x800408A0: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x800408A4: bltzl       $v0, L_800408AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800408A8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800408AC;
    }
    goto skip_1;
    // 0x800408A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_800408AC:
    // 0x800408AC: j           L_80040978
    // 0x800408B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80040978;
    // 0x800408B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_800408B4:
    // 0x800408B4: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x800408B8: bltzl       $v0, L_800408C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x800408BC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800408C0;
    }
    goto skip_2;
    // 0x800408BC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_800408C0:
    // 0x800408C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800408C4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x800408C8: j           L_80040970
    // 0x800408CC: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
        goto L_80040970;
    // 0x800408CC: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
L_800408D0:
    // 0x800408D0: beq         $v0, $zero, L_800408FC
    if (ctx->r2 == 0) {
        // 0x800408D4: nop
    
            goto L_800408FC;
    }
    // 0x800408D4: nop

    // 0x800408D8: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x800408DC: bltzl       $v0, L_800408E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800408E0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800408E4;
    }
    goto skip_3;
    // 0x800408E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_800408E4:
    // 0x800408E4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x800408E8: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x800408EC: bltzl       $v0, L_800408F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800408F0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800408F4;
    }
    goto skip_4;
    // 0x800408F0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
L_800408F4:
    // 0x800408F4: j           L_80040978
    // 0x800408F8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80040978;
    // 0x800408F8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_800408FC:
    // 0x800408FC: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x80040900: bltzl       $v0, L_80040908
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040904: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80040908;
    }
    goto skip_5;
    // 0x80040904: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_80040908:
    // 0x80040908: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8004090C: j           L_80040970
    // 0x80040910: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
        goto L_80040970;
    // 0x80040910: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
L_80040914:
    // 0x80040914: andi        $v0, $s1, 0x100
    ctx->r2 = ctx->r17 & 0X100;
    // 0x80040918: beq         $v0, $zero, L_80040934
    if (ctx->r2 == 0) {
        // 0x8004091C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80040934;
    }
    // 0x8004091C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80040920: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80040924: bltzl       $v0, L_8004092C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040928: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8004092C;
    }
    goto skip_6;
    // 0x80040928: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_6:
L_8004092C:
    // 0x8004092C: j           L_80040940
    // 0x80040930: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80040940;
    // 0x80040930: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80040934:
    // 0x80040934: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80040938: bltzl       $v0, L_80040940
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004093C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80040940;
    }
    goto skip_7;
    // 0x8004093C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_7:
L_80040940:
    // 0x80040940: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80040944:
    // 0x80040944: andi        $v0, $s1, 0xC00
    ctx->r2 = ctx->r17 & 0XC00;
    // 0x80040948: beq         $v0, $zero, L_8004097C
    if (ctx->r2 == 0) {
        // 0x8004094C: andi        $v0, $s1, 0x400
        ctx->r2 = ctx->r17 & 0X400;
            goto L_8004097C;
    }
    // 0x8004094C: andi        $v0, $s1, 0x400
    ctx->r2 = ctx->r17 & 0X400;
    // 0x80040950: beq         $v0, $zero, L_8004096C
    if (ctx->r2 == 0) {
        // 0x80040954: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8004096C;
    }
    // 0x80040954: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80040958: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8004095C: bltzl       $v0, L_80040964
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040960: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80040964;
    }
    goto skip_8;
    // 0x80040960: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_8:
L_80040964:
    // 0x80040964: j           L_80040978
    // 0x80040968: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80040978;
    // 0x80040968: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8004096C:
    // 0x8004096C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_80040970:
    // 0x80040970: bltzl       $v0, L_80040978
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040974: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80040978;
    }
    goto skip_9;
    // 0x80040974: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_9:
L_80040978:
    // 0x80040978: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8004097C:
    // 0x8004097C: andi        $v0, $s1, 0x3000
    ctx->r2 = ctx->r17 & 0X3000;
    // 0x80040980: beq         $v0, $zero, L_800409B4
    if (ctx->r2 == 0) {
        // 0x80040984: andi        $v0, $s1, 0x1000
        ctx->r2 = ctx->r17 & 0X1000;
            goto L_800409B4;
    }
    // 0x80040984: andi        $v0, $s1, 0x1000
    ctx->r2 = ctx->r17 & 0X1000;
    // 0x80040988: beq         $v0, $zero, L_800409A4
    if (ctx->r2 == 0) {
        // 0x8004098C: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_800409A4;
    }
    // 0x8004098C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80040990: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x80040994: bltzl       $v0, L_8004099C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040998: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8004099C;
    }
    goto skip_10;
    // 0x80040998: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_10:
L_8004099C:
    // 0x8004099C: j           L_800409B0
    // 0x800409A0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_800409B0;
    // 0x800409A0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_800409A4:
    // 0x800409A4: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x800409A8: bltzl       $v0, L_800409B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x800409AC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800409B0;
    }
    goto skip_11;
    // 0x800409AC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_11:
L_800409B0:
    // 0x800409B0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_800409B4:
    // 0x800409B4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x800409B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800409BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800409C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800409C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800409C8: jr          $ra
    // 0x800409CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800409CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80036E48_12248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036E48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80036E4C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80036E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036E54: bne         $v0, $zero, L_80036F5C
    if (ctx->r2 != 0) {
        // 0x80036E58: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80036F5C;
    }
    // 0x80036E58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80036E5C: sltiu       $v0, $a0, 0x18
    ctx->r2 = ctx->r4 < 0X18 ? 1 : 0;
    // 0x80036E60: beq         $v0, $zero, L_80036E7C
    if (ctx->r2 == 0) {
        // 0x80036E64: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_80036E7C;
    }
    // 0x80036E64: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80036E68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80036E6C: addu        $at, $at, $v0
    gpr jr_addend_80036E74 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80036E70: lw          $v0, 0x1D90($at)
    ctx->r2 = ADD32(ctx->r1, 0X1D90);
    // 0x80036E74: jr          $v0
    // 0x80036E78: nop

    switch (jr_addend_80036E74 >> 2) {
        case 0: goto L_80036E7C; break;
        case 1: goto L_80036E7C; break;
        case 2: goto L_80036E7C; break;
        case 3: goto L_80036E7C; break;
        case 4: goto L_80036E7C; break;
        case 5: goto L_80036E90; break;
        case 6: goto L_80036E90; break;
        case 7: goto L_80036E90; break;
        case 8: goto L_80036E7C; break;
        case 9: goto L_80036E7C; break;
        case 10: goto L_80036E7C; break;
        case 11: goto L_80036E7C; break;
        case 12: goto L_80036E7C; break;
        case 13: goto L_80036E90; break;
        case 14: goto L_80036E90; break;
        case 15: goto L_80036E90; break;
        case 16: goto L_80036E7C; break;
        case 17: goto L_80036E7C; break;
        case 18: goto L_80036E7C; break;
        case 19: goto L_80036E7C; break;
        case 20: goto L_80036ED8; break;
        case 21: goto L_80036EE8; break;
        case 22: goto L_80036EFC; break;
        case 23: goto L_80036F10; break;
        default: switch_error(__func__, 0x80036E74, 0x800D1D90);
    }
    // 0x80036E78: nop

L_80036E7C:
    // 0x80036E7C: sra         $v0, $a0, 3
    ctx->r2 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80036E80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036E84: sb          $zero, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = 0;
    // 0x80036E88: j           L_80036EA4
    // 0x80036E8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_80036EA4;
    // 0x80036E8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_80036E90:
    // 0x80036E90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80036E94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036E98: sb          $v0, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = ctx->r2;
    // 0x80036E9C: sra         $v0, $a0, 3
    ctx->r2 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80036EA0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_80036EA4:
    // 0x80036EA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80036EA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80036EAC: lhu         $v0, -0x3710($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X3710);
    // 0x80036EB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036EB4: sh          $v0, -0xC66($at)
    MEM_H(-0XC66, ctx->r1) = ctx->r2;
    // 0x80036EB8: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80036EBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80036EC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80036EC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80036EC8: lhu         $v0, -0x370C($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X370C);
    // 0x80036ECC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036ED0: j           L_80036F4C
    // 0x80036ED4: sh          $v0, -0xC64($at)
    MEM_H(-0XC64, ctx->r1) = ctx->r2;
        goto L_80036F4C;
    // 0x80036ED4: sh          $v0, -0xC64($at)
    MEM_H(-0XC64, ctx->r1) = ctx->r2;
L_80036ED8:
    // 0x80036ED8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80036EDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036EE0: j           L_80036F20
    // 0x80036EE4: sb          $v0, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = ctx->r2;
        goto L_80036F20;
    // 0x80036EE4: sb          $v0, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = ctx->r2;
L_80036EE8:
    // 0x80036EE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80036EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036EF0: sb          $v0, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = ctx->r2;
    // 0x80036EF4: j           L_80036F20
    // 0x80036EF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80036F20;
    // 0x80036EF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80036EFC:
    // 0x80036EFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80036F00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F04: sb          $v0, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = ctx->r2;
    // 0x80036F08: j           L_80036F20
    // 0x80036F0C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80036F20;
    // 0x80036F0C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80036F10:
    // 0x80036F10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80036F14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F18: sb          $v0, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = ctx->r2;
    // 0x80036F1C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80036F20:
    // 0x80036F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F24: sb          $v0, -0xC6F($at)
    MEM_B(-0XC6F, ctx->r1) = ctx->r2;
    // 0x80036F28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80036F2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F30: sb          $zero, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = 0;
    // 0x80036F34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F38: sb          $zero, -0xC6D($at)
    MEM_B(-0XC6D, ctx->r1) = 0;
    // 0x80036F3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F40: sw          $zero, -0xC6C($at)
    MEM_W(-0XC6C, ctx->r1) = 0;
    // 0x80036F44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036F48: sh          $v0, -0xC66($at)
    MEM_H(-0XC66, ctx->r1) = ctx->r2;
L_80036F4C:
    // 0x80036F4C: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x80036F50: addiu       $a1, $a1, 0x6F68
    ctx->r5 = ADD32(ctx->r5, 0X6F68);
    // 0x80036F54: jal         0x800290C8
    // 0x80036F58: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800290C8_44C8(rdram, ctx);
        goto after_0;
    // 0x80036F58: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
L_80036F5C:
    // 0x80036F5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80036F60: jr          $ra
    // 0x80036F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80047284_22684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047284: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80047288: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8004728C: beq         $v0, $zero, L_800472B8
    if (ctx->r2 == 0) {
        // 0x80047290: nop
    
            goto L_800472B8;
    }
    // 0x80047290: nop

    // 0x80047294: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80047298: lw          $v0, -0x25E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X25E0);
    // 0x8004729C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800472A0: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x800472A4: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x800472A8: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x800472AC: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800472B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800472B4: sw          $v0, -0x25E0($at)
    MEM_W(-0X25E0, ctx->r1) = ctx->r2;
L_800472B8:
    // 0x800472B8: jr          $ra
    // 0x800472BC: nop

    TRACE_RETURN()
    return;
    // 0x800472BC: nop

;}
RECOMP_FUNC void func_80066400_41800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066400: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80066404: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80066408: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8006640C: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    // 0x80066410: bne         $v0, $zero, L_80066434
    if (ctx->r2 != 0) {
        // 0x80066414: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80066434;
    }
    // 0x80066414: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80066418: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8006641C: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x80066420: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80066424: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066428: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006642C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80066430: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80066434:
    // 0x80066434: lui         $v1, 0xFFBF
    ctx->r3 = S32(0XFFBF << 16);
    // 0x80066438: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8006643C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80066440: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80066444: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80066448: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006644C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80066450: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80066454: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80066458: beq         $v0, $zero, L_80066468
    if (ctx->r2 == 0) {
        // 0x8006645C: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_80066468;
    }
    // 0x8006645C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80066460: j           L_80066474
    // 0x80066464: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
        goto L_80066474;
    // 0x80066464: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
L_80066468:
    // 0x80066468: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x8006646C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80066470: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
L_80066474:
    // 0x80066474: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066478: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x8006647C: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x80066480: bgtz        $v0, L_80066514
    if (SIGNED(ctx->r2) > 0) {
        // 0x80066484: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80066514;
    }
    // 0x80066484: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80066488: lhu         $v1, 0xBA($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XBA);
    // 0x8006648C: andi        $v0, $v1, 0x6000
    ctx->r2 = ctx->r3 & 0X6000;
    // 0x80066490: beq         $v0, $zero, L_800664D0
    if (ctx->r2 == 0) {
        // 0x80066494: andi        $v0, $v1, 0x8000
        ctx->r2 = ctx->r3 & 0X8000;
            goto L_800664D0;
    }
    // 0x80066494: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x80066498: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006649C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800664A0: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x800664A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800664A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800664AC: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x800664B0: lbu         $a0, 0x71($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X71);
    // 0x800664B4: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x800664B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800664BC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x800664C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800664C4: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x800664C8: j           L_80066520
    // 0x800664CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80066520;
    // 0x800664CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_800664D0:
    // 0x800664D0: beq         $v0, $zero, L_8006651C
    if (ctx->r2 == 0) {
        // 0x800664D4: addiu       $v1, $zero, -0x100
        ctx->r3 = ADD32(0, -0X100);
            goto L_8006651C;
    }
    // 0x800664D4: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x800664D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800664DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800664E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800664E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800664E8: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x800664EC: lb          $v1, 0x72($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X72);
    // 0x800664F0: lui         $a0, 0x2000
    ctx->r4 = S32(0X2000 << 16);
    // 0x800664F4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x800664F8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800664FC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80066500: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80066504: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066508: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x8006650C: j           L_80066520
    // 0x80066510: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80066520;
    // 0x80066510: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80066514:
    // 0x80066514: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80066518: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8006651C:
    // 0x8006651C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80066520:
    // 0x80066520: sb          $v0, 0x78($a1)
    MEM_B(0X78, ctx->r5) = ctx->r2;
    // 0x80066524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80066528: jr          $ra
    // 0x8006652C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8006652C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80028CB0_40B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028CB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80028CB4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80028CB8: jal         0x80026914
    // 0x80028CBC: nop

    func_80026914_1D14(rdram, ctx);
        goto after_0;
    // 0x80028CBC: nop

    after_0:
    // 0x80028CC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80028CC4: bne         $v0, $zero, L_80028CF0
    if (ctx->r2 != 0) {
        // 0x80028CC8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80028CF0;
    }
    // 0x80028CC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80028CCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80028CD0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80028CD4: addiu       $a0, $a0, 0x2920
    ctx->r4 = ADD32(ctx->r4, 0X2920);
    // 0x80028CD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80028CDC: jal         0x80026500
    // 0x80028CE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80026500_1900(rdram, ctx);
        goto after_1;
    // 0x80028CE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80028CE4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80028CE8: jal         0x80026810
    // 0x80028CEC: addiu       $a0, $a0, -0x7304
    ctx->r4 = ADD32(ctx->r4, -0X7304);
    func_80026810_1C10(rdram, ctx);
        goto after_2;
    // 0x80028CEC: addiu       $a0, $a0, -0x7304
    ctx->r4 = ADD32(ctx->r4, -0X7304);
    after_2:
L_80028CF0:
    // 0x80028CF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80028CF4: jr          $ra
    // 0x80028CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80028CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800740A0_4F4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800740A0: jr          $ra
    // 0x800740A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800740A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80038CF8_140F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038CF8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80038CFC: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80038D00: bne         $v0, $zero, L_80038DAC
    if (ctx->r2 != 0) {
        // 0x80038D04: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_80038DAC;
    }
    // 0x80038D04: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80038D08: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038D0C: lw          $v1, -0x55F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55F0);
    // 0x80038D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80038D14: bne         $v1, $v0, L_80038DB0
    if (ctx->r3 != ctx->r2) {
        // 0x80038D18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80038DB0;
    }
    // 0x80038D18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80038D1C: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x80038D20: addu        $v0, $a2, $a0
    ctx->r2 = ADD32(ctx->r6, ctx->r4);
    // 0x80038D24: bltzl       $v0, L_80038D2C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80038D28: addiu       $v0, $v0, 0x1FF
        ctx->r2 = ADD32(ctx->r2, 0X1FF);
            goto L_80038D2C;
    }
    goto skip_0;
    // 0x80038D28: addiu       $v0, $v0, 0x1FF
    ctx->r2 = ADD32(ctx->r2, 0X1FF);
    skip_0:
L_80038D2C:
    // 0x80038D2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80038D30: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x80038D34: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x80038D38: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80038D3C: bgez        $a0, L_80038D48
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80038D40: subu        $a2, $v0, $v1
        ctx->r6 = SUB32(ctx->r2, ctx->r3);
            goto L_80038D48;
    }
    // 0x80038D40: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x80038D44: addiu       $a0, $a0, 0x1FF
    ctx->r4 = ADD32(ctx->r4, 0X1FF);
L_80038D48:
    // 0x80038D48: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80038D4C: lbu         $v0, -0x39A6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X39A6);
    // 0x80038D50: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038D54: lw          $v1, -0x4DE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4DE0);
    // 0x80038D58: sra         $a0, $a0, 9
    ctx->r4 = S32(SIGNED(ctx->r4) >> 9);
    // 0x80038D5C: slt         $v1, $a2, $v1
    ctx->r3 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80038D60: bne         $v1, $zero, L_80038DA4
    if (ctx->r3 != 0) {
        // 0x80038D64: subu        $a1, $a0, $v0
        ctx->r5 = SUB32(ctx->r4, ctx->r2);
            goto L_80038DA4;
    }
    // 0x80038D64: subu        $a1, $a0, $v0
    ctx->r5 = SUB32(ctx->r4, ctx->r2);
    // 0x80038D68: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038D6C: lw          $v0, -0x4DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD8);
    // 0x80038D70: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80038D74: bne         $v0, $zero, L_80038DB0
    if (ctx->r2 != 0) {
        // 0x80038D78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80038DB0;
    }
    // 0x80038D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80038D7C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038D80: lw          $v0, -0x4DDC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DDC);
    // 0x80038D84: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038D88: bne         $v0, $zero, L_80038DB0
    if (ctx->r2 != 0) {
        // 0x80038D8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80038DB0;
    }
    // 0x80038D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80038D90: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038D94: lw          $v0, -0x4DD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD4);
    // 0x80038D98: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80038D9C: beq         $v0, $zero, L_80038DB0
    if (ctx->r2 == 0) {
        // 0x80038DA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80038DB0;
    }
    // 0x80038DA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80038DA4:
    // 0x80038DA4: j           L_80038DB0
    // 0x80038DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80038DB0;
    // 0x80038DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80038DAC:
    // 0x80038DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80038DB0:
    // 0x80038DB0: jr          $ra
    // 0x80038DB4: nop

    TRACE_RETURN()
    return;
    // 0x80038DB4: nop

;}
RECOMP_FUNC void func_8002753C_293C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002753C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80027540: jr          $ra
    // 0x80027544: lw          $v0, 0x6DC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6DC0);
    TRACE_RETURN()
    return;
    // 0x80027544: lw          $v0, 0x6DC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6DC0);
    // 0x80027548: nop

    // 0x8002754C: nop

;}
RECOMP_FUNC void __osPfsDeclearPage(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009D41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009D420: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8009D424: lbu         $t3, 0x13($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X13);
    // 0x8009D428: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009D42C: bne         $t3, $zero, L_8009D438
    if (ctx->r11 != 0) {
        // 0x8009D430: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8009D438;
    }
    // 0x8009D430: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8009D434: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
L_8009D438:
    // 0x8009D438: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8009D43C: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8009D440: beq         $v0, $zero, L_8009D46C
    if (ctx->r2 == 0) {
        // 0x8009D444: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8009D46C;
    }
    // 0x8009D444: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8009D448: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8009D44C: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
L_8009D450:
    // 0x8009D450: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8009D454: beq         $v0, $t0, L_8009D470
    if (ctx->r2 == ctx->r8) {
        // 0x8009D458: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8009D470;
    }
    // 0x8009D458: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8009D45C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8009D460: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8009D464: bne         $v0, $zero, L_8009D450
    if (ctx->r2 != 0) {
        // 0x8009D468: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8009D450;
    }
    // 0x8009D468: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_8009D46C:
    // 0x8009D46C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8009D470:
    // 0x8009D470: bne         $a0, $v0, L_8009D484
    if (ctx->r4 != ctx->r2) {
        // 0x8009D474: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8009D484;
    }
    // 0x8009D474: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8009D478: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8009D47C: j           L_8009D52C
    // 0x8009D480: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_8009D52C;
    // 0x8009D480: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_8009D484:
    // 0x8009D484: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x8009D488: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8009D48C: addiu       $a0, $t0, 0x1
    ctx->r4 = ADD32(ctx->r8, 0X1);
    // 0x8009D490: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8009D494: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8009D498: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8009D49C: beq         $v1, $zero, L_8009D4F4
    if (ctx->r3 == 0) {
        // 0x8009D4A0: addu        $t5, $t0, $zero
        ctx->r13 = ADD32(ctx->r8, 0);
            goto L_8009D4F4;
    }
    // 0x8009D4A0: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x8009D4A4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8009D4A8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8009D4AC: addu        $t1, $v0, $a1
    ctx->r9 = ADD32(ctx->r2, ctx->r5);
L_8009D4B0:
    // 0x8009D4B0: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    // 0x8009D4B4: bne         $v0, $t4, L_8009D4D8
    if (ctx->r2 != ctx->r12) {
        // 0x8009D4B8: sll         $v0, $t0, 1
        ctx->r2 = S32(ctx->r8 << 1);
            goto L_8009D4D8;
    }
    // 0x8009D4B8: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x8009D4BC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8009D4C0: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8009D4C4: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x8009D4C8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8009D4CC: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8009D4D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8009D4D4: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
L_8009D4D8:
    // 0x8009D4D8: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8009D4DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8009D4E0: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8009D4E4: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8009D4E8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8009D4EC: bne         $v1, $zero, L_8009D4B0
    if (ctx->r3 != 0) {
        // 0x8009D4F0: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_8009D4B0;
    }
    // 0x8009D4F0: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_8009D4F4:
    // 0x8009D4F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8009D4F8: bne         $a0, $v0, L_8009D518
    if (ctx->r4 != ctx->r2) {
        // 0x8009D4FC: sw          $t5, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r13;
            goto L_8009D518;
    }
    // 0x8009D4FC: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x8009D500: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8009D504: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8009D508: beql        $v0, $zero, L_8009D51C
    if (ctx->r2 == 0) {
        // 0x8009D50C: sll         $v0, $t0, 1
        ctx->r2 = S32(ctx->r8 << 1);
            goto L_8009D51C;
    }
    goto skip_0;
    // 0x8009D50C: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    skip_0:
    // 0x8009D510: j           L_8009D52C
    // 0x8009D514: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
        goto L_8009D52C;
    // 0x8009D514: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
L_8009D518:
    // 0x8009D518: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
L_8009D51C:
    // 0x8009D51C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8009D520: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8009D524: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8009D528: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_8009D52C:
    // 0x8009D52C: jr          $ra
    // 0x8009D530: addu        $v0, $t7, $zero
    ctx->r2 = ADD32(ctx->r15, 0);
    TRACE_RETURN()
    return;
    // 0x8009D530: addu        $v0, $t7, $zero
    ctx->r2 = ADD32(ctx->r15, 0);
;}
RECOMP_FUNC void func_8008D508_68908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D508: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D50C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D510: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D514: sh          $zero, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = 0;
    // 0x8008D518: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8008D51C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008D520: sh          $v0, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r2;
    // 0x8008D524: jr          $ra
    // 0x8008D528: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D528: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_8002FD98_B198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FD98: jr          $ra
    // 0x8002FD9C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8002FD9C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8004D64C_28A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D64C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004D650: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004D654: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8004D658: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004D65C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8004D660: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004D664: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8004D668: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004D66C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004D670: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004D674: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x8004D678: lw          $s4, 0x0($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X0);
    // 0x8004D67C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8004D680: jal         0x8004DA68
    // 0x8004D684: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8004D684: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8004D688: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8004D68C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8004D690: bne         $a0, $v0, L_8004D6AC
    if (ctx->r4 != ctx->r2) {
        // 0x8004D694: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8004D6AC;
    }
    // 0x8004D694: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8004D698: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8004D69C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8004D6A0: beql        $v0, $zero, L_8004D6AC
    if (ctx->r2 == 0) {
        // 0x8004D6A4: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_8004D6AC;
    }
    goto skip_0;
    // 0x8004D6A4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    skip_0:
    // 0x8004D6A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_8004D6AC:
    // 0x8004D6AC: blez        $s4, L_8004D7E8
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8004D6B0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8004D7E8;
    }
    // 0x8004D6B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8004D6B4: addiu       $s1, $a1, 0x4
    ctx->r17 = ADD32(ctx->r5, 0X4);
L_8004D6B8:
    // 0x8004D6B8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8004D6BC: bnel        $a0, $v0, L_8004D7D8
    if (ctx->r4 != ctx->r2) {
        // 0x8004D6C0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8004D7D8;
    }
    goto skip_1;
    // 0x8004D6C0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x8004D6C4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8004D6C8: lbu         $v0, -0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X3);
    // 0x8004D6CC: bnel        $v1, $v0, L_8004D7D8
    if (ctx->r3 != ctx->r2) {
        // 0x8004D6D0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8004D7D8;
    }
    goto skip_2;
    // 0x8004D6D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_2:
    // 0x8004D6D4: beq         $s2, $zero, L_8004D6F0
    if (ctx->r18 == 0) {
        // 0x8004D6D8: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8004D6F0;
    }
    // 0x8004D6D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8004D6DC: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8004D6E0: lbu         $v0, -0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, -0X2);
    // 0x8004D6E4: bnel        $v1, $v0, L_8004D7D8
    if (ctx->r3 != ctx->r2) {
        // 0x8004D6E8: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8004D7D8;
    }
    goto skip_3;
    // 0x8004D6E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_3:
    // 0x8004D6EC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8004D6F0:
    // 0x8004D6F0: beq         $a0, $v0, L_8004D75C
    if (ctx->r4 == ctx->r2) {
        // 0x8004D6F4: slti        $v0, $a0, 0x41
        ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
            goto L_8004D75C;
    }
    // 0x8004D6F4: slti        $v0, $a0, 0x41
    ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x8004D6F8: beq         $v0, $zero, L_8004D718
    if (ctx->r2 == 0) {
        // 0x8004D6FC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8004D718;
    }
    // 0x8004D6FC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8004D700: beq         $a0, $v0, L_8004D7A8
    if (ctx->r4 == ctx->r2) {
        // 0x8004D704: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8004D7A8;
    }
    // 0x8004D704: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8004D708: beql        $a0, $v0, L_8004D754
    if (ctx->r4 == ctx->r2) {
        // 0x8004D70C: sb          $s3, 0x3C4($s0)
        MEM_B(0X3C4, ctx->r16) = ctx->r19;
            goto L_8004D754;
    }
    goto skip_4;
    // 0x8004D70C: sb          $s3, 0x3C4($s0)
    MEM_B(0X3C4, ctx->r16) = ctx->r19;
    skip_4:
    // 0x8004D710: j           L_8004D7EC
    // 0x8004D714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D7EC;
    // 0x8004D714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D718:
    // 0x8004D718: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8004D71C: beql        $a0, $v0, L_8004D7BC
    if (ctx->r4 == ctx->r2) {
        // 0x8004D720: sb          $s3, 0x50($s0)
        MEM_B(0X50, ctx->r16) = ctx->r19;
            goto L_8004D7BC;
    }
    goto skip_5;
    // 0x8004D720: sb          $s3, 0x50($s0)
    MEM_B(0X50, ctx->r16) = ctx->r19;
    skip_5:
    // 0x8004D724: slti        $v0, $a0, 0x81
    ctx->r2 = SIGNED(ctx->r4) < 0X81 ? 1 : 0;
    // 0x8004D728: beq         $v0, $zero, L_8004D740
    if (ctx->r2 == 0) {
        // 0x8004D72C: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8004D740;
    }
    // 0x8004D72C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8004D730: beql        $a0, $v0, L_8004D7AC
    if (ctx->r4 == ctx->r2) {
        // 0x8004D734: sb          $s3, 0x114($s0)
        MEM_B(0X114, ctx->r16) = ctx->r19;
            goto L_8004D7AC;
    }
    goto skip_6;
    // 0x8004D734: sb          $s3, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r19;
    skip_6:
    // 0x8004D738: j           L_8004D7EC
    // 0x8004D73C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D7EC;
    // 0x8004D73C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D740:
    // 0x8004D740: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8004D744: beql        $a0, $v0, L_8004D7C4
    if (ctx->r4 == ctx->r2) {
        // 0x8004D748: sb          $s3, 0x58($s0)
        MEM_B(0X58, ctx->r16) = ctx->r19;
            goto L_8004D7C4;
    }
    goto skip_7;
    // 0x8004D748: sb          $s3, 0x58($s0)
    MEM_B(0X58, ctx->r16) = ctx->r19;
    skip_7:
    // 0x8004D74C: j           L_8004D7EC
    // 0x8004D750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D7EC;
    // 0x8004D750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D754:
    // 0x8004D754: j           L_8004D764
    // 0x8004D758: sw          $s2, 0x3C0($s0)
    MEM_W(0X3C0, ctx->r16) = ctx->r18;
        goto L_8004D764;
    // 0x8004D758: sw          $s2, 0x3C0($s0)
    MEM_W(0X3C0, ctx->r16) = ctx->r18;
L_8004D75C:
    // 0x8004D75C: sb          $s3, 0x5A8($s0)
    MEM_B(0X5A8, ctx->r16) = ctx->r19;
    // 0x8004D760: sw          $s2, 0x5A4($s0)
    MEM_W(0X5A4, ctx->r16) = ctx->r18;
L_8004D764:
    // 0x8004D764: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x8004D768: addiu       $a0, $s0, 0xF8
    ctx->r4 = ADD32(ctx->r16, 0XF8);
    // 0x8004D76C: jal         0x8009A3B4
    // 0x8004D770: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8004D770: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_1:
    // 0x8004D774: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8004D778: lw          $v0, 0x60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X60);
    // 0x8004D77C: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x8004D780: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8004D784: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x8004D788: sw          $v0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r2;
    // 0x8004D78C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004D790: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x8004D794: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x8004D798: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8004D79C: sh          $v0, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r2;
    // 0x8004D7A0: j           L_8004D7D0
    // 0x8004D7A4: sw          $v1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r3;
        goto L_8004D7D0;
    // 0x8004D7A4: sw          $v1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r3;
L_8004D7A8:
    // 0x8004D7A8: sb          $s3, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r19;
L_8004D7AC:
    // 0x8004D7AC: sw          $s2, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->r18;
    // 0x8004D7B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004D7B4: j           L_8004D7D0
    // 0x8004D7B8: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
        goto L_8004D7D0;
    // 0x8004D7B8: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
L_8004D7BC:
    // 0x8004D7BC: j           L_8004D7C8
    // 0x8004D7C0: sw          $s2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r18;
        goto L_8004D7C8;
    // 0x8004D7C0: sw          $s2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r18;
L_8004D7C4:
    // 0x8004D7C4: sw          $s2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r18;
L_8004D7C8:
    // 0x8004D7C8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004D7CC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_8004D7D0:
    // 0x8004D7D0: j           L_8004D7EC
    // 0x8004D7D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D7EC;
    // 0x8004D7D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D7D8:
    // 0x8004D7D8: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x8004D7DC: slt         $v0, $a2, $s4
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8004D7E0: bne         $v0, $zero, L_8004D6B8
    if (ctx->r2 != 0) {
        // 0x8004D7E4: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8004D6B8;
    }
    // 0x8004D7E4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_8004D7E8:
    // 0x8004D7E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004D7EC:
    // 0x8004D7EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D7F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004D7F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004D7F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004D7FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D800: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004D804: jr          $ra
    // 0x8004D808: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8004D808: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008B87C_66C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B87C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008B880: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008B884: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008B888: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8008B88C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8008B890: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008B894: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8008B898: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8008B89C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008B8A0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8008B8A4: beql        $a1, $zero, L_8008BD64
    if (ctx->r5 == 0) {
        // 0x8008B8A8: sw          $a1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r5;
            goto L_8008BD64;
    }
    goto skip_0;
    // 0x8008B8A8: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    skip_0:
L_8008B8AC:
    // 0x8008B8AC: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x8008B8B0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8008B8B4: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008B8B8: bne         $v0, $zero, L_8008B8E8
    if (ctx->r2 != 0) {
        // 0x8008B8BC: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8008B8E8;
    }
    // 0x8008B8BC: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x8008B8C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008B8C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008B8C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008B8CC: lw          $v0, -0x1490($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1490);
    // 0x8008B8D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008B8D4: jalr        $v0
    // 0x8008B8D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8008B8D8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_0:
    // 0x8008B8DC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8008B8E0: bne         $a1, $zero, L_8008B8AC
    if (ctx->r5 != 0) {
        // 0x8008B8E4: nop
    
            goto L_8008B8AC;
    }
    // 0x8008B8E4: nop

L_8008B8E8:
    // 0x8008B8E8: beq         $a1, $zero, L_8008BD64
    if (ctx->r5 == 0) {
        // 0x8008B8EC: sw          $a1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r5;
            goto L_8008BD64;
    }
    // 0x8008B8EC: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x8008B8F0: lwc1        $f0, 0x50($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8008B8F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8008B8F8: lbu         $v1, 0xD2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD2);
    // 0x8008B8FC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8008B900: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
    // 0x8008B904: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008B908: lbu         $s2, 0x0($a0)
    ctx->r18 = MEM_BU(ctx->r4, 0X0);
    // 0x8008B90C: beq         $v1, $zero, L_8008B948
    if (ctx->r3 == 0) {
        // 0x8008B910: addiu       $v0, $a0, 0x2
        ctx->r2 = ADD32(ctx->r4, 0X2);
            goto L_8008B948;
    }
    // 0x8008B910: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x8008B914: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008B918: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8008B91C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8008B920: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008B924: bne         $v0, $zero, L_8008B938
    if (ctx->r2 != 0) {
        // 0x8008B928: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8008B938;
    }
    // 0x8008B928: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8008B92C: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8008B930: sb          $zero, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = 0;
    // 0x8008B934: sb          $v1, 0xD3($s0)
    MEM_B(0XD3, ctx->r16) = ctx->r3;
L_8008B938:
    // 0x8008B938: bnel        $s2, $v0, L_8008B950
    if (ctx->r18 != ctx->r2) {
        // 0x8008B93C: sb          $v1, 0xBB($s0)
        MEM_B(0XBB, ctx->r16) = ctx->r3;
            goto L_8008B950;
    }
    goto skip_1;
    // 0x8008B93C: sb          $v1, 0xBB($s0)
    MEM_B(0XBB, ctx->r16) = ctx->r3;
    skip_1:
    // 0x8008B940: j           L_8008B950
    // 0x8008B944: nop

        goto L_8008B950;
    // 0x8008B944: nop

L_8008B948:
    // 0x8008B948: lbu         $v0, 0xD3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD3);
    // 0x8008B94C: sb          $v0, 0xBB($s0)
    MEM_B(0XBB, ctx->r16) = ctx->r2;
L_8008B950:
    // 0x8008B950: lhu         $v1, 0xAC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XAC);
    // 0x8008B954: beq         $v1, $zero, L_8008B994
    if (ctx->r3 == 0) {
        // 0x8008B958: nop
    
            goto L_8008B994;
    }
    // 0x8008B958: nop

    // 0x8008B95C: lbu         $v0, 0xB7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB7);
    // 0x8008B960: beql        $v0, $zero, L_8008B9D4
    if (ctx->r2 == 0) {
        // 0x8008B964: sh          $v1, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = ctx->r3;
            goto L_8008B9D4;
    }
    goto skip_2;
    // 0x8008B964: sh          $v1, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r3;
    skip_2:
    // 0x8008B968: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8008B96C: sb          $zero, 0xB7($s0)
    MEM_B(0XB7, ctx->r16) = 0;
    // 0x8008B970: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008B974: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008B978: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8008B97C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8008B980: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008B984: bnel        $v0, $zero, L_8008B9D4
    if (ctx->r2 != 0) {
        // 0x8008B988: sh          $a0, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = ctx->r4;
            goto L_8008B9D4;
    }
    goto skip_3;
    // 0x8008B988: sh          $a0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r4;
    skip_3:
    // 0x8008B98C: j           L_8008B9BC
    // 0x8008B990: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
        goto L_8008B9BC;
    // 0x8008B990: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_8008B994:
    // 0x8008B994: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8008B998: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008B99C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008B9A0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8008B9A4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8008B9A8: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008B9AC: beq         $v0, $zero, L_8008B9BC
    if (ctx->r2 == 0) {
        // 0x8008B9B0: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8008B9BC;
    }
    // 0x8008B9B0: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8008B9B4: j           L_8008B9D4
    // 0x8008B9B8: sh          $a0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r4;
        goto L_8008B9D4;
    // 0x8008B9B8: sh          $a0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r4;
L_8008B9BC:
    // 0x8008B9BC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008B9C0: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8008B9C4: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x8008B9C8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008B9CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008B9D0: sh          $v1, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r3;
L_8008B9D4:
    // 0x8008B9D4: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x8008B9D8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x8008B9DC: lbu         $a0, 0xCF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCF);
    // 0x8008B9E0: lw          $a1, 0x74($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X74);
    // 0x8008B9E4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8008B9E8: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x8008B9EC: sh          $zero, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = 0;
    // 0x8008B9F0: sb          $zero, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = 0;
    // 0x8008B9F4: sb          $a0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r4;
    // 0x8008B9F8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008B9FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008BA00: beq         $a1, $zero, L_8008BA34
    if (ctx->r5 == 0) {
        // 0x8008BA04: sw          $v1, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r3;
            goto L_8008BA34;
    }
    // 0x8008BA04: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x8008BA08: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x8008BA0C: bne         $v0, $zero, L_8008BA38
    if (ctx->r2 != 0) {
        // 0x8008BA10: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8008BA38;
    }
    // 0x8008BA10: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8008BA14: lhu         $v0, 0xAE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XAE);
    // 0x8008BA18: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x8008BA1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008BA20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008BA24: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8008BA28: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8008BA2C: beql        $v1, $v0, L_8008BA34
    if (ctx->r3 == ctx->r2) {
        // 0x8008BA30: addiu       $s2, $zero, 0x60
        ctx->r18 = ADD32(0, 0X60);
            goto L_8008BA34;
    }
    goto skip_4;
    // 0x8008BA30: addiu       $s2, $zero, 0x60
    ctx->r18 = ADD32(0, 0X60);
    skip_4:
L_8008BA34:
    // 0x8008BA34: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_8008BA38:
    // 0x8008BA38: beq         $s2, $v0, L_8008BD34
    if (ctx->r18 == ctx->r2) {
        // 0x8008BA3C: nop
    
            goto L_8008BD34;
    }
    // 0x8008BA3C: nop

    // 0x8008BA40: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x8008BA44: lw          $s4, 0x7C($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X7C);
    // 0x8008BA48: beq         $v1, $zero, L_8008BBB0
    if (ctx->r3 == 0) {
        // 0x8008BA4C: sll         $v0, $s2, 1
        ctx->r2 = S32(ctx->r18 << 1);
            goto L_8008BBB0;
    }
    // 0x8008BA4C: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x8008BA50: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008BA54: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x8008BA58: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8008BA5C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8008BA60: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x8008BA64: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8008BA68: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
    // 0x8008BA6C: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8008BA70: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x8008BA74: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8008BA78: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    // 0x8008BA7C: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8008BA80: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x8008BA84: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8008BA88: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8008BA8C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8008BA90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008BA94: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8008BA98: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8008BA9C: bne         $a0, $zero, L_8008BAA8
    if (ctx->r4 != 0) {
        // 0x8008BAA0: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8008BAA8;
    }
    // 0x8008BAA0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8008BAA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8008BAA8:
    // 0x8008BAA8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8008BAAC: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8008BAB0: bne         $a0, $zero, L_8008BABC
    if (ctx->r4 != 0) {
        // 0x8008BAB4: nop
    
            goto L_8008BABC;
    }
    // 0x8008BAB4: nop

    // 0x8008BAB8: break       7
    do_break(2148055736);
L_8008BABC:
    // 0x8008BABC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BAC0: bne         $a0, $at, L_8008BAD4
    if (ctx->r4 != ctx->r1) {
        // 0x8008BAC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008BAD4;
    }
    // 0x8008BAC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008BAC8: bne         $v0, $at, L_8008BAD4
    if (ctx->r2 != ctx->r1) {
        // 0x8008BACC: nop
    
            goto L_8008BAD4;
    }
    // 0x8008BACC: nop

    // 0x8008BAD0: break       6
    do_break(2148055760);
L_8008BAD4:
    // 0x8008BAD4: mflo        $v0
    ctx->r2 = lo;
    // 0x8008BAD8: sb          $a0, 0xBF($s0)
    MEM_B(0XBF, ctx->r16) = ctx->r4;
    // 0x8008BADC: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x8008BAE0: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x8008BAE4: sb          $v0, 0xC0($s0)
    MEM_B(0XC0, ctx->r16) = ctx->r2;
    // 0x8008BAE8: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x8008BAEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008BAF0: ldc1        $f4, 0x2D18($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2D18);
    // 0x8008BAF4: mtc1        $a0, $f2
    ctx->f2.u32l = ctx->r4;
    // 0x8008BAF8: nop

    // 0x8008BAFC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008BB00: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008BB04: div.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8008BB08: lbu         $v0, 0xC0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC0);
    // 0x8008BB0C: sb          $a0, 0xC6($s0)
    MEM_B(0XC6, ctx->r16) = ctx->r4;
    // 0x8008BB10: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x8008BB14: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8008BB18: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008BB1C: nop

    // 0x8008BB20: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008BB24: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008BB28: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008BB2C: sb          $v1, 0xC1($s0)
    MEM_B(0XC1, ctx->r16) = ctx->r3;
    // 0x8008BB30: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008BB34: swc1        $f2, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f2.u32l;
    // 0x8008BB38: lbu         $a0, 0x4($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X4);
    // 0x8008BB3C: mtc1        $a0, $f2
    ctx->f2.u32l = ctx->r4;
    // 0x8008BB40: nop

    // 0x8008BB44: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008BB48: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008BB4C: div.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8008BB50: lbu         $v0, 0xC1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC1);
    // 0x8008BB54: sb          $a0, 0xC7($s0)
    MEM_B(0XC7, ctx->r16) = ctx->r4;
    // 0x8008BB58: lbu         $v1, 0x5($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X5);
    // 0x8008BB5C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8008BB60: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008BB64: nop

    // 0x8008BB68: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008BB6C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008BB70: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008BB74: sb          $v1, 0xC2($s0)
    MEM_B(0XC2, ctx->r16) = ctx->r3;
    // 0x8008BB78: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008BB7C: swc1        $f2, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f2.u32l;
    // 0x8008BB80: lbu         $a0, 0x6($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X6);
    // 0x8008BB84: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x8008BB88: nop

    // 0x8008BB8C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008BB90: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008BB94: div.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8008BB98: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x8008BB9C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8008BBA0: sb          $a0, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r4;
    // 0x8008BBA4: cvt.s.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f4.fl = CVT_S_D(ctx->f4.d);
    // 0x8008BBA8: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x8008BBAC: lbu         $s2, 0x5($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X5);
L_8008BBB0:
    // 0x8008BBB0: lbu         $v0, 0xD6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD6);
    // 0x8008BBB4: bne         $v0, $zero, L_8008BBC4
    if (ctx->r2 != 0) {
        // 0x8008BBB8: nop
    
            goto L_8008BBC4;
    }
    // 0x8008BBB8: nop

    // 0x8008BBBC: jal         0x8008C0A4
    // 0x8008BBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008C0A4_674A4(rdram, ctx);
        goto after_1;
    // 0x8008BBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8008BBC4:
    // 0x8008BBC4: lbu         $v0, 0xD4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD4);
    // 0x8008BBC8: beq         $v0, $zero, L_8008BBD8
    if (ctx->r2 == 0) {
        // 0x8008BBCC: nop
    
            goto L_8008BBD8;
    }
    // 0x8008BBCC: nop

    // 0x8008BBD0: jal         0x8008C2F0
    // 0x8008BBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008C2F0_676F0(rdram, ctx);
        goto after_2;
    // 0x8008BBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8008BBD8:
    // 0x8008BBD8: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8008BBDC: beq         $v0, $zero, L_8008BBF0
    if (ctx->r2 == 0) {
        // 0x8008BBE0: lhu         $s1, 0xAE($s0)
        ctx->r17 = MEM_HU(ctx->r16, 0XAE);
            goto L_8008BBF0;
    }
    // 0x8008BBE0: lhu         $s1, 0xAE($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0XAE);
    // 0x8008BBE4: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x8008BBE8: j           L_8008BBFC
    // 0x8008BBEC: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
        goto L_8008BBFC;
    // 0x8008BBEC: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
L_8008BBF0:
    // 0x8008BBF0: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8008BBF4: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x8008BBF8: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
L_8008BBFC:
    // 0x8008BBFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008BC00: lhu         $s1, 0x0($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X0);
    // 0x8008BC04: lbu         $v0, 0xD7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD7);
    // 0x8008BC08: bne         $v0, $zero, L_8008BC70
    if (ctx->r2 != 0) {
        // 0x8008BC0C: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_8008BC70;
    }
    // 0x8008BC0C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8008BC10: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x8008BC14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008BC18: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008BC1C: lbu         $v1, 0xC9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC9);
    // 0x8008BC20: beq         $v1, $zero, L_8008BC64
    if (ctx->r3 == 0) {
        // 0x8008BC24: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_8008BC64;
    }
    // 0x8008BC24: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x8008BC28: lhu         $v0, 0xA0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA0);
    // 0x8008BC2C: beq         $v0, $zero, L_8008BC64
    if (ctx->r2 == 0) {
        // 0x8008BC30: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008BC64;
    }
    // 0x8008BC30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008BC34: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008BC38: lw          $a2, 0x4F98($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4F98);
    // 0x8008BC3C: sll         $a0, $s3, 3
    ctx->r4 = S32(ctx->r19 << 3);
    // 0x8008BC40: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BC44: lw          $v0, 0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F88);
    // 0x8008BC48: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x8008BC4C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008BC50: sh          $zero, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = 0;
    // 0x8008BC54: jal         0x800916E0
    // 0x8008BC58: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800916E0_6CAE0(rdram, ctx);
        goto after_3;
    // 0x8008BC58: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_3:
    // 0x8008BC5C: j           L_8008BC70
    // 0x8008BC60: nop

        goto L_8008BC70;
    // 0x8008BC60: nop

L_8008BC64:
    // 0x8008BC64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008BC68: jal         0x8008BDC8
    // 0x8008BC6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8008BDC8_671C8(rdram, ctx);
        goto after_4;
    // 0x8008BC6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_4:
L_8008BC70:
    // 0x8008BC70: lw          $a2, 0x28($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X28);
    // 0x8008BC74: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x8008BC78: lbu         $a1, 0xBA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XBA);
    // 0x8008BC7C: lbu         $v1, 0xB9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB9);
    // 0x8008BC80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008BC84: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8008BC88: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BC8C: mflo        $v1
    ctx->r3 = lo;
    // 0x8008BC90: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8008BC94: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8008BC98: mtc1        $s2, $f0
    ctx->f0.u32l = ctx->r18;
    // 0x8008BC9C: nop

    // 0x8008BCA0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008BCA4: add.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8008BCA8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8008BCAC: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8008BCB0: beq         $v1, $zero, L_8008BCC4
    if (ctx->r3 == 0) {
        // 0x8008BCB4: swc1        $f2, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->f2.u32l;
            goto L_8008BCC4;
    }
    // 0x8008BCB4: swc1        $f2, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f2.u32l;
    // 0x8008BCB8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8008BCBC: j           L_8008BCC8
    // 0x8008BCC0: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
        goto L_8008BCC8;
    // 0x8008BCC0: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
L_8008BCC4:
    // 0x8008BCC4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_8008BCC8:
    // 0x8008BCC8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008BCCC: nop

    // 0x8008BCD0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008BCD4: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8008BCD8: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x8008BCDC: lbu         $a0, 0xCA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCA);
    // 0x8008BCE0: lbu         $v0, 0xCC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCC);
    // 0x8008BCE4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8008BCE8: beq         $v1, $v0, L_8008BDA8
    if (ctx->r3 == ctx->r2) {
        // 0x8008BCEC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8008BDA8;
    }
    // 0x8008BCEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8008BCF0: lbu         $a1, 0xCB($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XCB);
    // 0x8008BCF4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8008BCF8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BCFC: mflo        $v0
    ctx->r2 = lo;
    // 0x8008BD00: sb          $a0, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r4;
    // 0x8008BD04: sll         $a0, $s3, 3
    ctx->r4 = S32(ctx->r19 << 3);
    // 0x8008BD08: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008BD0C: lw          $v1, 0x4F88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F88);
    // 0x8008BD10: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x8008BD14: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008BD18: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x8008BD1C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8008BD20: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8008BD24: jal         0x80091520
    // 0x8008BD28: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_80091520_6C920(rdram, ctx);
        goto after_5;
    // 0x8008BD28: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_5:
    // 0x8008BD2C: j           L_8008BDA8
    // 0x8008BD30: nop

        goto L_8008BDA8;
    // 0x8008BD30: nop

L_8008BD34:
    // 0x8008BD34: lbu         $v0, 0xC3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC3);
    // 0x8008BD38: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8008BD3C: beq         $v0, $zero, L_8008BDA8
    if (ctx->r2 == 0) {
        // 0x8008BD40: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8008BDA8;
    }
    // 0x8008BD40: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8008BD44: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8008BD48: lbu         $a0, 0xC4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC4);
    // 0x8008BD4C: sb          $v0, 0xC3($s0)
    MEM_B(0XC3, ctx->r16) = ctx->r2;
    // 0x8008BD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008BD54: sb          $v0, 0xC5($s0)
    MEM_B(0XC5, ctx->r16) = ctx->r2;
    // 0x8008BD58: sw          $v1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r3;
    // 0x8008BD5C: j           L_8008BDA8
    // 0x8008BD60: sb          $a0, 0xCD($s0)
    MEM_B(0XCD, ctx->r16) = ctx->r4;
        goto L_8008BDA8;
    // 0x8008BD60: sb          $a0, 0xCD($s0)
    MEM_B(0XCD, ctx->r16) = ctx->r4;
L_8008BD64:
    // 0x8008BD64: lbu         $v0, 0xC9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC9);
    // 0x8008BD68: beq         $v0, $zero, L_8008BDA8
    if (ctx->r2 == 0) {
        // 0x8008BD6C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008BDA8;
    }
    // 0x8008BD6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008BD70: sb          $zero, 0xC9($s0)
    MEM_B(0XC9, ctx->r16) = 0;
    // 0x8008BD74: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008BD78: lw          $a2, 0x4F98($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4F98);
    // 0x8008BD7C: sll         $s0, $s3, 3
    ctx->r16 = S32(ctx->r19 << 3);
    // 0x8008BD80: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008BD84: lw          $a0, 0x4F88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F88);
    // 0x8008BD88: subu        $s0, $s0, $s3
    ctx->r16 = SUB32(ctx->r16, ctx->r19);
    // 0x8008BD8C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8008BD90: jal         0x800916E0
    // 0x8008BD94: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_800916E0_6CAE0(rdram, ctx);
        goto after_6;
    // 0x8008BD94: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_6:
    // 0x8008BD98: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008BD9C: lw          $a0, 0x4F88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F88);
    // 0x8008BDA0: jal         0x80091820
    // 0x8008BDA4: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_80091820_6CC20(rdram, ctx);
        goto after_7;
    // 0x8008BDA4: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_7:
L_8008BDA8:
    // 0x8008BDA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008BDAC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8008BDB0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BDB4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008BDB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008BDBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008BDC0: jr          $ra
    // 0x8008BDC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8008BDC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800302C8_B6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800302C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800302CC: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x800302D0: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x800302D4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800302D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800302DC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x800302E0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x800302E4: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x800302E8: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x800302EC: jr          $ra
    // 0x800302F0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800302F0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004B6A0_26AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B6A4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8004B6A8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8004B6AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B6B0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8004B6B4: addiu       $v1, $v1, 0x53E0
    ctx->r3 = ADD32(ctx->r3, 0X53E0);
    // 0x8004B6B8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B6BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8004B6C0: sra         $v0, $a1, 16
    ctx->r2 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8004B6C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8004B6C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004B6CC: sb          $v0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r2;
    // 0x8004B6D0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8004B6D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004B6D8: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x8004B6DC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004B6E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004B6E4: lhu         $v1, -0x1ED6($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1ED6);
    // 0x8004B6E8: sb          $v1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r3;
    // 0x8004B6EC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004B6F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004B6F4: lhu         $v1, -0x1ED8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1ED8);
    // 0x8004B6F8: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8004B6FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004B700: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004B704: lw          $v0, -0x1ED4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1ED4);
    // 0x8004B708: bltz        $a1, L_8004B728
    if (SIGNED(ctx->r5) < 0) {
        // 0x8004B70C: sw          $v0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r2;
            goto L_8004B728;
    }
    // 0x8004B70C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x8004B710: sb          $a2, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r6;
    // 0x8004B714: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x8004B718: jal         0x8004CB2C
    // 0x8004B71C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8004B71C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004B720: j           L_8004B72C
    // 0x8004B724: nop

        goto L_8004B72C;
    // 0x8004B724: nop

L_8004B728:
    // 0x8004B728: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
L_8004B72C:
    // 0x8004B72C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004B730: jr          $ra
    // 0x8004B734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004B734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alFxNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80095AC4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80095AC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80095ACC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80095AD0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80095AD4: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x80095AD8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80095ADC: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80095AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095AE4: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80095AE8: addiu       $a2, $a2, -0x7D2C
    ctx->r6 = ADD32(ctx->r6, -0X7D2C);
    // 0x80095AEC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80095AF0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80095AF4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80095AF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80095AFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80095B00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80095B04: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x80095B08: jal         0x80097B20
    // 0x80095B0C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80095B0C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80095B10: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80095B14: addiu       $v0, $v0, 0x7F60
    ctx->r2 = ADD32(ctx->r2, 0X7F60);
    // 0x80095B18: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x80095B1C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80095B20: addiu       $v0, $v0, -0x7D18
    ctx->r2 = ADD32(ctx->r2, -0X7D18);
    // 0x80095B24: sw          $v0, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->r2;
    // 0x80095B28: lbu         $v0, 0x1C($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1C);
    // 0x80095B2C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80095B30: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80095B34: beq         $v0, $zero, L_80095B94
    if (ctx->r2 == 0) {
        // 0x80095B38: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80095B94;
    }
    // 0x80095B38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80095B3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80095B40: addu        $at, $at, $v0
    gpr jr_addend_80095B48 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80095B44: lw          $v0, 0x2FC8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2FC8);
    // 0x80095B48: jr          $v0
    // 0x80095B4C: nop

    switch (jr_addend_80095B48 >> 2) {
        case 0: goto L_80095B50; break;
        case 1: goto L_80095B5C; break;
        case 2: goto L_80095B74; break;
        case 3: goto L_80095B80; break;
        case 4: goto L_80095B68; break;
        case 5: goto L_80095B8C; break;
        default: switch_error(__func__, 0x80095B48, 0x800D2FC8);
    }
    // 0x80095B4C: nop

L_80095B50:
    // 0x80095B50: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80095B54: j           L_80095B9C
    // 0x80095B58: addiu       $s2, $s2, -0xD80
    ctx->r18 = ADD32(ctx->r18, -0XD80);
        goto L_80095B9C;
    // 0x80095B58: addiu       $s2, $s2, -0xD80
    ctx->r18 = ADD32(ctx->r18, -0XD80);
L_80095B5C:
    // 0x80095B5C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80095B60: j           L_80095B9C
    // 0x80095B64: addiu       $s2, $s2, -0xD18
    ctx->r18 = ADD32(ctx->r18, -0XD18);
        goto L_80095B9C;
    // 0x80095B64: addiu       $s2, $s2, -0xD18
    ctx->r18 = ADD32(ctx->r18, -0XD18);
L_80095B68:
    // 0x80095B68: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80095B6C: j           L_80095B9C
    // 0x80095B70: addiu       $s2, $s2, -0xC90
    ctx->r18 = ADD32(ctx->r18, -0XC90);
        goto L_80095B9C;
    // 0x80095B70: addiu       $s2, $s2, -0xC90
    ctx->r18 = ADD32(ctx->r18, -0XC90);
L_80095B74:
    // 0x80095B74: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80095B78: j           L_80095B9C
    // 0x80095B7C: addiu       $s2, $s2, -0xC68
    ctx->r18 = ADD32(ctx->r18, -0XC68);
        goto L_80095B9C;
    // 0x80095B7C: addiu       $s2, $s2, -0xC68
    ctx->r18 = ADD32(ctx->r18, -0XC68);
L_80095B80:
    // 0x80095B80: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80095B84: j           L_80095B9C
    // 0x80095B88: addiu       $s2, $s2, -0xC40
    ctx->r18 = ADD32(ctx->r18, -0XC40);
        goto L_80095B9C;
    // 0x80095B88: addiu       $s2, $s2, -0xC40
    ctx->r18 = ADD32(ctx->r18, -0XC40);
L_80095B8C:
    // 0x80095B8C: j           L_80095B9C
    // 0x80095B90: lw          $s2, 0x20($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X20);
        goto L_80095B9C;
    // 0x80095B90: lw          $s2, 0x20($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X20);
L_80095B94:
    // 0x80095B94: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80095B98: addiu       $s2, $s2, -0xC18
    ctx->r18 = ADD32(ctx->r18, -0XC18);
L_80095B9C:
    // 0x80095B9C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80095BA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095BA4: sb          $v0, 0x24($s3)
    MEM_B(0X24, ctx->r19) = ctx->r2;
    // 0x80095BA8: lbu         $a3, 0x24($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X24);
    // 0x80095BAC: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x80095BB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095BB4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80095BB8: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x80095BBC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80095BC0: jal         0x80098CC0
    // 0x80095BC4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80095BC4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80095BC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095BCC: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x80095BD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80095BD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80095BD8: lw          $a3, 0x1C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X1C);
    // 0x80095BDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095BE0: jal         0x80098CC0
    // 0x80095BE4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80095BE4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_2:
    // 0x80095BE8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x80095BEC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80095BF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095BF4: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x80095BF8: beq         $v1, $zero, L_80095C2C
    if (ctx->r3 == 0) {
        // 0x80095BFC: sw          $v0, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r2;
            goto L_80095C2C;
    }
    // 0x80095BFC: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_80095C00:
    // 0x80095C00: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x80095C04: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x80095C08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80095C0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80095C10: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80095C14: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x80095C18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80095C1C: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x80095C20: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80095C24: bne         $v0, $zero, L_80095C00
    if (ctx->r2 != 0) {
        // 0x80095C28: nop
    
            goto L_80095C00;
    }
    // 0x80095C28: nop

L_80095C2C:
    // 0x80095C2C: lbu         $v0, 0x24($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X24);
    // 0x80095C30: beq         $v0, $zero, L_80095F2C
    if (ctx->r2 == 0) {
        // 0x80095C34: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80095F2C;
    }
    // 0x80095C34: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80095C38: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80095C3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80095C40: ldc1        $f20, 0x2FE0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X2FE0);
    // 0x80095C44: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_80095C48:
    // 0x80095C48: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80095C4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80095C50: lw          $a1, 0x20($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X20);
    // 0x80095C54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80095C58: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x80095C5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095C60: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095C64: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80095C68: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80095C6C: addu        $s0, $a1, $v1
    ctx->r16 = ADD32(ctx->r5, ctx->r3);
    // 0x80095C70: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
    // 0x80095C74: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80095C78: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x80095C7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095C80: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095C84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80095C88: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80095C8C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80095C90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095C94: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095C98: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80095C9C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80095CA0: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x80095CA4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80095CA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095CAC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095CB0: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x80095CB4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80095CB8: addiu       $v0, $a1, 0x3
    ctx->r2 = ADD32(ctx->r5, 0X3);
    // 0x80095CBC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80095CC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095CC4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095CC8: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80095CCC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80095CD0: addiu       $s1, $a1, 0x4
    ctx->r17 = ADD32(ctx->r5, 0X4);
    // 0x80095CD4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80095CD8: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x80095CDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095CE0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095CE4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80095CE8: beq         $v0, $zero, L_80095DF4
    if (ctx->r2 == 0) {
        // 0x80095CEC: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_80095DF4;
    }
    // 0x80095CEC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80095CF0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80095CF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095CF8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80095CFC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80095D00: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095D04: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80095D08: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80095D0C: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80095D10: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80095D14: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    // 0x80095D18: lwc1        $f2, 0x18($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0X18);
    // 0x80095D1C: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80095D20: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80095D24: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80095D28: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80095D2C: addiu       $v0, $a1, 0x5
    ctx->r2 = ADD32(ctx->r5, 0X5);
    // 0x80095D30: addiu       $s1, $a1, 0x6
    ctx->r17 = ADD32(ctx->r5, 0X6);
    // 0x80095D34: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80095D38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095D3C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095D40: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80095D44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80095D48: ldc1        $f2, 0x2FE8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2FE8);
    // 0x80095D4C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x80095D50: nop

    // 0x80095D54: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x80095D58: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80095D5C: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x80095D60: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80095D64: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80095D68: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80095D6C: bgez        $a0, L_80095D80
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80095D70: div.d       $f2, $f0, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
            goto L_80095D80;
    }
    // 0x80095D70: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80095D74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80095D78: ldc1        $f0, 0x2FF0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2FF0);
    // 0x80095D7C: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
L_80095D80:
    // 0x80095D80: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095D84: mul.d       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x80095D88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095D8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80095D90: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80095D94: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80095D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80095D9C: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80095DA0: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80095DA4: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    // 0x80095DA8: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80095DAC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80095DB0: jal         0x80098CC0
    // 0x80095DB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x80095DB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80095DB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095DBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095DC0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80095DC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80095DC8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80095DCC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80095DD0: jal         0x80098CC0
    // 0x80095DD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x80095DD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80095DD8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80095DDC: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x80095DE0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80095DE4: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80095DE8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80095DEC: j           L_80095DFC
    // 0x80095DF0: sw          $s7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r23;
        goto L_80095DFC;
    // 0x80095DF0: sw          $s7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r23;
L_80095DF4:
    // 0x80095DF4: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x80095DF8: addiu       $s1, $a1, 0x6
    ctx->r17 = ADD32(ctx->r5, 0X6);
L_80095DFC:
    // 0x80095DFC: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x80095E00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095E04: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095E08: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80095E0C: beq         $v0, $zero, L_80095F0C
    if (ctx->r2 == 0) {
        // 0x80095E10: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80095F0C;
    }
    // 0x80095E10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095E14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095E18: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80095E1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80095E20: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80095E24: jal         0x80098CC0
    // 0x80095E28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80095E28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x80095E2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095E30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095E34: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80095E38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80095E3C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80095E40: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80095E44: jal         0x80098CC0
    // 0x80095E48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x80095E48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x80095E4C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80095E50: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x80095E54: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80095E58: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80095E5C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80095E60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80095E64: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80095E68: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80095E6C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80095E70: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x80095E74: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80095E78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80095E7C: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x80095E80: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80095E84: addiu       $a2, $a1, 0xE
    ctx->r6 = ADD32(ctx->r5, 0XE);
    // 0x80095E88: sw          $s7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r23;
    // 0x80095E8C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80095E90: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80095E94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80095E98: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
L_80095E9C:
    // 0x80095E9C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80095EA0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80095EA4: bgez        $a0, L_80095E9C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80095EA8: addiu       $a2, $a2, -0x2
        ctx->r6 = ADD32(ctx->r6, -0X2);
            goto L_80095E9C;
    }
    // 0x80095EA8: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80095EAC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80095EB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80095EB4: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80095EB8: nop

    // 0x80095EBC: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80095EC0: div.d       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f0.d, ctx->f20.d);
    // 0x80095EC4: sh          $a3, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r7;
    // 0x80095EC8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80095ECC: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    // 0x80095ED0: mov.d       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = ctx->f4.d;
L_80095ED4:
    // 0x80095ED4: nop

    // 0x80095ED8: mul.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80095EDC: nop

    // 0x80095EE0: mul.d       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f0.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x80095EE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80095EE8: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80095EEC: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80095EF0: nop

    // 0x80095EF4: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80095EF8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80095EFC: bne         $v0, $zero, L_80095ED4
    if (ctx->r2 != 0) {
        // 0x80095F00: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_80095ED4;
    }
    // 0x80095F00: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80095F04: j           L_80095F14
    // 0x80095F08: nop

        goto L_80095F14;
    // 0x80095F08: nop

L_80095F0C:
    // 0x80095F0C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x80095F10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80095F14:
    // 0x80095F14: lbu         $v1, 0x24($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X24);
    // 0x80095F18: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80095F1C: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x80095F20: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80095F24: bne         $v0, $zero, L_80095C48
    if (ctx->r2 != 0) {
        // 0x80095F28: andi        $v0, $s4, 0xFFFF
        ctx->r2 = ctx->r20 & 0XFFFF;
            goto L_80095C48;
    }
    // 0x80095F28: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_80095F2C:
    // 0x80095F2C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80095F30: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80095F34: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80095F38: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80095F3C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80095F40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80095F44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80095F48: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80095F4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80095F50: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80095F54: jr          $ra
    // 0x80095F58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80095F58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800916E0_6CAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800916E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800916E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800916E8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800916EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800916F0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800916F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800916F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800916FC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80091700: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80091704: beq         $v0, $zero, L_8009176C
    if (ctx->r2 == 0) {
        // 0x80091708: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_8009176C;
    }
    // 0x80091708: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8009170C: jal         0x80091C78
    // 0x80091710: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_0;
    // 0x80091710: nop

    after_0:
    // 0x80091714: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80091718: beq         $s0, $zero, L_8009176C
    if (ctx->r16 == 0) {
        // 0x8009171C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8009176C;
    }
    // 0x8009171C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80091720: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091724: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091728: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x8009172C: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x80091730: lw          $v1, 0x88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X88);
    // 0x80091734: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80091738: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8009173C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80091740: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80091744: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80091748: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8009174C: jal         0x80091DA4
    // 0x80091750: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    func_80091DA4_6D1A4(rdram, ctx);
        goto after_1;
    // 0x80091750: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    after_1:
    // 0x80091754: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80091758: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8009175C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80091760: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80091764: jal         0x8008FB18
    // 0x80091768: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_2;
    // 0x80091768: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_8009176C:
    // 0x8009176C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80091770: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80091774: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80091778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009177C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091780: jr          $ra
    // 0x80091784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80091784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091788: nop

    // 0x8009178C: nop

;}
RECOMP_FUNC void func_8007D434_58834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007D434: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8007D438: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D43C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8007D440: lbu         $v1, -0x3E28($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E28);
    // 0x8007D444: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8007D448: bne         $v0, $zero, L_8007D530
    if (ctx->r2 != 0) {
        // 0x8007D44C: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8007D530;
    }
    // 0x8007D44C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8007D450: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D454: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8007D458: sb          $v0, -0x3E28($at)
    MEM_B(-0X3E28, ctx->r1) = ctx->r2;
    // 0x8007D45C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x8007D460: lw          $a3, -0x2650($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2650);
    // 0x8007D464: sll         $a1, $t0, 4
    ctx->r5 = S32(ctx->r8 << 4);
    // 0x8007D468: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D46C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D470: lw          $v0, -0x41A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A8);
    // 0x8007D474: lh          $a0, 0x0($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X0);
    // 0x8007D478: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D47C: mflo        $a0
    ctx->r4 = lo;
    // 0x8007D480: lh          $a2, 0x2($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X2);
    // 0x8007D484: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D488: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D48C: lw          $v0, -0x41A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A4);
    // 0x8007D490: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D494: mflo        $a2
    ctx->r6 = lo;
    // 0x8007D498: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x8007D49C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D4A0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D4A4: lw          $v0, -0x41A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A0);
    // 0x8007D4A8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D4AC: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D4B0: sll         $a1, $t0, 3
    ctx->r5 = S32(ctx->r8 << 3);
    // 0x8007D4B4: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x8007D4B8: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8007D4BC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8007D4C0: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8007D4C4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007D4C8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D4CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D4D0: lh          $v0, -0x3FA4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3FA4);
    // 0x8007D4D4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8007D4D8: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x8007D4DC: bltzl       $v0, L_8007D4E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8007D4E0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8007D4E4;
    }
    goto skip_0;
    // 0x8007D4E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8007D4E4:
    // 0x8007D4E4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8007D4E8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8007D4EC: bne         $v0, $zero, L_8007D4F8
    if (ctx->r2 != 0) {
        // 0x8007D4F0: nop
    
            goto L_8007D4F8;
    }
    // 0x8007D4F0: nop

    // 0x8007D4F4: break       7
    do_break(2147996916);
L_8007D4F8:
    // 0x8007D4F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007D4FC: bne         $v0, $at, L_8007D510
    if (ctx->r2 != ctx->r1) {
        // 0x8007D500: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007D510;
    }
    // 0x8007D500: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007D504: bne         $v1, $at, L_8007D510
    if (ctx->r3 != ctx->r1) {
        // 0x8007D508: nop
    
            goto L_8007D510;
    }
    // 0x8007D508: nop

    // 0x8007D50C: break       6
    do_break(2147996940);
L_8007D510:
    // 0x8007D510: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D514: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D518: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D51C: sh          $a0, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r4;
    // 0x8007D520: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x8007D524: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D528: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007D52C: sh          $v1, -0x3EA8($at)
    MEM_H(-0X3EA8, ctx->r1) = ctx->r3;
L_8007D530:
    // 0x8007D530: jr          $ra
    // 0x8007D534: nop

    TRACE_RETURN()
    return;
    // 0x8007D534: nop

;}
RECOMP_FUNC void __nextSampleTime(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099338: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8009933C: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80099340: lui         $a3, 0x7FFF
    ctx->r7 = S32(0X7FFF << 16);
    // 0x80099344: beq         $a2, $zero, L_80099380
    if (ctx->r6 == 0) {
        // 0x80099348: ori         $a3, $a3, 0xFFFF
        ctx->r7 = ctx->r7 | 0XFFFF;
            goto L_80099380;
    }
    // 0x80099348: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
L_8009934C:
    // 0x8009934C: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80099350: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80099354: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80099358: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8009935C: beq         $v0, $zero, L_80099374
    if (ctx->r2 == 0) {
        // 0x80099360: nop
    
            goto L_80099374;
    }
    // 0x80099360: nop

    // 0x80099364: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x80099368: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x8009936C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80099370: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
L_80099374:
    // 0x80099374: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80099378: bne         $a2, $zero, L_8009934C
    if (ctx->r6 != 0) {
        // 0x8009937C: nop
    
            goto L_8009934C;
    }
    // 0x8009937C: nop

L_80099380:
    // 0x80099380: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80099384: jr          $ra
    // 0x80099388: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    TRACE_RETURN()
    return;
    // 0x80099388: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
;}
RECOMP_FUNC void func_800287CC_3BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800287CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800287D0: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800287D4: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800287D8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800287DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800287E0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800287E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800287E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800287EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800287F0: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x800287F4: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x800287F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800287FC: lbu         $a0, 0x9F($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X9F);
    // 0x80028800: sb          $a1, 0xA1($v1)
    MEM_B(0XA1, ctx->r3) = ctx->r5;
    // 0x80028804: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80028808: bne         $a1, $zero, L_80028844
    if (ctx->r5 != 0) {
        // 0x8002880C: sb          $a2, 0xA0($v1)
        MEM_B(0XA0, ctx->r3) = ctx->r6;
            goto L_80028844;
    }
    // 0x8002880C: sb          $a2, 0xA0($v1)
    MEM_B(0XA0, ctx->r3) = ctx->r6;
    // 0x80028810: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x80028814: beq         $a0, $v0, L_80028844
    if (ctx->r4 == ctx->r2) {
        // 0x80028818: sb          $a2, 0x9F($v1)
        MEM_B(0X9F, ctx->r3) = ctx->r6;
            goto L_80028844;
    }
    // 0x80028818: sb          $a2, 0x9F($v1)
    MEM_B(0X9F, ctx->r3) = ctx->r6;
    // 0x8002881C: sltiu       $v0, $v0, 0xF1
    ctx->r2 = ctx->r2 < 0XF1 ? 1 : 0;
    // 0x80028820: bne         $v0, $zero, L_80028844
    if (ctx->r2 != 0) {
        // 0x80028824: nop
    
            goto L_80028844;
    }
    // 0x80028824: nop

    // 0x80028828: lw          $v0, 0x9C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X9C);
    // 0x8002882C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80028830: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80028834: bne         $v0, $zero, L_80028844
    if (ctx->r2 != 0) {
        // 0x80028838: nop
    
            goto L_80028844;
    }
    // 0x80028838: nop

    // 0x8002883C: jal         0x80089EA0
    // 0x80028840: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_0;
    // 0x80028840: nop

    after_0:
L_80028844:
    // 0x80028844: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028848: jr          $ra
    // 0x8002884C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002884C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
