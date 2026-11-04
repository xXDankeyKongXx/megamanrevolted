#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8005D6F4_38AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005D6F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005D6F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005D6FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005D700: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8005D704: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005D708: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8005D70C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8005D710: addiu       $s1, $s1, -0x3C18
    ctx->r17 = ADD32(ctx->r17, -0X3C18);
    // 0x8005D714: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8005D718: beq         $v0, $zero, L_8005DB18
    if (ctx->r2 == 0) {
        // 0x8005D71C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005DB18;
    }
    // 0x8005D71C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005D720: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005D724: addu        $at, $at, $v0
    gpr jr_addend_8005D72C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005D728: lw          $v0, 0x2738($at)
    ctx->r2 = ADD32(ctx->r1, 0X2738);
    // 0x8005D72C: jr          $v0
    // 0x8005D730: nop

    switch (jr_addend_8005D72C >> 2) {
        case 0: goto L_8005D734; break;
        case 1: goto L_8005D758; break;
        case 2: goto L_8005D81C; break;
        case 3: goto L_8005D83C; break;
        case 4: goto L_8005DB18; break;
        case 5: goto L_8005DADC; break;
        default: switch_error(__func__, 0x8005D72C, 0x800D2738);
    }
    // 0x8005D730: nop

L_8005D734:
    // 0x8005D734: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005D738: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005D73C: bne         $v0, $zero, L_8005DB18
    if (ctx->r2 != 0) {
        // 0x8005D740: nop
    
            goto L_8005DB18;
    }
    // 0x8005D740: nop

    // 0x8005D744: jal         0x80036E48
    // 0x8005D748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8005D748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8005D74C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005D750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D754: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005D758:
    // 0x8005D758: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8005D75C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8005D760: addiu       $a1, $a1, 0x26E8
    ctx->r5 = ADD32(ctx->r5, 0X26E8);
    // 0x8005D764: jal         0x8009A3B4
    // 0x8005D768: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8005D768: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8005D76C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8005D770: addiu       $a0, $a0, 0xB68
    ctx->r4 = ADD32(ctx->r4, 0XB68);
    // 0x8005D774: jal         0x8009A2B0
    // 0x8005D778: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x8005D778: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_2:
    // 0x8005D77C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8005D780: jal         0x80087AE8
    // 0x8005D784: addiu       $a0, $a0, 0xB68
    ctx->r4 = ADD32(ctx->r4, 0XB68);
    func_80087AE8_62EE8(rdram, ctx);
        goto after_3;
    // 0x8005D784: addiu       $a0, $a0, 0xB68
    ctx->r4 = ADD32(ctx->r4, 0XB68);
    after_3:
    // 0x8005D788: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005D78C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8005D790: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_8005D794:
    // 0x8005D794: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005D798: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005D79C: lbu         $v1, 0xB68($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB68);
    // 0x8005D7A0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8005D7A4: bnel        $v1, $v0, L_8005D7D4
    if (ctx->r3 != ctx->r2) {
        // 0x8005D7A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8005D7D4;
    }
    goto skip_0;
    // 0x8005D7A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8005D7AC: beq         $a0, $a2, L_8005D7C8
    if (ctx->r4 == ctx->r6) {
        // 0x8005D7B0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8005D7C8;
    }
    // 0x8005D7B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005D7B4: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8005D7B8: bne         $v0, $zero, L_8005D794
    if (ctx->r2 != 0) {
        // 0x8005D7BC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8005D794;
    }
    // 0x8005D7BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8005D7C0: j           L_8005D7D4
    // 0x8005D7C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8005D7D4;
    // 0x8005D7C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8005D7C8:
    // 0x8005D7C8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005D7CC: lbu         $v0, 0xB7C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB7C);
    // 0x8005D7D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_8005D7D4:
    // 0x8005D7D4: beq         $v0, $zero, L_8005D7E0
    if (ctx->r2 == 0) {
        // 0x8005D7D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005D7E0;
    }
    // 0x8005D7D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005D7DC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8005D7E0:
    // 0x8005D7E0: jal         0x80061724
    // 0x8005D7E4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_4;
    // 0x8005D7E4: nop

    after_4:
    // 0x8005D7E8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005D7EC: addiu       $v1, $zero, 0x384
    ctx->r3 = ADD32(0, 0X384);
    // 0x8005D7F0: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8005D7F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D7F8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x8005D7FC: sb          $zero, 0x50($s1)
    MEM_B(0X50, ctx->r17) = 0;
    // 0x8005D800: jal         0x8005DF8C
    // 0x8005D804: sb          $zero, 0x51($s1)
    MEM_B(0X51, ctx->r17) = 0;
    func_8005DF8C_3938C(rdram, ctx);
        goto after_5;
    // 0x8005D804: sb          $zero, 0x51($s1)
    MEM_B(0X51, ctx->r17) = 0;
    after_5:
    // 0x8005D808: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8005D80C: jal         0x8005E5D8
    // 0x8005D810: nop

    func_8005E5D8_399D8(rdram, ctx);
        goto after_6;
    // 0x8005D810: nop

    after_6:
    // 0x8005D814: j           L_8005DB18
    // 0x8005D818: nop

        goto L_8005DB18;
    // 0x8005D818: nop

L_8005D81C:
    // 0x8005D81C: jal         0x8005DF8C
    // 0x8005D820: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_7;
    // 0x8005D820: nop

    after_7:
    // 0x8005D824: jal         0x8005E5D8
    // 0x8005D828: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    func_8005E5D8_399D8(rdram, ctx);
        goto after_8;
    // 0x8005D828: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    after_8:
    // 0x8005D82C: jal         0x8005DF40
    // 0x8005D830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005DF40_39340(rdram, ctx);
        goto after_9;
    // 0x8005D830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8005D834: j           L_8005DB18
    // 0x8005D838: nop

        goto L_8005DB18;
    // 0x8005D838: nop

L_8005D83C:
    // 0x8005D83C: jal         0x8005DF8C
    // 0x8005D840: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_10;
    // 0x8005D840: nop

    after_10:
    // 0x8005D844: jal         0x8005E5D8
    // 0x8005D848: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    func_8005E5D8_399D8(rdram, ctx);
        goto after_11;
    // 0x8005D848: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    after_11:
    // 0x8005D84C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005D850: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005D854: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8005D858: beq         $v0, $zero, L_8005D888
    if (ctx->r2 == 0) {
        // 0x8005D85C: nop
    
            goto L_8005D888;
    }
    // 0x8005D85C: nop

    // 0x8005D860: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8005D864: blez        $v0, L_8005D888
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005D868: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8005D888;
    }
    // 0x8005D868: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8005D86C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D870: jal         0x8002A2F8
    // 0x8005D874: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_12;
    // 0x8005D874: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x8005D878: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8005D87C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005D880: j           L_8005DB18
    // 0x8005D884: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_8005DB18;
    // 0x8005D884: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8005D888:
    // 0x8005D888: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005D88C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005D890: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8005D894: beq         $v0, $zero, L_8005D8E4
    if (ctx->r2 == 0) {
        // 0x8005D898: nop
    
            goto L_8005D8E4;
    }
    // 0x8005D898: nop

    // 0x8005D89C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8005D8A0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8005D8A4: beq         $v0, $zero, L_8005D8BC
    if (ctx->r2 == 0) {
        // 0x8005D8A8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8005D8BC;
    }
    // 0x8005D8A8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8005D8AC: bne         $v0, $zero, L_8005D8C8
    if (ctx->r2 != 0) {
        // 0x8005D8B0: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8005D8C8;
    }
    // 0x8005D8B0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8005D8B4: j           L_8005D8E4
    // 0x8005D8B8: nop

        goto L_8005D8E4;
    // 0x8005D8B8: nop

L_8005D8BC:
    // 0x8005D8BC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005D8C0: beq         $v0, $zero, L_8005D8E4
    if (ctx->r2 == 0) {
        // 0x8005D8C4: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8005D8E4;
    }
    // 0x8005D8C4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
L_8005D8C8:
    // 0x8005D8C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D8CC: jal         0x8002A2F8
    // 0x8005D8D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_13;
    // 0x8005D8D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x8005D8D4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8005D8D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D8DC: j           L_8005DB18
    // 0x8005D8E0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_8005DB18;
    // 0x8005D8E0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8005D8E4:
    // 0x8005D8E4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005D8E8: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005D8EC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8005D8F0: beq         $v0, $zero, L_8005D948
    if (ctx->r2 == 0) {
        // 0x8005D8F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005D948;
    }
    // 0x8005D8F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005D8F8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8005D8FC: bne         $v1, $v0, L_8005D948
    if (ctx->r3 != ctx->r2) {
        // 0x8005D900: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8005D948;
    }
    // 0x8005D900: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8005D904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D908: jal         0x8002A2F8
    // 0x8005D90C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_14;
    // 0x8005D90C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x8005D910: lbu         $v0, 0x5B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5B);
    // 0x8005D914: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8005D918: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005D91C: sb          $v0, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = ctx->r2;
    // 0x8005D920: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005D924: bne         $v1, $zero, L_8005D93C
    if (ctx->r3 != 0) {
        // 0x8005D928: sra         $v0, $v0, 24
        ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
            goto L_8005D93C;
    }
    // 0x8005D928: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8005D92C: blez        $v0, L_8005D944
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005D930: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005D944;
    }
    // 0x8005D930: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005D934: j           L_8005D948
    // 0x8005D938: nop

        goto L_8005D948;
    // 0x8005D938: nop

L_8005D93C:
    // 0x8005D93C: bgez        $v0, L_8005D948
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005D940: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005D948;
    }
    // 0x8005D940: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8005D944:
    // 0x8005D944: sb          $v0, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = ctx->r2;
L_8005D948:
    // 0x8005D948: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005D94C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005D950: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8005D954: beq         $v0, $zero, L_8005D9AC
    if (ctx->r2 == 0) {
        // 0x8005D958: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005D9AC;
    }
    // 0x8005D958: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005D95C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8005D960: bne         $v1, $v0, L_8005D9AC
    if (ctx->r3 != ctx->r2) {
        // 0x8005D964: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8005D9AC;
    }
    // 0x8005D964: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8005D968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D96C: jal         0x8002A2F8
    // 0x8005D970: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_15;
    // 0x8005D970: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x8005D974: lbu         $v0, 0x5B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5B);
    // 0x8005D978: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D97C: sb          $v0, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = ctx->r2;
    // 0x8005D980: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005D984: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8005D988: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8005D98C: bne         $v0, $zero, L_8005D9AC
    if (ctx->r2 != 0) {
        // 0x8005D990: nop
    
            goto L_8005D9AC;
    }
    // 0x8005D990: nop

    // 0x8005D994: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8005D998: beq         $v0, $zero, L_8005D9A8
    if (ctx->r2 == 0) {
        // 0x8005D99C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005D9A8;
    }
    // 0x8005D99C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005D9A0: j           L_8005D9AC
    // 0x8005D9A4: sb          $zero, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = 0;
        goto L_8005D9AC;
    // 0x8005D9A4: sb          $zero, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = 0;
L_8005D9A8:
    // 0x8005D9A8: sb          $v0, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = ctx->r2;
L_8005D9AC:
    // 0x8005D9AC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005D9B0: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x8005D9B4: andi        $v0, $v1, 0x6008
    ctx->r2 = ctx->r3 & 0X6008;
    // 0x8005D9B8: beq         $v0, $zero, L_8005DAA8
    if (ctx->r2 == 0) {
        // 0x8005D9BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005DAA8;
    }
    // 0x8005D9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005D9C0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8005D9C4: beq         $v1, $v0, L_8005DA18
    if (ctx->r3 == ctx->r2) {
        // 0x8005D9C8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005DA18;
    }
    // 0x8005D9C8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005D9CC: beql        $v0, $zero, L_8005D9E4
    if (ctx->r2 == 0) {
        // 0x8005D9D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005D9E4;
    }
    goto skip_1;
    // 0x8005D9D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8005D9D4: beq         $v1, $zero, L_8005D9FC
    if (ctx->r3 == 0) {
        // 0x8005D9D8: addiu       $a0, $zero, 0x16
        ctx->r4 = ADD32(0, 0X16);
            goto L_8005D9FC;
    }
    // 0x8005D9D8: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x8005D9DC: j           L_8005DB18
    // 0x8005D9E0: nop

        goto L_8005DB18;
    // 0x8005D9E0: nop

L_8005D9E4:
    // 0x8005D9E4: beq         $v1, $v0, L_8005DA38
    if (ctx->r3 == ctx->r2) {
        // 0x8005D9E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005DA38;
    }
    // 0x8005D9E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005D9EC: beq         $v1, $v0, L_8005DA58
    if (ctx->r3 == ctx->r2) {
        // 0x8005D9F0: nop
    
            goto L_8005DA58;
    }
    // 0x8005D9F0: nop

    // 0x8005D9F4: j           L_8005DB18
    // 0x8005D9F8: nop

        goto L_8005DB18;
    // 0x8005D9F8: nop

L_8005D9FC:
    // 0x8005D9FC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005DA00: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005DA04: jal         0x80036E48
    // 0x8005DA08: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_16;
    // 0x8005DA08: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_16:
    // 0x8005DA0C: addiu       $a0, $zero, 0xA6
    ctx->r4 = ADD32(0, 0XA6);
    // 0x8005DA10: j           L_8005DA98
    // 0x8005DA14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8005DA98;
    // 0x8005DA14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8005DA18:
    // 0x8005DA18: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8005DA1C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8005DA20: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005DA24: jal         0x80036E48
    // 0x8005DA28: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    func_80036E48_12248(rdram, ctx);
        goto after_17;
    // 0x8005DA28: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    after_17:
    // 0x8005DA2C: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    // 0x8005DA30: j           L_8005DA98
    // 0x8005DA34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8005DA98;
    // 0x8005DA34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8005DA38:
    // 0x8005DA38: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8005DA3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8005DA40: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005DA44: jal         0x80036E48
    // 0x8005DA48: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    func_80036E48_12248(rdram, ctx);
        goto after_18;
    // 0x8005DA48: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    after_18:
    // 0x8005DA4C: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x8005DA50: j           L_8005DA98
    // 0x8005DA54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8005DA98;
    // 0x8005DA54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8005DA58:
    // 0x8005DA58: lbu         $v0, 0x5B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5B);
    // 0x8005DA5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DA60: sb          $v0, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = ctx->r2;
    // 0x8005DA64: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005DA68: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8005DA6C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8005DA70: bne         $v0, $zero, L_8005DA94
    if (ctx->r2 != 0) {
        // 0x8005DA74: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8005DA94;
    }
    // 0x8005DA74: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8005DA78: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8005DA7C: beq         $v0, $zero, L_8005DA8C
    if (ctx->r2 == 0) {
        // 0x8005DA80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005DA8C;
    }
    // 0x8005DA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005DA84: j           L_8005DA94
    // 0x8005DA88: sb          $zero, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = 0;
        goto L_8005DA94;
    // 0x8005DA88: sb          $zero, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = 0;
L_8005DA8C:
    // 0x8005DA8C: sb          $v0, 0x5B($s1)
    MEM_B(0X5B, ctx->r17) = ctx->r2;
    // 0x8005DA90: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
L_8005DA94:
    // 0x8005DA94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8005DA98:
    // 0x8005DA98: jal         0x8002A2F8
    // 0x8005DA9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_19;
    // 0x8005DA9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x8005DAA0: j           L_8005DB18
    // 0x8005DAA4: nop

        goto L_8005DB18;
    // 0x8005DAA4: nop

L_8005DAA8:
    // 0x8005DAA8: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x8005DAAC: beq         $v0, $zero, L_8005DB18
    if (ctx->r2 == 0) {
        // 0x8005DAB0: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_8005DB18;
    }
    // 0x8005DAB0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x8005DAB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005DAB8: jal         0x8002A2F8
    // 0x8005DABC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_20;
    // 0x8005DABC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_20:
    // 0x8005DAC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005DAC4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005DAC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005DACC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005DAD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005DAD4: j           L_8005DB18
    // 0x8005DAD8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_8005DB18;
    // 0x8005DAD8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005DADC:
    // 0x8005DADC: jal         0x8005DF8C
    // 0x8005DAE0: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_21;
    // 0x8005DAE0: nop

    after_21:
    // 0x8005DAE4: jal         0x8005E5D8
    // 0x8005DAE8: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    func_8005E5D8_399D8(rdram, ctx);
        goto after_22;
    // 0x8005DAE8: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    after_22:
    // 0x8005DAEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DAF0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005DAF4: bne         $v0, $zero, L_8005DB18
    if (ctx->r2 != 0) {
        // 0x8005DAF8: nop
    
            goto L_8005DB18;
    }
    // 0x8005DAF8: nop

    // 0x8005DAFC: jal         0x80061724
    // 0x8005DB00: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_23;
    // 0x8005DB00: nop

    after_23:
    // 0x8005DB04: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005DB08: sb          $zero, -0x3B96($at)
    MEM_B(-0X3B96, ctx->r1) = 0;
    // 0x8005DB0C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8005DB10: jal         0x800292E8
    // 0x8005DB14: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    func_800292E8_46E8(rdram, ctx);
        goto after_24;
    // 0x8005DB14: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_24:
L_8005DB18:
    // 0x8005DB18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8005DB1C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005DB20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005DB24: jr          $ra
    // 0x8005DB28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8005DB28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006F400_4A800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F408: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F40C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F410: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F414: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006F418: bne         $v0, $zero, L_8006F434
    if (ctx->r2 != 0) {
        // 0x8006F41C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006F434;
    }
    // 0x8006F41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F420: lbu         $v1, 0x174($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F424: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006F428: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8006F42C: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8006F430: sb          $v1, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r3;
L_8006F434:
    // 0x8006F434: lhu         $a0, 0x130($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X130);
    // 0x8006F438: lhu         $v0, 0x132($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X132);
    // 0x8006F43C: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8006F440: and         $v1, $a1, $v0
    ctx->r3 = ctx->r5 & ctx->r2;
    // 0x8006F444: beq         $v1, $v0, L_8006F488
    if (ctx->r3 == ctx->r2) {
        // 0x8006F448: and         $v0, $a0, $a1
        ctx->r2 = ctx->r4 & ctx->r5;
            goto L_8006F488;
    }
    // 0x8006F448: and         $v0, $a0, $a1
    ctx->r2 = ctx->r4 & ctx->r5;
    // 0x8006F44C: beq         $v0, $zero, L_8006F464
    if (ctx->r2 == 0) {
        // 0x8006F450: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8006F464;
    }
    // 0x8006F450: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8006F454: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006F458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F45C: j           L_8006F474
    // 0x8006F460: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
        goto L_8006F474;
    // 0x8006F460: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
L_8006F464:
    // 0x8006F464: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8006F468: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006F46C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F470: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
L_8006F474:
    // 0x8006F474: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F478: jal         0x8006FB90
    // 0x8006F47C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F47C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8006F480: j           L_8006F490
    // 0x8006F484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006F490;
    // 0x8006F484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006F488:
    // 0x8006F488: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006F48C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006F490:
    // 0x8006F490: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006F494: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006F498: jal         0x8006FC34
    // 0x8006F49C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_1;
    // 0x8006F49C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8006F4A0: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006F4A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006F4A8: bne         $v1, $v0, L_8006F4BC
    if (ctx->r3 != ctx->r2) {
        // 0x8006F4AC: addiu       $a0, $zero, 0x95
        ctx->r4 = ADD32(0, 0X95);
            goto L_8006F4BC;
    }
    // 0x8006F4AC: addiu       $a0, $zero, 0x95
    ctx->r4 = ADD32(0, 0X95);
    // 0x8006F4B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006F4B4: jal         0x8002A2F8
    // 0x8006F4B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8006F4B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_8006F4BC:
    // 0x8006F4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F4C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F4C4: jr          $ra
    // 0x8006F4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008AAD0_65ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AAD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008AAD4: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x8008AAD8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008AADC: lw          $a0, 0x4FBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FBC);
    // 0x8008AAE0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8008AAE4: addu        $t2, $a1, $zero
    ctx->r10 = ADD32(ctx->r5, 0);
    // 0x8008AAE8: addu        $t3, $a2, $zero
    ctx->r11 = ADD32(ctx->r6, 0);
    // 0x8008AAEC: bne         $a0, $zero, L_8008AB10
    if (ctx->r4 != 0) {
        // 0x8008AAF0: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_8008AB10;
    }
    // 0x8008AAF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008AAF4: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008AAF8: lw          $a1, 0x4FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4FB8);
    // 0x8008AAFC: bne         $a1, $zero, L_8008AB1C
    if (ctx->r5 != 0) {
        // 0x8008AB00: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8008AB1C;
    }
    // 0x8008AB00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008AB04: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AB08: j           L_8008ABDC
    // 0x8008AB0C: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
        goto L_8008ABDC;
    // 0x8008AB0C: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
L_8008AB10:
    // 0x8008AB10: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008AB14: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AB18: sw          $zero, 0x4FBC($at)
    MEM_W(0X4FBC, ctx->r1) = 0;
L_8008AB1C:
    // 0x8008AB1C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AB20: lw          $v0, 0x4FA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA8);
    // 0x8008AB24: bne         $v0, $zero, L_8008AB38
    if (ctx->r2 != 0) {
        // 0x8008AB28: nop
    
            goto L_8008AB38;
    }
    // 0x8008AB28: nop

    // 0x8008AB2C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8008AB30: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AB34: sw          $v0, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = ctx->r2;
L_8008AB38:
    // 0x8008AB38: beq         $a3, $zero, L_8008ABBC
    if (ctx->r7 == 0) {
        // 0x8008AB3C: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_8008ABBC;
    }
    // 0x8008AB3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8008AB40: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AB44: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AB48: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008AB4C: lw          $a0, 0x4F90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F90);
    // 0x8008AB50: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008AB54: beq         $v0, $zero, L_8008ABBC
    if (ctx->r2 == 0) {
        // 0x8008AB58: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_8008ABBC;
    }
    // 0x8008AB58: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8008AB5C: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8008AB60: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x8008AB64: addiu       $v1, $a0, 0x78
    ctx->r3 = ADD32(ctx->r4, 0X78);
L_8008AB68:
    // 0x8008AB68: lhu         $v0, 0x2E($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2E);
    // 0x8008AB6C: bnel        $v0, $t1, L_8008ABA4
    if (ctx->r2 != ctx->r9) {
        // 0x8008AB70: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008ABA4;
    }
    goto skip_0;
    // 0x8008AB70: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8008AB74: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008AB78: bnel        $v0, $a1, L_8008ABA4
    if (ctx->r2 != ctx->r5) {
        // 0x8008AB7C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008ABA4;
    }
    goto skip_1;
    // 0x8008AB7C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x8008AB80: bne         $t0, $t4, L_8008AB8C
    if (ctx->r8 != ctx->r12) {
        // 0x8008AB84: addu        $a2, $t1, $zero
        ctx->r6 = ADD32(ctx->r9, 0);
            goto L_8008AB8C;
    }
    // 0x8008AB84: addu        $a2, $t1, $zero
    ctx->r6 = ADD32(ctx->r9, 0);
    // 0x8008AB88: lw          $t0, 0x1C($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X1C);
L_8008AB8C:
    // 0x8008AB8C: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x8008AB90: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8008AB94: jal         0x8008CD54
    // 0x8008AB98: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8008CD54_68154(rdram, ctx);
        goto after_0;
    // 0x8008AB98: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x8008AB9C: j           L_8008ABD4
    // 0x8008ABA0: nop

        goto L_8008ABD4;
    // 0x8008ABA0: nop

L_8008ABA4:
    // 0x8008ABA4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008ABA8: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008ABAC: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
    // 0x8008ABB0: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008ABB4: bne         $v0, $zero, L_8008AB68
    if (ctx->r2 != 0) {
        // 0x8008ABB8: addiu       $a0, $a0, 0x13C
        ctx->r4 = ADD32(ctx->r4, 0X13C);
            goto L_8008AB68;
    }
    // 0x8008ABB8: addiu       $a0, $a0, 0x13C
    ctx->r4 = ADD32(ctx->r4, 0X13C);
L_8008ABBC:
    // 0x8008ABBC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8008ABC0: addu        $a1, $t1, $zero
    ctx->r5 = ADD32(ctx->r9, 0);
    // 0x8008ABC4: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
    // 0x8008ABC8: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    // 0x8008ABCC: jal         0x8008CE04
    // 0x8008ABD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8008CE04_68204(rdram, ctx);
        goto after_1;
    // 0x8008ABD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
L_8008ABD4:
    // 0x8008ABD4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008ABD8: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
L_8008ABDC:
    // 0x8008ABDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008ABE0: jr          $ra
    // 0x8008ABE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008ABE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80068E98_44298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80068E98: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80068E9C: lbu         $v1, 0x7D($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068EA0: beq         $v1, $zero, L_80068EB8
    if (ctx->r3 == 0) {
        // 0x80068EA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80068EB8;
    }
    // 0x80068EA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80068EA8: beq         $v1, $v0, L_80068FAC
    if (ctx->r3 == ctx->r2) {
        // 0x80068EAC: lui         $v0, 0xF9FF
        ctx->r2 = S32(0XF9FF << 16);
            goto L_80068FAC;
    }
    // 0x80068EAC: lui         $v0, 0xF9FF
    ctx->r2 = S32(0XF9FF << 16);
    // 0x80068EB0: j           L_80068FC4
    // 0x80068EB4: nop

        goto L_80068FC4;
    // 0x80068EB4: nop

L_80068EB8:
    // 0x80068EB8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80068EBC: lbu         $a0, 0x7D($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068EC0: lw          $a1, 0x6C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X6C);
    // 0x80068EC4: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80068EC8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80068ECC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80068ED0: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80068ED4: sb          $a0, 0x7D($a3)
    MEM_B(0X7D, ctx->r7) = ctx->r4;
    // 0x80068ED8: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80068EDC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80068EE0: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80068EE4: sh          $v0, 0xB6($a3)
    MEM_H(0XB6, ctx->r7) = ctx->r2;
    // 0x80068EE8: sh          $v0, 0xB4($a3)
    MEM_H(0XB4, ctx->r7) = ctx->r2;
    // 0x80068EEC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80068EF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80068EF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80068EF8: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x80068EFC: lhu         $v1, 0xB4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB4);
    // 0x80068F00: lhu         $a0, 0xB6($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0XB6);
    // 0x80068F04: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80068F08: lbu         $a1, 0x7E($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X7E);
    // 0x80068F0C: lbu         $a2, 0x7F($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X7F);
    // 0x80068F10: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80068F14: sh          $v1, 0x88($a3)
    MEM_H(0X88, ctx->r7) = ctx->r3;
    // 0x80068F18: lhu         $v1, 0xB4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB4);
    // 0x80068F1C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80068F20: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80068F24: sw          $v0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r2;
    // 0x80068F28: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80068F2C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80068F30: sh          $a0, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r4;
    // 0x80068F34: lhu         $a0, 0xB6($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0XB6);
    // 0x80068F38: lhu         $a1, 0xB4($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0XB4);
    // 0x80068F3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068F40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068F44: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80068F48: sh          $v1, 0x8C($a3)
    MEM_H(0X8C, ctx->r7) = ctx->r3;
    // 0x80068F4C: lhu         $v1, 0xB6($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB6);
    // 0x80068F50: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80068F54: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80068F58: sh          $a0, 0x8E($a3)
    MEM_H(0X8E, ctx->r7) = ctx->r4;
    // 0x80068F5C: lbu         $a0, 0x7E($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X7E);
    // 0x80068F60: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80068F64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068F68: sh          $a1, 0x90($a3)
    MEM_H(0X90, ctx->r7) = ctx->r5;
    // 0x80068F6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068F70: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068F74: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80068F78: sh          $v1, 0x92($a3)
    MEM_H(0X92, ctx->r7) = ctx->r3;
    // 0x80068F7C: lhu         $v1, 0xB4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB4);
    // 0x80068F80: lbu         $a0, 0x7F($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X7F);
    // 0x80068F84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068F88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068F8C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068F90: sh          $v1, 0x94($a3)
    MEM_H(0X94, ctx->r7) = ctx->r3;
    // 0x80068F94: lhu         $v1, 0xB6($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB6);
    // 0x80068F98: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80068F9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068FA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068FA4: j           L_80068FC4
    // 0x80068FA8: sh          $v1, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r3;
        goto L_80068FC4;
    // 0x80068FA8: sh          $v1, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r3;
