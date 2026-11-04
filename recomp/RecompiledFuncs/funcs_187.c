#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022B3D4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B3D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B3D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B3DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B3E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B3E8: bne         $v0, $zero, L_8022B404
    if (ctx->r2 != 0) {
        // 0x8022B3EC: addiu       $a1, $zero, 0x19
        ctx->r5 = ADD32(0, 0X19);
            goto L_8022B404;
    }
    // 0x8022B3EC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8022B3F0: jal         0x80050294
    // 0x8022B3F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B3F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B3F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B3FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B400: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B404:
    // 0x8022B404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B40C: jr          $ra
    // 0x8022B410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022B414: nop

    // 0x8022B418: nop

    // 0x8022B41C: nop

;}
RECOMP_FUNC void func_8022EEA4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EEA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EEA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EEAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EEB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EEB8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022EEBC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022EEC0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022EEC4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8022EEC8: beq         $v0, $zero, L_8022F020
    if (ctx->r2 == 0) {
        // 0x8022EECC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022F020;
    }
    // 0x8022EECC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EED0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EED4: addu        $at, $at, $v0
    gpr jr_addend_8022EEDC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EED8: lw          $v0, 0x1AC0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1AC0);
    // 0x8022EEDC: jr          $v0
    // 0x8022EEE0: nop

    switch (jr_addend_8022EEDC >> 2) {
        case 0: goto L_8022EEE4; break;
        case 1: goto L_8022EF04; break;
        case 2: goto L_8022EF10; break;
        case 3: goto L_8022EF58; break;
        case 4: goto L_8022EF78; break;
        case 5: goto L_8022EFAC; break;
        case 6: goto L_8022EFE0; break;
        default: switch_error(__func__, 0x8022EEDC, 0x80231AC0);
    }
    // 0x8022EEE0: nop

L_8022EEE4:
    // 0x8022EEE4: jal         0x8006FF84
    // 0x8022EEE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022EEE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022EEEC: beq         $v0, $zero, L_8022F020
    if (ctx->r2 == 0) {
        // 0x8022EEF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F020;
    }
    // 0x8022EEF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EEF4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022EEF8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022EEFC: j           L_8022EFD0
    // 0x8022EF00: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_8022EFD0;
    // 0x8022EF00: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022EF04:
    // 0x8022EF04: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022EF08: j           L_8022EFD0
    // 0x8022EF0C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022EFD0;
    // 0x8022EF0C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022EF10:
    // 0x8022EF10: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF14: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EF18: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EF1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EF20: bne         $v0, $zero, L_8022F020
    if (ctx->r2 != 0) {
        // 0x8022EF24: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022F020;
    }
    // 0x8022EF24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EF28: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022EF2C: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x8022EF30: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8022EF34: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x8022EF38: jal         0x80061510
    // 0x8022EF3C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x8022EF3C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022EF40: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x8022EF44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EF48: jal         0x8002A2F8
    // 0x8022EF4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8022EF4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022EF50: j           L_8022EFD0
    // 0x8022EF54: nop

        goto L_8022EFD0;
    // 0x8022EF54: nop

L_8022EF58:
    // 0x8022EF58: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022EF5C: bgez        $v0, L_8022F020
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EF60: nop
    
            goto L_8022F020;
    }
    // 0x8022EF60: nop

    // 0x8022EF64: lh          $a0, 0xB0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XB0);
    // 0x8022EF68: jal         0x80070F38
    // 0x8022EF6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_3;
    // 0x8022EF6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022EF70: j           L_8022EFD0
    // 0x8022EF74: nop

        goto L_8022EFD0;
    // 0x8022EF74: nop

L_8022EF78:
    // 0x8022EF78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF7C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EF80: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EF84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EF88: bne         $v0, $zero, L_8022F020
    if (ctx->r2 != 0) {
        // 0x8022EF8C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022F020;
    }
    // 0x8022EF8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EF90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022EF94: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x8022EF98: jal         0x80061510
    // 0x8022EF9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8022EF9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x8022EFA0: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022EFA4: j           L_8022EFD0
    // 0x8022EFA8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022EFD0;
    // 0x8022EFA8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022EFAC:
    // 0x8022EFAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EFB0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EFB4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EFB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EFBC: bne         $v0, $zero, L_8022F020
    if (ctx->r2 != 0) {
        // 0x8022EFC0: nop
    
            goto L_8022F020;
    }
    // 0x8022EFC0: nop

    // 0x8022EFC4: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022EFC8: bgez        $v0, L_8022F020
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EFCC: nop
    
            goto L_8022F020;
    }
    // 0x8022EFCC: nop

L_8022EFD0:
    // 0x8022EFD0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022EFD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EFD8: j           L_8022F020
    // 0x8022EFDC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F020;
    // 0x8022EFDC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022EFE0:
    // 0x8022EFE0: jal         0x8003516C
    // 0x8022EFE4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x8022EFE4: nop

    after_5:
    // 0x8022EFE8: bne         $v0, $zero, L_8022F020
    if (ctx->r2 != 0) {
        // 0x8022EFEC: nop
    
            goto L_8022F020;
    }
    // 0x8022EFEC: nop

    // 0x8022EFF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022EFF4: jal         0x80070050
    // 0x8022EFF8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x8022EFF8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_6:
    // 0x8022EFFC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022F000: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x8022F004: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022F008: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F00C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022F010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F014: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F018: jal         0x80060590
    // 0x8022F01C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x8022F01C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_7:
L_8022F020:
    // 0x8022F020: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F024: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F028: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F02C: jr          $ra
    // 0x8022F030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022F034: nop

    // 0x8022F038: nop

    // 0x8022F03C: nop