L_80068FAC:
    // 0x80068FAC: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80068FB0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80068FB4: lui         $a0, 0x1000
    ctx->r4 = S32(0X1000 << 16);
    // 0x80068FB8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80068FBC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80068FC0: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_80068FC4:
    // 0x80068FC4: jr          $ra
    // 0x80068FC8: nop

    TRACE_RETURN()
    return;
    // 0x80068FC8: nop

;}
RECOMP_FUNC void func_800740B0_4F4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800740B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800740B4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x800740B8: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x800740BC: addiu       $s6, $s6, 0x49B0
    ctx->r22 = ADD32(ctx->r22, 0X49B0);
    // 0x800740C0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800740C4: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x800740C8: addiu       $s5, $s5, -0x3C18
    ctx->r21 = ADD32(ctx->r21, -0X3C18);
    // 0x800740CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800740D0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800740D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800740D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800740DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800740E0: jal         0x80076D8C
    // 0x800740E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80076D8C_5218C(rdram, ctx);
        goto after_0;
    // 0x800740E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x800740E8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800740EC: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x800740F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800740F4: lui         $s4, 0x8019
    ctx->r20 = S32(0X8019 << 16);
    // 0x800740F8: addiu       $s4, $s4, 0x3C70
    ctx->r20 = ADD32(ctx->r20, 0X3C70);
    // 0x800740FC: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_80074100:
    // 0x80074100: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x80074104: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80074108: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007410C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80074110: lbu         $a0, 0x2D90($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2D90);
    // 0x80074114: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x80074118: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8007411C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80074120: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80074124: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80074128: slti        $v1, $v1, 0x8
    ctx->r3 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8007412C: bne         $v1, $zero, L_80074100
    if (ctx->r3 != 0) {
        // 0x80074130: sb          $a0, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r4;
            goto L_80074100;
    }
    // 0x80074130: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x80074134: jal         0x80071F9C
    // 0x80074138: nop

    func_80071F9C_4D39C(rdram, ctx);
        goto after_1;
    // 0x80074138: nop

    after_1:
    // 0x8007413C: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x80074140: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    // 0x80074144: lhu         $a0, 0x18($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X18);
    // 0x80074148: lhu         $a1, 0x1A($s5)
    ctx->r5 = MEM_HU(ctx->r21, 0X1A);
    // 0x8007414C: lw          $a2, 0xC($s5)
    ctx->r6 = MEM_W(ctx->r21, 0XC);
    // 0x80074150: lw          $a3, 0x1C($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X1C);
    // 0x80074154: lw          $t0, 0x20($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X20);
    // 0x80074158: lw          $t1, 0x24($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X24);
    // 0x8007415C: lw          $t2, 0x28($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X28);
    // 0x80074160: lw          $t3, 0x2C($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X2C);
    // 0x80074164: lw          $t4, 0x30($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X30);
    // 0x80074168: lw          $t5, 0x34($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X34);
    // 0x8007416C: lw          $t6, 0x38($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X38);
    // 0x80074170: lw          $t7, 0x3C($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X3C);
    // 0x80074174: lhu         $s0, 0x40($s5)
    ctx->r16 = MEM_HU(ctx->r21, 0X40);
    // 0x80074178: lhu         $s1, 0x42($s5)
    ctx->r17 = MEM_HU(ctx->r21, 0X42);
    // 0x8007417C: lhu         $s2, 0x44($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X44);
    // 0x80074180: sw          $v0, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r2;
    // 0x80074184: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
    // 0x80074188: sh          $a0, 0x30($s4)
    MEM_H(0X30, ctx->r20) = ctx->r4;
    // 0x8007418C: sh          $a1, 0x32($s4)
    MEM_H(0X32, ctx->r20) = ctx->r5;
    // 0x80074190: sw          $a2, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->r6;
    // 0x80074194: sw          $a3, 0x84($s4)
    MEM_W(0X84, ctx->r20) = ctx->r7;
    // 0x80074198: sw          $t0, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->r8;
    // 0x8007419C: sw          $t1, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r9;
    // 0x800741A0: sw          $t2, 0x1600($s4)
    MEM_W(0X1600, ctx->r20) = ctx->r10;
    // 0x800741A4: sw          $t3, 0x1604($s4)
    MEM_W(0X1604, ctx->r20) = ctx->r11;
    // 0x800741A8: sw          $t4, 0x1608($s4)
    MEM_W(0X1608, ctx->r20) = ctx->r12;
    // 0x800741AC: sw          $t5, 0x160C($s4)
    MEM_W(0X160C, ctx->r20) = ctx->r13;
    // 0x800741B0: sw          $t6, 0x1610($s4)
    MEM_W(0X1610, ctx->r20) = ctx->r14;
    // 0x800741B4: sw          $t7, 0x1614($s4)
    MEM_W(0X1614, ctx->r20) = ctx->r15;
    // 0x800741B8: sh          $s0, 0x1618($s4)
    MEM_H(0X1618, ctx->r20) = ctx->r16;
    // 0x800741BC: sh          $s1, 0x161A($s4)
    MEM_H(0X161A, ctx->r20) = ctx->r17;
    // 0x800741C0: sh          $s2, 0x161C($s4)
    MEM_H(0X161C, ctx->r20) = ctx->r18;
    // 0x800741C4: lhu         $v0, 0x46($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X46);
    // 0x800741C8: lhu         $v1, 0x48($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X48);
    // 0x800741CC: lhu         $a1, 0x4A($s5)
    ctx->r5 = MEM_HU(ctx->r21, 0X4A);
    // 0x800741D0: lw          $a2, 0x4C($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X4C);
    // 0x800741D4: lbu         $a3, 0x50($s5)
    ctx->r7 = MEM_BU(ctx->r21, 0X50);
    // 0x800741D8: lbu         $t0, 0x51($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X51);
    // 0x800741DC: lbu         $t1, 0x52($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X52);
    // 0x800741E0: lbu         $t2, 0x53($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X53);
    // 0x800741E4: lhu         $t3, 0x60($s5)
    ctx->r11 = MEM_HU(ctx->r21, 0X60);
    // 0x800741E8: lbu         $t4, 0x78($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X78);
    // 0x800741EC: lbu         $t5, 0x79($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X79);
    // 0x800741F0: lbu         $t6, 0x7A($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X7A);
    // 0x800741F4: lbu         $t7, 0x7B($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X7B);
    // 0x800741F8: lbu         $s0, 0x7C($s5)
    ctx->r16 = MEM_BU(ctx->r21, 0X7C);
    // 0x800741FC: lbu         $s1, 0x7D($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X7D);
    // 0x80074200: lhu         $s2, 0x62($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X62);
    // 0x80074204: lw          $s3, 0x64($s5)
    ctx->r19 = MEM_W(ctx->r21, 0X64);
    // 0x80074208: addiu       $a0, $s4, 0xC0
    ctx->r4 = ADD32(ctx->r20, 0XC0);
    // 0x8007420C: sh          $v0, 0x161E($s4)
    MEM_H(0X161E, ctx->r20) = ctx->r2;
    // 0x80074210: sh          $v1, 0x1620($s4)
    MEM_H(0X1620, ctx->r20) = ctx->r3;
    // 0x80074214: sh          $a1, 0x1622($s4)
    MEM_H(0X1622, ctx->r20) = ctx->r5;
    // 0x80074218: sw          $a2, 0x90($s4)
    MEM_W(0X90, ctx->r20) = ctx->r6;
    // 0x8007421C: sb          $a3, 0x94($s4)
    MEM_B(0X94, ctx->r20) = ctx->r7;
    // 0x80074220: sb          $t0, 0x95($s4)
    MEM_B(0X95, ctx->r20) = ctx->r8;
    // 0x80074224: sb          $t1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r9;
    // 0x80074228: sb          $t2, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r10;
    // 0x8007422C: sh          $t3, 0xD0($s4)
    MEM_H(0XD0, ctx->r20) = ctx->r11;
    // 0x80074230: sb          $t4, 0x104($s4)
    MEM_B(0X104, ctx->r20) = ctx->r12;
    // 0x80074234: sb          $t5, 0x105($s4)
    MEM_B(0X105, ctx->r20) = ctx->r13;
    // 0x80074238: sb          $t6, 0x106($s4)
    MEM_B(0X106, ctx->r20) = ctx->r14;
    // 0x8007423C: sb          $t7, 0x107($s4)
    MEM_B(0X107, ctx->r20) = ctx->r15;
    // 0x80074240: sb          $s0, 0x100($s4)
    MEM_B(0X100, ctx->r20) = ctx->r16;
    // 0x80074244: sb          $s1, 0x101($s4)
    MEM_B(0X101, ctx->r20) = ctx->r17;
    // 0x80074248: sh          $s2, 0xD2($s4)
    MEM_H(0XD2, ctx->r20) = ctx->r18;
    // 0x8007424C: sw          $s3, 0xE0($s4)
    MEM_W(0XE0, ctx->r20) = ctx->r19;
    // 0x80074250: lbu         $v0, 0x54($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X54);
    // 0x80074254: lbu         $v1, 0x55($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X55);
    // 0x80074258: lbu         $a3, 0x56($s5)
    ctx->r7 = MEM_BU(ctx->r21, 0X56);
    // 0x8007425C: lbu         $t0, 0x58($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X58);
    // 0x80074260: lbu         $t1, 0x59($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X59);
    // 0x80074264: lbu         $t2, 0x5A($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X5A);
    // 0x80074268: lbu         $t3, 0x5B($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X5B);
    // 0x8007426C: addiu       $a1, $s6, 0x14
    ctx->r5 = ADD32(ctx->r22, 0X14);
    // 0x80074270: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80074274: sb          $v0, 0x98($s4)
    MEM_B(0X98, ctx->r20) = ctx->r2;
    // 0x80074278: sb          $v1, 0x99($s4)
    MEM_B(0X99, ctx->r20) = ctx->r3;
    // 0x8007427C: sb          $a3, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r7;
    // 0x80074280: sb          $t0, 0x9C($s4)
    MEM_B(0X9C, ctx->r20) = ctx->r8;
    // 0x80074284: sb          $t1, 0x9D($s4)
    MEM_B(0X9D, ctx->r20) = ctx->r9;
    // 0x80074288: sb          $t2, 0x9E($s4)
    MEM_B(0X9E, ctx->r20) = ctx->r10;
    // 0x8007428C: jal         0x8009A3B4
    // 0x80074290: sb          $t3, 0x9F($s4)
    MEM_B(0X9F, ctx->r20) = ctx->r11;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80074290: sb          $t3, 0x9F($s4)
    MEM_B(0X9F, ctx->r20) = ctx->r11;
    after_2:
    // 0x80074294: addiu       $a0, $s6, 0x454
    ctx->r4 = ADD32(ctx->r22, 0X454);
    // 0x80074298: lhu         $v0, 0x56($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X56);
    // 0x8007429C: lhu         $v1, 0x6E($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X6E);
    // 0x800742A0: lhu         $a3, 0xB0($s6)
    ctx->r7 = MEM_HU(ctx->r22, 0XB0);
    // 0x800742A4: lbu         $t0, 0x16A($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X16A);
    // 0x800742A8: lbu         $t1, 0x16B($s6)
    ctx->r9 = MEM_BU(ctx->r22, 0X16B);
    // 0x800742AC: lbu         $t2, 0x16C($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X16C);
    // 0x800742B0: lbu         $t3, 0x170($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X170);
    // 0x800742B4: lbu         $t4, 0x171($s6)
    ctx->r12 = MEM_BU(ctx->r22, 0X171);
    // 0x800742B8: lbu         $t5, 0x172($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X172);
    // 0x800742BC: lbu         $t6, 0x173($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X173);
    // 0x800742C0: lbu         $t7, 0x44C($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X44C);
    // 0x800742C4: lbu         $s0, 0x44E($s6)
    ctx->r16 = MEM_BU(ctx->r22, 0X44E);
    // 0x800742C8: lbu         $s1, 0x44F($s6)
    ctx->r17 = MEM_BU(ctx->r22, 0X44F);
    // 0x800742CC: lw          $s2, 0x450($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X450);
    // 0x800742D0: addiu       $a1, $s4, 0x10C
    ctx->r5 = ADD32(ctx->r20, 0X10C);
    // 0x800742D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800742D8: sh          $v0, 0xC8($s4)
    MEM_H(0XC8, ctx->r20) = ctx->r2;
    // 0x800742DC: sh          $v1, 0xCC($s4)
    MEM_H(0XCC, ctx->r20) = ctx->r3;
    // 0x800742E0: sh          $a3, 0xCE($s4)
    MEM_H(0XCE, ctx->r20) = ctx->r7;
    // 0x800742E4: sb          $t0, 0xD4($s4)
    MEM_B(0XD4, ctx->r20) = ctx->r8;
    // 0x800742E8: sb          $t1, 0xD5($s4)
    MEM_B(0XD5, ctx->r20) = ctx->r9;
    // 0x800742EC: sb          $t2, 0xD6($s4)
    MEM_B(0XD6, ctx->r20) = ctx->r10;
    // 0x800742F0: sb          $t3, 0xD8($s4)
    MEM_B(0XD8, ctx->r20) = ctx->r11;
    // 0x800742F4: sb          $t4, 0xD9($s4)
    MEM_B(0XD9, ctx->r20) = ctx->r12;
    // 0x800742F8: sb          $t5, 0xDA($s4)
    MEM_B(0XDA, ctx->r20) = ctx->r13;
    // 0x800742FC: sb          $t6, 0xDB($s4)
    MEM_B(0XDB, ctx->r20) = ctx->r14;
    // 0x80074300: sb          $t7, 0xDC($s4)
    MEM_B(0XDC, ctx->r20) = ctx->r15;
    // 0x80074304: sb          $s0, 0xDE($s4)
    MEM_B(0XDE, ctx->r20) = ctx->r16;
    // 0x80074308: sb          $s1, 0xDF($s4)
    MEM_B(0XDF, ctx->r20) = ctx->r17;
    // 0x8007430C: jal         0x8003BD6C
    // 0x80074310: sw          $s2, 0x108($s4)
    MEM_W(0X108, ctx->r20) = ctx->r18;
    func_8003BD6C_1716C(rdram, ctx);
        goto after_3;
    // 0x80074310: sw          $s2, 0x108($s4)
    MEM_W(0X108, ctx->r20) = ctx->r18;
    after_3:
    // 0x80074314: addiu       $a0, $s6, 0x474
    ctx->r4 = ADD32(ctx->r22, 0X474);
    // 0x80074318: addiu       $a1, $s4, 0x1580
    ctx->r5 = ADD32(ctx->r20, 0X1580);
    // 0x8007431C: jal         0x8003BD6C
    // 0x80074320: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_4;
    // 0x80074320: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80074324: addiu       $a0, $s6, 0x4F4
    ctx->r4 = ADD32(ctx->r22, 0X4F4);
    // 0x80074328: addiu       $a1, $s4, 0x12C
    ctx->r5 = ADD32(ctx->r20, 0X12C);
    // 0x8007432C: jal         0x8003BD6C
    // 0x80074330: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_5;
    // 0x80074330: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80074334: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80074338: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x8007433C: addiu       $a1, $s4, 0x280
    ctx->r5 = ADD32(ctx->r20, 0X280);
    // 0x80074340: jal         0x8003BD6C
    // 0x80074344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_6;
    // 0x80074344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80074348: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007434C: addiu       $a0, $a0, -0x3590
    ctx->r4 = ADD32(ctx->r4, -0X3590);
    // 0x80074350: addiu       $a1, $s4, 0x380
    ctx->r5 = ADD32(ctx->r20, 0X380);
    // 0x80074354: jal         0x8003BD6C
    // 0x80074358: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_7;
    // 0x80074358: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_7:
    // 0x8007435C: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80074360: addiu       $a0, $a0, 0x5490
    ctx->r4 = ADD32(ctx->r4, 0X5490);
    // 0x80074364: addiu       $a1, $s4, 0xB80
    ctx->r5 = ADD32(ctx->r20, 0XB80);
    // 0x80074368: jal         0x8003BD6C
    // 0x8007436C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_8;
    // 0x8007436C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_8:
    // 0x80074370: addiu       $a0, $s5, 0x84
    ctx->r4 = ADD32(ctx->r21, 0X84);
    // 0x80074374: addiu       $a1, $s4, 0x1640
    ctx->r5 = ADD32(ctx->r20, 0X1640);
    // 0x80074378: jal         0x8003BD34
    // 0x8007437C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8003BD34_17134(rdram, ctx);
        goto after_9;
    // 0x8007437C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_9:
    // 0x80074380: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80074384: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80074388: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8007438C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80074390: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80074394: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80074398: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007439C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800743A0: jr          $ra
    // 0x800743A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800743A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005DF64_39364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005DF64: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DF68: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005DF6C: bne         $v0, $zero, L_8005DF84
    if (ctx->r2 != 0) {
        // 0x8005DF70: nop
    
            goto L_8005DF84;
    }
    // 0x8005DF70: nop

    // 0x8005DF74: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8005DF78: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x8005DF7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DF80: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_8005DF84:
    // 0x8005DF84: jr          $ra
    // 0x8005DF88: nop

    TRACE_RETURN()
    return;
    // 0x8005DF88: nop

;}
RECOMP_FUNC void func_80030150_B550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030150: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80030154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80030158: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x8003015C: beq         $a0, $v0, L_800301F0
    if (ctx->r4 == ctx->r2) {
        // 0x80030160: sw          $s0, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r16;
            goto L_800301F0;
    }
    // 0x80030160: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x80030164: jal         0x80028470
    // 0x80030168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028470_3870(rdram, ctx);
        goto after_0;
    // 0x80030168: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8003016C: jal         0x8002891C
    // 0x80030170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002891C_3D1C(rdram, ctx);
        goto after_1;
    // 0x80030170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80030174: jal         0x80028978
    // 0x80030178: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028978_3D78(rdram, ctx);
        goto after_2;
    // 0x80030178: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8003017C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80030180: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80030184: jal         0x80028A00
    // 0x80030188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80028A00_3E00(rdram, ctx);
        goto after_3;
    // 0x80030188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8003018C: lui         $a2, 0x4216
    ctx->r6 = S32(0X4216 << 16);
    // 0x80030190: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x80030194: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x80030198: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8003019C: lui         $at, 0x45E0
    ctx->r1 = S32(0X45E0 << 16);
    // 0x800301A0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800301A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800301A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800301AC: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x800301B0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x800301B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800301B8: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x800301BC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x800301C0: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x800301C4: jal         0x8002C238
    // 0x800301C8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8002C238_7638(rdram, ctx);
        goto after_4;
    // 0x800301C8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x800301CC: lhu         $a2, 0xA0($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA0);
    // 0x800301D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800301D4: jal         0x80028600
    // 0x800301D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80028600_3A00(rdram, ctx);
        goto after_5;
    // 0x800301D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x800301DC: jal         0x8009CC40
    // 0x800301E0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8009CC40_78040(rdram, ctx);
        goto after_6;
    // 0x800301E0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x800301E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800301E8: jal         0x800288D8
    // 0x800301EC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800288D8_3CD8(rdram, ctx);
        goto after_7;
    // 0x800301EC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_7:
L_800301F0:
    // 0x800301F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800301F4: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x800301F8: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x800301FC: jr          $ra
    // 0x80030200: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x80030200: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8005F2CC_3A6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F2CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005F2D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005F2D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8005F2D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005F2DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005F2E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005F2E4: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8005F2E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005F2EC: beq         $v1, $v0, L_8005F37C
    if (ctx->r3 == ctx->r2) {
        // 0x8005F2F0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005F37C;
    }
    // 0x8005F2F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005F2F4: beql        $v0, $zero, L_8005F30C
    if (ctx->r2 == 0) {
        // 0x8005F2F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005F30C;
    }
    goto skip_0;
    // 0x8005F2F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8005F2FC: beq         $v1, $zero, L_8005F31C
    if (ctx->r3 == 0) {
        // 0x8005F300: nop
    
            goto L_8005F31C;
    }
    // 0x8005F300: nop

    // 0x8005F304: j           L_8005F408
    // 0x8005F308: nop

        goto L_8005F408;
    // 0x8005F308: nop

L_8005F30C:
    // 0x8005F30C: beq         $v1, $v0, L_8005F3D0
    if (ctx->r3 == ctx->r2) {
        // 0x8005F310: nop
    
            goto L_8005F3D0;
    }
    // 0x8005F310: nop

    // 0x8005F314: j           L_8005F408
    // 0x8005F318: nop

        goto L_8005F408;
    // 0x8005F318: nop

L_8005F31C:
    // 0x8005F31C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005F320: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005F324: bne         $v0, $zero, L_8005F408
    if (ctx->r2 != 0) {
        // 0x8005F328: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8005F408;
    }
    // 0x8005F328: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8005F32C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8005F330:
    // 0x8005F330: jal         0x8004EEAC
    // 0x8005F334: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8005F334: nop

    after_0:
    // 0x8005F338: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005F33C: beql        $v1, $zero, L_8005F364
    if (ctx->r3 == 0) {
        // 0x8005F340: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8005F364;
    }
    goto skip_1;
    // 0x8005F340: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8005F344: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x8005F348: sb          $s0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r16;
    // 0x8005F34C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x8005F350: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8005F354: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8005F358: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8005F35C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8005F360: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8005F364:
    // 0x8005F364: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8005F368: bne         $v0, $zero, L_8005F330
    if (ctx->r2 != 0) {
        // 0x8005F36C: addiu       $v1, $zero, 0x12C
        ctx->r3 = ADD32(0, 0X12C);
            goto L_8005F330;
    }
    // 0x8005F36C: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x8005F370: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8005F374: j           L_8005F3B8
    // 0x8005F378: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
        goto L_8005F3B8;
    // 0x8005F378: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
L_8005F37C:
    // 0x8005F37C: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8005F380: bne         $v0, $zero, L_8005F3C4
    if (ctx->r2 != 0) {
        // 0x8005F384: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8005F3C4;
    }
    // 0x8005F384: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005F388: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8005F38C: jal         0x8004CB2C
    // 0x8005F390: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8005F390: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x8005F394: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8005F398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005F39C: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8005F3A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005F3A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005F3A8: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8005F3AC: beql        $v0, $zero, L_8005F3B4
    if (ctx->r2 == 0) {
        // 0x8005F3B0: sh          $zero, 0x8($s1)
        MEM_H(0X8, ctx->r17) = 0;
            goto L_8005F3B4;
    }
    goto skip_2;
    // 0x8005F3B0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    skip_2:
L_8005F3B4:
    // 0x8005F3B4: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
L_8005F3B8:
    // 0x8005F3B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005F3BC: j           L_8005F408
    // 0x8005F3C0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
        goto L_8005F408;
    // 0x8005F3C0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8005F3C4:
    // 0x8005F3C4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8005F3C8: j           L_8005F408
    // 0x8005F3CC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
        goto L_8005F408;
    // 0x8005F3CC: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8005F3D0:
    // 0x8005F3D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005F3D4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005F3D8: bne         $v0, $zero, L_8005F408
    if (ctx->r2 != 0) {
        // 0x8005F3DC: nop
    
            goto L_8005F408;
    }
    // 0x8005F3DC: nop

    // 0x8005F3E0: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8005F3E4: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x8005F3E8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8005F3EC: bnel        $v0, $zero, L_8005F408
    if (ctx->r2 != 0) {
        // 0x8005F3F0: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_8005F408;
    }
    goto skip_3;
    // 0x8005F3F0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_3:
    // 0x8005F3F4: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8005F3F8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8005F3FC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8005F400: beql        $v0, $v1, L_8005F408
    if (ctx->r2 == ctx->r3) {
        // 0x8005F404: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_8005F408;
    }
    goto skip_4;
    // 0x8005F404: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_4:
L_8005F408:
    // 0x8005F408: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005F40C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005F410: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F414: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005F418: jr          $ra
    // 0x8005F41C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005F41C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800546E0_2FAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800546E0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800546E4: lbu         $a0, -0x2338($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2338);
    // 0x800546E8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800546EC: lbu         $a1, -0x2337($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2337);
    // 0x800546F0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800546F4: lbu         $a2, -0x2336($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2336);
    // 0x800546F8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x800546FC: lhu         $a3, -0x2334($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2334);
    // 0x80054700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054704: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80054708: jal         0x80054984
    // 0x8005470C: nop

    func_80054984_2FD84(rdram, ctx);
        goto after_0;
    // 0x8005470C: nop

    after_0:
    // 0x80054710: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80054714: jr          $ra
    // 0x80054718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80054718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004FC28_2B028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FC28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004FC2C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004FC30: lhu         $s2, 0x3A($sp)
    ctx->r18 = MEM_HU(ctx->r29, 0X3A);
    // 0x8004FC34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004FC38: lhu         $s1, 0x3E($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X3E);
    // 0x8004FC3C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004FC40: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8004FC44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004FC48: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8004FC4C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004FC50: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x8004FC54: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8004FC58: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x8004FC5C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8004FC60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004FC64: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004FC68: blez        $v0, L_8004FCAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004FC6C: subu        $a0, $a1, $a0
        ctx->r4 = SUB32(ctx->r5, ctx->r4);
            goto L_8004FCAC;
    }
    // 0x8004FC6C: subu        $a0, $a1, $a0
    ctx->r4 = SUB32(ctx->r5, ctx->r4);
    // 0x8004FC70: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004FC74: bne         $v0, $zero, L_8004FC80
    if (ctx->r2 != 0) {
        // 0x8004FC78: nop
    
            goto L_8004FC80;
    }
    // 0x8004FC78: nop

    // 0x8004FC7C: break       7
    do_break(2147810428);
L_8004FC80:
    // 0x8004FC80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FC84: bne         $v0, $at, L_8004FC98
    if (ctx->r2 != ctx->r1) {
        // 0x8004FC88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FC98;
    }
    // 0x8004FC88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FC8C: bne         $a0, $at, L_8004FC98
    if (ctx->r4 != ctx->r1) {
        // 0x8004FC90: nop
    
            goto L_8004FC98;
    }
    // 0x8004FC90: nop

    // 0x8004FC94: break       6
    do_break(2147810452);
L_8004FC98:
    // 0x8004FC98: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FC9C: jal         0x80032554
    // 0x8004FCA0: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004FCA0: nop

    after_0:
    // 0x8004FCA4: j           L_8004FD08
    // 0x8004FCA8: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
        goto L_8004FD08;
    // 0x8004FCA8: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
L_8004FCAC:
    // 0x8004FCAC: bgezl       $v0, L_8004FCFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004FCB0: nor         $v0, $zero, $a0
        ctx->r2 = ~(0 | ctx->r4);
            goto L_8004FCFC;
    }
    goto skip_0;
    // 0x8004FCB0: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    skip_0:
    // 0x8004FCB4: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8004FCB8: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004FCBC: bne         $v0, $zero, L_8004FCC8
    if (ctx->r2 != 0) {
        // 0x8004FCC0: nop
    
            goto L_8004FCC8;
    }
    // 0x8004FCC0: nop

    // 0x8004FCC4: break       7
    do_break(2147810500);
L_8004FCC8:
    // 0x8004FCC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FCCC: bne         $v0, $at, L_8004FCE0
    if (ctx->r2 != ctx->r1) {
        // 0x8004FCD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FCE0;
    }
    // 0x8004FCD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FCD4: bne         $a0, $at, L_8004FCE0
    if (ctx->r4 != ctx->r1) {
        // 0x8004FCD8: nop
    
            goto L_8004FCE0;
    }
    // 0x8004FCD8: nop

    // 0x8004FCDC: break       6
    do_break(2147810524);
L_8004FCE0:
    // 0x8004FCE0: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FCE4: jal         0x80032554
    // 0x8004FCE8: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004FCE8: nop

    after_1:
    // 0x8004FCEC: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004FCF0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004FCF4: j           L_8004FD08
    // 0x8004FCF8: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
        goto L_8004FD08;
    // 0x8004FCF8: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
L_8004FCFC:
    // 0x8004FCFC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004FD00: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004FD04: ori         $a0, $v0, 0x400
    ctx->r4 = ctx->r2 | 0X400;
L_8004FD08:
    // 0x8004FD08: subu        $v1, $a0, $s2
    ctx->r3 = SUB32(ctx->r4, ctx->r18);
    // 0x8004FD0C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8004FD10: andi        $a1, $v1, 0xFFF
    ctx->r5 = ctx->r3 & 0XFFF;
    // 0x8004FD14: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x8004FD18: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8004FD1C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8004FD20: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x8004FD24: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8004FD28: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004FD2C: bne         $v1, $zero, L_8004FD44
    if (ctx->r3 != 0) {
        // 0x8004FD30: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004FD44;
    }
    // 0x8004FD30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004FD34: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8004FD38: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004FD3C: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004FD40: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8004FD44:
    // 0x8004FD44: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004FD48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004FD4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004FD50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004FD54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004FD58: jr          $ra
    // 0x8004FD5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004FD5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003A9C4_15DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A9C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003A9C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003A9CC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003A9D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003A9D4: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8003A9D8: addiu       $s2, $s2, -0x3680
    ctx->r18 = ADD32(ctx->r18, -0X3680);
    // 0x8003A9DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003A9E0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003A9E4: addiu       $s0, $s0, 0x6B70
    ctx->r16 = ADD32(ctx->r16, 0X6B70);
    // 0x8003A9E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8003A9EC:
    // 0x8003A9EC: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x8003A9F0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8003A9F4: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8003A9F8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A9FC: beq         $v0, $zero, L_8003AA14
    if (ctx->r2 == 0) {
        // 0x8003AA00: andi        $v0, $a1, 0x1C
        ctx->r2 = ctx->r5 & 0X1C;
            goto L_8003AA14;
    }
    // 0x8003AA00: andi        $v0, $a1, 0x1C
    ctx->r2 = ctx->r5 & 0X1C;
    // 0x8003AA04: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003AA08: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003AA0C: jalr        $v0
    // 0x8003AA10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8003AA10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
L_8003AA14:
    // 0x8003AA14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003AA18: sltiu       $v0, $s1, 0x20
    ctx->r2 = ctx->r17 < 0X20 ? 1 : 0;
    // 0x8003AA1C: bne         $v0, $zero, L_8003A9EC
    if (ctx->r2 != 0) {
        // 0x8003AA20: addiu       $s0, $s0, 0x5C
        ctx->r16 = ADD32(ctx->r16, 0X5C);
            goto L_8003A9EC;
    }
    // 0x8003AA20: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8003AA24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003AA28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003AA2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003AA30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003AA34: jr          $ra
    // 0x8003AA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003AA38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80093BD0_6EFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093BD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093BD8: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    // 0x80093BDC: jal         0x80093C88
    // 0x80093BE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80093C88_6F088(rdram, ctx);
        goto after_0;
    // 0x80093BE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80093BE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093BE8: jr          $ra
    // 0x80093BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008A51C_6591C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A51C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008A520: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8008A524: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8008A528: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8008A52C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008A530: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008A534: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008A538: lw          $v1, 0x40($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X40);
    // 0x8008A53C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8008A540: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8008A544: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x8008A548: lw          $a1, 0x300($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X300);
    // 0x8008A54C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8008A550: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A554: sw          $v1, -0x232C($at)
    MEM_W(-0X232C, ctx->r1) = ctx->r3;
    // 0x8008A558: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8008A55C: sw          $a0, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = ctx->r4;
    // 0x8008A560: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A564: sw          $v0, 0x4F84($at)
    MEM_W(0X4F84, ctx->r1) = ctx->r2;
    // 0x8008A568: bne         $a1, $zero, L_8008A574
    if (ctx->r5 != 0) {
        // 0x8008A56C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8008A574;
    }
    // 0x8008A56C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8008A570: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_8008A574:
    // 0x8008A574: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A578: sw          $v0, 0x4F94($at)
    MEM_W(0X4F94, ctx->r1) = ctx->r2;
    // 0x8008A57C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008A580: lw          $v1, 0x4F94($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F94);
    // 0x8008A584: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x8008A588: ori         $v0, $v0, 0x4240
    ctx->r2 = ctx->r2 | 0X4240;
    // 0x8008A58C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8008A590: bne         $v1, $zero, L_8008A59C
    if (ctx->r3 != 0) {
        // 0x8008A594: nop
    
            goto L_8008A59C;
    }
    // 0x8008A594: nop

    // 0x8008A598: break       7
    do_break(2148050328);
L_8008A59C:
    // 0x8008A59C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008A5A0: bne         $v1, $at, L_8008A5B4
    if (ctx->r3 != ctx->r1) {
        // 0x8008A5A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008A5B4;
    }
    // 0x8008A5A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008A5A8: bne         $v0, $at, L_8008A5B4
    if (ctx->r2 != ctx->r1) {
        // 0x8008A5AC: nop
    
            goto L_8008A5B4;
    }
    // 0x8008A5AC: nop

    // 0x8008A5B0: break       6
    do_break(2148050352);
L_8008A5B4:
    // 0x8008A5B4: mflo        $v0
    ctx->r2 = lo;
    // 0x8008A5B8: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x8008A5BC: lw          $a1, 0x14($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X14);
    // 0x8008A5C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A5C4: jal         0x8008ED70
    // 0x8008A5C8: sw          $v0, 0x4F98($at)
    MEM_W(0X4F98, ctx->r1) = ctx->r2;
    func_8008ED70_6A170(rdram, ctx);
        goto after_0;
    // 0x8008A5C8: sw          $v0, 0x4F98($at)
    MEM_W(0X4F98, ctx->r1) = ctx->r2;
    after_0:
    // 0x8008A5CC: jal         0x8008E900
    // 0x8008A5D0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    func_8008E900_69D00(rdram, ctx);
        goto after_1;
    // 0x8008A5D0: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    after_1:
    // 0x8008A5D4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008A5D8: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008A5DC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8008A5E0: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x8008A5E4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8008A5E8: jal         0x8008EDBC
    // 0x8008A5EC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_2;
    // 0x8008A5EC: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    after_2:
    // 0x8008A5F0: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008A5F4: lw          $v1, 0x4F84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F84);
    // 0x8008A5F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A5FC: sw          $v0, 0x4F88($at)
    MEM_W(0X4F88, ctx->r1) = ctx->r2;
    // 0x8008A600: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8008A604: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8008A608: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8008A60C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8008A610: jal         0x8008EDBC
    // 0x8008A614: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_3;
    // 0x8008A614: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    after_3:
    // 0x8008A618: lw          $a0, 0x24($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X24);
    // 0x8008A61C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A620: sw          $v0, 0x4F8C($at)
    MEM_W(0X4F8C, ctx->r1) = ctx->r2;
    // 0x8008A624: addiu       $v0, $v0, 0x4F0
    ctx->r2 = ADD32(ctx->r2, 0X4F0);
    // 0x8008A628: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A62C: jal         0x8008B410
    // 0x8008A630: sw          $v0, 0x4F90($at)
    MEM_W(0X4F90, ctx->r1) = ctx->r2;
    func_8008B410_66810(rdram, ctx);
        goto after_4;
    // 0x8008A630: sw          $v0, 0x4F90($at)
    MEM_W(0X4F90, ctx->r1) = ctx->r2;
    after_4:
    // 0x8008A634: lw          $a0, 0x18($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X18);
    // 0x8008A638: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A63C: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
    // 0x8008A640: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A644: beq         $a0, $zero, L_8008A660
    if (ctx->r4 == 0) {
        // 0x8008A648: sw          $zero, 0x4FAC($at)
        MEM_W(0X4FAC, ctx->r1) = 0;
            goto L_8008A660;
    }
    // 0x8008A648: sw          $zero, 0x4FAC($at)
    MEM_W(0X4FAC, ctx->r1) = 0;
    // 0x8008A64C: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x8008A650: beq         $a1, $zero, L_8008A660
    if (ctx->r5 == 0) {
        // 0x8008A654: nop
    
            goto L_8008A660;
    }
    // 0x8008A654: nop

    // 0x8008A658: jal         0x8008B094
    // 0x8008A65C: nop

    func_8008B094_66494(rdram, ctx);
        goto after_5;
    // 0x8008A65C: nop

    after_5:
L_8008A660:
    // 0x8008A660: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
    // 0x8008A664: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A668: sw          $zero, 0x4FBC($at)
    MEM_W(0X4FBC, ctx->r1) = 0;
    // 0x8008A66C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A670: beq         $a0, $zero, L_8008A680
    if (ctx->r4 == 0) {
        // 0x8008A674: sw          $zero, 0x4FB8($at)
        MEM_W(0X4FB8, ctx->r1) = 0;
            goto L_8008A680;
    }
    // 0x8008A674: sw          $zero, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = 0;
    // 0x8008A678: jal         0x8008B25C
    // 0x8008A67C: nop

    func_8008B25C_6665C(rdram, ctx);
        goto after_6;
    // 0x8008A67C: nop

    after_6:
L_8008A680:
    // 0x8008A680: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008A684: lw          $a1, 0x4F94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4F94);
    // 0x8008A688: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8008A68C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008A690: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A694: sw          $zero, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = 0;
    // 0x8008A698: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A69C: sw          $v0, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r2;
    // 0x8008A6A0: jal         0x8008EAB0
    // 0x8008A6A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8008EAB0_69EB0(rdram, ctx);
        goto after_7;
    // 0x8008A6A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x8008A6A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8008A6AC: jal         0x8008A7A4
    // 0x8008A6B0: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    func_8008A7A4_65BA4(rdram, ctx);
        goto after_8;
    // 0x8008A6B0: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    after_8:
    // 0x8008A6B4: lui         $v1, 0x1234
    ctx->r3 = S32(0X1234 << 16);
    // 0x8008A6B8: ori         $v1, $v1, 0x5678
    ctx->r3 = ctx->r3 | 0X5678;
    // 0x8008A6BC: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008A6C0: addiu       $a0, $a0, 0x4F70
    ctx->r4 = ADD32(ctx->r4, 0X4F70);
    // 0x8008A6C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008A6C8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A6CC: sw          $v0, 0x4FA0($at)
    MEM_W(0X4FA0, ctx->r1) = ctx->r2;
    // 0x8008A6D0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8008A6D4: addiu       $v0, $v0, -0x4A74
    ctx->r2 = ADD32(ctx->r2, -0X4A74);
    // 0x8008A6D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A6DC: sw          $v1, 0x4FA4($at)
    MEM_W(0X4FA4, ctx->r1) = ctx->r3;
    // 0x8008A6E0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8008A6E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A6E8: sw          $v0, 0x4F78($at)
    MEM_W(0X4F78, ctx->r1) = ctx->r2;
    // 0x8008A6EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A6F0: sw          $a0, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->r4;
    // 0x8008A6F4: jal         0x800912E0
    // 0x8008A6F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_800912E0_6C6E0(rdram, ctx);
        goto after_9;
    // 0x8008A6F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_9:
    // 0x8008A6FC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008A700: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008A704: blez        $v0, L_8008A780
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008A708: nop
    
            goto L_8008A780;
    }
    // 0x8008A708: nop

    // 0x8008A70C: addiu       $s2, $zero, -0x70
    ctx->r18 = ADD32(0, -0X70);
    // 0x8008A710: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8008A714:
    // 0x8008A714: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008A718: lw          $v0, 0x4F8C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F8C);
    // 0x8008A71C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8008A720: sb          $zero, 0xC9($v0)
    MEM_B(0XC9, ctx->r2) = 0;
    // 0x8008A724: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008A728: lw          $a0, 0x4F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F8C);
    // 0x8008A72C: jal         0x8008CA18
    // 0x8008A730: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_8008CA18_67E18(rdram, ctx);
        goto after_10;
    // 0x8008A730: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_10:
    // 0x8008A734: sb          $zero, 0x14($sp)
    MEM_B(0X14, ctx->r29) = 0;
    // 0x8008A738: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8008A73C: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8008A740: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8008A744: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8008A748: bnel        $v0, $zero, L_8008A768
    if (ctx->r2 != 0) {
        // 0x8008A74C: addiu       $s2, $s2, 0x1C
        ctx->r18 = ADD32(ctx->r18, 0X1C);
            goto L_8008A768;
    }
    goto skip_0;
    // 0x8008A74C: addiu       $s2, $s2, 0x1C
    ctx->r18 = ADD32(ctx->r18, 0X1C);
    skip_0:
    // 0x8008A750: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008A754: lw          $a0, 0x4F88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F88);
    // 0x8008A758: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8008A75C: jal         0x80091330
    // 0x8008A760: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    func_80091330_6C730(rdram, ctx);
        goto after_11;
    // 0x8008A760: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    after_11:
    // 0x8008A764: addiu       $s2, $s2, 0x1C
    ctx->r18 = ADD32(ctx->r18, 0X1C);
L_8008A768:
    // 0x8008A768: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008A76C: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008A770: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8008A774: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008A778: bne         $v0, $zero, L_8008A714
    if (ctx->r2 != 0) {
        // 0x8008A77C: addiu       $s0, $s0, 0x13C
        ctx->r16 = ADD32(ctx->r16, 0X13C);
            goto L_8008A714;
    }
    // 0x8008A77C: addiu       $s0, $s0, 0x13C
    ctx->r16 = ADD32(ctx->r16, 0X13C);
L_8008A780:
    // 0x8008A780: jal         0x8008EDEC
    // 0x8008A784: nop

    func_8008EDEC_6A1EC(rdram, ctx);
        goto after_12;
    // 0x8008A784: nop

    after_12:
    // 0x8008A788: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8008A78C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8008A790: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8008A794: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008A798: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008A79C: jr          $ra
    // 0x8008A7A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008A7A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80025FF8_13F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025FF8: beq         $a0, $zero, L_80026090
    if (ctx->r4 == 0) {
        // 0x80025FFC: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80026090;
    }
    // 0x80025FFC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80026000: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x80026004: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80026008: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002600C: lw          $v1, -0x3E84($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E84);
    // 0x80026010: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80026014: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80026018: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8002601C: sh          $zero, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = 0;
    // 0x80026020: bne         $v0, $zero, L_80026090
    if (ctx->r2 != 0) {
        // 0x80026024: sw          $v1, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r3;
            goto L_80026090;
    }
    // 0x80026024: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80026028: lh          $v0, 0x1E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1E);
    // 0x8002602C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80026030: beq         $v0, $zero, L_80026040
    if (ctx->r2 == 0) {
        // 0x80026034: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80026040;
    }
    // 0x80026034: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80026038: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8002603C: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
L_80026040:
    // 0x80026040: lhu         $v0, 0x1C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1C);
    // 0x80026044: bne         $v0, $zero, L_80026094
    if (ctx->r2 != 0) {
        // 0x80026048: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80026094;
    }
    // 0x80026048: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8002604C: lh          $v0, 0x1E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1E);
    // 0x80026050: bnel        $v0, $zero, L_80026094
    if (ctx->r2 != 0) {
        // 0x80026054: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80026094;
    }
    goto skip_0;
    // 0x80026054: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80026058: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8002605C: beq         $v1, $zero, L_80026070
    if (ctx->r3 == 0) {
        // 0x80026060: nop
    
            goto L_80026070;
    }
    // 0x80026060: nop

    // 0x80026064: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80026068: j           L_8002607C
    // 0x8002606C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_8002607C;
    // 0x8002606C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80026070:
    // 0x80026070: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80026074: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026078: sw          $v0, 0x34D0($at)
    MEM_W(0X34D0, ctx->r1) = ctx->r2;
L_8002607C:
    // 0x8002607C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80026080: beq         $v1, $zero, L_80026094
    if (ctx->r3 == 0) {
        // 0x80026084: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80026094;
    }
    // 0x80026084: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80026088: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8002608C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80026090:
    // 0x80026090: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80026094:
    // 0x80026094: jr          $ra
    // 0x80026098: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80026098: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800306B0_BAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800306B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800306B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800306B8: jr          $ra
    // 0x800306BC: sh          $v0, -0x77B0($at)
    MEM_H(-0X77B0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800306BC: sh          $v0, -0x77B0($at)
    MEM_H(-0X77B0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8003E964_19D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E964: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8003E968: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8003E96C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8003E970: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8003E974: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8003E978: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x8003E97C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8003E980: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8003E984: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8003E988: addiu       $s5, $zero, 0x7FFF
    ctx->r21 = ADD32(0, 0X7FFF);
    // 0x8003E98C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8003E990: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x8003E994: addiu       $s0, $s0, -0x7158
    ctx->r16 = ADD32(ctx->r16, -0X7158);
    // 0x8003E998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003E99C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8003E9A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003E9A4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8003E9A8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8003E9AC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8003E9B0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8003E9B4: jal         0x8009A3B4
    // 0x8003E9B8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003E9B8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    after_0:
    // 0x8003E9BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003E9C0: jal         0x80040D60
    // 0x8003E9C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80040D60_1C160(rdram, ctx);
        goto after_1;
    // 0x8003E9C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8003E9C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8003E9CC: jal         0x80040EEC
    // 0x8003E9D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80040EEC_1C2EC(rdram, ctx);
        goto after_2;
    // 0x8003E9D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8003E9D4: jal         0x8004DA68
    // 0x8003E9D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_3;
    // 0x8003E9D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8003E9DC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8003E9E0: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x8003E9E4: xori        $s7, $v0, 0x8000
    ctx->r23 = ctx->r2 ^ 0X8000;
L_8003E9E8:
    // 0x8003E9E8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E9EC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003E9F0: beq         $t1, $zero, L_8003ECA8
    if (ctx->r9 == 0) {
        // 0x8003E9F4: addiu       $s6, $t1, -0x1
        ctx->r22 = ADD32(ctx->r9, -0X1);
            goto L_8003ECA8;
    }
    // 0x8003E9F4: addiu       $s6, $t1, -0x1
    ctx->r22 = ADD32(ctx->r9, -0X1);
L_8003E9F8:
    // 0x8003E9F8: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x8003E9FC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003EA00: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8003EA04: lh          $a0, -0x3C88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3C88);
    // 0x8003EA08: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003EA0C: lw          $v1, -0x35C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35C0);
    // 0x8003EA10: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8003EA14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003EA18: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8003EA1C: bgtz        $v0, L_8003EAD8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8003EA20: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8003EAD8;
    }
    // 0x8003EA20: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8003EA24: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003EA28: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x8003EA2C: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x8003EA30: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EA34: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003EA38: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8003EA3C: lhu         $a2, 0x49AE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49AE);
    // 0x8003EA40: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003EA44: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003EA48: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
    // 0x8003EA4C: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x8003EA50: beq         $v0, $zero, L_8003EA88
    if (ctx->r2 == 0) {
        // 0x8003EA54: addu        $t0, $a0, $zero
        ctx->r8 = ADD32(ctx->r4, 0);
            goto L_8003EA88;
    }
    // 0x8003EA54: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8003EA58: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003EA5C: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8003EA60: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003EA64: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003EA68: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003EA6C: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003EA70: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003EA74: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003EA78: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003EA7C: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003EA80: bne         $v1, $zero, L_8003EA90
    if (ctx->r3 != 0) {
        // 0x8003EA84: nop
    
            goto L_8003EA90;
    }
    // 0x8003EA84: nop

L_8003EA88:
    // 0x8003EA88: j           L_8003EAA4
    // 0x8003EA8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003EAA4;
    // 0x8003EA8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003EA90:
    // 0x8003EA90: nop

    // 0x8003EA94: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003EA98: mflo        $v0
    ctx->r2 = lo;
    // 0x8003EA9C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8003EAA0: nop

L_8003EAA4:
    // 0x8003EAA4: bne         $t0, $v0, L_8003ECA0
    if (ctx->r8 != ctx->r2) {
        // 0x8003EAA8: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8003ECA0;
    }
    // 0x8003EAA8: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8003EAAC: andi        $v0, $a3, 0x1F00
    ctx->r2 = ctx->r7 & 0X1F00;
    // 0x8003EAB0: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8003EAB4: lh          $v1, -0x26AC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26AC);
    // 0x8003EAB8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8003EABC: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8003EAC0: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8003EAC4: slt         $v0, $v1, $s5
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8003EAC8: bnel        $v0, $zero, L_8003EC9C
    if (ctx->r2 != 0) {
        // 0x8003EACC: addu        $s5, $v1, $zero
        ctx->r21 = ADD32(ctx->r3, 0);
            goto L_8003EC9C;
    }
    goto skip_0;
    // 0x8003EACC: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x8003EAD0: j           L_8003ECA0
    // 0x8003EAD4: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
        goto L_8003ECA0;
    // 0x8003EAD4: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_8003EAD8:
    // 0x8003EAD8: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x8003EADC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003EAE0: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x8003EAE4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003EAE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003EAEC: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EAF0: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x8003EAF4: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8003EAF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8003EAFC: beq         $v0, $zero, L_8003EB18
    if (ctx->r2 == 0) {
        // 0x8003EB00: nop
    
            goto L_8003EB18;
    }
    // 0x8003EB00: nop

    // 0x8003EB04: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EB08: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003EB0C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8003EB10: j           L_8003EB28
    // 0x8003EB14: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
        goto L_8003EB28;
    // 0x8003EB14: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003EB18:
    // 0x8003EB18: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EB1C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003EB20: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8003EB24: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003EB28:
    // 0x8003EB28: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8003EB2C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8003EB30: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8003EB34: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8003EB38: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8003EB3C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x8003EB40: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8003EB44: beq         $v0, $zero, L_8003ECA0
    if (ctx->r2 == 0) {
        // 0x8003EB48: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8003ECA0;
    }
    // 0x8003EB48: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8003EB4C: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_8003EB50:
    // 0x8003EB50: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8003EB54: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8003EB58: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EB5C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8003EB60: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x8003EB64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EB68: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8003EB6C: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8003EB70: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x8003EB74: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EB78: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8003EB7C: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x8003EB80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EB84: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x8003EB88: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EB8C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003EB90: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003EB94: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EB98: lhu         $a1, 0x4($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X4);
    // 0x8003EB9C: sltiu       $v0, $a1, 0x100
    ctx->r2 = ctx->r5 < 0X100 ? 1 : 0;
    // 0x8003EBA0: beq         $v0, $zero, L_8003EC8C
    if (ctx->r2 == 0) {
        // 0x8003EBA4: andi        $v0, $a1, 0xF0
        ctx->r2 = ctx->r5 & 0XF0;
            goto L_8003EC8C;
    }
    // 0x8003EBA4: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x8003EBA8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8003EBAC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8003EBB0: addiu       $t1, $t1, -0x35F0
    ctx->r9 = ADD32(ctx->r9, -0X35F0);
    // 0x8003EBB4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003EBB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003EBBC: jalr        $v0
    // 0x8003EBC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8003EBC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x8003EBC4: beql        $v0, $zero, L_8003EC90
    if (ctx->r2 == 0) {
        // 0x8003EBC8: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8003EC90;
    }
    goto skip_1;
    // 0x8003EBC8: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_1:
    // 0x8003EBCC: lw          $s3, 0x4($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X4);
    // 0x8003EBD0: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
L_8003EBD4:
    // 0x8003EBD4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8003EBD8: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x8003EBDC: bnel        $v0, $zero, L_8003EC80
    if (ctx->r2 != 0) {
        // 0x8003EBE0: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003EC80;
    }
    goto skip_2;
    // 0x8003EBE0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_2:
    // 0x8003EBE4: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x8003EBE8: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8003EBEC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8003EBF0: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x8003EBF4: lhu         $v1, -0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X2);
    // 0x8003EBF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003EBFC: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8003EC00: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8003EC04: jal         0x8003FC30
    // 0x8003EC08: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8003FC30_1B030(rdram, ctx);
        goto after_5;
    // 0x8003EC08: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x8003EC0C: bltz        $fp, L_8003EC50
    if (SIGNED(ctx->r30) < 0) {
        // 0x8003EC10: nop
    
            goto L_8003EC50;
    }
    // 0x8003EC10: nop

    // 0x8003EC14: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003EC18: slt         $v0, $a0, $s5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8003EC1C: beql        $v0, $zero, L_8003EC80
    if (ctx->r2 == 0) {
        // 0x8003EC20: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003EC80;
    }
    goto skip_3;
    // 0x8003EC20: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_3:
    // 0x8003EC24: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003EC28: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x8003EC2C: slt         $v0, $s5, $v1
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003EC30: bnel        $v0, $zero, L_8003EC38
    if (ctx->r2 != 0) {
        // 0x8003EC34: addu        $v1, $s5, $zero
        ctx->r3 = ADD32(ctx->r21, 0);
            goto L_8003EC38;
    }
    goto skip_4;
    // 0x8003EC34: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    skip_4:
L_8003EC38:
    // 0x8003EC38: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8003EC3C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003EC40: beql        $v0, $zero, L_8003EC80
    if (ctx->r2 == 0) {
        // 0x8003EC44: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003EC80;
    }
    goto skip_5;
    // 0x8003EC44: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_5:
    // 0x8003EC48: j           L_8003EC7C
    // 0x8003EC4C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
        goto L_8003EC7C;
    // 0x8003EC4C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
L_8003EC50:
    // 0x8003EC50: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003EC54: slt         $v0, $a0, $s5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8003EC58: beql        $v0, $zero, L_8003EC80
    if (ctx->r2 == 0) {
        // 0x8003EC5C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003EC80;
    }
    goto skip_6;
    // 0x8003EC5C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_6:
    // 0x8003EC60: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003EC64: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x8003EC68: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8003EC6C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003EC70: beql        $v1, $zero, L_8003EC80
    if (ctx->r3 == 0) {
        // 0x8003EC74: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003EC80;
    }
    goto skip_7;
    // 0x8003EC74: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_7:
    // 0x8003EC78: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
L_8003EC7C:
    // 0x8003EC7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8003EC80:
    // 0x8003EC80: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8003EC84: bne         $s3, $zero, L_8003EBD4
    if (ctx->r19 != 0) {
        // 0x8003EC88: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8003EBD4;
    }
    // 0x8003EC88: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_8003EC8C:
    // 0x8003EC8C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8003EC90:
    // 0x8003EC90: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003EC94: bne         $v0, $zero, L_8003EB50
    if (ctx->r2 != 0) {
        // 0x8003EC98: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_8003EB50;
    }
    // 0x8003EC98: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
L_8003EC9C:
    // 0x8003EC9C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
L_8003ECA0:
    // 0x8003ECA0: bne         $v0, $zero, L_8003E9F8
    if (ctx->r2 != 0) {
        // 0x8003ECA4: addiu       $s6, $s6, -0x1
        ctx->r22 = ADD32(ctx->r22, -0X1);
            goto L_8003E9F8;
    }
    // 0x8003ECA4: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
L_8003ECA8:
    // 0x8003ECA8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8003ECAC: bne         $s5, $t1, L_8003E9E8
    if (ctx->r21 != ctx->r9) {
        // 0x8003ECB0: nop
    
            goto L_8003E9E8;
    }
    // 0x8003ECB0: nop

    // 0x8003ECB4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003ECB8: lh          $v0, -0x26AC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26AC);
    // 0x8003ECBC: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x8003ECC0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8003ECC4: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8003ECC8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8003ECCC: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8003ECD0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8003ECD4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8003ECD8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8003ECDC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8003ECE0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8003ECE4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8003ECE8: jr          $ra
    // 0x8003ECEC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8003ECEC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void Main_ThreadEntry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026930: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80026934: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80026938: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002693C: sb          $zero, -0x14D0($at)
    MEM_B(-0X14D0, ctx->r1) = 0;
    // 0x80026940: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80026944: jal         0x8009C200
    // 0x80026948: sb          $zero, 0x6DB0($at)
    MEM_B(0X6DB0, ctx->r1) = 0;
    osUnmapTLBAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80026948: sb          $zero, 0x6DB0($at)
    MEM_B(0X6DB0, ctx->r1) = 0;
    after_0:
    // 0x8002694C: jal         0x80025DD0
    // 0x80026950: nop

    func_80025DD0_11D0(rdram, ctx);
        goto after_1;
    // 0x80026950: nop

    after_1:
    // 0x80026954: jal         0x80026BD0
    // 0x80026958: nop

    PadMgr_ThreadEntry(rdram, ctx);
        goto after_2;
    // 0x80026958: nop

    after_2:
    // 0x8002695C: lui         $a0, 0xB
    ctx->r4 = S32(0XB << 16);
    // 0x80026960: addiu       $a0, $a0, -0x1730
    ctx->r4 = ADD32(ctx->r4, -0X1730);
    // 0x80026964: lui         $a1, 0xB
    ctx->r5 = S32(0XB << 16);
    // 0x80026968: addiu       $a1, $a1, 0x6040
    ctx->r5 = ADD32(ctx->r5, 0X6040);
    // 0x8002696C: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80026970: addiu       $a2, $a2, -0x2630
    ctx->r6 = ADD32(ctx->r6, -0X2630);
    // 0x80026974: lui         $a3, 0x8022
    ctx->r7 = S32(0X8022 << 16);
    // 0x80026978: addiu       $a3, $a3, -0x2630
    ctx->r7 = ADD32(ctx->r7, -0X2630);
    // 0x8002697C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80026980: addiu       $v0, $v0, -0x2190
    ctx->r2 = ADD32(ctx->r2, -0X2190);
    // 0x80026984: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80026988: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8002698C: addiu       $v0, $v0, -0x2190
    ctx->r2 = ADD32(ctx->r2, -0X2190);
    // 0x80026990: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80026994: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80026998: addiu       $v0, $v0, 0x5140
    ctx->r2 = ADD32(ctx->r2, 0X5140);
    // 0x8002699C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800269A0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800269A4: addiu       $v0, $v0, 0x5140
    ctx->r2 = ADD32(ctx->r2, 0X5140);
    // 0x800269A8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800269AC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800269B0: addiu       $v0, $v0, 0x5150
    ctx->r2 = ADD32(ctx->r2, 0X5150);
    // 0x800269B4: jal         0x80027388
    // 0x800269B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    Overlay_Loader(rdram, ctx);
        goto after_3;
    // 0x800269B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x800269BC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800269C0: addiu       $a0, $a0, -0x7370
    ctx->r4 = ADD32(ctx->r4, -0X7370);
    // 0x800269C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800269C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800269CC: jal         0x80026100
    // 0x800269D0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80026100_1500(rdram, ctx);
        goto after_4;
    // 0x800269D0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_4:
    // 0x800269D4: jal         0x80028BF0
    // 0x800269D8: nop

    func_80028BF0_3FF0(rdram, ctx);
        goto after_5;
    // 0x800269D8: nop

    after_5:
    // 0x800269DC: jal         0x8002A710
    // 0x800269E0: nop

    func_8002A710_5B10(rdram, ctx);
        goto after_6;
    // 0x800269E0: nop

    after_6:
    // 0x800269E4: jal         0x800294F0
    // 0x800269E8: nop

    func_800294F0_48F0(rdram, ctx);
        goto after_7;
    // 0x800269E8: nop

    after_7:
    // 0x800269EC: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x800269F0: jal         0x80092860
    // 0x800269F4: addiu       $a0, $a0, 0x6B9C
    ctx->r4 = ADD32(ctx->r4, 0X6B9C);
    func_80092860_6DC60(rdram, ctx);
        goto after_8;
    // 0x800269F4: addiu       $a0, $a0, 0x6B9C
    ctx->r4 = ADD32(ctx->r4, 0X6B9C);
    after_8:
    // 0x800269F8: jal         0x80089EA0
    // 0x800269FC: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_9;
    // 0x800269FC: nop

    after_9:
    // 0x80026A00: bne         $v0, $zero, L_80026A10
    if (ctx->r2 != 0) {
        // 0x80026A04: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80026A10;
    }
    // 0x80026A04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80026A08: jal         0x80093AB0
    // 0x80026A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80093AB0_6EEB0(rdram, ctx);
        goto after_10;
    // 0x80026A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
L_80026A10:
    // 0x80026A10: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x80026A14: jal         0x80027550
    // 0x80026A18: addiu       $a0, $a0, 0x6A30
    ctx->r4 = ADD32(ctx->r4, 0X6A30);
    func_80027550_2950(rdram, ctx);
        goto after_11;
    // 0x80026A18: addiu       $a0, $a0, 0x6A30
    ctx->r4 = ADD32(ctx->r4, 0X6A30);
    after_11:
L_80026A1C:
    // 0x80026A1C: j           L_80026A1C
    pause_self(rdram);
    // 0x80026A20: nop

    // 0x80026A24: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80026A28: jr          $ra
    // 0x80026A2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80026A2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007889C_53C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007889C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x800788A0: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x800788A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800788A8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800788AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800788B0: lbu         $v1, -0x32D8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X32D8);
    // 0x800788B4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x800788B8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x800788BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800788C0: sb          $v1, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r3;
    // 0x800788C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800788C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800788CC: lbu         $v1, -0x32D7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X32D7);
    // 0x800788D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800788D4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x800788D8: jr          $ra
    // 0x800788DC: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x800788DC: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80036BC4_11FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036BC4: jr          $ra
    // 0x80036BC8: nop

    TRACE_RETURN()
    return;
    // 0x80036BC8: nop

;}
RECOMP_FUNC void func_8008AF80_66380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AF80: bne         $a0, $zero, L_8008AF90
    if (ctx->r4 != 0) {
        // 0x8008AF84: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008AF90;
    }
    // 0x8008AF84: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008AF88: j           L_8008B004
    // 0x8008AF8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008B004;
    // 0x8008AF8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008AF90:
    // 0x8008AF90: bgtz        $a1, L_8008AFA0
    if (SIGNED(ctx->r5) > 0) {
        // 0x8008AF94: slti        $v0, $a1, 0x101
        ctx->r2 = SIGNED(ctx->r5) < 0X101 ? 1 : 0;
            goto L_8008AFA0;
    }
    // 0x8008AF94: slti        $v0, $a1, 0x101
    ctx->r2 = SIGNED(ctx->r5) < 0X101 ? 1 : 0;
    // 0x8008AF98: j           L_8008AFA8
    // 0x8008AF9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8008AFA8;
    // 0x8008AF9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8008AFA0:
    // 0x8008AFA0: beql        $v0, $zero, L_8008AFA8
    if (ctx->r2 == 0) {
        // 0x8008AFA4: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_8008AFA8;
    }
    goto skip_0;
    // 0x8008AFA4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    skip_0:
L_8008AFA8:
    // 0x8008AFA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008AFAC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AFB0: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AFB4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008AFB8: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008AFBC: blez        $v0, L_8008B000
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008AFC0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008B000;
    }
    // 0x8008AFC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008AFC4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8008AFC8: addiu       $v1, $v1, 0x9C
    ctx->r3 = ADD32(ctx->r3, 0X9C);
L_8008AFCC:
    // 0x8008AFCC: lw          $v0, -0x58($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X58);
    // 0x8008AFD0: bne         $v0, $a0, L_8008AFF4
    if (ctx->r2 != ctx->r4) {
        // 0x8008AFD4: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8008AFF4;
    }
    // 0x8008AFD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8008AFD8: lhu         $v0, 0xC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC);
    // 0x8008AFDC: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008AFE0: mflo        $v0
    ctx->r2 = lo;
    // 0x8008AFE4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008AFE8: sh          $a1, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r5;
    // 0x8008AFEC: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8008AFF0: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_8008AFF4:
    // 0x8008AFF4: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8008AFF8: bne         $v0, $zero, L_8008AFCC
    if (ctx->r2 != 0) {
        // 0x8008AFFC: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008AFCC;
    }
    // 0x8008AFFC: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008B000:
    // 0x8008B000: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8008B004:
    // 0x8008B004: jr          $ra
    // 0x8008B008: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008B008: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8005C890_37C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C890: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C894: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8005C898: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8005C89C: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x8005C8A0: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8005C8A4: beql        $v1, $v0, L_8005C8AC
    if (ctx->r3 == ctx->r2) {
        // 0x8005C8A8: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_8005C8AC;
    }
    goto skip_0;
    // 0x8005C8A8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    skip_0:
L_8005C8AC:
    // 0x8005C8AC: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8005C8B0: beql        $v1, $v0, L_8005C8B8
    if (ctx->r3 == ctx->r2) {
        // 0x8005C8B4: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_8005C8B8;
    }
    goto skip_1;
    // 0x8005C8B4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    skip_1:
L_8005C8B8:
    // 0x8005C8B8: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x8005C8BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005C8C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005C8C4: lhu         $v0, -0x14A0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14A0);
    // 0x8005C8C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C8CC: sh          $v0, 0x49DC($at)
    MEM_H(0X49DC, ctx->r1) = ctx->r2;
    // 0x8005C8D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C8D4: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x8005C8D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005C8DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C8E0: sw          $v0, 0x49E4($at)
    MEM_W(0X49E4, ctx->r1) = ctx->r2;
    // 0x8005C8E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C8E8: sw          $v0, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = ctx->r2;
    // 0x8005C8EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005C8F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005C8F4: lhu         $v0, -0x149E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X149E);
    // 0x8005C8F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C8FC: sh          $v0, 0x49DE($at)
    MEM_H(0X49DE, ctx->r1) = ctx->r2;
    // 0x8005C900: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C904: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x8005C908: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005C90C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C910: sw          $v0, 0x49E8($at)
    MEM_W(0X49E8, ctx->r1) = ctx->r2;
    // 0x8005C914: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C918: sw          $v0, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r2;
    // 0x8005C91C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005C920: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005C924: lhu         $v0, -0x149C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X149C);
    // 0x8005C928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C92C: sh          $zero, 0x4A0C($at)
    MEM_H(0X4A0C, ctx->r1) = 0;
    // 0x8005C930: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C934: sh          $zero, 0x4A04($at)
    MEM_H(0X4A04, ctx->r1) = 0;
    // 0x8005C938: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C93C: sh          $v0, 0x49E0($at)
    MEM_H(0X49E0, ctx->r1) = ctx->r2;
    // 0x8005C940: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C944: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x8005C948: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005C94C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C950: sw          $v0, 0x49EC($at)
    MEM_W(0X49EC, ctx->r1) = ctx->r2;
    // 0x8005C954: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C958: sw          $v0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r2;
    // 0x8005C95C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005C960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005C964: lhu         $v0, -0x149A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X149A);
    // 0x8005C968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C96C: sh          $zero, 0x4A10($at)
    MEM_H(0X4A10, ctx->r1) = 0;
    // 0x8005C970: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C974: sh          $zero, 0x4A08($at)
    MEM_H(0X4A08, ctx->r1) = 0;
    // 0x8005C978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C97C: sb          $zero, 0x4A25($at)
    MEM_B(0X4A25, ctx->r1) = 0;
    // 0x8005C980: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C984: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8005C988: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C98C: sb          $zero, 0x4A27($at)
    MEM_B(0X4A27, ctx->r1) = 0;
    // 0x8005C990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C994: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x8005C998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C99C: sh          $v0, 0x4A0E($at)
    MEM_H(0X4A0E, ctx->r1) = ctx->r2;
    // 0x8005C9A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C9A4: jr          $ra
    // 0x8005C9A8: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8005C9A8: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80030284_B684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030284: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80030288: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8003028C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x80030290: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x80030294: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80030298: andi        $v1, $a3, 0x100
    ctx->r3 = ctx->r7 & 0X100;
    // 0x8003029C: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x800302A0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800302A4: andi        $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 & 0X3FF;
    // 0x800302A8: sra         $a2, $a2, 6
    ctx->r6 = S32(SIGNED(ctx->r6) >> 6);
    // 0x800302AC: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x800302B0: andi        $a3, $a3, 0x200
    ctx->r7 = ctx->r7 & 0X200;
    // 0x800302B4: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x800302B8: jr          $ra
    // 0x800302BC: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    TRACE_RETURN()
    return;
    // 0x800302BC: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
;}
RECOMP_FUNC void func_800932A8_6E6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800932A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800932AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800932B0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x800932B4: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x800932B8: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x800932BC: lbu         $a2, 0xC($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XC);
    // 0x800932C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800932C4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x800932C8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x800932CC: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x800932D0: lw          $a1, 0x4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4);
    // 0x800932D4: jal         0x8009D760
    // 0x800932D8: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x800932D8: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    after_0:
    // 0x800932DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800932E0: jr          $ra
    // 0x800932E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800932E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003026C_B66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003026C: sll         $v0, $a1, 6
    ctx->r2 = S32(ctx->r5 << 6);
    // 0x80030270: sra         $a0, $a0, 4
    ctx->r4 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80030274: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x80030278: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8003027C: jr          $ra
    // 0x80030280: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    TRACE_RETURN()
    return;
    // 0x80030280: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
;}
RECOMP_FUNC void func_80064048_3F448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006404C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064050: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064058: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8006405C: beql        $a1, $zero, L_8006409C
    if (ctx->r5 == 0) {
        // 0x80064060: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_8006409C;
    }
    goto skip_0;
    // 0x80064060: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    skip_0:
    // 0x80064064: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80064068: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8006406C: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80064070: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80064074: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064078: lbu         $a2, 0x2($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X2);
    // 0x8006407C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064080: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064084: lbu         $v0, 0x4E04($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4E04);
    // 0x80064088: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    // 0x8006408C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80064090: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80064094: j           L_800640D8
    // 0x80064098: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
        goto L_800640D8;
    // 0x80064098: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_8006409C:
    // 0x8006409C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x800640A0: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x800640A4: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800640A8: lbu         $a0, 0x5410($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5410);
    // 0x800640AC: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x800640B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800640B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800640B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800640BC: lbu         $v0, 0x4E04($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4E04);
    // 0x800640C0: lbu         $a0, 0x1($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X1);
    // 0x800640C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800640C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800640CC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800640D0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800640D4: lw          $a1, 0x27E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27E8);
L_800640D8:
    // 0x800640D8: jal         0x80061510
    // 0x800640DC: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x800640DC: nop

    after_0:
    // 0x800640E0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800640E4: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800640E8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x800640EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800640F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800640F4: jr          $ra
    // 0x800640F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800640F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004B008_26408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B008: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8004B00C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8004B010: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x8004B014: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8004B018: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8004B01C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8004B020: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8004B024: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8004B028: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8004B02C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8004B030: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8004B034: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8004B038: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004B03C: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x8004B040: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x8004B044: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8004B048: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B04C: bltz        $v0, L_8004B3D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004B050: addu        $s6, $a2, $zero
        ctx->r22 = ADD32(ctx->r6, 0);
            goto L_8004B3D8;
    }
    // 0x8004B050: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x8004B054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004B058: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004B05C: lw          $v1, 0x4978($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4978);
    // 0x8004B060: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8004B064: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8004B068: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8004B06C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8004B070: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B074: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B078: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8004B07C: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
    // 0x8004B080: lbu         $fp, -0x354E($fp)
    ctx->r30 = MEM_BU(ctx->r30, -0X354E);
    // 0x8004B084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004B088: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004B08C: lbu         $v0, -0x354D($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X354D);
    // 0x8004B090: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x8004B094: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8004B098: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8004B09C: addiu       $v0, $s0, 0xC
    ctx->r2 = ADD32(ctx->r16, 0XC);
    // 0x8004B0A0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004B0A4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8004B0A8: jal         0x8003055C
    // 0x8004B0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x8004B0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8004B0B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004B0B4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8004B0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8004B0BC: jal         0x8002FD30
    // 0x8004B0C0: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8004B0C0: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_1:
    // 0x8004B0C4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8004B0C8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8004B0CC: addiu       $v0, $s0, 0x24
    ctx->r2 = ADD32(ctx->r16, 0X24);
    // 0x8004B0D0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004B0D4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8004B0D8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8004B0DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8004B0E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8004B0E4: lw          $a1, 0x4978($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4978);
    // 0x8004B0E8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8004B0EC: ori         $v0, $v0, 0x38
    ctx->r2 = ctx->r2 | 0X38;
    // 0x8004B0F0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8004B0F4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8004B0F8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8004B0FC: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8004B100: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8004B104: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8004B108: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004B10C: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8004B110: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x8004B114: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8004B118: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8004B11C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004B120: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8004B124: lh          $v0, -0x3548($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3548);
    // 0x8004B128: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004B12C: lh          $v0, 0x0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X0);
    // 0x8004B130: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8004B134: lw          $a1, -0x2ED4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2ED4);
    // 0x8004B138: sra         $v1, $v1, 9
    ctx->r3 = S32(SIGNED(ctx->r3) >> 9);
    // 0x8004B13C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004B140: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B144: mflo        $v1
    ctx->r3 = lo;
    // 0x8004B148: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004B14C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004B150: lh          $a0, -0x3546($at)
    ctx->r4 = MEM_H(ctx->r1, -0X3546);
    // 0x8004B154: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004B158: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x8004B15C: lh          $a2, 0x2($s6)
    ctx->r6 = MEM_H(ctx->r22, 0X2);
    // 0x8004B160: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004B164: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8004B168: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8004B16C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B170: mflo        $v0
    ctx->r2 = lo;
    // 0x8004B174: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004B178: lh          $s1, 0x4A06($s1)
    ctx->r17 = MEM_H(ctx->r17, 0X4A06);
    // 0x8004B17C: lh          $s2, 0x0($s7)
    ctx->r18 = MEM_H(ctx->r23, 0X0);
    // 0x8004B180: lh          $s3, 0x2($s7)
    ctx->r19 = MEM_H(ctx->r23, 0X2);
    // 0x8004B184: negu        $s1, $s1
    ctx->r17 = SUB32(0, ctx->r17);
    // 0x8004B188: addiu       $s4, $s1, -0x40
    ctx->r20 = ADD32(ctx->r17, -0X40);
    // 0x8004B18C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8004B190: srl         $a1, $a1, 1
    ctx->r5 = S32(U32(ctx->r5) >> 1);
    // 0x8004B194: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    // 0x8004B198: addu        $s2, $s2, $a1
    ctx->r18 = ADD32(ctx->r18, ctx->r5);
    // 0x8004B19C: subu        $s3, $s3, $v0
    ctx->r19 = SUB32(ctx->r19, ctx->r2);
    // 0x8004B1A0: jal         0x800324B4
    // 0x8004B1A4: subu        $s3, $s3, $a1
    ctx->r19 = SUB32(ctx->r19, ctx->r5);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8004B1A4: subu        $s3, $s3, $a1
    ctx->r19 = SUB32(ctx->r19, ctx->r5);
    after_2:
    // 0x8004B1A8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8004B1AC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8004B1B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004B1B4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8004B1B8: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8004B1BC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8004B1C0: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8004B1C4: jal         0x80032498
    // 0x8004B1C8: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8004B1C8: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    after_3:
    // 0x8004B1CC: addiu       $s4, $s1, 0x40
    ctx->r20 = ADD32(ctx->r17, 0X40);
    // 0x8004B1D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8004B1D4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8004B1D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004B1DC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8004B1E0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8004B1E4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8004B1E8: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8004B1EC: jal         0x800324B4
    // 0x8004B1F0: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x8004B1F0: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    after_4:
    // 0x8004B1F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8004B1F8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8004B1FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004B200: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8004B204: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8004B208: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8004B20C: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8004B210: jal         0x80032498
    // 0x8004B214: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x8004B214: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    after_5:
    // 0x8004B218: addiu       $s4, $s1, 0x600
    ctx->r20 = ADD32(ctx->r17, 0X600);
    // 0x8004B21C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8004B220: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8004B224: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004B228: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8004B22C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8004B230: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8004B234: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8004B238: jal         0x800324B4
    // 0x8004B23C: sh          $v1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x8004B23C: sh          $v1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r3;
    after_6:
    // 0x8004B240: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8004B244: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B248: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8004B24C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004B250: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8004B254: jal         0x80032498
    // 0x8004B258: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x8004B258: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_7:
    // 0x8004B25C: addiu       $s1, $s1, -0x600
    ctx->r17 = ADD32(ctx->r17, -0X600);
    // 0x8004B260: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004B264: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B268: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8004B26C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004B270: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8004B274: jal         0x800324B4
    // 0x8004B278: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8004B278: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_8:
    // 0x8004B27C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004B280: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B284: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8004B288: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004B28C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8004B290: jal         0x80032498
    // 0x8004B294: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_9;
    // 0x8004B294: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    after_9:
    // 0x8004B298: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8004B29C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B2A0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8004B2A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004B2A8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8004B2AC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004B2B0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8004B2B4: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8004B2B8: jal         0x8002FD30
    // 0x8004B2BC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_10;
    // 0x8004B2BC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_10:
    // 0x8004B2C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8004B2C4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004B2C8: lw          $v1, -0x2ED4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2ED4);
    // 0x8004B2CC: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x8004B2D0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8004B2D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B2D8: bne         $a0, $v0, L_8004B368
    if (ctx->r4 != ctx->r2) {
        // 0x8004B2DC: nop
    
            goto L_8004B368;
    }
    // 0x8004B2DC: nop

    // 0x8004B2E0: lh          $v0, 0x2($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X2);
    // 0x8004B2E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8004B2E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004B2EC: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B2F0: beq         $v0, $zero, L_8004B3D8
    if (ctx->r2 == 0) {
        // 0x8004B2F4: nop
    
            goto L_8004B3D8;
    }
    // 0x8004B2F4: nop

L_8004B2F8:
    // 0x8004B2F8: lh          $v0, 0x2($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X2);
    // 0x8004B2FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B300: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8004B304: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x8004B308: beq         $v0, $zero, L_8004B348
    if (ctx->r2 == 0) {
        // 0x8004B30C: nop
    
            goto L_8004B348;
    }
    // 0x8004B30C: nop

    // 0x8004B310: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8004B314: j           L_8004B338
    // 0x8004B318: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8004B338;
    // 0x8004B318: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8004B31C:
    // 0x8004B31C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x8004B320: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8004B324: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8004B328: jal         0x8004AB78
    // 0x8004B32C: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    func_8004AB78_25F78(rdram, ctx);
        goto after_11;
    // 0x8004B32C: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    after_11:
    // 0x8004B330: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8004B334: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004B338:
    // 0x8004B338: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004B33C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B340: bne         $v0, $zero, L_8004B31C
    if (ctx->r2 != 0) {
        // 0x8004B344: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_8004B31C;
    }
    // 0x8004B344: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_8004B348:
    // 0x8004B348: lh          $v0, 0x2($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X2);
    // 0x8004B34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004B350: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004B354: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B358: beq         $v0, $zero, L_8004B3D8
    if (ctx->r2 == 0) {
        // 0x8004B35C: nop
    
            goto L_8004B3D8;
    }
    // 0x8004B35C: nop

    // 0x8004B360: j           L_8004B2F8
    // 0x8004B364: nop

        goto L_8004B2F8;
    // 0x8004B364: nop

L_8004B368:
    // 0x8004B368: lh          $v0, 0x2($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X2);
    // 0x8004B36C: blez        $v0, L_8004B3D8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004B370: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8004B3D8;
    }
    // 0x8004B370: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8004B374:
    // 0x8004B374: lh          $v0, 0x2($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X2);
    // 0x8004B378: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B37C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8004B380: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x8004B384: beq         $v0, $zero, L_8004B3C4
    if (ctx->r2 == 0) {
        // 0x8004B388: nop
    
            goto L_8004B3C4;
    }
    // 0x8004B388: nop

    // 0x8004B38C: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8004B390: blez        $v0, L_8004B3C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004B394: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8004B3C4;
    }
    // 0x8004B394: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004B398: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_8004B39C:
    // 0x8004B39C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x8004B3A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8004B3A4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8004B3A8: jal         0x8004AB78
    // 0x8004B3AC: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    func_8004AB78_25F78(rdram, ctx);
        goto after_12;
    // 0x8004B3AC: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    after_12:
    // 0x8004B3B0: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8004B3B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004B3B8: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B3BC: bne         $v0, $zero, L_8004B39C
    if (ctx->r2 != 0) {
        // 0x8004B3C0: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_8004B39C;
    }
    // 0x8004B3C0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_8004B3C4:
    // 0x8004B3C4: lh          $v0, 0x2($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X2);
    // 0x8004B3C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004B3CC: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B3D0: bne         $v0, $zero, L_8004B374
    if (ctx->r2 != 0) {
        // 0x8004B3D4: nop
    
            goto L_8004B374;
    }
    // 0x8004B3D4: nop