;}
RECOMP_FUNC void func_80229728_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229728: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022972C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229730: beq         $a1, $v0, L_8022975C
    if (ctx->r5 == ctx->r2) {
        // 0x80229734: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022975C;
    }
    // 0x80229734: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80229738: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022973C: bne         $a0, $v0, L_8022974C
    if (ctx->r4 != ctx->r2) {
        // 0x80229740: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022974C;
    }
    // 0x80229740: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80229744: j           L_8022976C
    // 0x80229748: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022976C;
    // 0x80229748: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022974C:
    // 0x8022974C: bne         $a0, $v1, L_8022976C
    if (ctx->r4 != ctx->r3) {
        // 0x80229750: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022976C;
    }
    // 0x80229750: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229754: j           L_8022976C
    // 0x80229758: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022976C;
    // 0x80229758: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022975C:
    // 0x8022975C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80229760: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229764: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229768: lbu         $v0, 0xF80($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XF80);
L_8022976C:
    // 0x8022976C: jr          $ra
    // 0x80229770: nop

    TRACE_RETURN()
    return;
    // 0x80229770: nop

;}
RECOMP_FUNC void func_802279BC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802279CC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802279D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802279D4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802279D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802279DC: bne         $v0, $zero, L_80227A04
    if (ctx->r2 != 0) {
        // 0x802279E0: nop
    
            goto L_80227A04;
    }
    // 0x802279E0: nop

    // 0x802279E4: jal         0x80229640
    // 0x802279E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229640_ovl29(rdram, ctx);
        goto after_0;
    // 0x802279E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x802279EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802279F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802279F4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802279F8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802279FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227A00: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227A04:
    // 0x80227A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A0C: jr          $ra
    // 0x80227A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D5C8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D5CC: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022D5D0: bne         $a1, $a0, L_8022D5F0
    if (ctx->r5 != ctx->r4) {
        // 0x8022D5D4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022D5F0;
    }
    // 0x8022D5D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022D5D8: lhu         $v0, 0x4E0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4E0);
    // 0x8022D5DC: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x8022D5E0: sb          $zero, 0x4E3($a1)
    MEM_B(0X4E3, ctx->r5) = 0;
    // 0x8022D5E4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022D5E8: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022D5EC: sh          $v0, 0x4E0($a1)
    MEM_H(0X4E0, ctx->r5) = ctx->r2;
L_8022D5F0:
    // 0x8022D5F0: jr          $ra
    // 0x8022D5F4: nop

    TRACE_RETURN()
    return;
    // 0x8022D5F4: nop

    // 0x8022D5F8: nop

    // 0x8022D5FC: nop

;}
RECOMP_FUNC void func_802254C8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254D8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254DC: bne         $v0, $zero, L_802254FC
    if (ctx->r2 != 0) {
        // 0x802254E0: nop
    
            goto L_802254FC;
    }
    // 0x802254E0: nop

    // 0x802254E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254E8: jal         0x800607C4
    // 0x802254EC: addiu       $a0, $a0, 0x43C
    ctx->r4 = ADD32(ctx->r4, 0X43C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802254EC: addiu       $a0, $a0, 0x43C
    ctx->r4 = ADD32(ctx->r4, 0X43C);
    after_0:
    // 0x802254F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254F8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254FC:
    // 0x802254FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225504: jr          $ra
    // 0x80225508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225BDC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225BE4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225BE8: bne         $v0, $zero, L_80225C20
    if (ctx->r2 != 0) {
        // 0x80225BEC: nop
    
            goto L_80225C20;
    }
    // 0x80225BEC: nop

    // 0x80225BF0: jal         0x8006033C
    // 0x80225BF4: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225BF4: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_0:
    // 0x80225BF8: beq         $v0, $zero, L_80225C20
    if (ctx->r2 == 0) {
        // 0x80225BFC: nop
    
            goto L_80225C20;
    }
    // 0x80225BFC: nop

    // 0x80225C00: jal         0x8006036C
    // 0x80225C04: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225C04: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    after_1:
    // 0x80225C08: jal         0x8006036C
    // 0x80225C0C: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225C0C: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x80225C10: jal         0x8006036C
    // 0x80225C14: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225C14: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x80225C18: jal         0x8006036C
    // 0x80225C1C: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225C1C: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    after_4:
L_80225C20:
    // 0x80225C20: jal         0x8006036C
    // 0x80225C24: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225C24: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x80225C28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225C2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225C30: jr          $ra
    // 0x80225C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022895C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022895C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228960: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228964: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022896C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228970: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228974: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228978: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022897C: jal         0x8004F820
    // 0x80228980: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228980: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228984: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228988: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022898C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228990: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228994: bgez        $a0, L_802289B8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80228998: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802289B8;
    }
    // 0x80228998: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022899C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802289A0: jal         0x802296D8
    // 0x802289A4: nop

    func_802296D8_ovl29(rdram, ctx);
        goto after_1;
    // 0x802289A4: nop

    after_1:
    // 0x802289A8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802289AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802289B0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802289B4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_802289B8:
    // 0x802289B8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802289BC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802289C0: bne         $v0, $zero, L_802289E4
    if (ctx->r2 != 0) {
        // 0x802289C4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802289E4;
    }
    // 0x802289C4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802289C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802289CC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802289D0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x802289D4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802289D8: jal         0x802296D8
    // 0x802289DC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_802296D8_ovl29(rdram, ctx);
        goto after_2;
    // 0x802289DC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x802289E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802289E4:
    // 0x802289E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802289E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289EC: jr          $ra
    // 0x802289F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802289F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264F0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264F0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802264F4: bne         $v0, $zero, L_80226520
    if (ctx->r2 != 0) {
        // 0x802264F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226520;
    }
    // 0x802264F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802264FC: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226500: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226504: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80226508: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022650C: sb          $v0, 0xFC($v1)
    MEM_B(0XFC, ctx->r3) = ctx->r2;
    // 0x80226510: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226518: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8022651C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80226520:
    // 0x80226520: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226524: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80226528: bne         $v1, $v0, L_80226538
    if (ctx->r3 != ctx->r2) {
        // 0x8022652C: nop
    
            goto L_80226538;
    }
    // 0x8022652C: nop

    // 0x80226530: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226534: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226538:
    // 0x80226538: jr          $ra
    // 0x8022653C: nop

    TRACE_RETURN()
    return;
    // 0x8022653C: nop