L_8004B3D8:
    // 0x8004B3D8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8004B3DC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8004B3E0: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8004B3E4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8004B3E8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8004B3EC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8004B3F0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8004B3F4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8004B3F8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8004B3FC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8004B400: jr          $ra
    // 0x8004B404: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8004B404: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80056114_31514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056118: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005611C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80056120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056124: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x80056128: beq         $v0, $zero, L_800562A4
    if (ctx->r2 == 0) {
        // 0x8005612C: addu        $t8, $a1, $zero
        ctx->r24 = ADD32(ctx->r5, 0);
            goto L_800562A4;
    }
    // 0x8005612C: addu        $t8, $a1, $zero
    ctx->r24 = ADD32(ctx->r5, 0);
    // 0x80056130: lbu         $a0, 0x11($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X11);
    // 0x80056134: lbu         $v1, 0x10($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10);
    // 0x80056138: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8005613C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056140: mflo        $v1
    ctx->r3 = lo;
    // 0x80056144: lbu         $t4, 0x14($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X14);
    // 0x80056148: lbu         $a1, 0x13($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X13);
    // 0x8005614C: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x80056150: subu        $a1, $t4, $a1
    ctx->r5 = SUB32(ctx->r12, ctx->r5);
    // 0x80056154: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056158: mflo        $a1
    ctx->r5 = lo;
    // 0x8005615C: lbu         $t3, 0x19($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X19);
    // 0x80056160: lbu         $a2, 0x18($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X18);
    // 0x80056164: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x80056168: subu        $a2, $t3, $a2
    ctx->r6 = SUB32(ctx->r11, ctx->r6);
    // 0x8005616C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056170: mflo        $a2
    ctx->r6 = lo;
    // 0x80056174: lbu         $t5, 0x1C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1C);
    // 0x80056178: lbu         $a3, 0x1B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1B);
    // 0x8005617C: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x80056180: subu        $a3, $t5, $a3
    ctx->r7 = SUB32(ctx->r13, ctx->r7);
    // 0x80056184: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056188: mflo        $a3
    ctx->r7 = lo;
    // 0x8005618C: lbu         $t6, 0x21($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X21);
    // 0x80056190: lbu         $t0, 0x20($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X20);
    // 0x80056194: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x80056198: subu        $t0, $t6, $t0
    ctx->r8 = SUB32(ctx->r14, ctx->r8);
    // 0x8005619C: mult        $t0, $v0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800561A0: mflo        $t0
    ctx->r8 = lo;
    // 0x800561A4: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x800561A8: lbu         $t1, 0x23($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X23);
    // 0x800561AC: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x800561B0: subu        $t1, $t7, $t1
    ctx->r9 = SUB32(ctx->r15, ctx->r9);
    // 0x800561B4: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800561B8: mflo        $t1
    ctx->r9 = lo;
    // 0x800561BC: lbu         $t2, 0x29($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X29);
    // 0x800561C0: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x800561C4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x800561C8: sb          $a0, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r4;
    // 0x800561CC: lbu         $a0, 0x28($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X28);
    // 0x800561D0: lbu         $v1, 0x2B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2B);
    // 0x800561D4: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x800561D8: sra         $a1, $a1, 2
    ctx->r5 = S32(SIGNED(ctx->r5) >> 2);
    // 0x800561DC: subu        $a0, $t2, $a0
    ctx->r4 = SUB32(ctx->r10, ctx->r4);
    // 0x800561E0: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800561E4: mflo        $a0
    ctx->r4 = lo;
    // 0x800561E8: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x800561EC: lbu         $a1, 0x31($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X31);
    // 0x800561F0: sra         $a2, $a2, 2
    ctx->r6 = S32(SIGNED(ctx->r6) >> 2);
    // 0x800561F4: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x800561F8: lbu         $a2, 0x2C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2C);
    // 0x800561FC: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x80056200: sra         $a3, $a3, 2
    ctx->r7 = S32(SIGNED(ctx->r7) >> 2);
    // 0x80056204: subu        $v1, $a2, $v1
    ctx->r3 = SUB32(ctx->r6, ctx->r3);
    // 0x80056208: subu        $t5, $t5, $a3
    ctx->r13 = SUB32(ctx->r13, ctx->r7);
    // 0x8005620C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056210: mflo        $v1
    ctx->r3 = lo;
    // 0x80056214: lbu         $v0, 0x30($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X30);
    // 0x80056218: lb          $a3, 0x6($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X6);
    // 0x8005621C: sb          $t4, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r12;
    // 0x80056220: sb          $t3, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r11;
    // 0x80056224: sb          $t5, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r13;
    // 0x80056228: sra         $t0, $t0, 2
    ctx->r8 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8005622C: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x80056230: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80056234: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056238: mflo        $v0
    ctx->r2 = lo;
    // 0x8005623C: sb          $t6, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r14;
    // 0x80056240: sra         $t1, $t1, 2
    ctx->r9 = S32(SIGNED(ctx->r9) >> 2);
    // 0x80056244: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x80056248: sb          $t7, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r15;
    // 0x8005624C: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80056250: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x80056254: sb          $t2, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r10;
    // 0x80056258: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8005625C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x80056260: sb          $a2, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r6;
    // 0x80056264: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80056268: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8005626C: sb          $a1, 0x32($s0)
    MEM_B(0X32, ctx->r16) = ctx->r5;
    // 0x80056270: lbu         $a0, 0x34($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34);
    // 0x80056274: lbu         $v1, 0x33($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X33);
    // 0x80056278: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x8005627C: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x80056280: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056284: mflo        $v1
    ctx->r3 = lo;
    // 0x80056288: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8005628C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80056290: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80056294: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80056298: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8005629C: j           L_800562F4
    // 0x800562A0: sb          $a0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r4;
        goto L_800562F4;
    // 0x800562A0: sb          $a0, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r4;
L_800562A4:
    // 0x800562A4: lbu         $v0, 0x11($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X11);
    // 0x800562A8: lbu         $v1, 0x14($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X14);
    // 0x800562AC: lbu         $a0, 0x19($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X19);
    // 0x800562B0: lbu         $a1, 0x1C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1C);
    // 0x800562B4: lbu         $a2, 0x21($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X21);
    // 0x800562B8: lbu         $a3, 0x24($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X24);
    // 0x800562BC: lbu         $t0, 0x29($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X29);
    // 0x800562C0: lbu         $t1, 0x2C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2C);
    // 0x800562C4: lbu         $t2, 0x31($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X31);
    // 0x800562C8: lbu         $t3, 0x34($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X34);
    // 0x800562CC: sb          $v0, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r2;
    // 0x800562D0: sb          $v1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r3;
    // 0x800562D4: sb          $a0, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r4;
    // 0x800562D8: sb          $a1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r5;
    // 0x800562DC: sb          $a2, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r6;
    // 0x800562E0: sb          $a3, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r7;
    // 0x800562E4: sb          $t0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r8;
    // 0x800562E8: sb          $t1, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r9;
    // 0x800562EC: sb          $t2, 0x32($s0)
    MEM_B(0X32, ctx->r16) = ctx->r10;
    // 0x800562F0: sb          $t3, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r11;
L_800562F4:
    // 0x800562F4: bne         $t8, $zero, L_800563A4
    if (ctx->r24 != 0) {
        // 0x800562F8: addiu       $a0, $zero, 0xA4
        ctx->r4 = ADD32(0, 0XA4);
            goto L_800563A4;
    }
    // 0x800562F8: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x800562FC: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x80056300: lbu         $a2, 0x12($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X12);
    // 0x80056304: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80056308: jal         0x800559D4
    // 0x8005630C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800559D4_30DD4(rdram, ctx);
        goto after_0;
    // 0x8005630C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80056310: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x80056314: lbu         $a2, 0x15($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X15);
    // 0x80056318: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8005631C: jal         0x800559D4
    // 0x80056320: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800559D4_30DD4(rdram, ctx);
        goto after_1;
    // 0x80056320: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80056324: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x80056328: lbu         $a2, 0x1A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1A);
    // 0x8005632C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80056330: jal         0x800559D4
    // 0x80056334: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800559D4_30DD4(rdram, ctx);
        goto after_2;
    // 0x80056334: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80056338: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x8005633C: lbu         $a2, 0x1D($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1D);
    // 0x80056340: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80056344: jal         0x800559D4
    // 0x80056348: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800559D4_30DD4(rdram, ctx);
        goto after_3;
    // 0x80056348: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x8005634C: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x80056350: lbu         $a2, 0x22($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X22);
    // 0x80056354: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80056358: jal         0x800559D4
    // 0x8005635C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800559D4_30DD4(rdram, ctx);
        goto after_4;
    // 0x8005635C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x80056360: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x80056364: lbu         $a2, 0x25($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X25);
    // 0x80056368: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8005636C: jal         0x800559D4
    // 0x80056370: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800559D4_30DD4(rdram, ctx);
        goto after_5;
    // 0x80056370: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80056374: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x80056378: lbu         $a2, 0x2A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2A);
    // 0x8005637C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x80056380: jal         0x800559D4
    // 0x80056384: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800559D4_30DD4(rdram, ctx);
        goto after_6;
    // 0x80056384: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80056388: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x8005638C: lbu         $a2, 0x2D($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2D);
    // 0x80056390: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x80056394: jal         0x800559D4
    // 0x80056398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800559D4_30DD4(rdram, ctx);
        goto after_7;
    // 0x80056398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x8005639C: j           L_80056418
    // 0x800563A0: nop

        goto L_80056418;
    // 0x800563A0: nop

L_800563A4:
    // 0x800563A4: lbu         $a2, 0x12($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X12);
    // 0x800563A8: lbu         $a3, 0x16($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X16);
    // 0x800563AC: jal         0x80055C64
    // 0x800563B0: addiu       $a1, $zero, 0x9E
    ctx->r5 = ADD32(0, 0X9E);
    func_80055C64_31064(rdram, ctx);
        goto after_8;
    // 0x800563B0: addiu       $a1, $zero, 0x9E
    ctx->r5 = ADD32(0, 0X9E);
    after_8:
    // 0x800563B4: lbu         $a2, 0x1A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1A);
    // 0x800563B8: lbu         $a3, 0x1E($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1E);
    // 0x800563BC: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x800563C0: jal         0x80055C64
    // 0x800563C4: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    func_80055C64_31064(rdram, ctx);
        goto after_9;
    // 0x800563C4: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    after_9:
    // 0x800563C8: lbu         $a2, 0x22($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X22);
    // 0x800563CC: lbu         $a3, 0x26($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X26);
    // 0x800563D0: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x800563D4: jal         0x80055C64
    // 0x800563D8: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_80055C64_31064(rdram, ctx);
        goto after_10;
    // 0x800563D8: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_10:
    // 0x800563DC: lbu         $a2, 0x2A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2A);
    // 0x800563E0: lbu         $a3, 0x2E($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X2E);
    // 0x800563E4: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x800563E8: jal         0x80055C64
    // 0x800563EC: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_80055C64_31064(rdram, ctx);
        goto after_11;
    // 0x800563EC: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_11:
    // 0x800563F0: lbu         $a2, 0x32($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X32);
    // 0x800563F4: lbu         $a3, 0x36($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X36);
    // 0x800563F8: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x800563FC: jal         0x80055C64
    // 0x80056400: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    func_80055C64_31064(rdram, ctx);
        goto after_12;
    // 0x80056400: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    after_12:
    // 0x80056404: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x80056408: beq         $a0, $zero, L_80056418
    if (ctx->r4 == 0) {
        // 0x8005640C: nop
    
            goto L_80056418;
    }
    // 0x8005640C: nop

    // 0x80056410: jal         0x80055E50
    // 0x80056414: nop

    func_80055E50_31250(rdram, ctx);
        goto after_13;
    // 0x80056414: nop

    after_13:
L_80056418:
    // 0x80056418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005641C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80056420: jr          $ra
    // 0x80056424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80056424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006ED44_4A144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006ED44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006ED48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006ED4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8006ED50: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8006ED54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006ED58: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8006ED5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8006ED60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006ED64: jal         0x8009A3B4
    // 0x8006ED68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8006ED68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8006ED6C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8006ED70: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8006ED74: jal         0x8009A3B4
    // 0x8006ED78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8006ED78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8006ED7C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8006ED80: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8006ED84: jal         0x8009A3B4
    // 0x8006ED88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8006ED88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8006ED8C: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x8006ED90: lhu         $a1, 0x6E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6E);
    // 0x8006ED94: lbu         $a2, 0x74($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X74);
    // 0x8006ED98: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8006ED9C: lbu         $a3, 0x76($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X76);
    // 0x8006EDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006EDA4: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8006EDA8: sb          $v1, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r3;
    // 0x8006EDAC: sh          $a1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r5;
    // 0x8006EDB0: sb          $a2, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r6;
    // 0x8006EDB4: sb          $a3, 0x77($s1)
    MEM_B(0X77, ctx->r17) = ctx->r7;
    // 0x8006EDB8: jal         0x80040A6C
    // 0x8006EDBC: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_80040A6C_1BE6C(rdram, ctx);
        goto after_3;
    // 0x8006EDBC: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_3:
    // 0x8006EDC0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8006EDC4: beq         $a0, $zero, L_8006EDDC
    if (ctx->r4 == 0) {
        // 0x8006EDC8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8006EDDC;
    }
    // 0x8006EDC8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8006EDCC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8006EDD0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8006EDD4: j           L_8006EDFC
    // 0x8006EDD8: sb          $a0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r4;
        goto L_8006EDFC;
    // 0x8006EDD8: sb          $a0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r4;
L_8006EDDC:
    // 0x8006EDDC: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8006EDE0: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8006EDE4: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8006EDE8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006EDEC: lui         $v1, 0xA
    ctx->r3 = S32(0XA << 16);
    // 0x8006EDF0: bne         $v0, $v1, L_8006EDFC
    if (ctx->r2 != ctx->r3) {
        // 0x8006EDF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006EDFC;
    }
    // 0x8006EDF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006EDF8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8006EDFC:
    // 0x8006EDFC: lb          $v0, 0x449($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X449);
    // 0x8006EE00: bne         $v0, $zero, L_8006EE70
    if (ctx->r2 != 0) {
        // 0x8006EE04: nop
    
            goto L_8006EE70;
    }
    // 0x8006EE04: nop

    // 0x8006EE08: lb          $v0, 0x110($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X110);
    // 0x8006EE0C: bne         $v0, $zero, L_8006EE2C
    if (ctx->r2 != 0) {
        // 0x8006EE10: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8006EE2C;
    }
    // 0x8006EE10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8006EE14: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8006EE18: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8006EE1C: jal         0x8006E838
    // 0x8006EE20: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_8006E838_49C38(rdram, ctx);
        goto after_4;
    // 0x8006EE20: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_4:
    // 0x8006EE24: j           L_8006EE7C
    // 0x8006EE28: nop

        goto L_8006EE7C;
    // 0x8006EE28: nop

L_8006EE2C:
    // 0x8006EE2C: blez        $v0, L_8006EE70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006EE30: nop
    
            goto L_8006EE70;
    }
    // 0x8006EE30: nop

    // 0x8006EE34: lbu         $v0, 0x111($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X111);
    // 0x8006EE38: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8006EE3C: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8006EE40: bgez        $v0, L_8006EE58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006EE44: sb          $v1, 0x111($s1)
        MEM_B(0X111, ctx->r17) = ctx->r3;
            goto L_8006EE58;
    }
    // 0x8006EE44: sb          $v1, 0x111($s1)
    MEM_B(0X111, ctx->r17) = ctx->r3;
    // 0x8006EE48: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8006EE4C: sb          $zero, 0x71($s1)
    MEM_B(0X71, ctx->r17) = 0;
    // 0x8006EE50: j           L_8006EE74
    // 0x8006EE54: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
        goto L_8006EE74;
    // 0x8006EE54: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
L_8006EE58:
    // 0x8006EE58: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8006EE5C: beq         $v0, $zero, L_8006EE70
    if (ctx->r2 == 0) {
        // 0x8006EE60: nop
    
            goto L_8006EE70;
    }
    // 0x8006EE60: nop

    // 0x8006EE64: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8006EE68: j           L_8006EE78
    // 0x8006EE6C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_8006EE78;
    // 0x8006EE6C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_8006EE70:
    // 0x8006EE70: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
L_8006EE74:
    // 0x8006EE74: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
L_8006EE78:
    // 0x8006EE78: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8006EE7C:
    // 0x8006EE7C: lb          $v0, 0x174($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X174);
    // 0x8006EE80: andi        $v1, $v0, 0xC0
    ctx->r3 = ctx->r2 & 0XC0;
    // 0x8006EE84: beq         $v1, $zero, L_8006EEB0
    if (ctx->r3 == 0) {
        // 0x8006EE88: sw          $zero, 0x188($s1)
        MEM_W(0X188, ctx->r17) = 0;
            goto L_8006EEB0;
    }
    // 0x8006EE88: sw          $zero, 0x188($s1)
    MEM_W(0X188, ctx->r17) = 0;
    // 0x8006EE8C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006EE90: bne         $v1, $v0, L_8006EEA8
    if (ctx->r3 != ctx->r2) {
        // 0x8006EE94: nop
    
            goto L_8006EEA8;
    }
    // 0x8006EE94: nop

    // 0x8006EE98: jal         0x80070E24
    // 0x8006EE9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070E24_4C224(rdram, ctx);
        goto after_5;
    // 0x8006EE9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8006EEA0: j           L_8006EEB0
    // 0x8006EEA4: nop

        goto L_8006EEB0;
    // 0x8006EEA4: nop

L_8006EEA8:
    // 0x8006EEA8: jal         0x80070B74
    // 0x8006EEAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070B74_4BF74(rdram, ctx);
        goto after_6;
    // 0x8006EEAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8006EEB0:
    // 0x8006EEB0: lb          $v0, 0xBD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XBD);
    // 0x8006EEB4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8006EEB8: bne         $v0, $zero, L_8006EEF8
    if (ctx->r2 != 0) {
        // 0x8006EEBC: nop
    
            goto L_8006EEF8;
    }
    // 0x8006EEBC: nop

    // 0x8006EEC0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8006EEC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006EEC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006EECC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006EED0: lw          $v0, 0x2F50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2F50);
    // 0x8006EED4: jalr        $v0
    // 0x8006EED8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x8006EED8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8006EEDC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8006EEE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006EEE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006EEE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006EEEC: lw          $v0, 0x2FA4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2FA4);
    // 0x8006EEF0: jalr        $v0
    // 0x8006EEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x8006EEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_8006EEF8:
    // 0x8006EEF8: jal         0x80040F30
    // 0x8006EEFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x8006EEFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8006EF00: lb          $v1, 0x74($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X74);
    // 0x8006EF04: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8006EF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006EF0C: bne         $v1, $v0, L_8006EF60
    if (ctx->r3 != ctx->r2) {
        // 0x8006EF10: andi        $v0, $a0, 0x2000
        ctx->r2 = ctx->r4 & 0X2000;
            goto L_8006EF60;
    }
    // 0x8006EF10: andi        $v0, $a0, 0x2000
    ctx->r2 = ctx->r4 & 0X2000;
    // 0x8006EF14: beq         $v0, $zero, L_8006EF60
    if (ctx->r2 == 0) {
        // 0x8006EF18: nop
    
            goto L_8006EF60;
    }
    // 0x8006EF18: nop

    // 0x8006EF1C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8006EF20: addiu       $v0, $v0, -0x7
    ctx->r2 = ADD32(ctx->r2, -0X7);
    // 0x8006EF24: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8006EF28: beq         $v0, $zero, L_8006EF60
    if (ctx->r2 == 0) {
        // 0x8006EF2C: nop
    
            goto L_8006EF60;
    }
    // 0x8006EF2C: nop

    // 0x8006EF30: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8006EF34: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8006EF38: beq         $v0, $zero, L_8006EF60
    if (ctx->r2 == 0) {
        // 0x8006EF3C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8006EF60;
    }
    // 0x8006EF3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8006EF40: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8006EF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006EF48: jal         0x8006FB90
    // 0x8006EF4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_10;
    // 0x8006EF4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8006EF50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8006EF54: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8006EF58: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8006EF5C: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
L_8006EF60:
    // 0x8006EF60: jal         0x800472C0
    // 0x8006EF64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_11;
    // 0x8006EF64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8006EF68: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006EF6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006EF70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006EF74: jr          $ra
    // 0x8006EF78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006EF78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006A4DC_458DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006A4DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006A4E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006A4E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006A4E8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006A4EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8006A4F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006A4F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006A4F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A4FC: lhu         $s2, 0x11C($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006A500: lhu         $s3, 0x11E($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006A504: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8006A508: beq         $v0, $zero, L_8006A8F0
    if (ctx->r2 == 0) {
        // 0x8006A50C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006A8F0;
    }
    // 0x8006A50C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006A510: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006A514: addu        $at, $at, $v0
    gpr jr_addend_8006A51C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006A518: lw          $v0, 0x2810($at)
    ctx->r2 = ADD32(ctx->r1, 0X2810);
    // 0x8006A51C: jr          $v0
    // 0x8006A520: nop

    switch (jr_addend_8006A51C >> 2) {
        case 0: goto L_8006A524; break;
        case 1: goto L_8006A560; break;
        case 2: goto L_8006A5D4; break;
        case 3: goto L_8006A5FC; break;
        case 4: goto L_8006A640; break;
        case 5: goto L_8006A8A0; break;
        default: switch_error(__func__, 0x8006A51C, 0x800D2810);
    }
    // 0x8006A520: nop

L_8006A524:
    // 0x8006A524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A528: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x8006A52C: lbu         $v0, 0x174($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X174);
    // 0x8006A530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A534: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006A538: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8006A53C: jal         0x8006FB90
    // 0x8006A540: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006A540: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_0:
    // 0x8006A544: lbu         $v0, 0x44A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X44A);
    // 0x8006A548: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A54C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A550: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8006A554: sb          $v0, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = ctx->r2;
    // 0x8006A558: j           L_8006A8F0
    // 0x8006A55C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8006A8F0;
    // 0x8006A55C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8006A560:
    // 0x8006A560: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A564: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006A568: beq         $v0, $zero, L_8006A594
    if (ctx->r2 == 0) {
        // 0x8006A56C: nop
    
            goto L_8006A594;
    }
    // 0x8006A56C: nop

    // 0x8006A570: jal         0x8004F144
    // 0x8006A574: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8006A574: nop

    after_1:
    // 0x8006A578: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006A57C: beq         $a1, $zero, L_8006A594
    if (ctx->r5 == 0) {
        // 0x8006A580: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006A594;
    }
    // 0x8006A580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A584: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8006A588: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x8006A58C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8006A590: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
L_8006A594:
    // 0x8006A594: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A598: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006A59C: beq         $v0, $zero, L_8006A5C8
    if (ctx->r2 == 0) {
        // 0x8006A5A0: nop
    
            goto L_8006A5C8;
    }
    // 0x8006A5A0: nop

    // 0x8006A5A4: jal         0x8004F144
    // 0x8006A5A8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8006A5A8: nop

    after_2:
    // 0x8006A5AC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006A5B0: beq         $a1, $zero, L_8006A5C8
    if (ctx->r5 == 0) {
        // 0x8006A5B4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006A5C8;
    }
    // 0x8006A5B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006A5B8: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x8006A5BC: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8006A5C0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8006A5C4: sb          $v1, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r3;
L_8006A5C8:
    // 0x8006A5C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A5CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A5D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006A5D4:
    // 0x8006A5D4: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8006A5D8: bne         $v0, $zero, L_8006A5F0
    if (ctx->r2 != 0) {
        // 0x8006A5DC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006A5F0;
    }
    // 0x8006A5DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006A5E0: lbu         $v0, 0x44A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X44A);
    // 0x8006A5E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A5E8: j           L_8006A8F0
    // 0x8006A5EC: sb          $v0, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = ctx->r2;
        goto L_8006A8F0;
    // 0x8006A5EC: sb          $v0, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = ctx->r2;
L_8006A5F0:
    // 0x8006A5F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006A5F4: addiu       $v0, $zero, 0x340
    ctx->r2 = ADD32(0, 0X340);
    // 0x8006A5F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8006A5FC:
    // 0x8006A5FC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006A600: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006A604: beq         $v1, $v0, L_8006A624
    if (ctx->r3 == ctx->r2) {
        // 0x8006A608: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A624;
    }
    // 0x8006A608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A60C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006A610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A614: jal         0x8006FC34
    // 0x8006A618: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_3;
    // 0x8006A618: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8006A61C: j           L_8006A8F0
    // 0x8006A620: nop

        goto L_8006A8F0;
    // 0x8006A620: nop

L_8006A624:
    // 0x8006A624: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x8006A628: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006A62C: jal         0x8002A2F8
    // 0x8006A630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x8006A630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8006A634: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A63C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006A640:
    // 0x8006A640: lhu         $v1, 0x124($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X124);
    // 0x8006A644: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006A648: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x8006A64C: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006A650: beq         $v0, $zero, L_8006A6DC
    if (ctx->r2 == 0) {
        // 0x8006A654: and         $v0, $v1, $s2
        ctx->r2 = ctx->r3 & ctx->r18;
            goto L_8006A6DC;
    }
    // 0x8006A654: and         $v0, $v1, $s2
    ctx->r2 = ctx->r3 & ctx->r18;
    // 0x8006A658: beq         $v0, $zero, L_8006A680
    if (ctx->r2 == 0) {
        // 0x8006A65C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A680;
    }
    // 0x8006A65C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A660: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8006A664: jal         0x8006FDAC
    // 0x8006A668: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_5;
    // 0x8006A668: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8006A66C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8006A670: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8006A674: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006A678: j           L_8006A6FC
    // 0x8006A67C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
        goto L_8006A6FC;
    // 0x8006A67C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
L_8006A680:
    // 0x8006A680: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8006A684: jal         0x8006FDAC
    // 0x8006A688: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_6;
    // 0x8006A688: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_6:
    // 0x8006A68C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8006A690: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x8006A694: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006A698: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8006A69C: jal         0x8004F144
    // 0x8006A6A0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8006A6A0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_7:
    // 0x8006A6A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006A6A8: beq         $a1, $zero, L_8006A6B8
    if (ctx->r5 == 0) {
        // 0x8006A6AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A6B8;
    }
    // 0x8006A6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A6B0: jal         0x8007023C
    // 0x8006A6B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007023C_4B63C(rdram, ctx);
        goto after_8;
    // 0x8006A6B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
L_8006A6B8:
    // 0x8006A6B8: jal         0x8004F144
    // 0x8006A6BC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_9;
    // 0x8006A6BC: nop

    after_9:
    // 0x8006A6C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006A6C4: beq         $a1, $zero, L_8006A700
    if (ctx->r5 == 0) {
        // 0x8006A6C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A700;
    }
    // 0x8006A6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A6CC: jal         0x8007023C
    // 0x8006A6D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8007023C_4B63C(rdram, ctx);
        goto after_10;
    // 0x8006A6D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x8006A6D4: j           L_8006A700
    // 0x8006A6D8: nop

        goto L_8006A700;
    // 0x8006A6D8: nop

L_8006A6DC:
    // 0x8006A6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A6E0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x8006A6E4: jal         0x8006FDAC
    // 0x8006A6E8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_11;
    // 0x8006A6E8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_11:
    // 0x8006A6EC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8006A6F0: addiu       $v0, $zero, 0x340
    ctx->r2 = ADD32(0, 0X340);
    // 0x8006A6F4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006A6F8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8006A6FC:
    // 0x8006A6FC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8006A700:
    // 0x8006A700: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006A704: lhu         $a0, 0x12E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006A708: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A70C: and         $v1, $s2, $v0
    ctx->r3 = ctx->r18 & ctx->r2;
    // 0x8006A710: beql        $v1, $zero, L_8006A78C
    if (ctx->r3 == 0) {
        // 0x8006A714: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8006A78C;
    }
    goto skip_0;
    // 0x8006A714: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_0:
    // 0x8006A718: beq         $v1, $v0, L_8006A788
    if (ctx->r3 == ctx->r2) {
        // 0x8006A71C: and         $v0, $a0, $s2
        ctx->r2 = ctx->r4 & ctx->r18;
            goto L_8006A788;
    }
    // 0x8006A71C: and         $v0, $a0, $s2
    ctx->r2 = ctx->r4 & ctx->r18;
    // 0x8006A720: beq         $v0, $zero, L_8006A75C
    if (ctx->r2 == 0) {
        // 0x8006A724: nop
    
            goto L_8006A75C;
    }
    // 0x8006A724: nop

    // 0x8006A728: beql        $s1, $zero, L_8006A730
    if (ctx->r17 == 0) {
        // 0x8006A72C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8006A730;
    }
    goto skip_1;
    // 0x8006A72C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
L_8006A730:
    // 0x8006A730: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8006A734: lhu         $v1, 0x128($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A738: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A73C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8006A740: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006A744: and         $v1, $s2, $v1
    ctx->r3 = ctx->r18 & ctx->r3;
    // 0x8006A748: bne         $v1, $zero, L_8006A78C
    if (ctx->r3 != 0) {
        // 0x8006A74C: sh          $v0, 0x48($s0)
        MEM_H(0X48, ctx->r16) = ctx->r2;
            goto L_8006A78C;
    }
    // 0x8006A74C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006A750: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006A754: j           L_8006A78C
    // 0x8006A758: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
        goto L_8006A78C;
    // 0x8006A758: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006A75C:
    // 0x8006A75C: beql        $s1, $zero, L_8006A764
    if (ctx->r17 == 0) {
        // 0x8006A760: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_8006A764;
    }
    goto skip_2;
    // 0x8006A760: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    skip_2:
L_8006A764:
    // 0x8006A764: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A768: lhu         $v1, 0x12A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A76C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006A770: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006A774: bne         $v0, $zero, L_8006A790
    if (ctx->r2 != 0) {
        // 0x8006A778: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006A790;
    }
    // 0x8006A778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A77C: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8006A780: j           L_8006A78C
    // 0x8006A784: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
        goto L_8006A78C;
    // 0x8006A784: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006A788:
    // 0x8006A788: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_8006A78C:
    // 0x8006A78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006A790:
    // 0x8006A790: beq         $s1, $v0, L_8006A7D8
    if (ctx->r17 == ctx->r2) {
        // 0x8006A794: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_8006A7D8;
    }
    // 0x8006A794: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8006A798: beql        $v0, $zero, L_8006A7B0
    if (ctx->r2 == 0) {
        // 0x8006A79C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006A7B0;
    }
    goto skip_3;
    // 0x8006A79C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_3:
    // 0x8006A7A0: beq         $s1, $zero, L_8006A7C0
    if (ctx->r17 == 0) {
        // 0x8006A7A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A7C0;
    }
    // 0x8006A7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A7A8: j           L_8006A824
    // 0x8006A7AC: nop

        goto L_8006A824;
    // 0x8006A7AC: nop

L_8006A7B0:
    // 0x8006A7B0: beq         $s1, $v0, L_8006A7F8
    if (ctx->r17 == ctx->r2) {
        // 0x8006A7B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A7F8;
    }
    // 0x8006A7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A7B8: j           L_8006A824
    // 0x8006A7BC: nop

        goto L_8006A824;
    // 0x8006A7BC: nop

L_8006A7C0:
    // 0x8006A7C0: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x8006A7C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A7C8: jal         0x8006FB90
    // 0x8006A7CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_12;
    // 0x8006A7CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_12:
    // 0x8006A7D0: j           L_8006A818
    // 0x8006A7D4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
        goto L_8006A818;
    // 0x8006A7D4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
L_8006A7D8:
    // 0x8006A7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A7DC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8006A7E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A7E4: jal         0x8006FB90
    // 0x8006A7E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_13;
    // 0x8006A7E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x8006A7EC: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A7F0: j           L_8006A810
    // 0x8006A7F4: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
        goto L_8006A810;
    // 0x8006A7F4: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_8006A7F8:
    // 0x8006A7F8: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x8006A7FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A800: jal         0x8006FB90
    // 0x8006A804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_14;
    // 0x8006A804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x8006A808: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A80C: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
L_8006A810:
    // 0x8006A810: beq         $v0, $zero, L_8006A824
    if (ctx->r2 == 0) {
        // 0x8006A814: addiu       $a0, $zero, 0x8F
        ctx->r4 = ADD32(0, 0X8F);
            goto L_8006A824;
    }
    // 0x8006A814: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
L_8006A818:
    // 0x8006A818: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006A81C: jal         0x8002A2F8
    // 0x8006A820: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_15;
    // 0x8006A820: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
L_8006A824:
    // 0x8006A824: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006A828: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006A82C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A830: jal         0x8006FC34
    // 0x8006A834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_16;
    // 0x8006A834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_16:
    // 0x8006A838: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006A83C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006A840: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006A844: beq         $v0, $zero, L_8006A85C
    if (ctx->r2 == 0) {
        // 0x8006A848: sb          $v1, 0x44D($s0)
        MEM_B(0X44D, ctx->r16) = ctx->r3;
            goto L_8006A85C;
    }
    // 0x8006A848: sb          $v1, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = ctx->r3;
    // 0x8006A84C: lbu         $v0, 0x16B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16B);
    // 0x8006A850: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8006A854: bne         $v0, $zero, L_8006A8F0
    if (ctx->r2 != 0) {
        // 0x8006A858: nop
    
            goto L_8006A8F0;
    }
    // 0x8006A858: nop

L_8006A85C:
    // 0x8006A85C: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    // 0x8006A860: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006A864: jal         0x8002A2F8
    // 0x8006A868: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_17;
    // 0x8006A868: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_17:
    // 0x8006A86C: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    // 0x8006A870: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006A874: jal         0x8002A2F8
    // 0x8006A878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_18;
    // 0x8006A878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x8006A87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A880: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x8006A884: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A888: jal         0x8006FB90
    // 0x8006A88C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_19;
    // 0x8006A88C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_19:
    // 0x8006A890: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A894: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A898: j           L_8006A8F0
    // 0x8006A89C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006A8F0;
    // 0x8006A89C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006A8A0:
    // 0x8006A8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A8A4: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8006A8A8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8006A8AC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8006A8B0: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8006A8B4: jal         0x8006FDAC
    // 0x8006A8B8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_20;
    // 0x8006A8B8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_20:
    // 0x8006A8BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A8C0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006A8C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A8C8: jal         0x8006FC34
    // 0x8006A8CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_21;
    // 0x8006A8CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
    // 0x8006A8D0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006A8D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006A8D8: bne         $v1, $v0, L_8006A8F0
    if (ctx->r3 != ctx->r2) {
        // 0x8006A8DC: nop
    
            goto L_8006A8F0;
    }
    // 0x8006A8DC: nop

    // 0x8006A8E0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006A8E4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006A8E8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006A8EC: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
L_8006A8F0:
    // 0x8006A8F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A8F4: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x8006A8F8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8006A8FC: beq         $v0, $zero, L_8006A96C
    if (ctx->r2 == 0) {
        // 0x8006A900: nop
    
            goto L_8006A96C;
    }
    // 0x8006A900: nop

    // 0x8006A904: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A908: and         $v0, $s3, $v0
    ctx->r2 = ctx->r19 & ctx->r2;
    // 0x8006A90C: beq         $v0, $zero, L_8006A938
    if (ctx->r2 == 0) {
        // 0x8006A910: nop
    
            goto L_8006A938;
    }
    // 0x8006A910: nop

    // 0x8006A914: jal         0x8004F144
    // 0x8006A918: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_22;
    // 0x8006A918: nop

    after_22:
    // 0x8006A91C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006A920: beq         $a1, $zero, L_8006A938
    if (ctx->r5 == 0) {
        // 0x8006A924: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006A938;
    }
    // 0x8006A924: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006A928: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x8006A92C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8006A930: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8006A934: sb          $v1, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r3;
L_8006A938:
    // 0x8006A938: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A93C: and         $v0, $s3, $v0
    ctx->r2 = ctx->r19 & ctx->r2;
    // 0x8006A940: beq         $v0, $zero, L_8006A96C
    if (ctx->r2 == 0) {
        // 0x8006A944: nop
    
            goto L_8006A96C;
    }
    // 0x8006A944: nop

    // 0x8006A948: jal         0x8004F144
    // 0x8006A94C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_23;
    // 0x8006A94C: nop

    after_23:
    // 0x8006A950: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006A954: beq         $a1, $zero, L_8006A96C
    if (ctx->r5 == 0) {
        // 0x8006A958: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006A96C;
    }
    // 0x8006A958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A95C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8006A960: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x8006A964: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8006A968: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
L_8006A96C:
    // 0x8006A96C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006A970: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A974: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006A978: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006A97C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006A980: jr          $ra
    // 0x8006A984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006A984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008DF78_69378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DF78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008DF7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008DF80: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008DF84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008DF88: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8008DF8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008DF90: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8008DF94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DF98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DF9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008DFA0: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8008DFA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008DFA8: jal         0x80098CC0
    // 0x8008DFAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8008DFAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008DFB0: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8008DFB4: addiu       $v1, $v1, -0x7D18
    ctx->r3 = ADD32(ctx->r3, -0X7D18);
    // 0x8008DFB8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8008DFBC: jal         0x8008E3B8
    // 0x8008DFC0: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    func_8008E3B8_697B8(rdram, ctx);
        goto after_1;
    // 0x8008DFC0: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    after_1:
    // 0x8008DFC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DFC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DFCC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008DFD0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008DFD4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8008DFD8: jal         0x80098CC0
    // 0x8008DFDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8008DFDC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8008DFE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008DFE4: jal         0x8008E3FC
    // 0x8008DFE8: sw          $v0, 0xB40($at)
    MEM_W(0XB40, ctx->r1) = ctx->r2;
    func_8008E3FC_697FC(rdram, ctx);
        goto after_3;
    // 0x8008DFE8: sw          $v0, 0xB40($at)
    MEM_W(0XB40, ctx->r1) = ctx->r2;
    after_3:
    // 0x8008DFEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DFF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DFF4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008DFF8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008DFFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008E000: jal         0x80098CC0
    // 0x8008E004: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8008E004: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8008E008: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008E00C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E010: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008E014: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008E018: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008E01C: sw          $v0, 0xB44($at)
    MEM_W(0XB44, ctx->r1) = ctx->r2;
    // 0x8008E020: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8008E024: jal         0x80098CC0
    // 0x8008E028: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x8008E028: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8008E02C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008E030: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E034: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008E038: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008E03C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008E040: sw          $v0, 0xB48($at)
    MEM_W(0XB48, ctx->r1) = ctx->r2;
    // 0x8008E044: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8008E048: jal         0x80098CC0
    // 0x8008E04C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x8008E04C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8008E050: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008E054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E058: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008E05C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008E060: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008E064: sw          $v0, 0xB4C($at)
    MEM_W(0XB4C, ctx->r1) = ctx->r2;
    // 0x8008E068: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8008E06C: jal         0x80098CC0
    // 0x8008E070: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_7;
    // 0x8008E070: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_7:
    // 0x8008E074: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008E078: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E07C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008E080: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008E084: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008E088: sw          $v0, 0xB50($at)
    MEM_W(0XB50, ctx->r1) = ctx->r2;
    // 0x8008E08C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8008E090: jal         0x80098CC0
    // 0x8008E094: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_8;
    // 0x8008E094: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8008E098: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008E09C: sw          $v0, 0xB54($at)
    MEM_W(0XB54, ctx->r1) = ctx->r2;
    // 0x8008E0A0: jal         0x8008E0C0
    // 0x8008E0A4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    func_8008E0C0_694C0(rdram, ctx);
        goto after_9;
    // 0x8008E0A4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    after_9:
    // 0x8008E0A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008E0AC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008E0B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E0B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008E0B8: jr          $ra
    // 0x8008E0BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8008E0BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80064198_3F598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064198: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8006419C: lw          $v0, 0x6C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X6C);
    // 0x800641A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x800641A4: lbu         $v1, 0x204($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X204);
    // 0x800641A8: sb          $v1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r3;
    // 0x800641AC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800641B0: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x800641B4: bne         $v0, $zero, L_800641DC
    if (ctx->r2 != 0) {
        // 0x800641B8: nop
    
            goto L_800641DC;
    }
    // 0x800641B8: nop

    // 0x800641BC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800641C0: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x800641C4: lb          $v1, 0x72($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X72);
    // 0x800641C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800641CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800641D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800641D4: j           L_800641FC
    // 0x800641D8: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
        goto L_800641FC;
    // 0x800641D8: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
L_800641DC:
    // 0x800641DC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800641E0: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x800641E4: lb          $v1, 0x72($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X72);
    // 0x800641E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800641EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800641F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800641F4: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x800641F8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_800641FC:
    // 0x800641FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064200: sb          $v0, 0x6B39($at)
    MEM_B(0X6B39, ctx->r1) = ctx->r2;
    // 0x80064204: lbu         $v1, 0x72($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X72);
    // 0x80064208: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8006420C: lw          $a0, 0x6C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X6C);
    // 0x80064210: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    // 0x80064214: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    // 0x80064218: sh          $zero, 0xBC($a2)
    MEM_H(0XBC, ctx->r6) = 0;
    // 0x8006421C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80064220: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80064224: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80064228: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8006422C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064230: sb          $v1, 0x72($a2)
    MEM_B(0X72, ctx->r6) = ctx->r3;
    // 0x80064234: jr          $ra
    // 0x80064238: sw          $a0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80064238: sw          $a0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_80077690_52A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077690: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80077694: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80077698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007769C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800776A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x800776A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800776A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800776AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800776B0: lw          $v0, -0x335C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X335C);
    // 0x800776B4: jalr        $v0
    // 0x800776B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800776B8: nop

    after_0:
    // 0x800776BC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x800776C0: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x800776C4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800776C8: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x800776CC: lbu         $t1, -0x3370($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3370);
    // 0x800776D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800776D4: beq         $v1, $v0, L_8007786C
    if (ctx->r3 == ctx->r2) {
        // 0x800776D8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007786C;
    }
    // 0x800776D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800776DC: beq         $v0, $zero, L_800778C0
    if (ctx->r2 == 0) {
        // 0x800776E0: nop
    
            goto L_800778C0;
    }
    // 0x800776E0: nop

    // 0x800776E4: bne         $v1, $zero, L_800778C0
    if (ctx->r3 != 0) {
        // 0x800776E8: nop
    
            goto L_800778C0;
    }
    // 0x800776E8: nop

    // 0x800776EC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x800776F0: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x800776F4: beq         $v0, $zero, L_80077710
    if (ctx->r2 == 0) {
        // 0x800776F8: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80077710;
    }
    // 0x800776F8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x800776FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80077700: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x80077704: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x80077708: j           L_80077880
    // 0x8007770C: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
        goto L_80077880;
    // 0x8007770C: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
L_80077710:
    // 0x80077710: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80077714: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80077718: bne         $v1, $v0, L_8007785C
    if (ctx->r3 != ctx->r2) {
        // 0x8007771C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8007785C;
    }
    // 0x8007771C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80077720: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80077724: beq         $v0, $zero, L_8007783C
    if (ctx->r2 == 0) {
        // 0x80077728: nop
    
            goto L_8007783C;
    }
    // 0x80077728: nop

    // 0x8007772C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80077730: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x80077734: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x80077738: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8007773C: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077740: mflo        $a0
    ctx->r4 = lo;
    // 0x80077744: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80077748: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x8007774C: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x80077750: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80077754: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077758: mflo        $a2
    ctx->r6 = lo;
    // 0x8007775C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80077760: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x80077764: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    // 0x80077768: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8007776C: mult        $a1, $a1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077770: mflo        $a1
    ctx->r5 = lo;
    // 0x80077774: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x80077778: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007777C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80077780: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80077784: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077788: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8007778C: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077790: mflo        $v1
    ctx->r3 = lo;
    // 0x80077794: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80077798: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8007779C: sltu        $a0, $v1, $a0
    ctx->r4 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800777A0: bne         $a0, $zero, L_800778C0
    if (ctx->r4 != 0) {
        // 0x800777A4: nop
    
            goto L_800778C0;
    }
    // 0x800777A4: nop

    // 0x800777A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800777AC: lb          $v0, 0x4A24($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A24);
    // 0x800777B0: bne         $v0, $zero, L_800778C0
    if (ctx->r2 != 0) {
        // 0x800777B4: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_800778C0;
    }
    // 0x800777B4: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x800777B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800777BC: lw          $v0, 0x4B38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B38);
    // 0x800777C0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800777C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800777C8: sw          $v0, 0x4B38($at)
    MEM_W(0X4B38, ctx->r1) = ctx->r2;
    // 0x800777CC: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x800777D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800777D4: beq         $a0, $v0, L_800777F8
    if (ctx->r4 == ctx->r2) {
        // 0x800777D8: slti        $v0, $a0, 0x3
        ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
            goto L_800777F8;
    }
    // 0x800777D8: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x800777DC: bne         $v0, $zero, L_80077804
    if (ctx->r2 != 0) {
        // 0x800777E0: addiu       $t1, $zero, 0x20
        ctx->r9 = ADD32(0, 0X20);
            goto L_80077804;
    }
    // 0x800777E0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x800777E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800777E8: beq         $a0, $v0, L_80077800
    if (ctx->r4 == ctx->r2) {
        // 0x800777EC: lui         $a0, 0xFF
        ctx->r4 = S32(0XFF << 16);
            goto L_80077800;
    }
    // 0x800777EC: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x800777F0: j           L_80077808
    // 0x800777F4: nop

        goto L_80077808;
    // 0x800777F4: nop

L_800777F8:
    // 0x800777F8: j           L_80077804
    // 0x800777FC: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
        goto L_80077804;
    // 0x800777FC: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
L_80077800:
    // 0x80077800: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
L_80077804:
    // 0x80077804: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
L_80077808:
    // 0x80077808: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8007780C: addiu       $a1, $a1, 0x4B38
    ctx->r5 = ADD32(ctx->r5, 0X4B38);
    // 0x80077810: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80077814: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80077818: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8007781C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80077820: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80077824: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80077828: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007782C: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x80077830: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077834: j           L_800778C0
    // 0x80077838: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_800778C0;
    // 0x80077838: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_8007783C:
    // 0x8007783C: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x80077840: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x80077844: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
    // 0x80077848: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007784C: addiu       $v0, $v0, -0x4700
    ctx->r2 = ADD32(ctx->r2, -0X4700);
    // 0x80077850: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80077854: j           L_80077894
    // 0x80077858: lui         $v0, 0x3100
    ctx->r2 = S32(0X3100 << 16);
        goto L_80077894;
    // 0x80077858: lui         $v0, 0x3100
    ctx->r2 = S32(0X3100 << 16);
L_8007785C:
    // 0x8007785C: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x80077860: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x80077864: j           L_80077880
    // 0x80077868: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
        goto L_80077880;
    // 0x80077868: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
L_8007786C:
    // 0x8007786C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80077870: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80077874: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x80077878: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x8007787C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_80077880:
    // 0x80077880: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80077884: addiu       $v0, $v0, -0x4700
    ctx->r2 = ADD32(ctx->r2, -0X4700);
    // 0x80077888: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8007788C: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80077890: or          $v0, $t1, $v0
    ctx->r2 = ctx->r9 | ctx->r2;
L_80077894:
    // 0x80077894: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80077898: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007789C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800778A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800778A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800778A8: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800778AC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x800778B0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800778B4: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800778B8: jal         0x80051E18
    // 0x800778BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x800778BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
L_800778C0:
    // 0x800778C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800778C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800778C8: jr          $ra
    // 0x800778CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800778CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80035240_10640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035240: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80035244: lw          $v0, 0x4358($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4358);
    // 0x80035248: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8003524C: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
    // 0x80035250: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80035254: beq         $v0, $zero, L_80035268
    if (ctx->r2 == 0) {
        // 0x80035258: subu        $a1, $v1, $a0
        ctx->r5 = SUB32(ctx->r3, ctx->r4);
            goto L_80035268;
    }
    // 0x80035258: subu        $a1, $v1, $a0
    ctx->r5 = SUB32(ctx->r3, ctx->r4);
    // 0x8003525C: addiu       $v0, $v1, -0x1000
    ctx->r2 = ADD32(ctx->r3, -0X1000);
    // 0x80035260: j           L_80035274
    // 0x80035264: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
        goto L_80035274;
    // 0x80035264: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
L_80035268:
    // 0x80035268: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
    // 0x8003526C: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x80035270: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_80035274:
    // 0x80035274: slt         $v1, $v0, $a1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80035278: beql        $v1, $zero, L_80035280
    if (ctx->r3 == 0) {
        // 0x8003527C: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_80035280;
    }
    goto skip_0;
    // 0x8003527C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    skip_0:
L_80035280:
    // 0x80035280: jr          $ra
    // 0x80035284: nop

    TRACE_RETURN()
    return;
    // 0x80035284: nop

;}
RECOMP_FUNC void func_800455B4_209B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800455B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800455B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800455BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800455C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800455C4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800455C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800455CC: beq         $a2, $zero, L_800455E0
    if (ctx->r6 == 0) {
        // 0x800455D0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800455E0;
    }
    // 0x800455D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800455D4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800455D8: j           L_800455E8
    // 0x800455DC: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
        goto L_800455E8;
    // 0x800455DC: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
L_800455E0:
    // 0x800455E0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800455E4: lhu         $v0, -0x72D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72D0);
L_800455E8:
    // 0x800455E8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800455EC: lhu         $v1, -0x7158($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7158);
    // 0x800455F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800455F4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x800455F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800455FC: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80045600: bltz        $v0, L_80045614
    if (SIGNED(ctx->r2) < 0) {
        // 0x80045604: nop
    
            goto L_80045614;
    }
    // 0x80045604: nop

    // 0x80045608: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004560C: j           L_8004561C
    // 0x80045610: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_8004561C;
    // 0x80045610: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045614:
    // 0x80045614: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045618: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_8004561C:
    // 0x8004561C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80045620: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80045624: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045628: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8004562C: jal         0x800462AC
    // 0x80045630: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800462AC_216AC(rdram, ctx);
        goto after_0;
    // 0x80045630: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80045634: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045638: jal         0x80046364
    // 0x8004563C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80046364_21764(rdram, ctx);
        goto after_1;
    // 0x8004563C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80045640: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80045644: sltu        $s0, $zero, $s0
    ctx->r16 = 0 < ctx->r16 ? 1 : 0;
    // 0x80045648: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x8004564C: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80045650: beq         $s0, $zero, L_800456F4
    if (ctx->r16 == 0) {
        // 0x80045654: nop
    
            goto L_800456F4;
    }
    // 0x80045654: nop

    // 0x80045658: beq         $v1, $zero, L_800456CC
    if (ctx->r3 == 0) {
        // 0x8004565C: nop
    
            goto L_800456CC;
    }
    // 0x8004565C: nop

    // 0x80045660: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80045664: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80045668: bgez        $v0, L_80045674
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004566C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045674;
    }
    // 0x8004566C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045670: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045674:
    // 0x80045674: bltz        $v1, L_8004568C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045678: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8004568C;
    }
    // 0x80045678: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004567C: beq         $v0, $zero, L_800456CC
    if (ctx->r2 == 0) {
        // 0x80045680: nop
    
            goto L_800456CC;
    }
    // 0x80045680: nop

    // 0x80045684: j           L_8004569C
    // 0x80045688: nop

        goto L_8004569C;
    // 0x80045688: nop

L_8004568C:
    // 0x8004568C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045690: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045694: beq         $v0, $zero, L_800456CC
    if (ctx->r2 == 0) {
        // 0x80045698: nop
    
            goto L_800456CC;
    }
    // 0x80045698: nop

L_8004569C:
    // 0x8004569C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x800456A0: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x800456A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800456A8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x800456AC: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x800456B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800456B4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800456B8: sh          $v0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r2;
    // 0x800456BC: jal         0x8004643C
    // 0x800456C0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8004643C_2183C(rdram, ctx);
        goto after_2;
    // 0x800456C0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x800456C4: j           L_80045878
    // 0x800456C8: nop

        goto L_80045878;
    // 0x800456C8: nop

L_800456CC:
    // 0x800456CC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x800456D0: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x800456D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800456D8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x800456DC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x800456E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800456E4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800456E8: sh          $v0, -0x72DC($at)
    MEM_H(-0X72DC, ctx->r1) = ctx->r2;
    // 0x800456EC: j           L_8004586C
    // 0x800456F0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_8004586C;
    // 0x800456F0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_800456F4:
    // 0x800456F4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800456F8: lh          $a0, -0x3FAC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FAC);
    // 0x800456FC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045700: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x80045704: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x80045708: bltzl       $v1, L_80045710
    if (SIGNED(ctx->r3) < 0) {
        // 0x8004570C: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_80045710;
    }
    goto skip_0;
    // 0x8004570C: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    skip_0:
L_80045710:
    // 0x80045710: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80045714: lh          $a1, -0x72D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72D0);
    // 0x80045718: subu        $a0, $a1, $v0
    ctx->r4 = SUB32(ctx->r5, ctx->r2);
    // 0x8004571C: bltz        $a0, L_80045738
    if (SIGNED(ctx->r4) < 0) {
        // 0x80045720: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_80045738;
    }
    // 0x80045720: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80045724: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80045728: beq         $v0, $zero, L_80045750
    if (ctx->r2 == 0) {
        // 0x8004572C: nop
    
            goto L_80045750;
    }
    // 0x8004572C: nop

    // 0x80045730: j           L_80045744
    // 0x80045734: nop

        goto L_80045744;
    // 0x80045734: nop

L_80045738:
    // 0x80045738: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004573C: beq         $v0, $zero, L_80045750
    if (ctx->r2 == 0) {
        // 0x80045740: nop
    
            goto L_80045750;
    }
    // 0x80045740: nop

L_80045744:
    // 0x80045744: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045748: j           L_80045758
    // 0x8004574C: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
        goto L_80045758;
    // 0x8004574C: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
L_80045750:
    // 0x80045750: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045754: lhu         $v0, -0x72D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72D0);
L_80045758:
    // 0x80045758: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004575C: lhu         $v1, -0x7158($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7158);
    // 0x80045760: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045764: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80045768: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8004576C: lh          $a0, -0x3FAA($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FAA);
    // 0x80045770: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045774: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80045778: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x8004577C: bltzl       $v1, L_80045784
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045780: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_80045784;
    }
    goto skip_1;
    // 0x80045780: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    skip_1:
L_80045784:
    // 0x80045784: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80045788: lh          $a1, -0x72CE($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72CE);
    // 0x8004578C: subu        $a0, $a1, $v0
    ctx->r4 = SUB32(ctx->r5, ctx->r2);
    // 0x80045790: bltz        $a0, L_800457AC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80045794: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_800457AC;
    }
    // 0x80045794: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80045798: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004579C: beq         $v0, $zero, L_800457C4
    if (ctx->r2 == 0) {
        // 0x800457A0: nop
    
            goto L_800457C4;
    }
    // 0x800457A0: nop

    // 0x800457A4: j           L_800457B8
    // 0x800457A8: nop

        goto L_800457B8;
    // 0x800457A8: nop