;}
RECOMP_FUNC void func_8022E2F0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E2F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E2F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E2F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E2FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E300: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E304: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E308: lw          $v0, 0x1610($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1610);
    // 0x8022E30C: jalr        $v0
    // 0x8022E310: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E310: nop

    after_0:
    // 0x8022E314: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E318: jr          $ra
    // 0x8022E31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B210_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B218: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B21C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B220: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B224: bne         $v0, $zero, L_8022B240
    if (ctx->r2 != 0) {
        // 0x8022B228: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_8022B240;
    }
    // 0x8022B228: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8022B22C: jal         0x80050294
    // 0x8022B230: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B230: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B234: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B238: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B23C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B240:
    // 0x8022B240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B244: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B248: jr          $ra
    // 0x8022B24C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B24C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225860_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225864: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225868: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022586C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225870: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225874: bne         $v0, $zero, L_80225890
    if (ctx->r2 != 0) {
        // 0x80225878: nop
    
            goto L_80225890;
    }
    // 0x80225878: nop

    // 0x8022587C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225880: jal         0x800607C4
    // 0x80225884: addiu       $a0, $a0, 0x3CC
    ctx->r4 = ADD32(ctx->r4, 0X3CC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225884: addiu       $a0, $a0, 0x3CC
    ctx->r4 = ADD32(ctx->r4, 0X3CC);
    after_0:
    // 0x80225888: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022588C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225890:
    // 0x80225890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225894: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225898: jr          $ra
    // 0x8022589C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022589C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A674_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A67C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A680: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022A684: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A68C: jal         0x8009A3B4
    // 0x8022A690: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A690: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022A694: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022A698: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A69C: jal         0x8009A3B4
    // 0x8022A6A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A6A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A6A4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022A6A8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022A6AC: jal         0x8009A3B4
    // 0x8022A6B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A6B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A6B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A6B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A6BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A6C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A6C4: lw          $v0, 0x1274($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1274);
    // 0x8022A6C8: jalr        $v0
    // 0x8022A6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022A6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A6D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A6D8: jr          $ra
    // 0x8022A6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258E0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258F4: bne         $v0, $zero, L_80225910
    if (ctx->r2 != 0) {
        // 0x802258F8: nop
    
            goto L_80225910;
    }
    // 0x802258F8: nop

    // 0x802258FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225900: jal         0x800607C4
    // 0x80225904: addiu       $a0, $a0, 0x40C
    ctx->r4 = ADD32(ctx->r4, 0X40C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225904: addiu       $a0, $a0, 0x40C
    ctx->r4 = ADD32(ctx->r4, 0X40C);
    after_0:
    // 0x80225908: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022590C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225910:
    // 0x80225910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225914: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225918: jr          $ra
    // 0x8022591C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022591C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E7F8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022E7FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022E800: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E804: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022E808: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022E80C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022E810: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022E814: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022E818: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E81C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E820: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E824: lw          $v0, 0x16FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X16FC);
    // 0x8022E828: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022E82C: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E830: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E834: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x8022E838: addiu       $s2, $s2, 0x16FC
    ctx->r18 = ADD32(ctx->r18, 0X16FC);
    // 0x8022E83C: beq         $v0, $zero, L_8022E9C0
    if (ctx->r2 == 0) {
        // 0x8022E840: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_8022E9C0;
    }
    // 0x8022E840: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022E844: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E848: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x8022E84C: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022E850: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022E854: lbu         $a3, 0x174C($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X174C);
    // 0x8022E858: jal         0x8003BA58
    // 0x8022E85C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8022E85C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022E860: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022E864: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E868: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022E86C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022E870: bne         $v0, $zero, L_8022E8D8
    if (ctx->r2 != 0) {
        // 0x8022E874: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022E8D8;
    }
    // 0x8022E874: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E878: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E87C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022E880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E884: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022E888: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E88C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022E890: bne         $v1, $v0, L_8022E8B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022E894: nop
    
            goto L_8022E8B0;
    }
    // 0x8022E894: nop

    // 0x8022E898: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022E89C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022E8A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E8A4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022E8A8: j           L_8022E8B8
    // 0x8022E8AC: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
        goto L_8022E8B8;
    // 0x8022E8AC: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
L_8022E8B0:
    // 0x8022E8B0: beq         $v1, $zero, L_8022E9C0
    if (ctx->r3 == 0) {
        // 0x8022E8B4: nop
    
            goto L_8022E9C0;
    }
    // 0x8022E8B4: nop

L_8022E8B8:
    // 0x8022E8B8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022E8BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E8C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E8C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E8C8: lw          $v0, 0x16FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X16FC);
    // 0x8022E8CC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E8D0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022E8D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_8022E8D8:
    // 0x8022E8D8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8022E8DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E8E0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022E8E4: jal         0x8003BB80
    // 0x8022E8E8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022E8E8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E8EC: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E8F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E8F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E8F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E8FC: lbu         $v0, 0x164C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X164C);
    // 0x8022E900: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8022E904: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E908: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E90C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E910: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E914: lbu         $v0, 0x164D($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X164D);
    // 0x8022E918: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x8022E91C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E920: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E924: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E928: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E92C: lbu         $v0, 0x164E($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X164E);
    // 0x8022E930: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x8022E934: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E938: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E93C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E940: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E944: lbu         $v0, 0x164F($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X164F);
    // 0x8022E948: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    // 0x8022E94C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E950: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E954: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E958: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E95C: lbu         $v0, 0x1650($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1650);
    // 0x8022E960: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x8022E964: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E968: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E96C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E970: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E974: lbu         $v0, 0x1651($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1651);
    // 0x8022E978: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x8022E97C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E980: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E984: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E988: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E98C: lbu         $v0, 0x1652($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1652);
    // 0x8022E990: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x8022E994: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x8022E998: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022E99C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E9A0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E9A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E9A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9AC: lbu         $v0, 0x1653($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1653);
    // 0x8022E9B0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022E9B4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022E9B8: jal         0x8003BC68
    // 0x8022E9BC: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022E9BC: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    after_2:
L_8022E9C0:
    // 0x8022E9C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E9C4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022E9C8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022E9CC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E9D0: jr          $ra
    // 0x8022E9D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022E9D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228FA8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228FA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228FAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228FB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228FB8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80228FBC: bgez        $v0, L_80228FF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228FC0: nop
    
            goto L_80228FF0;
    }
    // 0x80228FC0: nop

    // 0x80228FC4: jal         0x802296D8
    // 0x80228FC8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802296D8_ovl29(rdram, ctx);
        goto after_0;
    // 0x80228FC8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80228FCC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228FD0: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80228FD4: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80228FD8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228FDC: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80228FE0: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80228FE4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228FE8: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80228FEC: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228FF0:
    // 0x80228FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228FF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228FF8: jr          $ra
    // 0x80228FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C8C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C8C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80227C90: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80227C94: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x80227C98: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x80227C9C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x80227CA0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80227CA4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80227CA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227CAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227CB0: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80227CB4: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80227CB8: jr          $ra
    // 0x80227CBC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80227CBC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022DFC8_ovl29(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x8022DFD8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DFDC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DFE0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022DFE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFE8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022DFEC: beq         $v1, $v0, L_8022E028
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFF0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022E028;
    }
    // 0x8022DFF0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DFF4: beql        $v0, $zero, L_8022E00C
    if (ctx->r2 == 0) {
        // 0x8022DFF8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E00C;
    }
    goto skip_0;
    // 0x8022DFF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DFFC: beq         $v1, $zero, L_8022E01C
    if (ctx->r3 == 0) {
        // 0x8022E000: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022E01C;
    }
    // 0x8022E000: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022E004: j           L_8022E064
    // 0x8022E008: nop

        goto L_8022E064;
    // 0x8022E008: nop