L_800457AC:
    // 0x800457AC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800457B0: beq         $v0, $zero, L_800457C4
    if (ctx->r2 == 0) {
        // 0x800457B4: nop
    
            goto L_800457C4;
    }
    // 0x800457B4: nop

L_800457B8:
    // 0x800457B8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800457BC: j           L_800457CC
    // 0x800457C0: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_800457CC;
    // 0x800457C0: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_800457C4:
    // 0x800457C4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800457C8: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_800457CC:
    // 0x800457CC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800457D0: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x800457D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800457D8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x800457DC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x800457E0: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x800457E4: bgez        $v0, L_800457F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800457E8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_800457F0;
    }
    // 0x800457E8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800457EC: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_800457F0:
    // 0x800457F0: bltz        $v1, L_80045808
    if (SIGNED(ctx->r3) < 0) {
        // 0x800457F4: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80045808;
    }
    // 0x800457F4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800457F8: beq         $v0, $zero, L_80045848
    if (ctx->r2 == 0) {
        // 0x800457FC: nop
    
            goto L_80045848;
    }
    // 0x800457FC: nop

    // 0x80045800: j           L_80045818
    // 0x80045804: nop

        goto L_80045818;
    // 0x80045804: nop

L_80045808:
    // 0x80045808: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8004580C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045810: beq         $v0, $zero, L_80045848
    if (ctx->r2 == 0) {
        // 0x80045814: nop
    
            goto L_80045848;
    }
    // 0x80045814: nop

L_80045818:
    // 0x80045818: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8004581C: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045820: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045824: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80045828: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8004582C: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045830: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045834: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045838: jal         0x8004643C
    // 0x8004583C: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    func_8004643C_2183C(rdram, ctx);
        goto after_3;
    // 0x8004583C: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    after_3:
    // 0x80045840: j           L_80045878
    // 0x80045844: nop

        goto L_80045878;
    // 0x80045844: nop

L_80045848:
    // 0x80045848: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8004584C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80045850: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045854: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80045858: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8004585C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80045860: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045864: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045868: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8004586C:
    // 0x8004586C: jal         0x800463CC
    // 0x80045870: nop

    func_800463CC_217CC(rdram, ctx);
        goto after_4;
    // 0x80045870: nop

    after_4:
    // 0x80045874: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80045878:
    // 0x80045878: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004587C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80045880: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80045884: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80045888: jr          $ra
    // 0x8004588C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004588C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008D218_68618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D218: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008D21C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008D220: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008D224: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008D228: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008D22C: blez        $v0, L_8008D260
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008D230: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8008D260;
    }
    // 0x8008D230: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008D234: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_8008D238:
    // 0x8008D238: lw          $v0, 0x44($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X44);
    // 0x8008D23C: bne         $v0, $a0, L_8008D254
    if (ctx->r2 != ctx->r4) {
        // 0x8008D240: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8008D254;
    }
    // 0x8008D240: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8008D244: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008D248: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8008D24C: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x8008D250: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8008D254:
    // 0x8008D254: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8008D258: bne         $v0, $zero, L_8008D238
    if (ctx->r2 != 0) {
        // 0x8008D25C: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008D238;
    }
    // 0x8008D25C: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008D260:
    // 0x8008D260: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008D264: jr          $ra
    // 0x8008D268: nop

    TRACE_RETURN()
    return;
    // 0x8008D268: nop

;}
RECOMP_FUNC void func_80072340_4D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072340: bltz        $a1, L_800723B8
    if (SIGNED(ctx->r5) < 0) {
        // 0x80072344: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800723B8;
    }
    // 0x80072344: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80072348: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8007234C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80072350: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x80072354: bltz        $v1, L_800723B8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072358: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_800723B8;
    }
    // 0x80072358: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8007235C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072360: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x80072364: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072368: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x8007236C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072370: addu        $a3, $v0, $v1
    ctx->r7 = ADD32(ctx->r2, ctx->r3);
    // 0x80072374: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x80072378: andi        $v0, $a1, 0xF
    ctx->r2 = ctx->r5 & 0XF;
    // 0x8007237C: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x80072380: srlv        $v0, $a2, $a0
    ctx->r2 = S32(U32(ctx->r6) >> (ctx->r4 & 31));
    // 0x80072384: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x80072388: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007238C: beq         $v1, $v0, L_800723B4
    if (ctx->r3 == ctx->r2) {
        // 0x80072390: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800723B4;
    }
    // 0x80072390: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80072394: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x80072398: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8007239C: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x800723A0: sllv        $v1, $v1, $a0
    ctx->r3 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x800723A4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800723A8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x800723AC: j           L_800723B8
    // 0x800723B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800723B8;
    // 0x800723B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800723B4:
    // 0x800723B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800723B8:
    // 0x800723B8: jr          $ra
    // 0x800723BC: nop

    TRACE_RETURN()
    return;
    // 0x800723BC: nop

;}
RECOMP_FUNC void func_80030660_BA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030660: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80030664: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80030668: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x8003066C: jr          $ra
    // 0x80030670: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030670: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8006E838_49C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006E838: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006E83C: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8006E840: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006E844: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006E848: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006E84C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006E850: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8006E854: bne         $v0, $zero, L_8006EB58
    if (ctx->r2 != 0) {
        // 0x8006E858: sw          $s1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r17;
            goto L_8006EB58;
    }
    // 0x8006E858: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006E85C: lw          $s2, 0x188($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X188);
    // 0x8006E860: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8006E864: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8006E868: and         $s1, $s2, $v0
    ctx->r17 = ctx->r18 & ctx->r2;
    // 0x8006E86C: bne         $s1, $zero, L_8006E88C
    if (ctx->r17 != 0) {
        // 0x8006E870: addiu       $a1, $s0, 0x190
        ctx->r5 = ADD32(ctx->r16, 0X190);
            goto L_8006E88C;
    }
    // 0x8006E870: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8006E874: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8006E878: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006E87C: beq         $v0, $zero, L_8006EB2C
    if (ctx->r2 == 0) {
        // 0x8006E880: nop
    
            goto L_8006EB2C;
    }
    // 0x8006E880: nop

    // 0x8006E884: beq         $s1, $zero, L_8006E8A8
    if (ctx->r17 == 0) {
        // 0x8006E888: nop
    
            goto L_8006E8A8;
    }
    // 0x8006E888: nop

L_8006E88C:
    // 0x8006E88C: lb          $v0, 0x16C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X16C);
    // 0x8006E890: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006E894: mflo        $v0
    ctx->r2 = lo;
    // 0x8006E898: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8006E89C: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x8006E8A0: beql        $s1, $zero, L_8006E8A8
    if (ctx->r17 == 0) {
        // 0x8006E8A4: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8006E8A8;
    }
    goto skip_0;
    // 0x8006E8A4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
L_8006E8A8:
    // 0x8006E8A8: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x8006E8AC: bgtz        $v0, L_8006E980
    if (SIGNED(ctx->r2) > 0) {
        // 0x8006E8B0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006E980;
    }
    // 0x8006E8B0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006E8B4: bnel        $v0, $zero, L_8006E910
    if (ctx->r2 != 0) {
        // 0x8006E8B8: andi        $v1, $v1, 0x7F
        ctx->r3 = ctx->r3 & 0X7F;
            goto L_8006E910;
    }
    goto skip_1;
    // 0x8006E8B8: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    skip_1:
    // 0x8006E8BC: lh          $v0, 0x6($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X6);
    // 0x8006E8C0: beq         $v0, $zero, L_8006E8D8
    if (ctx->r2 == 0) {
        // 0x8006E8C4: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_8006E8D8;
    }
    // 0x8006E8C4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8006E8C8: jal         0x8004EC38
    // 0x8006E8CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8006E8CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8006E8D0: j           L_8006E8E8
    // 0x8006E8D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8006E8E8;
    // 0x8006E8D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_8006E8D8:
    // 0x8006E8D8: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x8006E8DC: jal         0x80032664
    // 0x8006E8E0: lh          $a1, 0x4($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8006E8E0: lh          $a1, 0x4($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4);
    after_1:
    // 0x8006E8E4: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
L_8006E8E8:
    // 0x8006E8E8: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8006E8EC: lh          $v1, 0x116($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X116);
    // 0x8006E8F0: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8006E8F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E8F8: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8006E8FC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8006E900: srl         $v0, $v0, 10
    ctx->r2 = S32(U32(ctx->r2) >> 10);
    // 0x8006E904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006E908: j           L_8006E928
    // 0x8006E90C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_8006E928;
    // 0x8006E90C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_8006E910:
    // 0x8006E910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E914: bne         $v1, $v0, L_8006E928
    if (ctx->r3 != ctx->r2) {
        // 0x8006E918: nop
    
            goto L_8006E928;
    }
    // 0x8006E918: nop

    // 0x8006E91C: lhu         $v0, 0x116($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X116);
    // 0x8006E920: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8006E924: sh          $v0, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r2;
L_8006E928:
    // 0x8006E928: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x8006E92C: andi        $v1, $v0, 0x7F
    ctx->r3 = ctx->r2 & 0X7F;
    // 0x8006E930: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006E934: beq         $v1, $v0, L_8006E94C
    if (ctx->r3 == ctx->r2) {
        // 0x8006E938: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8006E94C;
    }
    // 0x8006E938: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8006E93C: beq         $v1, $v0, L_8006E964
    if (ctx->r3 == ctx->r2) {
        // 0x8006E940: lui         $v0, 0x100
        ctx->r2 = S32(0X100 << 16);
            goto L_8006E964;
    }
    // 0x8006E940: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8006E944: j           L_8006E984
    // 0x8006E948: nop

        goto L_8006E984;
    // 0x8006E948: nop

L_8006E94C:
    // 0x8006E94C: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E950: lhu         $v1, 0x116($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X116);
    // 0x8006E954: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006E958: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006E95C: j           L_8006E978
    // 0x8006E960: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
        goto L_8006E978;
    // 0x8006E960: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
L_8006E964:
    // 0x8006E964: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E968: lhu         $v1, 0x116($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X116);
    // 0x8006E96C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006E970: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006E974: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
L_8006E978:
    // 0x8006E978: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006E97C: sh          $v1, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r3;
L_8006E980:
    // 0x8006E980: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
L_8006E984:
    // 0x8006E984: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006E988: sb          $zero, 0x174($s0)
    MEM_B(0X174, ctx->r16) = 0;
    // 0x8006E98C: beq         $v0, $zero, L_8006E99C
    if (ctx->r2 == 0) {
        // 0x8006E990: sb          $zero, 0x177($s0)
        MEM_B(0X177, ctx->r16) = 0;
            goto L_8006E99C;
    }
    // 0x8006E990: sb          $zero, 0x177($s0)
    MEM_B(0X177, ctx->r16) = 0;
    // 0x8006E994: jal         0x8004A2AC
    // 0x8006E998: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004A2AC_256AC(rdram, ctx);
        goto after_2;
    // 0x8006E998: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_8006E99C:
    // 0x8006E99C: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x8006E9A0: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006E9A4: beq         $v0, $zero, L_8006E9B4
    if (ctx->r2 == 0) {
        // 0x8006E9A8: nop
    
            goto L_8006E9B4;
    }
    // 0x8006E9A8: nop

    // 0x8006E9AC: jal         0x8004A36C
    // 0x8006E9B0: nop

    func_8004A36C_2576C(rdram, ctx);
        goto after_3;
    // 0x8006E9B0: nop

    after_3:
L_8006E9B4:
    // 0x8006E9B4: jal         0x8004A2AC
    // 0x8006E9B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A2AC_256AC(rdram, ctx);
        goto after_4;
    // 0x8006E9B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8006E9BC: bne         $v0, $zero, L_8006E9D4
    if (ctx->r2 != 0) {
        // 0x8006E9C0: nop
    
            goto L_8006E9D4;
    }
    // 0x8006E9C0: nop

    // 0x8006E9C4: jal         0x8004A324
    // 0x8006E9C8: nop

    func_8004A324_25724(rdram, ctx);
        goto after_5;
    // 0x8006E9C8: nop

    after_5:
    // 0x8006E9CC: beq         $v0, $zero, L_8006EA78
    if (ctx->r2 == 0) {
        // 0x8006E9D0: nop
    
            goto L_8006EA78;
    }
    // 0x8006E9D0: nop

L_8006E9D4:
    // 0x8006E9D4: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8006E9D8: blez        $v0, L_8006EA04
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006E9DC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006EA04;
    }
    // 0x8006E9DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006E9E0: subu        $v0, $v1, $s1
    ctx->r2 = SUB32(ctx->r3, ctx->r17);
    // 0x8006E9E4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8006E9E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006E9EC: bgtz        $v0, L_8006EA0C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8006E9F0: nop
    
            goto L_8006EA0C;
    }
    // 0x8006E9F0: nop

    // 0x8006E9F4: jal         0x8004A36C
    // 0x8006E9F8: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    func_8004A36C_2576C(rdram, ctx);
        goto after_6;
    // 0x8006E9F8: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    after_6:
    // 0x8006E9FC: j           L_8006EA0C
    // 0x8006EA00: nop

        goto L_8006EA0C;
    // 0x8006EA00: nop

L_8006EA04:
    // 0x8006EA04: subu        $v0, $v1, $s1
    ctx->r2 = SUB32(ctx->r3, ctx->r17);
    // 0x8006EA08: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_8006EA0C:
    // 0x8006EA0C: lbu         $v1, 0x73($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X73);
    // 0x8006EA10: lb          $v0, 0x16A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X16A);
    // 0x8006EA14: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8006EA18: sb          $v1, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r3;
    // 0x8006EA1C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8006EA20: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8006EA24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006EA28: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8006EA2C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006EA30: beq         $v0, $zero, L_8006EA48
    if (ctx->r2 == 0) {
        // 0x8006EA34: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EA48;
    }
    // 0x8006EA34: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006EA38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006EA40: j           L_8006EAEC
    // 0x8006EA44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006EAEC;
    // 0x8006EA44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006EA48:
    // 0x8006EA48: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006EA4C: bne         $v0, $zero, L_8006EAE4
    if (ctx->r2 != 0) {
        // 0x8006EA50: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EAE4;
    }
    // 0x8006EA50: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006EA54: lui         $v0, 0x4100
    ctx->r2 = S32(0X4100 << 16);
    // 0x8006EA58: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006EA5C: bne         $v0, $zero, L_8006EAE4
    if (ctx->r2 != 0) {
        // 0x8006EA60: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EAE4;
    }
    // 0x8006EA60: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006EA64: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8006EA68: bgtz        $v0, L_8006EAC4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8006EA6C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EAC4;
    }
    // 0x8006EA6C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006EA70: j           L_8006EAE8
    // 0x8006EA74: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8006EAE8;
    // 0x8006EA74: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8006EA78:
    // 0x8006EA78: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8006EA7C: blez        $v0, L_8006EA94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006EA80: nop
    
            goto L_8006EA94;
    }
    // 0x8006EA80: nop

    // 0x8006EA84: jal         0x8004A2AC
    // 0x8006EA88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004A2AC_256AC(rdram, ctx);
        goto after_7;
    // 0x8006EA88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8006EA8C: j           L_8006EA9C
    // 0x8006EA90: nop

        goto L_8006EA9C;
    // 0x8006EA90: nop

L_8006EA94:
    // 0x8006EA94: jal         0x8004A36C
    // 0x8006EA98: nop

    func_8004A36C_2576C(rdram, ctx);
        goto after_8;
    // 0x8006EA98: nop

    after_8:
L_8006EA9C:
    // 0x8006EA9C: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006EAA0: bne         $v0, $zero, L_8006EAE4
    if (ctx->r2 != 0) {
        // 0x8006EAA4: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EAE4;
    }
    // 0x8006EAA4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006EAA8: lui         $v0, 0x4100
    ctx->r2 = S32(0X4100 << 16);
    // 0x8006EAAC: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006EAB0: bne         $v0, $zero, L_8006EAE4
    if (ctx->r2 != 0) {
        // 0x8006EAB4: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EAE4;
    }
    // 0x8006EAB4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006EAB8: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8006EABC: blez        $v0, L_8006EAE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006EAC0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006EAE4;
    }
    // 0x8006EAC0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8006EAC4:
    // 0x8006EAC4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8006EAC8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8006EACC: bne         $v1, $v0, L_8006EAE4
    if (ctx->r3 != ctx->r2) {
        // 0x8006EAD0: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8006EAE4;
    }
    // 0x8006EAD0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8006EAD4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006EAD8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8006EADC: bne         $v0, $zero, L_8006EAEC
    if (ctx->r2 != 0) {
        // 0x8006EAE0: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8006EAEC;
    }
    // 0x8006EAE0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8006EAE4:
    // 0x8006EAE4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8006EAE8:
    // 0x8006EAE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8006EAEC:
    // 0x8006EAEC: jal         0x800A3450
    // 0x8006EAF0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x8006EAF0: nop

    after_9:
    // 0x8006EAF4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8006EAF8: lbu         $a0, 0x71($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X71);
    // 0x8006EAFC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8006EB00: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8006EB04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006EB08: andi        $a0, $a0, 0x7F
    ctx->r4 = ctx->r4 & 0X7F;
    // 0x8006EB0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006EB10: bne         $a0, $v0, L_8006EB24
    if (ctx->r4 != ctx->r2) {
        // 0x8006EB14: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8006EB24;
    }
    // 0x8006EB14: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8006EB18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006EB1C: j           L_8006EB58
    // 0x8006EB20: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8006EB58;
    // 0x8006EB20: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8006EB24:
    // 0x8006EB24: j           L_8006EB58
    // 0x8006EB28: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8006EB58;
    // 0x8006EB28: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8006EB2C:
    // 0x8006EB2C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8006EB30: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8006EB34: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8006EB38: bne         $v0, $zero, L_8006EB58
    if (ctx->r2 != 0) {
        // 0x8006EB3C: nop
    
            goto L_8006EB58;
    }
    // 0x8006EB3C: nop

    // 0x8006EB40: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x8006EB44: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8006EB48: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x8006EB4C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8006EB50: bltzl       $v0, L_8006EB58
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006EB54: sb          $zero, 0x73($s0)
        MEM_B(0X73, ctx->r16) = 0;
            goto L_8006EB58;
    }
    goto skip_2;
    // 0x8006EB54: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    skip_2:
L_8006EB58:
    // 0x8006EB58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006EB5C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8006EB60: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8006EB64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006EB68: jr          $ra
    // 0x8006EB6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8006EB6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80087420_62820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087420: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80087424: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80087428: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8008742C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80087430: bgez        $v1, L_8008743C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80087434: addu        $t0, $a0, $zero
        ctx->r8 = ADD32(ctx->r4, 0);
            goto L_8008743C;
    }
    // 0x80087434: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80087438: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_8008743C:
    // 0x8008743C: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80087440: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80087444: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80087448: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8008744C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80087450: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80087458: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8008745C: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80087460: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80087464: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80087468: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x8008746C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80087470: beq         $v0, $zero, L_800874C8
    if (ctx->r2 == 0) {
        // 0x80087474: nop
    
            goto L_800874C8;
    }
    // 0x80087474: nop

    // 0x80087478: sll         $t1, $t2, 16
    ctx->r9 = S32(ctx->r10 << 16);
    // 0x8008747C: sra         $t3, $t1, 16
    ctx->r11 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80087480: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x80087484: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
L_80087488:
    // 0x80087488: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
    // 0x8008748C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80087490: beql        $v0, $zero, L_800874BC
    if (ctx->r2 == 0) {
        // 0x80087494: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800874BC;
    }
    goto skip_0;
    // 0x80087494: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80087498: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8008749C: addu        $a3, $v1, $v0
    ctx->r7 = ADD32(ctx->r3, ctx->r2);
L_800874A0:
    // 0x800874A0: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x800874A4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800874A8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x800874AC: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800874B0: bne         $v0, $zero, L_800874A0
    if (ctx->r2 != 0) {
        // 0x800874B4: addiu       $a1, $a1, 0x20
        ctx->r5 = ADD32(ctx->r5, 0X20);
            goto L_800874A0;
    }
    // 0x800874B4: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x800874B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800874BC:
    // 0x800874BC: slt         $v0, $a0, $t2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800874C0: bnel        $v0, $zero, L_80087488
    if (ctx->r2 != 0) {
        // 0x800874C4: sra         $v1, $a2, 16
        ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
            goto L_80087488;
    }
    goto skip_1;
    // 0x800874C4: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    skip_1:
L_800874C8:
    // 0x800874C8: jr          $ra
    // 0x800874CC: nop

    TRACE_RETURN()
    return;
    // 0x800874CC: nop

;}
RECOMP_FUNC void func_8004A6D8_25AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A6D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004A6DC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8004A6E0: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8004A6E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004A6E8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004A6EC: addiu       $a1, $a1, 0x22F0
    ctx->r5 = ADD32(ctx->r5, 0X22F0);
    // 0x8004A6F0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8004A6F4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8004A6F8: jal         0x8009A3B4
    // 0x8004A6FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8004A6FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x8004A700: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8004A704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004A708: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004A70C: addiu       $a1, $a1, 0x22FC
    ctx->r5 = ADD32(ctx->r5, 0X22FC);
    // 0x8004A710: jal         0x8009A3B4
    // 0x8004A714: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8004A714: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x8004A718: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004A71C: lw          $v0, -0x2F38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F38);
    // 0x8004A720: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004A724: beq         $v0, $zero, L_8004A808
    if (ctx->r2 == 0) {
        // 0x8004A728: addiu       $t5, $zero, 0x80
        ctx->r13 = ADD32(0, 0X80);
            goto L_8004A808;
    }
    // 0x8004A728: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x8004A72C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8004A730: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A734: lw          $v1, 0x4978($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4978);
    // 0x8004A738: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8004A73C: addiu       $t4, $sp, 0x29
    ctx->r12 = ADD32(ctx->r29, 0X29);
    // 0x8004A740: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8004A744: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004A748: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004A74C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8004A750: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8004A754: lbu         $t0, -0x354E($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X354E);
    // 0x8004A758: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8004A75C: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x8004A760: lbu         $t3, -0x354D($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X354D);
    // 0x8004A764: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004A768: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004A76C: lh          $a0, -0x3548($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3548);
    // 0x8004A770: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A774: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8004A778: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8004A77C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8004A780: lh          $a1, -0x3546($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3546);
    // 0x8004A784: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004A788: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x8004A78C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004A790: sra         $t2, $v1, 9
    ctx->r10 = S32(SIGNED(ctx->r3) >> 9);
    // 0x8004A794: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8004A798: sra         $t1, $v0, 9
    ctx->r9 = S32(SIGNED(ctx->r2) >> 9);
L_8004A79C:
    // 0x8004A79C: lb          $v0, 0x0($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X0);
    // 0x8004A7A0: lb          $v1, 0x0($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X0);
    // 0x8004A7A4: addu        $a1, $t2, $v0
    ctx->r5 = ADD32(ctx->r10, ctx->r2);
    // 0x8004A7A8: sltu        $v0, $a1, $t0
    ctx->r2 = ctx->r5 < ctx->r8 ? 1 : 0;
    // 0x8004A7AC: beq         $v0, $zero, L_8004A7F8
    if (ctx->r2 == 0) {
        // 0x8004A7B0: addu        $v1, $t1, $v1
        ctx->r3 = ADD32(ctx->r9, ctx->r3);
            goto L_8004A7F8;
    }
    // 0x8004A7B0: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x8004A7B4: sltu        $v0, $v1, $t3
    ctx->r2 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x8004A7B8: beql        $v0, $zero, L_8004A7FC
    if (ctx->r2 == 0) {
        // 0x8004A7BC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8004A7FC;
    }
    goto skip_0;
    // 0x8004A7BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8004A7C0: nop

    // 0x8004A7C4: mult        $t0, $v1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004A7C8: mflo        $v0
    ctx->r2 = lo;
    // 0x8004A7CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8004A7D0: lw          $a0, -0x2610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2610);
    // 0x8004A7D4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8004A7D8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8004A7DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004A7E0: andi        $v0, $a1, 0x7
    ctx->r2 = ctx->r5 & 0X7;
    // 0x8004A7E4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8004A7E8: srav        $v0, $t5, $v0
    ctx->r2 = S32(SIGNED(ctx->r13) >> (ctx->r2 & 31));
    // 0x8004A7EC: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8004A7F0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8004A7F4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_8004A7F8:
    // 0x8004A7F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8004A7FC:
    // 0x8004A7FC: slt         $v0, $a2, $t4
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8004A800: bne         $v0, $zero, L_8004A79C
    if (ctx->r2 != 0) {
        // 0x8004A804: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8004A79C;
    }
    // 0x8004A804: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8004A808:
    // 0x8004A808: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8004A80C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004A810: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004A814: jr          $ra
    // 0x8004A818: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8004A818: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8009431C_6F71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009431C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80094324: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80094328: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8009432C: addiu       $a0, $a0, 0x5430
    ctx->r4 = ADD32(ctx->r4, 0X5430);
    // 0x80094330: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094338: jal         0x8009A5E0
    // 0x8009433C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8009433C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80094340: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80094344: jal         0x800996C0
    // 0x80094348: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    osContStartReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x80094348: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    after_1:
    // 0x8009434C: bne         $v0, $zero, L_8009439C
    if (ctx->r2 != 0) {
        // 0x80094350: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8009439C;
    }
    // 0x80094350: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094354: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80094358: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    // 0x8009435C: jal         0x8009A5E0
    // 0x80094360: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80094360: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80094364: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80094368: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x8009436C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094370: jal         0x8009A710
    // 0x80094374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80094374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80094378: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8009437C: jal         0x80099748
    // 0x80094380: addiu       $a0, $a0, -0x38C8
    ctx->r4 = ADD32(ctx->r4, -0X38C8);
    osContGetReadData_recomp(rdram, ctx);
        goto after_4;
    // 0x80094380: addiu       $a0, $a0, -0x38C8
    ctx->r4 = ADD32(ctx->r4, -0X38C8);
    after_4:
    // 0x80094384: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80094388: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x8009438C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094390: jal         0x8009A5E0
    // 0x80094394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80094394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80094398: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8009439C:
    // 0x8009439C: bne         $v0, $zero, L_800943C4
    if (ctx->r2 != 0) {
        // 0x800943A0: nop
    
            goto L_800943C4;
    }
    // 0x800943A0: nop

    // 0x800943A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800943A8: lw          $v0, -0xE10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XE10);
    // 0x800943AC: beql        $v0, $zero, L_800943C4
    if (ctx->r2 == 0) {
        // 0x800943B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800943C4;
    }
    goto skip_0;
    // 0x800943B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x800943B4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x800943B8: jalr        $v0
    // 0x800943BC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x800943BC: nop

    after_6:
    // 0x800943C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800943C4:
    // 0x800943C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800943C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800943CC: jr          $ra
    // 0x800943D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800943D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800943D4: nop

    // 0x800943D8: nop

    // 0x800943DC: nop

;}
RECOMP_FUNC void func_8009216C_6D56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009216C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80092170: jr          $ra
    // 0x80092174: addiu       $v0, $v0, 0x50B4
    ctx->r2 = ADD32(ctx->r2, 0X50B4);
    TRACE_RETURN()
    return;
    // 0x80092174: addiu       $v0, $v0, 0x50B4
    ctx->r2 = ADD32(ctx->r2, 0X50B4);