L_8022E00C:
    // 0x8022E00C: beq         $v1, $v0, L_8022E050
    if (ctx->r3 == ctx->r2) {
        // 0x8022E010: nop
    
            goto L_8022E050;
    }
    // 0x8022E010: nop

    // 0x8022E014: j           L_8022E064
    // 0x8022E018: nop

        goto L_8022E064;
    // 0x8022E018: nop

L_8022E01C:
    // 0x8022E01C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E020: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022E024: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_8022E028:
    // 0x8022E028: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8022E02C: bne         $v0, $s0, L_8022E064
    if (ctx->r2 != ctx->r16) {
        // 0x8022E030: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E064;
    }
    // 0x8022E030: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E034: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x8022E038: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E03C: jal         0x800610AC
    // 0x8022E040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022E040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022E044: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E048: j           L_8022E060
    // 0x8022E04C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E060;
    // 0x8022E04C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E050:
    // 0x8022E050: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022E054: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022E058: bne         $v0, $zero, L_8022E064
    if (ctx->r2 != 0) {
        // 0x8022E05C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E064;
    }
    // 0x8022E05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E060:
    // 0x8022E060: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E064:
    // 0x8022E064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E068: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E06C: jr          $ra
    // 0x8022E070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C38_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225C40: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225C44: bne         $v0, $zero, L_80225C7C
    if (ctx->r2 != 0) {
        // 0x80225C48: nop
    
            goto L_80225C7C;
    }
    // 0x80225C48: nop

    // 0x80225C4C: jal         0x8006033C
    // 0x80225C50: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225C50: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_0:
    // 0x80225C54: beq         $v0, $zero, L_80225C7C
    if (ctx->r2 == 0) {
        // 0x80225C58: nop
    
            goto L_80225C7C;
    }
    // 0x80225C58: nop

    // 0x80225C5C: jal         0x8006036C
    // 0x80225C60: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225C60: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    after_1:
    // 0x80225C64: jal         0x8006036C
    // 0x80225C68: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225C68: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x80225C6C: jal         0x8006036C
    // 0x80225C70: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225C70: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x80225C74: jal         0x8006036C
    // 0x80225C78: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225C78: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    after_4:
L_80225C7C:
    // 0x80225C7C: jal         0x8006036C
    // 0x80225C80: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225C80: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x80225C84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225C88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225C8C: jr          $ra
    // 0x80225C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AA20_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AA24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022AA28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022AA30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AA34: bne         $v0, $zero, L_8022AA70
    if (ctx->r2 != 0) {
        // 0x8022AA38: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022AA70;
    }
    // 0x8022AA38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AA3C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AA40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AA44: jal         0x8004D5D4
    // 0x8022AA48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AA48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AA4C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AA50: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AA54: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AA58: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AA5C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AA60: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AA64: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022AA68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022AA6C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022AA70:
    // 0x8022AA70: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AA74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AA78: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AA7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AA80: lw          $v0, 0x12D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X12D4);
    // 0x8022AA84: jalr        $v0
    // 0x8022AA88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022AA88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AA8C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022AA90: bne         $v0, $zero, L_8022AAAC
    if (ctx->r2 != 0) {
        // 0x8022AA94: nop
    
            goto L_8022AAAC;
    }
    // 0x8022AA94: nop

    // 0x8022AA98: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022AA9C: jal         0x8004DD04
    // 0x8022AAA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022AAA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022AAA4: jal         0x8005044C
    // 0x8022AAA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022AAA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022AAAC:
    // 0x8022AAAC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022AAB0: beq         $v0, $zero, L_8022AAEC
    if (ctx->r2 == 0) {
        // 0x8022AAB4: nop
    
            goto L_8022AAEC;
    }
    // 0x8022AAB4: nop

    // 0x8022AAB8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022AABC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022AAC0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022AAC4: addiu       $a0, $a0, 0x1290
    ctx->r4 = ADD32(ctx->r4, 0X1290);
    // 0x8022AAC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022AACC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022AAD0: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022AAD4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022AAD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AADC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8022AAE0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022AAE4: j           L_8022AB00
    // 0x8022AAE8: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
        goto L_8022AB00;
    // 0x8022AAE8: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
L_8022AAEC:
    // 0x8022AAEC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022AAF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AAF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AAF8: lbu         $v0, 0x12D0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X12D0);
    // 0x8022AAFC: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
L_8022AB00:
    // 0x8022AB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AB04: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022AB08: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8022AB0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AB10: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x8022AB14: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022AB18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AB1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022AB20: jal         0x8003B3F8
    // 0x8022AB24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003B3F8_167F8(rdram, ctx);
        goto after_4;
    // 0x8022AB24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022AB28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022AB2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022AB30: jr          $ra
    // 0x8022AB34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022AB34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802281F4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802281FC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228204: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228208: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022820C: lw          $v0, 0x1174($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1174);
    // 0x80228210: jalr        $v0
    // 0x80228214: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228214: nop

    after_0:
    // 0x80228218: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022821C: jr          $ra
    // 0x80228220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292FC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229300: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229304: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022930C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229310: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229314: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80229318: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022931C: jal         0x8004FA7C
    // 0x80229320: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229320: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80229324: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229328: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022932C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229330: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80229334: beq         $v0, $zero, L_8022934C
    if (ctx->r2 == 0) {
        // 0x80229338: nop
    
            goto L_8022934C;
    }
    // 0x80229338: nop

    // 0x8022933C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229340: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80229344: beq         $v0, $zero, L_80229398
    if (ctx->r2 == 0) {
        // 0x80229348: nop
    
            goto L_80229398;
    }
    // 0x80229348: nop

L_8022934C:
    // 0x8022934C: jal         0x8003516C
    // 0x80229350: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80229350: nop

    after_1:
    // 0x80229354: bne         $v0, $zero, L_80229398
    if (ctx->r2 != 0) {
        // 0x80229358: nop
    
            goto L_80229398;
    }
    // 0x80229358: nop

    // 0x8022935C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80229360: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229364: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80229368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022936C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80229370: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229374: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80229378: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022937C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80229380: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229384: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229388: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022938C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80229390: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229394: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80229398:
    // 0x80229398: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022939C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802293A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802293A4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802293A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802293AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802293B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802293B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802293B8: jr          $ra
    // 0x802293BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802293BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229A98_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229AA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229AA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229AAC: bne         $v0, $zero, L_80229AC8
    if (ctx->r2 != 0) {
        // 0x80229AB0: nop
    
            goto L_80229AC8;
    }
    // 0x80229AB0: nop

    // 0x80229AB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229AB8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80229ABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229AC0: j           L_80229AF8
    // 0x80229AC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80229AF8;
    // 0x80229AC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229AC8:
    // 0x80229AC8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80229ACC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80229AD0: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    // 0x80229AD4: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80229AD8: jal         0x800324B4
    // 0x80229ADC: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80229ADC: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_0:
    // 0x80229AE0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80229AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229AE8: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80229AEC: lui         $v0, 0xFC18
    ctx->r2 = S32(0XFC18 << 16);
    // 0x80229AF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229AF4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_80229AF8:
    // 0x80229AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229AFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B00: jr          $ra
    // 0x80229B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AB38_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AB44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AB48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AB4C: bne         $v0, $zero, L_8022AB68
    if (ctx->r2 != 0) {
        // 0x8022AB50: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_8022AB68;
    }
    // 0x8022AB50: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8022AB54: jal         0x80050294
    // 0x8022AB58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022AB58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022AB5C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AB60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AB64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AB68:
    // 0x8022AB68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB70: jr          $ra
    // 0x8022AB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225818_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022581C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225820: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225828: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022582C: bne         $v0, $zero, L_80225848
    if (ctx->r2 != 0) {
        // 0x80225830: nop
    
            goto L_80225848;
    }
    // 0x80225830: nop

    // 0x80225834: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225838: jal         0x800607C4
    // 0x8022583C: addiu       $a0, $a0, 0x42C
    ctx->r4 = ADD32(ctx->r4, 0X42C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022583C: addiu       $a0, $a0, 0x42C
    ctx->r4 = ADD32(ctx->r4, 0X42C);
    after_0:
    // 0x80225840: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225844: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225848:
    // 0x80225848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022584C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225850: jr          $ra
    // 0x80225854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227618_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022761C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227620: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227624: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227628: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022762C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227630: lw          $v0, 0x107C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X107C);
    // 0x80227634: jalr        $v0
    // 0x80227638: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227638: nop

    after_0:
    // 0x8022763C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227640: jr          $ra
    // 0x80227644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F60_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F60: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228F64: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228F68: bne         $v0, $zero, L_80228FA0
    if (ctx->r2 != 0) {
        // 0x80228F6C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80228FA0;
    }
    // 0x80228F6C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80228F70: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80228F74: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x80228F78: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228F7C: beq         $v1, $zero, L_80228F8C
    if (ctx->r3 == 0) {
        // 0x80228F80: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_80228F8C;
    }
    // 0x80228F80: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80228F84: j           L_80228F90
    // 0x80228F88: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80228F90;
    // 0x80228F88: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80228F8C:
    // 0x80228F8C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80228F90:
    // 0x80228F90: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228F94: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80228F98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F9C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80228FA0:
    // 0x80228FA0: jr          $ra
    // 0x80228FA4: nop

    TRACE_RETURN()
    return;
    // 0x80228FA4: nop

;}
RECOMP_FUNC void func_802277E4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802277EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802277F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802277F4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802277F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802277FC: jal         0x8004DA90
    // 0x80227800: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227800: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227804: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80227808: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022780C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80227810: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227814: bne         $v0, $zero, L_8022784C
    if (ctx->r2 != 0) {
        // 0x80227818: nop
    
            goto L_8022784C;
    }
    // 0x80227818: nop

    // 0x8022781C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80227820: beq         $v0, $zero, L_80227834
    if (ctx->r2 == 0) {
        // 0x80227824: nop
    
            goto L_80227834;
    }
    // 0x80227824: nop

    // 0x80227828: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022782C: j           L_8022783C
    // 0x80227830: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022783C;
    // 0x80227830: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80227834:
    // 0x80227834: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80227838: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022783C:
    // 0x8022783C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80227840: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227844: j           L_8022789C
    // 0x80227848: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022789C;
    // 0x80227848: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022784C:
    // 0x8022784C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227850: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227854: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227858: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022785C: bne         $v0, $zero, L_8022786C
    if (ctx->r2 != 0) {
        // 0x80227860: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022786C;
    }
    // 0x80227860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227864: j           L_8022789C
    // 0x80227868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022789C;
    // 0x80227868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022786C:
    // 0x8022786C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227870: jal         0x80229774
    // 0x80227874: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229774_ovl29(rdram, ctx);
        goto after_1;
    // 0x80227874: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80227878: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022787C: beq         $v0, $zero, L_802278A0
    if (ctx->r2 == 0) {
        // 0x80227880: nop
    
            goto L_802278A0;
    }
    // 0x80227880: nop

    // 0x80227884: jal         0x802296D8
    // 0x80227888: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802296D8_ovl29(rdram, ctx);
        goto after_2;
    // 0x80227888: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022788C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227890: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227894: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227898: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022789C:
    // 0x8022789C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802278A0:
    // 0x802278A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278A8: jr          $ra
    // 0x802278AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DBB0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DBB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DBB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DBC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DBC4: bne         $v0, $zero, L_8022DBE0
    if (ctx->r2 != 0) {
        // 0x8022DBC8: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_8022DBE0;
    }
    // 0x8022DBC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022DBCC: jal         0x80050294
    // 0x8022DBD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DBD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DBD4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DBD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DBDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DBE0:
    // 0x8022DBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DBE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DBE8: jr          $ra
    // 0x8022DBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802280B8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280B8: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802280BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802280C0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802280C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802280C8: bne         $v0, $zero, L_802280D4
    if (ctx->r2 != 0) {
        // 0x802280CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802280D4;
    }
    // 0x802280CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802280D0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802280D4:
    // 0x802280D4: jr          $ra
    // 0x802280D8: nop

    TRACE_RETURN()
    return;
    // 0x802280D8: nop