;}
RECOMP_FUNC void func_8002FDC0_B1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FDC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002FDC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8002FDC8: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x8002FDCC: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x8002FDD0: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x8002FDD4: lh          $a3, 0x4($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X4);
    // 0x8002FDD8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8002FDDC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8002FDE0: jal         0x8002C8EC
    // 0x8002FDE4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8002C8EC_7CEC(rdram, ctx);
        goto after_0;
    // 0x8002FDE4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8002FDE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8002FDEC: jr          $ra
    // 0x8002FDF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002FDF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80059EFC_352FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059EFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059F00: lbu         $v1, -0x3E3D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3D);
    // 0x80059F04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059F08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80059F0C: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x80059F10: lw          $s0, -0x484C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X484C);
    // 0x80059F14: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80059F18: beq         $v0, $zero, L_8005A2A8
    if (ctx->r2 == 0) {
        // 0x80059F1C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005A2A8;
    }
    // 0x80059F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059F20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80059F24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059F28: addu        $at, $at, $v0
    gpr jr_addend_80059F30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059F2C: lw          $v0, 0x2600($at)
    ctx->r2 = ADD32(ctx->r1, 0X2600);
    // 0x80059F30: jr          $v0
    // 0x80059F34: nop

    switch (jr_addend_80059F30 >> 2) {
        case 0: goto L_80059F38; break;
        case 1: goto L_80059FBC; break;
        case 2: goto L_8005A008; break;
        case 3: goto L_8005A098; break;
        case 4: goto L_8005A11C; break;
        case 5: goto L_8005A184; break;
        case 6: goto L_8005A16C; break;
        case 7: goto L_8005A19C; break;
        case 8: goto L_8005A250; break;
        case 9: goto L_8005A29C; break;
        default: switch_error(__func__, 0x80059F30, 0x800D2600);
    }
    // 0x80059F34: nop

L_80059F38:
    // 0x80059F38: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059F3C: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x80059F40: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x80059F44: jal         0x8009A3B4
    // 0x80059F48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80059F48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80059F4C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059F50: lw          $v0, -0x3E24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E24);
    // 0x80059F54: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80059F58: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x80059F5C: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x80059F60: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x80059F64: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80059F68: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x80059F6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059F70: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x80059F74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059F78: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x80059F7C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059F80: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x80059F84: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80059F88: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80059F8C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059F90: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x80059F94: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80059F98: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059F9C: lbu         $a0, -0x3E3D($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3E3D);
    // 0x80059FA0: addiu       $v0, $v0, -0x76
    ctx->r2 = ADD32(ctx->r2, -0X76);
    // 0x80059FA4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059FA8: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x80059FAC: lh          $v1, 0x18($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X18);
    // 0x80059FB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80059FB4: j           L_8005A218
    // 0x80059FB8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
        goto L_8005A218;
    // 0x80059FB8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
L_80059FBC:
    // 0x80059FBC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059FC0: addiu       $v1, $v1, -0x3E36
    ctx->r3 = ADD32(ctx->r3, -0X3E36);
    // 0x80059FC4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80059FC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80059FCC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80059FD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80059FD4: bne         $v0, $zero, L_80059FF0
    if (ctx->r2 != 0) {
        // 0x80059FD8: nop
    
            goto L_80059FF0;
    }
    // 0x80059FD8: nop

    // 0x80059FDC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059FE0: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x80059FE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059FE8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059FEC: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_80059FF0:
    // 0x80059FF0: jal         0x800597A8
    // 0x80059FF4: nop

    func_800597A8_34BA8(rdram, ctx);
        goto after_1;
    // 0x80059FF4: nop

    after_1:
    // 0x80059FF8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80059FFC: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x8005A000: j           L_8005A2A8
    // 0x8005A004: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8005A2A8;
    // 0x8005A004: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8005A008:
    // 0x8005A008: addiu       $v0, $zero, -0xCF
    ctx->r2 = ADD32(0, -0XCF);
    // 0x8005A00C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A010: sh          $v0, -0x3DDC($at)
    MEM_H(-0X3DDC, ctx->r1) = ctx->r2;
    // 0x8005A014: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8005A018: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A01C: sh          $v0, -0x3DDA($at)
    MEM_H(-0X3DDA, ctx->r1) = ctx->r2;
    // 0x8005A020: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8005A024: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A028: sw          $v0, -0x3DD4($at)
    MEM_W(-0X3DD4, ctx->r1) = ctx->r2;
    // 0x8005A02C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8005A030: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A034: sw          $zero, -0x3DD8($at)
    MEM_W(-0X3DD8, ctx->r1) = 0;
    // 0x8005A038: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A03C: sw          $zero, -0x3DD0($at)
    MEM_W(-0X3DD0, ctx->r1) = 0;
    // 0x8005A040: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A044: sw          $v0, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = ctx->r2;
    // 0x8005A048: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A04C: sw          $v0, -0x3DC4($at)
    MEM_W(-0X3DC4, ctx->r1) = ctx->r2;
    // 0x8005A050: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A054: sw          $v0, -0x3DC0($at)
    MEM_W(-0X3DC0, ctx->r1) = ctx->r2;
    // 0x8005A058: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A05C: sh          $zero, -0x3DB4($at)
    MEM_H(-0X3DB4, ctx->r1) = 0;
    // 0x8005A060: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A064: sh          $zero, -0x3DB6($at)
    MEM_H(-0X3DB6, ctx->r1) = 0;
    // 0x8005A068: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A06C: jal         0x8005A2B8
    // 0x8005A070: sh          $zero, -0x3DB8($at)
    MEM_H(-0X3DB8, ctx->r1) = 0;
    func_8005A2B8_356B8(rdram, ctx);
        goto after_2;
    // 0x8005A070: sh          $zero, -0x3DB8($at)
    MEM_H(-0X3DB8, ctx->r1) = 0;
    after_2:
    // 0x8005A074: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A078: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005A07C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8005A080: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A084: sh          $v1, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r3;
    // 0x8005A088: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005A08C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A090: j           L_8005A2A8
    // 0x8005A094: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
        goto L_8005A2A8;
    // 0x8005A094: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005A098:
    // 0x8005A098: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005A09C: addiu       $a1, $a1, -0x3DD8
    ctx->r5 = ADD32(ctx->r5, -0X3DD8);
    // 0x8005A0A0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8005A0A4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005A0A8: lw          $a0, -0x3DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DD0);
    // 0x8005A0AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005A0B0: lhu         $v1, -0x3DDC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDC);
    // 0x8005A0B4: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8005A0B8: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x8005A0BC: addiu       $v1, $v1, 0xD
    ctx->r3 = ADD32(ctx->r3, 0XD);
    // 0x8005A0C0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8005A0C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A0C8: sh          $v1, -0x3DDC($at)
    MEM_H(-0X3DDC, ctx->r1) = ctx->r3;
    // 0x8005A0CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8005A0D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A0D4: sw          $a0, -0x3DD0($at)
    MEM_W(-0X3DD0, ctx->r1) = ctx->r4;
    // 0x8005A0D8: blez        $v1, L_8005A15C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8005A0DC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005A15C;
    }
    // 0x8005A0DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A0E0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A0E4: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005A0E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005A0EC: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005A0F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005A0F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A0F8: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
    // 0x8005A0FC: jal         0x80061510
    // 0x8005A100: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8005A100: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_3:
    // 0x8005A104: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005A108: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A10C: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
    // 0x8005A110: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A114: j           L_8005A15C
    // 0x8005A118: sh          $zero, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = 0;
        goto L_8005A15C;
    // 0x8005A118: sh          $zero, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = 0;
L_8005A11C:
    // 0x8005A11C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005A120: lh          $v1, -0x3DB0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3DB0);
    // 0x8005A124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005A128: beq         $v1, $v0, L_8005A150
    if (ctx->r3 == ctx->r2) {
        // 0x8005A12C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005A150;
    }
    // 0x8005A12C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005A130: bne         $v0, $zero, L_8005A140
    if (ctx->r2 != 0) {
        // 0x8005A134: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005A140;
    }
    // 0x8005A134: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005A138: beq         $v1, $v0, L_8005A154
    if (ctx->r3 == ctx->r2) {
        // 0x8005A13C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8005A154;
    }
    // 0x8005A13C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8005A140:
    // 0x8005A140: jal         0x8005A404
    // 0x8005A144: nop

    func_8005A404_35804(rdram, ctx);
        goto after_4;
    // 0x8005A144: nop

    after_4:
    // 0x8005A148: j           L_8005A15C
    // 0x8005A14C: nop

        goto L_8005A15C;
    // 0x8005A14C: nop

L_8005A150:
    // 0x8005A150: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8005A154:
    // 0x8005A154: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A158: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005A15C:
    // 0x8005A15C: jal         0x8005A3E8
    // 0x8005A160: nop

    func_8005A3E8_357E8(rdram, ctx);
        goto after_5;
    // 0x8005A160: nop

    after_5:
    // 0x8005A164: j           L_8005A2A8
    // 0x8005A168: nop

        goto L_8005A2A8;
    // 0x8005A168: nop

L_8005A16C:
    // 0x8005A16C: jal         0x8005A3E8
    // 0x8005A170: nop

    func_8005A3E8_357E8(rdram, ctx);
        goto after_6;
    // 0x8005A170: nop

    after_6:
    // 0x8005A174: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005A178: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005A17C: bltz        $v0, L_8005A2A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005A180: nop
    
            goto L_8005A2A8;
    }
    // 0x8005A180: nop

L_8005A184:
    // 0x8005A184: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005A188: addiu       $v1, $v1, -0x3E3D
    ctx->r3 = ADD32(ctx->r3, -0X3E3D);
    // 0x8005A18C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8005A190: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005A194: j           L_8005A2A8
    // 0x8005A198: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_8005A2A8;
    // 0x8005A198: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8005A19C:
    // 0x8005A19C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005A1A0: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x8005A1A4: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x8005A1A8: jal         0x8009A3B4
    // 0x8005A1AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8005A1AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8005A1B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A1B4: lw          $v0, -0x3E24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E24);
    // 0x8005A1B8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005A1BC: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x8005A1C0: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8005A1C4: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x8005A1C8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8005A1CC: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x8005A1D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A1D4: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x8005A1D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A1DC: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x8005A1E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A1E4: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x8005A1E8: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8005A1EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A1F0: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x8005A1F4: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8005A1F8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005A1FC: lbu         $a0, -0x3E3D($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3E3D);
    // 0x8005A200: addiu       $v0, $v0, -0x76
    ctx->r2 = ADD32(ctx->r2, -0X76);
    // 0x8005A204: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A208: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x8005A20C: lh          $v1, 0x18($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X18);
    // 0x8005A210: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005A214: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8005A218:
    // 0x8005A218: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A21C: sw          $v0, -0x3DEC($at)
    MEM_W(-0X3DEC, ctx->r1) = ctx->r2;
    // 0x8005A220: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005A224: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A228: sw          $a1, -0x3DE8($at)
    MEM_W(-0X3DE8, ctx->r1) = ctx->r5;
    // 0x8005A22C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A230: sw          $a2, -0x3DE4($at)
    MEM_W(-0X3DE4, ctx->r1) = ctx->r6;
    // 0x8005A234: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A238: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x8005A23C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A240: sb          $a0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r4;
    // 0x8005A244: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A248: j           L_8005A2A8
    // 0x8005A24C: sw          $v1, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r3;
        goto L_8005A2A8;
    // 0x8005A24C: sw          $v1, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r3;
L_8005A250:
    // 0x8005A250: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005A254: addiu       $v1, $v1, -0x3E36
    ctx->r3 = ADD32(ctx->r3, -0X3E36);
    // 0x8005A258: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005A25C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005A260: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8005A264: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005A268: bne         $v0, $zero, L_8005A284
    if (ctx->r2 != 0) {
        // 0x8005A26C: nop
    
            goto L_8005A284;
    }
    // 0x8005A26C: nop

    // 0x8005A270: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A274: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005A278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005A27C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A280: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005A284:
    // 0x8005A284: jal         0x800597A8
    // 0x8005A288: nop

    func_800597A8_34BA8(rdram, ctx);
        goto after_8;
    // 0x8005A288: nop

    after_8:
    // 0x8005A28C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8005A290: addiu       $v0, $v0, -0x24
    ctx->r2 = ADD32(ctx->r2, -0X24);
    // 0x8005A294: j           L_8005A2A8
    // 0x8005A298: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8005A2A8;
    // 0x8005A298: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8005A29C:
    // 0x8005A29C: lui         $v0, 0x305
    ctx->r2 = S32(0X305 << 16);
    // 0x8005A2A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A2A4: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005A2A8:
    // 0x8005A2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A2AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005A2B0: jr          $ra
    // 0x8005A2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005A2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C8EC_7CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C8EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002C8F0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8002C8F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002C8F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002C8FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002C900: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8002C904: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002C908: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8002C90C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8002C910: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8002C914: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002C918: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002C91C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8002C920: sra         $a0, $a1, 16
    ctx->r4 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002C924: sra         $a1, $a2, 16
    ctx->r5 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002C928: sra         $a2, $a3, 16
    ctx->r6 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8002C92C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002C930: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8002C934: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8002C938: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002C93C: jal         0x8002C9BC
    // 0x8002C940: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_0;
    // 0x8002C940: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    after_0:
    // 0x8002C944: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002C948: bnel        $a0, $zero, L_8002C988
    if (ctx->r4 != 0) {
        // 0x8002C94C: sw          $s0, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r16;
            goto L_8002C988;
    }
    goto skip_0;
    // 0x8002C94C: sw          $s0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r16;
    skip_0:
    // 0x8002C950: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002C954: lw          $v0, 0x2700($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2700);
    // 0x8002C958: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8002C95C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002C960: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C964: sw          $v1, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r3;
    // 0x8002C968: beq         $a0, $zero, L_8002C99C
    if (ctx->r4 == 0) {
        // 0x8002C96C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_8002C99C;
    }
    // 0x8002C96C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8002C970: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002C974: lw          $v0, 0x2704($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2704);
    // 0x8002C978: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C97C: sw          $a0, 0x2704($at)
    MEM_W(0X2704, ctx->r1) = ctx->r4;
    // 0x8002C980: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002C984: sw          $s0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r16;
L_8002C988:
    // 0x8002C988: sh          $s1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r17;
    // 0x8002C98C: sh          $s2, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r18;
    // 0x8002C990: sh          $s3, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r19;
    // 0x8002C994: sh          $s4, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r20;
    // 0x8002C998: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8002C99C:
    // 0x8002C99C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002C9A0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8002C9A4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C9A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002C9AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002C9B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002C9B4: jr          $ra
    // 0x8002C9B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002C9B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80093998_6ED98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093998: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8009399C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800939A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800939A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800939A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800939AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800939B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800939B4: sh          $zero, -0x3C3E($at)
    MEM_H(-0X3C3E, ctx->r1) = 0;
    // 0x800939B8: jr          $ra
    // 0x800939BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800939BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_800710E4_4C4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800710E4: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x800710E8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x800710EC: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800710F0: lb          $v0, 0x4F7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X4F7);
    // 0x800710F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800710F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800710FC: lw          $v1, 0x351C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X351C);
    // 0x80071100: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80071104: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80071108: jr          $ra
    // 0x8007110C: lh          $v0, 0x6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6);
    TRACE_RETURN()
    return;
    // 0x8007110C: lh          $v0, 0x6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6);
;}
RECOMP_FUNC void func_800657D8_40BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800657D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800657DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800657E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800657E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800657E8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x800657EC: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x800657F0: bne         $v1, $zero, L_80065804
    if (ctx->r3 != 0) {
        // 0x800657F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80065804;
    }
    // 0x800657F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800657F8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800657FC: j           L_80065820
    // 0x80065800: lw          $a0, -0x3E80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E80);
        goto L_80065820;
    // 0x80065800: lw          $a0, -0x3E80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E80);
L_80065804:
    // 0x80065804: bne         $v1, $v0, L_80065830
    if (ctx->r3 != ctx->r2) {
        // 0x80065808: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80065830;
    }
    // 0x80065808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006580C: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80065810: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80065814: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80065818: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8006581C: lw          $a0, -0x3B94($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3B94);
L_80065820:
    // 0x80065820: jal         0x800695D4
    // 0x80065824: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    func_800695D4_449D4(rdram, ctx);
        goto after_0;
    // 0x80065824: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    after_0:
    // 0x80065828: j           L_8006591C
    // 0x8006582C: nop

        goto L_8006591C;
    // 0x8006582C: nop

L_80065830:
    // 0x80065830: bne         $v1, $v0, L_80065850
    if (ctx->r3 != ctx->r2) {
        // 0x80065834: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80065850;
    }
    // 0x80065834: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80065838: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8006583C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80065840: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80065844: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80065848: j           L_80065860
    // 0x8006584C: lw          $a0, -0x3B94($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3B94);
        goto L_80065860;
    // 0x8006584C: lw          $a0, -0x3B94($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3B94);
L_80065850:
    // 0x80065850: bne         $v1, $v0, L_80065898
    if (ctx->r3 != ctx->r2) {
        // 0x80065854: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80065898;
    }
    // 0x80065854: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80065858: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8006585C: lw          $a0, -0x3E74($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E74);
L_80065860:
    // 0x80065860: jal         0x800696F0
    // 0x80065864: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800696F0_44AF0(rdram, ctx);
        goto after_1;
    // 0x80065864: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_1:
    // 0x80065868: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006586C: addiu       $v1, $zero, 0xC6
    ctx->r3 = ADD32(0, 0XC6);
    // 0x80065870: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x80065874: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80065878: sb          $v1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r3;
    // 0x8006587C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80065880: sb          $v1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r3;
    // 0x80065884: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80065888: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x8006588C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80065890: j           L_8006591C
    // 0x80065894: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
        goto L_8006591C;
    // 0x80065894: sb          $v1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r3;
L_80065898:
    // 0x80065898: bne         $v1, $v0, L_8006591C
    if (ctx->r3 != ctx->r2) {
        // 0x8006589C: nop
    
            goto L_8006591C;
    }
    // 0x8006589C: nop

    // 0x800658A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800658A4: lbu         $v0, 0x2E5C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E5C);
    // 0x800658A8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x800658AC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800658B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800658B4: lbu         $v0, 0x2E5D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E5D);
    // 0x800658B8: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x800658BC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800658C0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800658C4: lbu         $v0, 0x2E5E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E5E);
    // 0x800658C8: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x800658CC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800658D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800658D4: lbu         $v0, 0x2E5F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E5F);
    // 0x800658D8: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x800658DC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800658E0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800658E4: lbu         $v0, 0x2E60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E60);
    // 0x800658E8: sb          $v0, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r2;
    // 0x800658EC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800658F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800658F4: lbu         $v0, 0x2E61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E61);
    // 0x800658F8: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x800658FC: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80065900: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80065904: lbu         $v0, 0x2E62($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E62);
    // 0x80065908: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8006590C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80065910: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80065914: lbu         $v0, 0x2E63($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2E63);
    // 0x80065918: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_8006591C:
    // 0x8006591C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80065920: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80065924: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80065928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006592C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80065930: jr          $ra
    // 0x80065934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80065934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005C0F0_374F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C0F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C0F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005C0F8: addiu       $a1, $a1, -0x16CC
    ctx->r5 = ADD32(ctx->r5, -0X16CC);
    // 0x8005C0FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8005C100: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005C104: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005C108: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005C10C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C110: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8005C114: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8005C118: lbu         $a0, 0x10($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X10);
    // 0x8005C11C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005C120: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8005C124: beq         $v1, $v0, L_8005C228
    if (ctx->r3 == ctx->r2) {
        // 0x8005C128: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8005C228;
    }
    // 0x8005C128: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8005C12C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x8005C130: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8005C134: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8005C138:
    // 0x8005C138: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x8005C13C: bne         $v0, $s3, L_8005C198
    if (ctx->r2 != ctx->r19) {
        // 0x8005C140: nop
    
            goto L_8005C198;
    }
    // 0x8005C140: nop

    // 0x8005C144: lbu         $v0, 0x11($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X11);
    // 0x8005C148: bne         $v0, $s3, L_8005C168
    if (ctx->r2 != ctx->r19) {
        // 0x8005C14C: nop
    
            goto L_8005C168;
    }
    // 0x8005C14C: nop

    // 0x8005C150: jal         0x8006033C
    // 0x8005C154: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005C154: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_0:
    // 0x8005C158: bne         $v0, $zero, L_8005C1EC
    if (ctx->r2 != 0) {
        // 0x8005C15C: nop
    
            goto L_8005C1EC;
    }
    // 0x8005C15C: nop

    // 0x8005C160: j           L_8005C214
    // 0x8005C164: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_8005C214;
    // 0x8005C164: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_8005C168:
    // 0x8005C168: lbu         $a0, 0x10($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X10);
    // 0x8005C16C: jal         0x8006033C
    // 0x8005C170: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8005C170: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_1:
    // 0x8005C174: beql        $v0, $zero, L_8005C214
    if (ctx->r2 == 0) {
        // 0x8005C178: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8005C214;
    }
    goto skip_0;
    // 0x8005C178: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_0:
    // 0x8005C17C: lbu         $a0, 0x11($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X11);
    // 0x8005C180: jal         0x8006033C
    // 0x8005C184: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8005C184: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_2:
    // 0x8005C188: bne         $v0, $zero, L_8005C1E0
    if (ctx->r2 != 0) {
        // 0x8005C18C: nop
    
            goto L_8005C1E0;
    }
    // 0x8005C18C: nop

    // 0x8005C190: j           L_8005C214
    // 0x8005C194: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_8005C214;
    // 0x8005C194: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_8005C198:
    // 0x8005C198: lbu         $a0, 0x10($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X10);
    // 0x8005C19C: jal         0x8006033C
    // 0x8005C1A0: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8005C1A0: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_3:
    // 0x8005C1A4: beql        $v0, $zero, L_8005C214
    if (ctx->r2 == 0) {
        // 0x8005C1A8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8005C214;
    }
    goto skip_1;
    // 0x8005C1A8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_1:
    // 0x8005C1AC: lbu         $a0, 0x11($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X11);
    // 0x8005C1B0: jal         0x8006033C
    // 0x8005C1B4: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8005C1B4: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_4:
    // 0x8005C1B8: beql        $v0, $zero, L_8005C214
    if (ctx->r2 == 0) {
        // 0x8005C1BC: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8005C214;
    }
    goto skip_2;
    // 0x8005C1BC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_2:
    // 0x8005C1C0: lbu         $a0, 0x12($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X12);
    // 0x8005C1C4: jal         0x8006033C
    // 0x8005C1C8: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8005C1C8: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_5:
    // 0x8005C1CC: beql        $v0, $zero, L_8005C214
    if (ctx->r2 == 0) {
        // 0x8005C1D0: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8005C214;
    }
    goto skip_3;
    // 0x8005C1D0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_3:
    // 0x8005C1D4: lbu         $a0, 0x12($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X12);
    // 0x8005C1D8: jal         0x80060590
    // 0x8005C1DC: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x8005C1DC: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_6:
L_8005C1E0:
    // 0x8005C1E0: lbu         $a0, 0x11($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X11);
    // 0x8005C1E4: jal         0x80060590
    // 0x8005C1E8: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x8005C1E8: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_7:
L_8005C1EC:
    // 0x8005C1EC: lbu         $a0, 0x10($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X10);
    // 0x8005C1F0: jal         0x80060590
    // 0x8005C1F4: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    func_80060590_3B990(rdram, ctx);
        goto after_8;
    // 0x8005C1F4: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    after_8:
    // 0x8005C1F8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005C1FC: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8005C200: lw          $a0, -0x16C8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16C8);
    // 0x8005C204: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8005C208: jal         0x8006036C
    // 0x8005C20C: addiu       $a0, $a0, 0x2F4
    ctx->r4 = ADD32(ctx->r4, 0X2F4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8005C20C: addiu       $a0, $a0, 0x2F4
    ctx->r4 = ADD32(ctx->r4, 0X2F4);
    after_9:
    // 0x8005C210: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_8005C214:
    // 0x8005C214: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005C218: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8005C21C: lbu         $a0, 0x10($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X10);
    // 0x8005C220: bne         $a0, $s3, L_8005C138
    if (ctx->r4 != ctx->r19) {
        // 0x8005C224: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8005C138;
    }
    // 0x8005C224: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8005C228:
    // 0x8005C228: beq         $s2, $zero, L_8005C234
    if (ctx->r18 == 0) {
        // 0x8005C22C: addiu       $a0, $zero, 0x8B
        ctx->r4 = ADD32(0, 0X8B);
            goto L_8005C234;
    }
    // 0x8005C22C: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    // 0x8005C230: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
L_8005C234:
    // 0x8005C234: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005C238: jal         0x8002A2F8
    // 0x8005C23C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x8005C23C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8005C240: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8005C244: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8005C248: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005C24C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005C250: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C254: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C258: jr          $ra
    // 0x8005C25C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8005C25C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006670C_41B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006670C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80066710: addiu       $t0, $t0, 0x5650
    ctx->r8 = ADD32(ctx->r8, 0X5650);
    // 0x80066714: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066718: sw          $zero, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = 0;
    // 0x8006671C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80066720: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80066724: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80066728: addiu       $a2, $a2, -0x6F90
    ctx->r6 = ADD32(ctx->r6, -0X6F90);
    // 0x8006672C: sra         $v0, $a1, 3
    ctx->r2 = S32(SIGNED(ctx->r5) >> 3);
L_80066730:
    // 0x80066730: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80066734: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80066738: andi        $v0, $a1, 0x7
    ctx->r2 = ctx->r5 & 0X7;
    // 0x8006673C: srav        $v0, $a3, $v0
    ctx->r2 = S32(SIGNED(ctx->r7) >> (ctx->r2 & 31));
    // 0x80066740: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066744: beql        $v1, $zero, L_80066774
    if (ctx->r3 == 0) {
        // 0x80066748: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80066774;
    }
    goto skip_0;
    // 0x80066748: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x8006674C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066750: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x80066754: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80066758: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x8006675C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066760: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x80066764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80066768: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006676C: sw          $v0, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = ctx->r2;
    // 0x80066770: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80066774:
    // 0x80066774: slti        $v0, $a1, 0x40
    ctx->r2 = SIGNED(ctx->r5) < 0X40 ? 1 : 0;
    // 0x80066778: bne         $v0, $zero, L_80066730
    if (ctx->r2 != 0) {
        // 0x8006677C: sra         $v0, $a1, 3
        ctx->r2 = S32(SIGNED(ctx->r5) >> 3);
            goto L_80066730;
    }
    // 0x8006677C: sra         $v0, $a1, 3
    ctx->r2 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80066780: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80066784: lw          $a1, 0x56F8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X56F8);
    // 0x80066788: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x8006678C: beq         $v0, $zero, L_800667B4
    if (ctx->r2 == 0) {
        // 0x80066790: nop
    
            goto L_800667B4;
    }
    // 0x80066790: nop

    // 0x80066794: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_80066798:
    // 0x80066798: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006679C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x800667A0: sb          $v1, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r3;
    // 0x800667A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800667A8: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x800667AC: bne         $v0, $zero, L_80066798
    if (ctx->r2 != 0) {
        // 0x800667B0: nop
    
            goto L_80066798;
    }
    // 0x800667B0: nop

L_800667B4:
    // 0x800667B4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800667B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800667BC: jr          $ra
    // 0x800667C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800667C0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