;}
RECOMP_FUNC void func_80228B30_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B3C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228B40: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228B44: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228B48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228B4C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228B50: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228B54: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228B58: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B60: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80228B64: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80228B68: jal         0x802296D8
    // 0x80228B6C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_802296D8_ovl29(rdram, ctx);
        goto after_0;
    // 0x80228B6C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80228B70: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228B74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228B78: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228B7C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228B80: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228B84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228B88: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228B8C: jal         0x8004F820
    // 0x80228B90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228B90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228B94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B98: bgez        $v0, L_80228BC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228B9C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80228BC8;
    }
    // 0x80228B9C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228BA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228BA4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228BA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228BAC: jal         0x8004F820
    // 0x80228BB0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228BB0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80228BB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228BB8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228BBC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228BC0: j           L_80228BE4
    // 0x80228BC4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80228BE4;
    // 0x80228BC4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80228BC8:
    // 0x80228BC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228BCC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228BD0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228BD4: jal         0x8004F820
    // 0x80228BD8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228BD8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80228BDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228BE0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80228BE4:
    // 0x80228BE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228BE8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80228BEC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228BF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228BF4: jal         0x800610AC
    // 0x80228BF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80228BF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80228BFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228C00: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228C04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228C08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228C0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C10: jr          $ra
    // 0x80228C14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228C14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227548_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022754C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227550: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227558: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022755C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227560: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227564: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227568: bne         $v0, $zero, L_8022759C
    if (ctx->r2 != 0) {
        // 0x8022756C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022759C;
    }
    // 0x8022756C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227570: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227574: bne         $v1, $v0, L_80227580
    if (ctx->r3 != ctx->r2) {
        // 0x80227578: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227580;
    }
    // 0x80227578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022757C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_80227580:
    // 0x80227580: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227584: jal         0x80229640
    // 0x80227588: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229640_ovl29(rdram, ctx);
        goto after_0;
    // 0x80227588: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022758C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227590: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227594: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227598: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022759C:
    // 0x8022759C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802275A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275A4: jr          $ra
    // 0x802275A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225920_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022592C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225930: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225934: bne         $v0, $zero, L_80225950
    if (ctx->r2 != 0) {
        // 0x80225938: nop
    
            goto L_80225950;
    }
    // 0x80225938: nop

    // 0x8022593C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225940: jal         0x800607C4
    // 0x80225944: addiu       $a0, $a0, 0x3D4
    ctx->r4 = ADD32(ctx->r4, 0X3D4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225944: addiu       $a0, $a0, 0x3D4
    ctx->r4 = ADD32(ctx->r4, 0X3D4);
    after_0:
    // 0x80225948: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022594C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225950:
    // 0x80225950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225954: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225958: jr          $ra
    // 0x8022595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802280DC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802280E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802280E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802280E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802280EC: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x802280F0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802280F4: jal         0x8004FA7C
    // 0x802280F8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802280F8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x802280FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80228100: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80228104: bne         $v0, $zero, L_80228150
    if (ctx->r2 != 0) {
        // 0x80228108: nop
    
            goto L_80228150;
    }
    // 0x80228108: nop

    // 0x8022810C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80228110: beq         $v0, $zero, L_80228124
    if (ctx->r2 == 0) {
        // 0x80228114: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228124;
    }
    // 0x80228114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228118: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022811C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228120: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80228124:
    // 0x80228124: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80228128: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022812C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80228130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228134: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022813C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80228140: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80228144: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228148: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022814C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_80228150:
    // 0x80228150: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228154: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228158: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022815C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228164: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228168: jr          $ra
    // 0x8022816C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022816C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229184_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229184: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229188: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022918C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229190: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80229194: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80229198: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022919C: jal         0x8003516C
    // 0x802291A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x802291A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802291A4: bne         $v0, $zero, L_802291C8
    if (ctx->r2 != 0) {
        // 0x802291A8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802291C8;
    }
    // 0x802291A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802291AC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802291B0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802291B4: jal         0x800610AC
    // 0x802291B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x802291B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802291BC: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802291C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802291C4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_802291C8:
    // 0x802291C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802291CC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802291D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802291D4: jal         0x8004F820
    // 0x802291D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802291D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x802291DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802291E0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802291E4: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x802291E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802291EC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802291F0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802291F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802291F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802291FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229200: jr          $ra
    // 0x80229204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B984_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B988: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B98C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B990: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x8022B994: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x8022B998: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8022B99C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B9A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B9A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B9A8: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8022B9AC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B9B0: bne         $v1, $zero, L_8022B9C4
    if (ctx->r3 != 0) {
        // 0x8022B9B4: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_8022B9C4;
    }
    // 0x8022B9B4: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022B9B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B9BC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022B9C0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022B9C4:
    // 0x8022B9C4: jal         0x8022BAC8
    // 0x8022B9C8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8022BAC8_ovl29(rdram, ctx);
        goto after_0;
    // 0x8022B9C8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022B9CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B9D0: jr          $ra
    // 0x8022B9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E074_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E078: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E07C: jal         0x8004F4F8
    // 0x8022E080: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022E080: nop

    after_0:
    // 0x8022E084: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E088: jr          $ra
    // 0x8022E08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256C8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256C8: jr          $ra
    // 0x802256CC: nop

    TRACE_RETURN()
    return;
    // 0x802256CC: nop

;}
RECOMP_FUNC void func_8022B290_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B29C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B2A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B2A4: bne         $v0, $zero, L_8022B2C0
    if (ctx->r2 != 0) {
        // 0x8022B2A8: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_8022B2C0;
    }
    // 0x8022B2A8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x8022B2AC: jal         0x80050294
    // 0x8022B2B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B2B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B2B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B2B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B2BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B2C0:
    // 0x8022B2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B2C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B2C8: jr          $ra
    // 0x8022B2CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B2CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A70_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226A78: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226A7C: bne         $v0, $zero, L_80226ABC
    if (ctx->r2 != 0) {
        // 0x80226A80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226ABC;
    }
    // 0x80226A80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226A84: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226A88: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226A8C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226A90: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226A94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226A98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226A9C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226AA0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226AA4: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x80226AA8: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x80226AAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226AB0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226AB4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226AB8: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_80226ABC:
    // 0x80226ABC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226AC0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226AC4: bne         $v1, $v0, L_80226AD8
    if (ctx->r3 != ctx->r2) {
        // 0x80226AC8: addiu       $v0, $zero, 0x34
        ctx->r2 = ADD32(0, 0X34);
            goto L_80226AD8;
    }
    // 0x80226AC8: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80226ACC: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226AD0: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80226AD4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_80226AD8:
    // 0x80226AD8: bne         $v1, $v0, L_80226AE8
    if (ctx->r3 != ctx->r2) {
        // 0x80226ADC: nop
    
            goto L_80226AE8;
    }
    // 0x80226ADC: nop

    // 0x80226AE0: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x80226AE4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80226AE8:
    // 0x80226AE8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226AEC: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80226AF0: bne         $v1, $v0, L_80226B10
    if (ctx->r3 != ctx->r2) {
        // 0x80226AF4: addiu       $v0, $zero, 0xAF
        ctx->r2 = ADD32(0, 0XAF);
            goto L_80226B10;
    }
    // 0x80226AF4: addiu       $v0, $zero, 0xAF
    ctx->r2 = ADD32(0, 0XAF);
    // 0x80226AF8: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80226AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B00: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226B04: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226B08: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226B0C: addiu       $v0, $zero, 0xAF
    ctx->r2 = ADD32(0, 0XAF);
L_80226B10:
    // 0x80226B10: bne         $v1, $v0, L_80226B20
    if (ctx->r3 != ctx->r2) {
        // 0x80226B14: nop
    
            goto L_80226B20;
    }
    // 0x80226B14: nop

    // 0x80226B18: jal         0x80036E48
    // 0x80226B1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80226B1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
L_80226B20:
    // 0x80226B20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226B24: jr          $ra
    // 0x80226B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227490_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227494: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227498: jal         0x8004F418
    // 0x8022749C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022749C: nop

    after_0:
    // 0x802274A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802274A4: jr          $ra
    // 0x802274A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802274A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278B0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278B0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802278B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802278B8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802278BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802278C0: bne         $v0, $zero, L_802278CC
    if (ctx->r2 != 0) {
        // 0x802278C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802278CC;
    }
    // 0x802278C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278C8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802278CC:
    // 0x802278CC: jr          $ra
    // 0x802278D0: nop

    TRACE_RETURN()
    return;
    // 0x802278D0: nop

;}
RECOMP_FUNC void func_80226FA8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FAC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226FB0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226FB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226FBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FC0: lw          $v0, 0xA90($at)
    ctx->r2 = MEM_W(ctx->r1, 0XA90);
    // 0x80226FC4: jalr        $v0
    // 0x80226FC8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226FC8: nop

    after_0:
    // 0x80226FCC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226FD0: jr          $ra
    // 0x80226FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BCC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BCC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226BD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226BD4: bne         $v1, $v0, L_80226BF4
    if (ctx->r3 != ctx->r2) {
        // 0x80226BD8: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80226BF4;
    }
    // 0x80226BD8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80226BDC: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BE4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226BE8: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x80226BEC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226BF0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80226BF4:
    // 0x80226BF4: bne         $v1, $v0, L_80226C04
    if (ctx->r3 != ctx->r2) {
        // 0x80226BF8: nop
    
            goto L_80226C04;
    }
    // 0x80226BF8: nop

    // 0x80226BFC: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226C00: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226C04:
    // 0x80226C04: jr          $ra
    // 0x80226C08: nop

    TRACE_RETURN()
    return;
    // 0x80226C08: nop

;}
RECOMP_FUNC void func_80226338_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226338: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022633C: bne         $v0, $zero, L_80226364
    if (ctx->r2 != 0) {
        // 0x80226340: addiu       $v0, $zero, 0xA8C
        ctx->r2 = ADD32(0, 0XA8C);
            goto L_80226364;
    }
    // 0x80226340: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x80226344: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226348: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x8022634C: lui         $v0, 0xEF98
    ctx->r2 = S32(0XEF98 << 16);
    // 0x80226350: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226354: lui         $v0, 0xFCAE
    ctx->r2 = S32(0XFCAE << 16);
    // 0x80226358: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x8022635C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226360: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_80226364:
    // 0x80226364: jr          $ra
    // 0x80226368: nop

    TRACE_RETURN()
    return;
    // 0x80226368: nop

;}
RECOMP_FUNC void func_8022BAAC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BAB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BAB4: jal         0x8004F418
    // 0x8022BAB8: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022BAB8: nop

    after_0:
    // 0x8022BABC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAC0: jr          $ra
    // 0x8022BAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256D8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256E8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802256EC: bne         $v0, $zero, L_80225708
    if (ctx->r2 != 0) {
        // 0x802256F0: nop
    
            goto L_80225708;
    }
    // 0x802256F0: nop

    // 0x802256F4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802256F8: jal         0x800607C4
    // 0x802256FC: addiu       $a0, $a0, 0x3C4
    ctx->r4 = ADD32(ctx->r4, 0X3C4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802256FC: addiu       $a0, $a0, 0x3C4
    ctx->r4 = ADD32(ctx->r4, 0X3C4);
    after_0:
    // 0x80225700: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225704: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225708:
    // 0x80225708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022570C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225710: jr          $ra
    // 0x80225714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CC88_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC94: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022CC98: lw          $a0, 0x1B20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B20);
    // 0x8022CC9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CCA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CCA4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022CCA8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022CCAC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x8022CCB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022CCB4: beq         $v1, $v0, L_8022CD48
    if (ctx->r3 == ctx->r2) {
        // 0x8022CCB8: nop
    
            goto L_8022CD48;
    }
    // 0x8022CCB8: nop

    // 0x8022CCBC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8022CCC0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022CCC4: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x8022CCC8: bne         $v1, $v0, L_8022CD48
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCCC: nop
    
            goto L_8022CD48;
    }
    // 0x8022CCCC: nop

    // 0x8022CCD0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8022CCD4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022CCD8: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x8022CCDC: bne         $v1, $v0, L_8022CD48
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCE0: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022CD48;
    }
    // 0x8022CCE0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022CCE4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022CCE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CCEC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CCF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CCF4: lw          $v0, 0x13E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X13E4);
    // 0x8022CCF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CCFC: sw          $v0, 0x1B10($at)
    MEM_W(0X1B10, ctx->r1) = ctx->r2;
    // 0x8022CD00: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CD04: lw          $v0, 0x1B10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B10);
    // 0x8022CD08: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CD0C: sh          $zero, 0x1B14($at)
    MEM_H(0X1B14, ctx->r1) = 0;
    // 0x8022CD10: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CD14: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8022CD18: jal         0x8003B85C
    // 0x8022CD1C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022CD1C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022CD20: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022CD24: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022CD28: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022CD2C: jal         0x8003B840
    // 0x8022CD30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022CD30: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022CD34: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CD38: lw          $v0, 0x1B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B20);
    // 0x8022CD3C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022CD40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CD44: sw          $v0, 0x1B20($at)
    MEM_W(0X1B20, ctx->r1) = ctx->r2;
L_8022CD48:
    // 0x8022CD48: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022CD4C: lw          $a0, 0x1B24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B24);
    // 0x8022CD50: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022CD54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022CD58: beq         $v1, $v0, L_8022CDE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022CD5C: nop
    
            goto L_8022CDE4;
    }
    // 0x8022CD5C: nop

    // 0x8022CD60: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8022CD64: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022CD68: bne         $v1, $v0, L_8022CDE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022CD6C: nop
    
            goto L_8022CDE4;
    }
    // 0x8022CD6C: nop

    // 0x8022CD70: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8022CD74: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x8022CD78: bne         $v1, $v0, L_8022CDE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022CD7C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022CDE4;
    }
    // 0x8022CD7C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022CD80: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022CD84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CD88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CD8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CD90: lw          $v0, 0x13F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X13F0);
    // 0x8022CD94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CD98: sw          $v0, 0x1B18($at)
    MEM_W(0X1B18, ctx->r1) = ctx->r2;
    // 0x8022CD9C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CDA0: lw          $v0, 0x1B18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B18);
    // 0x8022CDA4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CDA8: sh          $zero, 0x1B1C($at)
    MEM_H(0X1B1C, ctx->r1) = 0;
    // 0x8022CDAC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CDB0: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8022CDB4: jal         0x8003B85C
    // 0x8022CDB8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022CDB8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022CDBC: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022CDC0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022CDC4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022CDC8: jal         0x8003B840
    // 0x8022CDCC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022CDCC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022CDD0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CDD4: lw          $v0, 0x1B24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B24);
    // 0x8022CDD8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022CDDC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CDE0: sw          $v0, 0x1B24($at)
    MEM_W(0X1B24, ctx->r1) = ctx->r2;
L_8022CDE4:
    // 0x8022CDE4: jal         0x8022CB30
    // 0x8022CDE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CB30_ovl29(rdram, ctx);
        goto after_4;
    // 0x8022CDE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CDEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CDF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CDF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CDF8: jr          $ra
    // 0x8022CDFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CDFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C914_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C914: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C918: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C91C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C924: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C928: jal         0x8003E934
    // 0x8022C92C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022C92C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022C930: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C934: andi        $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 & 0X1000;
    // 0x8022C938: bne         $s0, $zero, L_8022C974
    if (ctx->r16 != 0) {
        // 0x8022C93C: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022C974;
    }
    // 0x8022C93C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022C940: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022C944: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022C948: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022C94C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C950: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022C954: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C958: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022C95C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022C960: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022C964: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C968: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022C96C: beq         $v0, $zero, L_8022C97C
    if (ctx->r2 == 0) {
        // 0x8022C970: nop
    
            goto L_8022C97C;
    }
    // 0x8022C970: nop

L_8022C974:
    // 0x8022C974: sh          $a1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r5;
    // 0x8022C978: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
L_8022C97C:
    // 0x8022C97C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022C980: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C984: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022C988: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C98C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C994: jr          $ra
    // 0x8022C998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227110_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227118: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022711C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227120: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80227124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227128: jal         0x80070050
    // 0x8022712C: nop

    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x8022712C: nop

    after_0:
    // 0x80227130: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227138: jal         0x80036B00
    // 0x8022713C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x8022713C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227140: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80227144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227148: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022714C: jr          $ra
    // 0x80227150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227154: nop

    // 0x80227158: nop

    // 0x8022715C: nop

;}
