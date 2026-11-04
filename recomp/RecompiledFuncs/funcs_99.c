#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022734C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022734C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227350: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x80227354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227358: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022735C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227360: slti        $v0, $v0, 0x4C
    ctx->r2 = SIGNED(ctx->r2) < 0X4C ? 1 : 0;
    // 0x80227364: bne         $v0, $zero, L_8022737C
    if (ctx->r2 != 0) {
        // 0x80227368: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022737C;
    }
    // 0x80227368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022736C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80227370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227374: jal         0x8004DA90
    // 0x80227378: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227378: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_8022737C:
    // 0x8022737C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227380: bne         $v0, $zero, L_802273A4
    if (ctx->r2 != 0) {
        // 0x80227384: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802273A4;
    }
    // 0x80227384: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227388: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x8022738C: jal         0x80050294
    // 0x80227390: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227390: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227394: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022739C: j           L_802273AC
    // 0x802273A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802273AC;
    // 0x802273A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802273A4:
    // 0x802273A4: jal         0x8005044C
    // 0x802273A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x802273A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802273AC:
    // 0x802273AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273B0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802273B4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802273B8: jal         0x8003B564
    // 0x802273BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x802273BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802273C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802273C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273C8: jr          $ra
    // 0x802273CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802273CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D1BC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D1BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D1C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D1C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D1C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D1CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D1D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D1D4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D1D8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022D1DC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022D1E0: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x8022D1E4: beq         $v0, $zero, L_8022D360
    if (ctx->r2 == 0) {
        // 0x8022D1E8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022D360;
    }
    // 0x8022D1E8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022D1EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D1F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D1F4: addu        $at, $at, $v0
    gpr jr_addend_8022D1FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1F8: lw          $v0, 0x7498($at)
    ctx->r2 = ADD32(ctx->r1, 0X7498);
    // 0x8022D1FC: jr          $v0
    // 0x8022D200: nop

    switch (jr_addend_8022D1FC >> 2) {
        case 0: goto L_8022D204; break;
        case 1: goto L_8022D230; break;
        case 2: goto L_8022D270; break;
        case 3: goto L_8022D314; break;
        case 4: goto L_8022D2B4; break;
        case 5: goto L_8022D360; break;
        case 6: goto L_8022D360; break;
        case 7: goto L_8022D360; break;
        case 8: goto L_8022D360; break;
        case 9: goto L_8022D360; break;
        case 10: goto L_8022D360; break;
        case 11: goto L_8022D360; break;
        case 12: goto L_8022D360; break;
        case 13: goto L_8022D360; break;
        case 14: goto L_8022D360; break;
        case 15: goto L_8022D360; break;
        case 16: goto L_8022D360; break;
        case 17: goto L_8022D360; break;
        case 18: goto L_8022D360; break;
        case 19: goto L_8022D360; break;
        case 20: goto L_8022D2F8; break;
        case 21: goto L_8022D314; break;
        case 22: goto L_8022D32C; break;
        default: switch_error(__func__, 0x8022D1FC, 0x80237498);
    }
    // 0x8022D200: nop

L_8022D204:
    // 0x8022D204: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D208: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D20C: beq         $v1, $v0, L_8022D230
    if (ctx->r3 == ctx->r2) {
        // 0x8022D210: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D230;
    }
    // 0x8022D210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D214: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D218: jal         0x80050294
    // 0x8022D21C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D21C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022D220: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D224: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D228: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D22C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D230:
    // 0x8022D230: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D234: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022D238: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D23C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D240: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022D244: bne         $v0, $zero, L_8022D360
    if (ctx->r2 != 0) {
        // 0x8022D248: nop
    
            goto L_8022D360;
    }
    // 0x8022D248: nop

    // 0x8022D24C: jal         0x8003516C
    // 0x8022D250: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022D250: nop

    after_1:
    // 0x8022D254: bne         $v0, $zero, L_8022D360
    if (ctx->r2 != 0) {
        // 0x8022D258: nop
    
            goto L_8022D360;
    }
    // 0x8022D258: nop

    // 0x8022D25C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D260: jal         0x800616FC
    // 0x8022D264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022D264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8022D268: j           L_8022D31C
    // 0x8022D26C: nop

        goto L_8022D31C;
    // 0x8022D26C: nop

L_8022D270:
    // 0x8022D270: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D274: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022D278: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022D27C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8022D280: bne         $v0, $zero, L_8022D360
    if (ctx->r2 != 0) {
        // 0x8022D284: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022D360;
    }
    // 0x8022D284: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022D288: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022D28C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022D290: bne         $v1, $v0, L_8022D31C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D294: nop
    
            goto L_8022D31C;
    }
    // 0x8022D294: nop

    // 0x8022D298: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022D29C: bne         $v0, $zero, L_8022D31C
    if (ctx->r2 != 0) {
        // 0x8022D2A0: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8022D31C;
    }
    // 0x8022D2A0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022D2A4: bne         $v0, $zero, L_8022D31C
    if (ctx->r2 != 0) {
        // 0x8022D2A8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022D31C;
    }
    // 0x8022D2A8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022D2AC: j           L_8022D360
    // 0x8022D2B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D360;
    // 0x8022D2B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D2B4:
    // 0x8022D2B4: jal         0x8003516C
    // 0x8022D2B8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x8022D2B8: nop

    after_3:
    // 0x8022D2BC: bne         $v0, $zero, L_8022D360
    if (ctx->r2 != 0) {
        // 0x8022D2C0: nop
    
            goto L_8022D360;
    }
    // 0x8022D2C0: nop

    // 0x8022D2C4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022D2C8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D2CC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022D2D0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022D2D4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022D2D8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022D2DC: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D2E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D2E4: beq         $v1, $v0, L_8022D360
    if (ctx->r3 == ctx->r2) {
        // 0x8022D2E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D360;
    }
    // 0x8022D2E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D2EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D2F0: j           L_8022D360
    // 0x8022D2F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022D360;
    // 0x8022D2F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022D2F8:
    // 0x8022D2F8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D2FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D300: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D304: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D308: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D30C: j           L_8022D360
    // 0x8022D310: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022D360;
    // 0x8022D310: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022D314:
    // 0x8022D314: jal         0x80034E3C
    // 0x8022D318: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x8022D318: nop

    after_4:
L_8022D31C:
    // 0x8022D31C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D320: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D324: j           L_8022D360
    // 0x8022D328: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D360;
    // 0x8022D328: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D32C:
    // 0x8022D32C: jal         0x8003516C
    // 0x8022D330: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x8022D330: nop

    after_5:
    // 0x8022D334: bne         $v0, $zero, L_8022D360
    if (ctx->r2 != 0) {
        // 0x8022D338: addiu       $a0, $zero, 0x238
        ctx->r4 = ADD32(0, 0X238);
            goto L_8022D360;
    }
    // 0x8022D338: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    // 0x8022D33C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022D340: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022D344: jal         0x8006036C
    // 0x8022D348: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022D348: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_6:
    // 0x8022D34C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D354: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D358: jal         0x8004F418
    // 0x8022D35C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022D35C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_7:
L_8022D360:
    // 0x8022D360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D364: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D368: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D36C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D370: jr          $ra
    // 0x8022D374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228D50_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228D58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228D60: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80228D64: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228D68: jal         0x8004FA7C
    // 0x80228D6C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228D6C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80228D70: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228D74: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80228D78: bne         $v0, $zero, L_80228D88
    if (ctx->r2 != 0) {
        // 0x80228D7C: nop
    
            goto L_80228D88;
    }
    // 0x80228D7C: nop

    // 0x80228D80: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80228D84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228D88:
    // 0x80228D88: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228D8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D94: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228D9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228DA0: jr          $ra
    // 0x80228DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE58_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EE5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EE64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EE68: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EE6C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022EE70: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022EE74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE78: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022EE7C: beq         $v1, $v0, L_8022EEB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022EE80: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022EEB8;
    }
    // 0x8022EE80: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EE84: beql        $v0, $zero, L_8022EE9C
    if (ctx->r2 == 0) {
        // 0x8022EE88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EE9C;
    }
    goto skip_0;
    // 0x8022EE88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EE8C: beq         $v1, $zero, L_8022EEAC
    if (ctx->r3 == 0) {
        // 0x8022EE90: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022EEAC;
    }
    // 0x8022EE90: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022EE94: j           L_8022EEF4
    // 0x8022EE98: nop

        goto L_8022EEF4;
    // 0x8022EE98: nop

L_8022EE9C:
    // 0x8022EE9C: beq         $v1, $v0, L_8022EEE0
    if (ctx->r3 == ctx->r2) {
        // 0x8022EEA0: nop
    
            goto L_8022EEE0;
    }
    // 0x8022EEA0: nop

    // 0x8022EEA4: j           L_8022EEF4
    // 0x8022EEA8: nop

        goto L_8022EEF4;
    // 0x8022EEA8: nop

L_8022EEAC:
    // 0x8022EEAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EEB0: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022EEB4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_8022EEB8:
    // 0x8022EEB8: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8022EEBC: bne         $v0, $s0, L_8022EEF4
    if (ctx->r2 != ctx->r16) {
        // 0x8022EEC0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EEF4;
    }
    // 0x8022EEC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EEC4: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x8022EEC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EECC: jal         0x800610AC
    // 0x8022EED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022EED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022EED4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EED8: j           L_8022EEF0
    // 0x8022EEDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022EEF0;
    // 0x8022EEDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EEE0:
    // 0x8022EEE0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022EEE4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022EEE8: bne         $v0, $zero, L_8022EEF4
    if (ctx->r2 != 0) {
        // 0x8022EEEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EEF4;
    }
    // 0x8022EEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EEF0:
    // 0x8022EEF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EEF4:
    // 0x8022EEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EEF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EEFC: jr          $ra
    // 0x8022EF00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231EE0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231EE0: jr          $ra
    // 0x80231EE4: nop

    TRACE_RETURN()
    return;
    // 0x80231EE4: nop

;}
RECOMP_FUNC void func_8022ADE4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ADE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ADEC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022ADF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ADF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022ADF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ADFC: lw          $v0, 0x65A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65A8);
    // 0x8022AE00: jalr        $v0
    // 0x8022AE04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AE04: nop

    after_0:
    // 0x8022AE08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE0C: jr          $ra
    // 0x8022AE10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB40_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EB44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EB48: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022EB4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EB50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EB54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EB58: lw          $v0, 0x6B20($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6B20);
    // 0x8022EB5C: jalr        $v0
    // 0x8022EB60: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EB60: nop

    after_0:
    // 0x8022EB64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB68: jr          $ra
    // 0x8022EB6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EB6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225718_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225718: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022571C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225720: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225728: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022572C: addiu       $s0, $s0, 0x5450
    ctx->r16 = ADD32(ctx->r16, 0X5450);
    // 0x80225730: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225734: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225738: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8022573C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80225740: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x80225744: beq         $v1, $v0, L_80225780
    if (ctx->r3 == ctx->r2) {
        // 0x80225748: nop
    
            goto L_80225780;
    }
    // 0x80225748: nop

    // 0x8022574C: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
L_80225750:
    // 0x80225750: jal         0x8006033C
    // 0x80225754: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225754: nop

    after_0:
    // 0x80225758: beql        $v0, $zero, L_80225774
    if (ctx->r2 == 0) {
        // 0x8022575C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80225774;
    }
    goto skip_0;
    // 0x8022575C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x80225760: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225764: jal         0x80060690
    // 0x80225768: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225768: nop

    after_1:
    // 0x8022576C: j           L_8022579C
    // 0x80225770: nop

        goto L_8022579C;
    // 0x80225770: nop

L_80225774:
    // 0x80225774: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80225778: bne         $a0, $s1, L_80225750
    if (ctx->r4 != ctx->r17) {
        // 0x8022577C: nop
    
            goto L_80225750;
    }
    // 0x8022577C: nop

L_80225780:
    // 0x80225780: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225784: bne         $v0, $zero, L_8022579C
    if (ctx->r2 != 0) {
        // 0x80225788: nop
    
            goto L_8022579C;
    }
    // 0x80225788: nop

    // 0x8022578C: jal         0x80060690
    // 0x80225790: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x80225790: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    after_2:
    // 0x80225794: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225798: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022579C:
    // 0x8022579C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802257A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802257A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802257A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257AC: jr          $ra
    // 0x802257B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802257B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227D0C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227D10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227D14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227D18: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227D1C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227D20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227D24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D28: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x80227D2C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227D30: addiu       $v0, $v0, 0x6408
    ctx->r2 = ADD32(ctx->r2, 0X6408);
    // 0x80227D34: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80227D38: jal         0x800A3450
    // 0x80227D3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227D3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80227D40: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227D44: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80227D48: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x80227D4C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80227D50: addiu       $s0, $s0, 0x6448
    ctx->r16 = ADD32(ctx->r16, 0X6448);
    // 0x80227D54: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80227D58: beq         $v1, $zero, L_80227D74
    if (ctx->r3 == 0) {
        // 0x80227D5C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80227D74;
    }
    // 0x80227D5C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80227D60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D64: beq         $v1, $v0, L_80227D94
    if (ctx->r3 == ctx->r2) {
        // 0x80227D68: nop
    
            goto L_80227D94;
    }
    // 0x80227D68: nop

    // 0x80227D6C: j           L_80227DA8
    // 0x80227D70: nop

        goto L_80227DA8;
    // 0x80227D70: nop

L_80227D74:
    // 0x80227D74: jal         0x80229D58
    // 0x80227D78: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80229D58_ovl12(rdram, ctx);
        goto after_1;
    // 0x80227D78: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x80227D7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227D84: jal         0x80229D98
    // 0x80227D88: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80229D98_ovl12(rdram, ctx);
        goto after_2;
    // 0x80227D88: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80227D8C: j           L_80227E00
    // 0x80227D90: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80227E00;
    // 0x80227D90: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80227D94:
    // 0x80227D94: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227D98: jal         0x80229D48
    // 0x80227D9C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80229D48_ovl12(rdram, ctx);
        goto after_3;
    // 0x80227D9C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80227DA0: j           L_80227E00
    // 0x80227DA4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80227E00;
    // 0x80227DA4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80227DA8:
    // 0x80227DA8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80227DAC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80227DB0: bne         $v1, $v0, L_80227DC0
    if (ctx->r3 != ctx->r2) {
        // 0x80227DB4: nop
    
            goto L_80227DC0;
    }
    // 0x80227DB4: nop

    // 0x80227DB8: j           L_80227E00
    // 0x80227DBC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80227E00;
    // 0x80227DBC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80227DC0:
    // 0x80227DC0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227DC4: jal         0x80229D58
    // 0x80227DC8: nop

    func_80229D58_ovl12(rdram, ctx);
        goto after_4;
    // 0x80227DC8: nop

    after_4:
    // 0x80227DCC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227DD0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80227DD4: beq         $v0, $zero, L_80227DE8
    if (ctx->r2 == 0) {
        // 0x80227DD8: nop
    
            goto L_80227DE8;
    }
    // 0x80227DD8: nop

    // 0x80227DDC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80227DE0: j           L_80227DF8
    // 0x80227DE4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80227DF8;
    // 0x80227DE4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227DE8:
    // 0x80227DE8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80227DEC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227DF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227DF4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227DF8:
    // 0x80227DF8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80227DFC: addiu       $s0, $s0, 0x6468
    ctx->r16 = ADD32(ctx->r16, 0X6468);
L_80227E00:
    // 0x80227E00: jal         0x800A3450
    // 0x80227E04: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80227E04: nop

    after_5:
    // 0x80227E08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227E0C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227E10: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227E14: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80227E18: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80227E1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227E20: beq         $v1, $v0, L_80227E38
    if (ctx->r3 == ctx->r2) {
        // 0x80227E24: nop
    
            goto L_80227E38;
    }
    // 0x80227E24: nop

    // 0x80227E28: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227E2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E30: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227E34: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227E38:
    // 0x80227E38: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227E3C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227E40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227E44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E4C: jr          $ra
    // 0x80227E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232B60_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B60: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80232B64: lw          $v0, -0x3AC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AC8);
    // 0x80232B68: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232B6C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80232B70: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x80232B74: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80232B78: addiu       $v1, $v1, 0x6E28
    ctx->r3 = ADD32(ctx->r3, 0X6E28);
    // 0x80232B7C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80232B80: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80232B84: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80232B88: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80232B8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232B90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232B94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232B98: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232B9C: addu        $s5, $v0, $v1
    ctx->r21 = ADD32(ctx->r2, ctx->r3);
    // 0x80232BA0: lbu         $v0, 0x4($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X4);
    // 0x80232BA4: lw          $s3, 0x0($s5)
    ctx->r19 = MEM_W(ctx->r21, 0X0);
    // 0x80232BA8: blez        $v0, L_80232CE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80232BAC: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80232CE4;
    }
    // 0x80232BAC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80232BB0: addiu       $s2, $s3, 0x2
    ctx->r18 = ADD32(ctx->r19, 0X2);
L_80232BB4:
    // 0x80232BB4: jal         0x8004EFE4
    // 0x80232BB8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80232BB8: nop

    after_0:
    // 0x80232BBC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232BC0: beql        $s1, $zero, L_80232CD0
    if (ctx->r17 == 0) {
        // 0x80232BC4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80232CD0;
    }
    goto skip_0;
    // 0x80232BC4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80232BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232BCC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80232BD0: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80232BD4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80232BD8: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x80232BDC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80232BE0: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80232BE4: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x80232BE8: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x80232BEC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80232BF0: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    // 0x80232BF4: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80232BF8: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80232BFC: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80232C00: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80232C04: beq         $v1, $zero, L_80232C4C
    if (ctx->r3 == 0) {
        // 0x80232C08: sh          $v0, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r2;
            goto L_80232C4C;
    }
    // 0x80232C08: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80232C0C: jal         0x800A3450
    // 0x80232C10: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80232C10: nop

    after_1:
    // 0x80232C14: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232C18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C1C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80232C20: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232C24: addiu       $v1, $v1, 0x78
    ctx->r3 = ADD32(ctx->r3, 0X78);
    // 0x80232C28: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80232C2C: jal         0x800A3450
    // 0x80232C30: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80232C30: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    after_2:
    // 0x80232C34: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80232C38: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80232C3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C40: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80232C44: j           L_80232C88
    // 0x80232C48: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
        goto L_80232C88;
    // 0x80232C48: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
L_80232C4C:
    // 0x80232C4C: jal         0x800A3450
    // 0x80232C50: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80232C50: nop

    after_3:
    // 0x80232C54: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232C58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C5C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80232C60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C64: addiu       $v1, $v1, 0x78
    ctx->r3 = ADD32(ctx->r3, 0X78);
    // 0x80232C68: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80232C6C: jal         0x800A3450
    // 0x80232C70: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80232C70: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    after_4:
    // 0x80232C74: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80232C78: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80232C7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C80: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80232C84: addiu       $v1, $v1, 0x32
    ctx->r3 = ADD32(ctx->r3, 0X32);
L_80232C88:
    // 0x80232C88: jal         0x800A3450
    // 0x80232C8C: sw          $v1, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80232C8C: sw          $v1, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r3;
    after_5:
    // 0x80232C90: andi        $s0, $v0, 0xF00
    ctx->r16 = ctx->r2 & 0XF00;
    // 0x80232C94: jal         0x800324B4
    // 0x80232C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x80232C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80232C9C: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x80232CA0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232CA4: mflo        $v0
    ctx->r2 = lo;
    // 0x80232CA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232CAC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80232CB0: jal         0x80032498
    // 0x80232CB4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x80232CB4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    after_7:
    // 0x80232CB8: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x80232CBC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232CC0: mflo        $v0
    ctx->r2 = lo;
    // 0x80232CC4: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80232CC8: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80232CCC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80232CD0:
    // 0x80232CD0: lbu         $v0, 0x4($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X4);
    // 0x80232CD4: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x80232CD8: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232CDC: bne         $v0, $zero, L_80232BB4
    if (ctx->r2 != 0) {
        // 0x80232CE0: addiu       $s3, $s3, 0x6
        ctx->r19 = ADD32(ctx->r19, 0X6);
            goto L_80232BB4;
    }
    // 0x80232CE0: addiu       $s3, $s3, 0x6
    ctx->r19 = ADD32(ctx->r19, 0X6);
L_80232CE4:
    // 0x80232CE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80232CE8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80232CEC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80232CF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80232CF4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80232CF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232CFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232D00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232D04: jr          $ra
    // 0x80232D08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232D08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225B60_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B70: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B74: beq         $v1, $zero, L_80225B8C
    if (ctx->r3 == 0) {
        // 0x80225B78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225B8C;
    }
    // 0x80225B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B7C: beq         $v1, $v0, L_80225BC4
    if (ctx->r3 == ctx->r2) {
        // 0x80225B80: nop
    
            goto L_80225BC4;
    }
    // 0x80225B80: nop

    // 0x80225B84: j           L_80225BF8
    // 0x80225B88: nop

        goto L_80225BF8;
    // 0x80225B88: nop

L_80225B8C:
    // 0x80225B8C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225B90: jal         0x800607C4
    // 0x80225B94: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225B94: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    after_0:
    // 0x80225B98: jal         0x8006033C
    // 0x80225B9C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225B9C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x80225BA0: beq         $v0, $zero, L_80225BB8
    if (ctx->r2 == 0) {
        // 0x80225BA4: nop
    
            goto L_80225BB8;
    }
    // 0x80225BA4: nop

    // 0x80225BA8: jal         0x80060AAC
    // 0x80225BAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x80225BAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80225BB0: jal         0x80060AAC
    // 0x80225BB4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225BB4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
L_80225BB8:
    // 0x80225BB8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225BBC: j           L_80225BF4
    // 0x80225BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225BF4;
    // 0x80225BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225BC4:
    // 0x80225BC4: jal         0x8006033C
    // 0x80225BC8: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225BC8: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x80225BCC: bne         $v0, $zero, L_80225BE4
    if (ctx->r2 != 0) {
        // 0x80225BD0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225BE4;
    }
    // 0x80225BD0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225BD4: jal         0x8006033C
    // 0x80225BD8: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225BD8: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225BDC: beq         $v0, $zero, L_80225BF8
    if (ctx->r2 == 0) {
        // 0x80225BE0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225BF8;
    }
    // 0x80225BE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225BE4:
    // 0x80225BE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225BE8: jal         0x80060DA0
    // 0x80225BEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225BEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225BF0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225BF4:
    // 0x80225BF4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BF8:
    // 0x80225BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C00: jr          $ra
    // 0x80225C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A38_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A48: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A4C: bne         $v0, $zero, L_80225A68
    if (ctx->r2 != 0) {
        // 0x80225A50: nop
    
            goto L_80225A68;
    }
    // 0x80225A50: nop

    // 0x80225A54: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225A58: jal         0x800607C4
    // 0x80225A5C: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225A5C: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    after_0:
    // 0x80225A60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A64: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A68:
    // 0x80225A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A70: jr          $ra
    // 0x80225A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229BB8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229BC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229BC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229BCC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80229BD0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229BD4: jal         0x8004FA7C
    // 0x80229BD8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229BD8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80229BDC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80229BE0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229BE4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80229BE8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229BEC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80229BF0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229BF4: beq         $v1, $zero, L_80229C28
    if (ctx->r3 == 0) {
        // 0x80229BF8: nop
    
            goto L_80229C28;
    }
    // 0x80229BF8: nop

    // 0x80229BFC: jal         0x80229D48
    // 0x80229C00: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_1;
    // 0x80229C00: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80229C04: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229C08: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80229C0C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80229C10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229C14: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80229C18: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80229C1C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229C20: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80229C24: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80229C28:
    // 0x80229C28: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229C2C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229C30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229C34: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229C38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229C3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229C40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229C44: jr          $ra
    // 0x80229C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233DC4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233DC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233DCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233DD4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80233DD8: blez        $v0, L_80233E54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80233DDC: nop
    
            goto L_80233E54;
    }
    // 0x80233DDC: nop

    // 0x80233DE0: jal         0x800A3450
    // 0x80233DE4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80233DE4: nop

    after_0:
    // 0x80233DE8: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80233DEC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80233DF0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233DF4: jal         0x800A3450
    // 0x80233DF8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80233DF8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233DFC: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80233E00: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80233E04: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233E08: jal         0x800A3450
    // 0x80233E0C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233E0C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80233E10: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x80233E14: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x80233E18: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80233E1C: ori         $a3, $a3, 0xFEFF
    ctx->r7 = ctx->r7 | 0XFEFF;
    // 0x80233E20: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80233E24: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x80233E28: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80233E2C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80233E30: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x80233E34: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233E38: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80233E3C: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80233E40: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80233E44: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x80233E48: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x80233E4C: j           L_80233E5C
    // 0x80233E50: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
        goto L_80233E5C;
    // 0x80233E50: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
L_80233E54:
    // 0x80233E54: jal         0x8004F5C4
    // 0x80233E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80233E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80233E5C:
    // 0x80233E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233E60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233E64: jr          $ra
    // 0x80233E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233580_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233588: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023358C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233590: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80233594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233598: beq         $a0, $v0, L_802335D8
    if (ctx->r4 == ctx->r2) {
        // 0x8023359C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_802335D8;
    }
    // 0x8023359C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x802335A0: beql        $v0, $zero, L_802335B8
    if (ctx->r2 == 0) {
        // 0x802335A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802335B8;
    }
    goto skip_0;
    // 0x802335A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802335A8: beq         $a0, $zero, L_802335C8
    if (ctx->r4 == 0) {
        // 0x802335AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802335C8;
    }
    // 0x802335AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802335B0: j           L_802336A8
    // 0x802335B4: nop

        goto L_802336A8;
    // 0x802335B4: nop

L_802335B8:
    // 0x802335B8: beq         $a0, $v0, L_8023366C
    if (ctx->r4 == ctx->r2) {
        // 0x802335BC: nop
    
            goto L_8023366C;
    }
    // 0x802335BC: nop

    // 0x802335C0: j           L_802336A8
    // 0x802335C4: nop

        goto L_802336A8;
    // 0x802335C4: nop

L_802335C8:
    // 0x802335C8: jal         0x800616FC
    // 0x802335CC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x802335CC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x802335D0: j           L_8023365C
    // 0x802335D4: nop

        goto L_8023365C;
    // 0x802335D4: nop

L_802335D8:
    // 0x802335D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802335DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802335E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802335E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802335E8: bne         $v0, $zero, L_802336A8
    if (ctx->r2 != 0) {
        // 0x802335EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802336A8;
    }
    // 0x802335EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802335F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802335F4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802335F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802335FC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80233600: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233604: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80233608: addiu       $v0, $zero, -0xBE
    ctx->r2 = ADD32(0, -0XBE);
    // 0x8023360C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233610: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80233614: addiu       $v0, $zero, -0x41
    ctx->r2 = ADD32(0, -0X41);
    // 0x80233618: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023361C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80233620: addiu       $v0, $zero, 0x296
    ctx->r2 = ADD32(0, 0X296);
    // 0x80233624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233628: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8023362C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80233630: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233634: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80233638: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023363C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233640: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80233644: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233648: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023364C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233650: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80233654: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233658: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
L_8023365C:
    // 0x8023365C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233660: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233664: j           L_802336A8
    // 0x80233668: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802336A8;
    // 0x80233668: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023366C:
    // 0x8023366C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233670: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x80233674: bne         $v0, $a0, L_802336A8
    if (ctx->r2 != ctx->r4) {
        // 0x80233678: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802336A8;
    }
    // 0x80233678: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023367C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80233680: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233684: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80233688: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023368C: jal         0x80070050
    // 0x80233690: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x80233690: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    after_1:
    // 0x80233694: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80233698: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023369C: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x802336A0: jal         0x8004F684
    // 0x802336A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x802336A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802336A8:
    // 0x802336A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802336AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802336B0: jr          $ra
    // 0x802336B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802336B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802336B8: nop

    // 0x802336BC: nop

;}
RECOMP_FUNC void func_802348F0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802348F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802348F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802348FC: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x80234900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234904: jal         0x80071A70
    // 0x80234908: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x80234908: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    after_0:
    // 0x8023490C: bne         $v0, $zero, L_80234924
    if (ctx->r2 != 0) {
        // 0x80234910: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_80234924;
    }
    // 0x80234910: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80234914: jal         0x8004F62C
    // 0x80234918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80234918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023491C: j           L_802349B0
    // 0x80234920: nop

        goto L_802349B0;
    // 0x80234920: nop

L_80234924:
    // 0x80234924: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x80234928: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x8023492C: sb          $zero, 0x18($s0)
    MEM_B(0X18, ctx->r16) = 0;
    // 0x80234930: sb          $zero, 0x17($s0)
    MEM_B(0X17, ctx->r16) = 0;
    // 0x80234934: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    // 0x80234938: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x8023493C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234940: lbu         $v1, 0x72D1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X72D1);
    // 0x80234944: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234948: sb          $v1, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r3;
    // 0x8023494C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234950: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234954: lbu         $v1, 0x730B($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X730B);
    // 0x80234958: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x8023495C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234960: sb          $v1, 0x17($s0)
    MEM_B(0X17, ctx->r16) = ctx->r3;
    // 0x80234964: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80234968: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023496C: lbu         $v1, 0x7345($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7345);
    // 0x80234970: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    // 0x80234974: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234978: sb          $v1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r3;
    // 0x8023497C: lbu         $v1, 0x18($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X18);
    // 0x80234980: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234984: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234988: lbu         $v0, 0x737F($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X737F);
    // 0x8023498C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234990: sb          $v0, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r2;
    // 0x80234994: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234998: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023499C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802349A0: lbu         $v1, 0x73B9($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X73B9);
    // 0x802349A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802349A8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802349AC: sb          $v1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r3;
L_802349B0:
    // 0x802349B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802349B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802349B8: jr          $ra
    // 0x802349BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802349BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802345B0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802345B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802345B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802345B8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802345BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802345C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802345C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802345C8: lw          $v0, 0x72C8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X72C8);
    // 0x802345CC: jalr        $v0
    // 0x802345D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802345D0: nop

    after_0:
    // 0x802345D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802345D8: jr          $ra
    // 0x802345DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802345DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B1C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227B24: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227B28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227B30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B34: lw          $v0, 0x638C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X638C);
    // 0x80227B38: jalr        $v0
    // 0x80227B3C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227B3C: nop

    after_0:
    // 0x80227B40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227B44: jr          $ra
    // 0x80227B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233F88_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233F8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233F90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233F98: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80233F9C: blez        $v0, L_80234024
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80233FA0: nop
    
            goto L_80234024;
    }
    // 0x80233FA0: nop

    // 0x80233FA4: jal         0x800A3450
    // 0x80233FA8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80233FA8: nop

    after_0:
    // 0x80233FAC: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80233FB0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233FB4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233FB8: jal         0x800A3450
    // 0x80233FBC: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80233FBC: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233FC0: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80233FC4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233FC8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233FCC: jal         0x800A3450
    // 0x80233FD0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233FD0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80233FD4: lui         $t0, 0xFFFE
    ctx->r8 = S32(0XFFFE << 16);
    // 0x80233FD8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80233FDC: ori         $t0, $t0, 0xFEFF
    ctx->r8 = ctx->r8 | 0XFEFF;
    // 0x80233FE0: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x80233FE4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233FE8: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80233FEC: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x80233FF0: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x80233FF4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80233FF8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80233FFC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80234000: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234004: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80234008: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8023400C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80234010: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x80234014: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x80234018: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x8023401C: j           L_8023402C
    // 0x80234020: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
        goto L_8023402C;
    // 0x80234020: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
L_80234024:
    // 0x80234024: jal         0x8004F5C4
    // 0x80234028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80234028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023402C:
    // 0x8023402C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234034: jr          $ra
    // 0x80234038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023403C: nop

;}
RECOMP_FUNC void func_80231384_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231388: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023138C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231390: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231394: jal         0x8004F2C4
    // 0x80231398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80231398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023139C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802313A0: beq         $s0, $zero, L_80231424
    if (ctx->r16 == 0) {
        // 0x802313A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231424;
    }
    // 0x802313A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802313A8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802313AC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802313B0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802313B4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802313B8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802313BC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802313C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802313C4: jal         0x8009A3B4
    // 0x802313C8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802313C8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_1:
    // 0x802313CC: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802313D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802313D4: addiu       $a1, $a0, 0x3
    ctx->r5 = ADD32(ctx->r4, 0X3);
    // 0x802313D8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802313DC: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x802313E0: sw          $s1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r17;
    // 0x802313E4: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x802313E8: jal         0x8004D5D4
    // 0x802313EC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x802313EC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    after_2:
    // 0x802313F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802313F4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802313F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802313FC: jal         0x8004D5D4
    // 0x80231400: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80231400: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_3:
    // 0x80231404: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80231408: jal         0x8002C654
    // 0x8023140C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x8023140C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231410: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80231414: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231418: jal         0x800319B4
    // 0x8023141C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8023141C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_5:
    // 0x80231420: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80231424:
    // 0x80231424: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231428: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023142C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231430: jr          $ra
    // 0x80231434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BD60_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BD64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BD68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD6C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BD70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BD74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BD78: jal         0x8009A3B4
    // 0x8022BD7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BD7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BD80: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BD84: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BD88: jal         0x8009A3B4
    // 0x8022BD8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BD8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BD90: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BD94: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BD98: jal         0x8009A3B4
    // 0x8022BD9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BD9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BDA0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BDA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BDA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BDAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BDB0: lw          $v0, 0x6600($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6600);
    // 0x8022BDB4: jalr        $v0
    // 0x8022BDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BDBC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BDC0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BDC4: beq         $v0, $zero, L_8022BDDC
    if (ctx->r2 == 0) {
        // 0x8022BDC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BDDC;
    }
    // 0x8022BDC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BDCC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BDD0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BDD4: jal         0x8003B564
    // 0x8022BDD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022BDD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022BDDC:
    // 0x8022BDDC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BDE0: beq         $v0, $zero, L_8022BDF8
    if (ctx->r2 == 0) {
        // 0x8022BDE4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022BDF8;
    }
    // 0x8022BDE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BDE8: jal         0x8005044C
    // 0x8022BDEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022BDEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BDF0: j           L_8022BDFC
    // 0x8022BDF4: nop

        goto L_8022BDFC;
    // 0x8022BDF4: nop

L_8022BDF8:
    // 0x8022BDF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022BDFC:
    // 0x8022BDFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE04: jr          $ra
    // 0x8022BE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023121C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023121C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231220: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231224: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231228: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023122C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231230: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80231234: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80231238: beq         $v0, $zero, L_80231370
    if (ctx->r2 == 0) {
        // 0x8023123C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80231370;
    }
    // 0x8023123C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231240: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231244: addu        $at, $at, $v0
    gpr jr_addend_8023124C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231248: lw          $v0, 0x7618($at)
    ctx->r2 = ADD32(ctx->r1, 0X7618);
    // 0x8023124C: jr          $v0
    // 0x80231250: nop

    switch (jr_addend_8023124C >> 2) {
        case 0: goto L_80231254; break;
        case 1: goto L_80231288; break;
        case 2: goto L_80231294; break;
        case 3: goto L_80231314; break;
        case 4: goto L_8023134C; break;
        default: switch_error(__func__, 0x8023124C, 0x80237618);
    }
    // 0x80231250: nop

L_80231254:
    // 0x80231254: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80231258: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023125C: beq         $v1, $v0, L_8023126C
    if (ctx->r3 == ctx->r2) {
        // 0x80231260: addiu       $a0, $zero, 0x13C
        ctx->r4 = ADD32(0, 0X13C);
            goto L_8023126C;
    }
    // 0x80231260: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    // 0x80231264: jal         0x8002A33C
    // 0x80231268: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80231268: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_0:
L_8023126C:
    // 0x8023126C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80231270: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80231274: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231278: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8023127C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231280: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80231284: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_80231288:
    // 0x80231288: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023128C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231290: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231294:
    // 0x80231294: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80231298: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023129C: beq         $v1, $v0, L_802312F8
    if (ctx->r3 == ctx->r2) {
        // 0x802312A0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_802312F8;
    }
    // 0x802312A0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802312A4: jal         0x8002C654
    // 0x802312A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802312A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802312AC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802312B0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802312B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802312B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802312BC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802312C0: lhu         $a0, 0x6C30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6C30);
    // 0x802312C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802312C8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802312CC: jal         0x80031BB4
    // 0x802312D0: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_2;
    // 0x802312D0: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_2:
    // 0x802312D4: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x802312D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802312DC: jal         0x800319B4
    // 0x802312E0: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x802312E0: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_3:
    // 0x802312E4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802312E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802312EC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802312F0: j           L_80231370
    // 0x802312F4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
        goto L_80231370;
    // 0x802312F4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_802312F8:
    // 0x802312F8: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x802312FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231300: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80231304: bne         $v1, $v0, L_80231370
    if (ctx->r3 != ctx->r2) {
        // 0x80231308: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80231370;
    }
    // 0x80231308: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023130C: j           L_80231370
    // 0x80231310: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80231370;
    // 0x80231310: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231314:
    // 0x80231314: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80231318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023131C: bne         $v1, $v0, L_8023133C
    if (ctx->r3 != ctx->r2) {
        // 0x80231320: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023133C;
    }
    // 0x80231320: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231324: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x80231328: beq         $a3, $v0, L_8023133C
    if (ctx->r7 == ctx->r2) {
        // 0x8023132C: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_8023133C;
    }
    // 0x8023132C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80231330: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80231334: jal         0x800610AC
    // 0x80231338: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80231338: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_8023133C:
    // 0x8023133C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231344: j           L_80231370
    // 0x80231348: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80231370;
    // 0x80231348: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023134C:
    // 0x8023134C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231350: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231354: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80231358: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023135C: bne         $v0, $zero, L_80231370
    if (ctx->r2 != 0) {
        // 0x80231360: nop
    
            goto L_80231370;
    }
    // 0x80231360: nop

    // 0x80231364: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80231368: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8023136C: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_80231370:
    // 0x80231370: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231374: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231378: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023137C: jr          $ra
    // 0x80231380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C27C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C27C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C284: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C28C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C290: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C294: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C298: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022C29C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C2A0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C2A4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C2A8: jal         0x800A3450
    // 0x8022C2AC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C2AC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022C2B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C2B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C2BC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022C2C0: jal         0x8004D5D4
    // 0x8022C2C4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022C2C4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2CC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022C2D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C2D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C2D8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C2DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C2E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C2E4: jal         0x8003E934
    // 0x8022C2E8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C2E8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8022C2EC: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x8022C2F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C2F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C2F8: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022C2FC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C300: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C304: jal         0x8009A3B4
    // 0x8022C308: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C308: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C30C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C310: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022C314: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022C318: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022C31C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C320: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C324: jal         0x800A3450
    // 0x8022C328: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022C328: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_4:
    // 0x8022C32C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C330: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C338: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022C33C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C340: jal         0x80050294
    // 0x8022C344: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022C344: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022C348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C34C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C350: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022C354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C358: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C35C: jr          $ra
    // 0x8022C360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6EC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C6F0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022C6F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C6F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C6FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C700: bne         $v0, $s0, L_8022C7BC
    if (ctx->r2 != ctx->r16) {
        // 0x8022C704: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022C7BC;
    }
    // 0x8022C704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C708: jal         0x8006033C
    // 0x8022C70C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C70C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_0:
    // 0x8022C710: beq         $v0, $zero, L_8022C730
    if (ctx->r2 == 0) {
        // 0x8022C714: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C730;
    }
    // 0x8022C714: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C718: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C71C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C720: jal         0x800610AC
    // 0x8022C724: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022C724: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    after_1:
    // 0x8022C728: j           L_8022C85C
    // 0x8022C72C: nop

        goto L_8022C85C;
    // 0x8022C72C: nop

L_8022C730:
    // 0x8022C730: jal         0x8006033C
    // 0x8022C734: addiu       $a0, $zero, 0x549
    ctx->r4 = ADD32(0, 0X549);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022C734: addiu       $a0, $zero, 0x549
    ctx->r4 = ADD32(0, 0X549);
    after_2:
    // 0x8022C738: beq         $v0, $zero, L_8022C798
    if (ctx->r2 == 0) {
        // 0x8022C73C: nop
    
            goto L_8022C798;
    }
    // 0x8022C73C: nop

    // 0x8022C740: jal         0x80060690
    // 0x8022C744: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x8022C744: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_3:
    // 0x8022C748: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022C74C: sw          $s0, -0x3A2C($at)
    MEM_W(-0X3A2C, ctx->r1) = ctx->r16;
    // 0x8022C750: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C754: addiu       $v1, $v1, -0x420
    ctx->r3 = ADD32(ctx->r3, -0X420);
    // 0x8022C758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C75C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_8022C760:
    // 0x8022C760: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8022C764: beq         $v0, $zero, L_8022C778
    if (ctx->r2 == 0) {
        // 0x8022C768: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8022C778;
    }
    // 0x8022C768: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022C76C: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8022C770: beq         $v0, $a1, L_8022C788
    if (ctx->r2 == ctx->r5) {
        // 0x8022C774: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C788;
    }
    // 0x8022C774: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C778:
    // 0x8022C778: slti        $v0, $a0, 0x12
    ctx->r2 = SIGNED(ctx->r4) < 0X12 ? 1 : 0;
    // 0x8022C77C: bne         $v0, $zero, L_8022C760
    if (ctx->r2 != 0) {
        // 0x8022C780: addiu       $v1, $v1, 0x3C8
        ctx->r3 = ADD32(ctx->r3, 0X3C8);
            goto L_8022C760;
    }
    // 0x8022C780: addiu       $v1, $v1, 0x3C8
    ctx->r3 = ADD32(ctx->r3, 0X3C8);
    // 0x8022C784: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C788:
    // 0x8022C788: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022C78C: sw          $v1, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r3;
    // 0x8022C790: j           L_8022C85C
    // 0x8022C794: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C85C;
    // 0x8022C794: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C798:
    // 0x8022C798: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C79C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022C7A0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022C7A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C7A8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022C7AC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C7B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C7B4: j           L_8022C85C
    // 0x8022C7B8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C85C;
    // 0x8022C7B8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C7BC:
    // 0x8022C7BC: lbu         $v0, 0x359($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X359);
    // 0x8022C7C0: bne         $v0, $zero, L_8022C83C
    if (ctx->r2 != 0) {
        // 0x8022C7C4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022C83C;
    }
    // 0x8022C7C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C7C8: lbu         $v0, 0x35A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35A);
    // 0x8022C7CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C7D0: sb          $v0, 0x35A($s0)
    MEM_B(0X35A, ctx->r16) = ctx->r2;
    // 0x8022C7D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C7D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022C7DC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C7E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C7E4: lbu         $v1, 0x6630($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6630);
    // 0x8022C7E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C7EC: beql        $v1, $v0, L_8022C7F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C7F0: sb          $zero, 0x35A($s0)
        MEM_B(0X35A, ctx->r16) = 0;
            goto L_8022C7F4;
    }
    goto skip_0;
    // 0x8022C7F0: sb          $zero, 0x35A($s0)
    MEM_B(0X35A, ctx->r16) = 0;
    skip_0:
L_8022C7F4:
    // 0x8022C7F4: lbu         $v0, 0x35A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35A);
    // 0x8022C7F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022C7FC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C800: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C804: lbu         $v1, 0x6630($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6630);
    // 0x8022C808: lbu         $v0, 0x35A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35A);
    // 0x8022C80C: sb          $v1, 0x358($s0)
    MEM_B(0X358, ctx->r16) = ctx->r3;
    // 0x8022C810: lbu         $a1, 0x358($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X358);
    // 0x8022C814: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022C818: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C81C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C820: lbu         $v0, 0x6631($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X6631);
    // 0x8022C824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C828: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C82C: jal         0x80050294
    // 0x8022C830: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022C830: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022C834: j           L_8022C84C
    // 0x8022C838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C84C;
    // 0x8022C838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C83C:
    // 0x8022C83C: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    // 0x8022C840: jal         0x8005044C
    // 0x8022C844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022C844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C84C:
    // 0x8022C84C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C850: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C854: jal         0x80047284
    // 0x8022C858: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022C858: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022C85C:
    // 0x8022C85C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C860: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C864: jr          $ra
    // 0x8022C868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E400_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E404: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E408: lbu         $v0, 0xDE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XDE);
    // 0x8022E40C: lw          $v1, 0xD0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XD0);
    // 0x8022E410: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8022E414: lh          $a0, 0x14($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X14);
    // 0x8022E418: addiu       $t1, $a1, 0xD0
    ctx->r9 = ADD32(ctx->r5, 0XD0);
    // 0x8022E41C: lbu         $a3, 0xDF($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0XDF);
    // 0x8022E420: lhu         $t0, 0xE0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XE0);
    // 0x8022E424: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E428: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E42C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E430: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x8022E434: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022E438: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8022E43C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8022E440: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022E444: bltzl       $v1, L_8022E44C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022E448: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8022E44C;
    }
    goto skip_0;
    // 0x8022E448: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8022E44C:
    // 0x8022E44C: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8022E450: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8022E454: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022E458: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E45C: bltzl       $v0, L_8022E464
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E460: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022E464;
    }
    goto skip_1;
    // 0x8022E460: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_8022E464:
    // 0x8022E464: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E468: addiu       $v0, $v1, 0x1FF
    ctx->r2 = ADD32(ctx->r3, 0X1FF);
    // 0x8022E46C: sh          $v0, 0xE4($a1)
    MEM_H(0XE4, ctx->r5) = ctx->r2;
    // 0x8022E470: andi        $v0, $a3, 0x4
    ctx->r2 = ctx->r7 & 0X4;
    // 0x8022E474: beq         $v0, $zero, L_8022E480
    if (ctx->r2 == 0) {
        // 0x8022E478: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_8022E480;
    }
    // 0x8022E478: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x8022E47C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
L_8022E480:
    // 0x8022E480: andi        $v0, $a3, 0x11
    ctx->r2 = ctx->r7 & 0X11;
    // 0x8022E484: bne         $v0, $zero, L_8022E538
    if (ctx->r2 != 0) {
        // 0x8022E488: andi        $a2, $a2, 0xE0
        ctx->r6 = ctx->r6 & 0XE0;
            goto L_8022E538;
    }
    // 0x8022E488: andi        $a2, $a2, 0xE0
    ctx->r6 = ctx->r6 & 0XE0;
    // 0x8022E48C: beq         $a2, $zero, L_8022E4F8
    if (ctx->r6 == 0) {
        // 0x8022E490: nop
    
            goto L_8022E4F8;
    }
    // 0x8022E490: nop

    // 0x8022E494: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x8022E498: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E49C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E4A0: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022E4A4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022E4A8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E4AC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E4B0: sra         $v1, $v0, 4
    ctx->r3 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022E4B4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E4B8: bne         $a2, $v0, L_8022E4C8
    if (ctx->r6 != ctx->r2) {
        // 0x8022E4BC: addiu       $a0, $v1, 0x180
        ctx->r4 = ADD32(ctx->r3, 0X180);
            goto L_8022E4C8;
    }
    // 0x8022E4BC: addiu       $a0, $v1, 0x180
    ctx->r4 = ADD32(ctx->r3, 0X180);
    // 0x8022E4C0: j           L_8022E4D4
    // 0x8022E4C4: addiu       $a0, $v1, 0x380
    ctx->r4 = ADD32(ctx->r3, 0X380);
        goto L_8022E4D4;
    // 0x8022E4C4: addiu       $a0, $v1, 0x380
    ctx->r4 = ADD32(ctx->r3, 0X380);
L_8022E4C8:
    // 0x8022E4C8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022E4CC: beql        $a2, $v0, L_8022E4D4
    if (ctx->r6 == ctx->r2) {
        // 0x8022E4D0: addiu       $a0, $v1, 0x580
        ctx->r4 = ADD32(ctx->r3, 0X580);
            goto L_8022E4D4;
    }
    goto skip_2;
    // 0x8022E4D0: addiu       $a0, $v1, 0x580
    ctx->r4 = ADD32(ctx->r3, 0X580);
    skip_2:
L_8022E4D4:
    // 0x8022E4D4: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8022E4D8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E4DC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E4E0: bne         $v0, $zero, L_8022E538
    if (ctx->r2 != 0) {
        // 0x8022E4E4: nop
    
            goto L_8022E538;
    }
    // 0x8022E4E4: nop

    // 0x8022E4E8: lbu         $v0, 0xF($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0XF);
    // 0x8022E4EC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022E4F0: j           L_8022E534
    // 0x8022E4F4: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
        goto L_8022E534;
    // 0x8022E4F4: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
L_8022E4F8:
    // 0x8022E4F8: lh          $v0, 0x44($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X44);
    // 0x8022E4FC: addiu       $a0, $v0, -0x140
    ctx->r4 = ADD32(ctx->r2, -0X140);
    // 0x8022E500: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E504: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E508: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8022E50C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E510: addiu       $a0, $v0, 0x400
    ctx->r4 = ADD32(ctx->r2, 0X400);
    // 0x8022E514: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022E518: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E51C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E520: bne         $v0, $zero, L_8022E538
    if (ctx->r2 != 0) {
        // 0x8022E524: ori         $v0, $a3, 0x1
        ctx->r2 = ctx->r7 | 0X1;
            goto L_8022E538;
    }
    // 0x8022E524: ori         $v0, $a3, 0x1
    ctx->r2 = ctx->r7 | 0X1;
    // 0x8022E528: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E52C: blez        $v1, L_8022E538
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022E530: sb          $v0, 0xDF($a1)
        MEM_B(0XDF, ctx->r5) = ctx->r2;
            goto L_8022E538;
    }
    // 0x8022E530: sb          $v0, 0xDF($a1)
    MEM_B(0XDF, ctx->r5) = ctx->r2;
L_8022E534:
    // 0x8022E534: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8022E538:
    // 0x8022E538: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8022E53C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8022E540: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E544: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022E548: beq         $v0, $zero, L_8022E5E4
    if (ctx->r2 == 0) {
        // 0x8022E54C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022E5E4;
    }
    // 0x8022E54C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E550: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E554: bltzl       $v0, L_8022E55C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E558: sh          $zero, 0x4C($a1)
        MEM_H(0X4C, ctx->r5) = 0;
            goto L_8022E55C;
    }
    goto skip_3;
    // 0x8022E558: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
    skip_3:
L_8022E55C:
    // 0x8022E55C: lh          $v0, 0x44($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X44);
    // 0x8022E560: addiu       $v1, $a0, -0xD
    ctx->r3 = ADD32(ctx->r4, -0XD);
    // 0x8022E564: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E568: beq         $v0, $zero, L_8022E58C
    if (ctx->r2 == 0) {
        // 0x8022E56C: nop
    
            goto L_8022E58C;
    }
    // 0x8022E56C: nop

    // 0x8022E570: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E574: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E578: slt         $v0, $v0, $t3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8022E57C: beq         $v0, $zero, L_8022E5B0
    if (ctx->r2 == 0) {
        // 0x8022E580: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022E5B0;
    }
    // 0x8022E580: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E584: j           L_8022E5B0
    // 0x8022E588: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8022E5B0;
    // 0x8022E588: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8022E58C:
    // 0x8022E58C: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E590: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E594: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022E598: bnel        $v0, $zero, L_8022E5AC
    if (ctx->r2 != 0) {
        // 0x8022E59C: sh          $t0, 0x44($a1)
        MEM_H(0X44, ctx->r5) = ctx->r8;
            goto L_8022E5AC;
    }
    goto skip_4;
    // 0x8022E59C: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
    skip_4:
    // 0x8022E5A0: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x8022E5A4: j           L_8022E5B0
    // 0x8022E5A8: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8022E5B0;
    // 0x8022E5A8: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8022E5AC:
    // 0x8022E5AC: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8022E5B0:
    // 0x8022E5B0: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x8022E5B4: lhu         $v1, 0x4C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4C);
    // 0x8022E5B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E5BC: sh          $v0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r2;
    // 0x8022E5C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E5C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E5C8: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8022E5CC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E5D0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E5D4: beq         $v1, $zero, L_8022E680
    if (ctx->r3 == 0) {
        // 0x8022E5D8: nop
    
            goto L_8022E680;
    }
    // 0x8022E5D8: nop

    // 0x8022E5DC: j           L_8022E67C
    // 0x8022E5E0: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
        goto L_8022E67C;
    // 0x8022E5E0: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
L_8022E5E4:
    // 0x8022E5E4: beq         $v0, $zero, L_8022E680
    if (ctx->r2 == 0) {
        // 0x8022E5E8: nop
    
            goto L_8022E680;
    }
    // 0x8022E5E8: nop

    // 0x8022E5EC: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E5F0: bgtzl       $v0, L_8022E5F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022E5F4: sh          $zero, 0x4C($a1)
        MEM_H(0X4C, ctx->r5) = 0;
            goto L_8022E5F8;
    }
    goto skip_5;
    // 0x8022E5F4: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
    skip_5:
L_8022E5F8:
    // 0x8022E5F8: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x8022E5FC: addiu       $v0, $a0, 0xD
    ctx->r2 = ADD32(ctx->r4, 0XD);
    // 0x8022E600: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E604: beq         $v0, $zero, L_8022E628
    if (ctx->r2 == 0) {
        // 0x8022E608: negu        $v0, $t3
        ctx->r2 = SUB32(0, ctx->r11);
            goto L_8022E628;
    }
    // 0x8022E608: negu        $v0, $t3
    ctx->r2 = SUB32(0, ctx->r11);
    // 0x8022E60C: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E610: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E614: beq         $v0, $zero, L_8022E64C
    if (ctx->r2 == 0) {
        // 0x8022E618: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022E64C;
    }
    // 0x8022E618: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022E61C: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8022E620: j           L_8022E64C
    // 0x8022E624: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8022E64C;
    // 0x8022E624: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8022E628:
    // 0x8022E628: lh          $v0, 0x4C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4C);
    // 0x8022E62C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E630: slti        $v0, $v0, -0x2
    ctx->r2 = SIGNED(ctx->r2) < -0X2 ? 1 : 0;
    // 0x8022E634: beq         $v0, $zero, L_8022E644
    if (ctx->r2 == 0) {
        // 0x8022E638: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8022E644;
    }
    // 0x8022E638: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8022E63C: j           L_8022E64C
    // 0x8022E640: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
        goto L_8022E64C;
    // 0x8022E640: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
L_8022E644:
    // 0x8022E644: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
    // 0x8022E648: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8022E64C:
    // 0x8022E64C: lhu         $v0, 0x44($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X44);
    // 0x8022E650: lhu         $v1, 0x4C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4C);
    // 0x8022E654: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E658: sh          $v0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r2;
    // 0x8022E65C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E660: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E664: sll         $v1, $t0, 16
    ctx->r3 = S32(ctx->r8 << 16);
    // 0x8022E668: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E66C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E670: beq         $v0, $zero, L_8022E680
    if (ctx->r2 == 0) {
        // 0x8022E674: nop
    
            goto L_8022E680;
    }
    // 0x8022E674: nop

    // 0x8022E678: sh          $t0, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r8;
L_8022E67C:
    // 0x8022E67C: sh          $zero, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = 0;
L_8022E680:
    // 0x8022E680: jr          $ra
    // 0x8022E684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230090_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230090: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230094: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230098: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023009C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802300A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802300A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802300A8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802300AC: addiu       $s2, $s1, 0x3
    ctx->r18 = ADD32(ctx->r17, 0X3);
    // 0x802300B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802300B4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802300B8: jal         0x8004D5D4
    // 0x802300BC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802300BC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x802300C0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802300C4: jal         0x8002C654
    // 0x802300C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802300C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802300CC: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x802300D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802300D4: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x802300D8: jal         0x800319B4
    // 0x802300DC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x802300DC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x802300E0: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802300E4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802300E8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802300EC: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x802300F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802300F4: addiu       $v0, $v0, 0x6BDC
    ctx->r2 = ADD32(ctx->r2, 0X6BDC);
    // 0x802300F8: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x802300FC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80230100: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x80230104: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x80230108: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023010C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230110: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80230114: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80230118: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023011C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80230120: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230124: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x80230128: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8023012C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230130: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x80230134: bne         $v0, $v1, L_802301B8
    if (ctx->r2 != ctx->r3) {
        // 0x80230138: nop
    
            goto L_802301B8;
    }
    // 0x80230138: nop

    // 0x8023013C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80230140: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x80230144: jal         0x8006033C
    // 0x80230148: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80230148: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    after_3:
    // 0x8023014C: beq         $v0, $zero, L_80230164
    if (ctx->r2 == 0) {
        // 0x80230150: nop
    
            goto L_80230164;
    }
    // 0x80230150: nop

    // 0x80230154: jal         0x8004F684
    // 0x80230158: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x80230158: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023015C: j           L_802301B8
    // 0x80230160: nop

        goto L_802301B8;
    // 0x80230160: nop

L_80230164:
    // 0x80230164: jal         0x8006033C
    // 0x80230168: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80230168: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    after_5:
    // 0x8023016C: beq         $v0, $zero, L_8023019C
    if (ctx->r2 == 0) {
        // 0x80230170: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023019C;
    }
    // 0x80230170: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230174: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80230178: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8023017C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80230180: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230184: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80230188: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023018C: jal         0x8004D5D4
    // 0x80230190: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x80230190: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    after_6:
    // 0x80230194: j           L_802301B8
    // 0x80230198: nop

        goto L_802301B8;
    // 0x80230198: nop

L_8023019C:
    // 0x8023019C: jal         0x8006033C
    // 0x802301A0: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x802301A0: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    after_7:
    // 0x802301A4: beq         $v0, $zero, L_802301B8
    if (ctx->r2 == 0) {
        // 0x802301A8: nop
    
            goto L_802301B8;
    }
    // 0x802301A8: nop

    // 0x802301AC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802301B0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802301B4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802301B8:
    // 0x802301B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802301BC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802301C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802301C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802301C8: jr          $ra
    // 0x802301CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802301CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CB14_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CB18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CB1C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022CB20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CB24: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CB28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CB2C: lw          $v0, 0x6644($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6644);
    // 0x8022CB30: jalr        $v0
    // 0x8022CB34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CB34: nop

    after_0:
    // 0x8022CB38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB3C: jr          $ra
    // 0x8022CB40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DE3C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE3C: jr          $ra
    // 0x8022DE40: nop

    TRACE_RETURN()
    return;
    // 0x8022DE40: nop

;}
RECOMP_FUNC void func_8022E970_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E970: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E974: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E97C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E980: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E988: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E98C: jal         0x8009A3B4
    // 0x8022E990: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E990: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022E994: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E998: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E99C: jal         0x8009A3B4
    // 0x8022E9A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E9A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E9A4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022E9A8: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x8022E9AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E9B0: jal         0x8009A3B4
    // 0x8022E9B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E9B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E9B8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E9BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E9C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E9C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9C8: lw          $v0, 0x6B00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6B00);
    // 0x8022E9CC: jalr        $v0
    // 0x8022E9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022E9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E9D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E9D8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022E9DC: jal         0x80031600
    // 0x8022E9E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022E9E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022E9E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E9E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022E9EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E9F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022E9F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E9F8: jal         0x80031DA8
    // 0x8022E9FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022E9FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022EA00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EA04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022EA08: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022EA0C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8022EA10: jal         0x80047284
    // 0x8022EA14: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022EA14: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_6:
    // 0x8022EA18: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022EA1C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022EA20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EA24: jr          $ra
    // 0x8022EA28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EA28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022EC74_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EC78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EC7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EC80: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022EC84: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EC88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EC8C: jal         0x8009A3B4
    // 0x8022EC90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EC90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EC94: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EC98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022ECA0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022ECA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022ECA8: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022ECAC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022ECB0: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022ECB4: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022ECB8: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022ECBC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022ECC0: jal         0x8004D5D4
    // 0x8022ECC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022ECC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022ECC8: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022ECCC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022ECD0: addiu       $v0, $v0, 0x6B38
    ctx->r2 = ADD32(ctx->r2, 0X6B38);
    // 0x8022ECD4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022ECD8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022ECDC: addiu       $v0, $v0, 0x6B44
    ctx->r2 = ADD32(ctx->r2, 0X6B44);
    // 0x8022ECE0: beq         $v1, $zero, L_8022ECF0
    if (ctx->r3 == 0) {
        // 0x8022ECE4: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_8022ECF0;
    }
    // 0x8022ECE4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022ECE8: j           L_8022ECF4
    // 0x8022ECEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022ECF4;
    // 0x8022ECEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022ECF0:
    // 0x8022ECF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022ECF4:
    // 0x8022ECF4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022ECF8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022ECFC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022ED00: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022ED04: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8022ED08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ED0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ED10: jr          $ra
    // 0x8022ED14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ED14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB24_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EB28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EB2C: jal         0x8004F4F8
    // 0x8022EB30: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022EB30: nop

    after_0:
    // 0x8022EB34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB38: jr          $ra
    // 0x8022EB3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EB3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022874C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022874C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228750: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228754: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022875C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80228760: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228764: jal         0x8004FA7C
    // 0x80228768: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228768: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022876C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80228770: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80228774: bne         $v0, $zero, L_802287C0
    if (ctx->r2 != 0) {
        // 0x80228778: nop
    
            goto L_802287C0;
    }
    // 0x80228778: nop

    // 0x8022877C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80228780: beq         $v0, $zero, L_80228794
    if (ctx->r2 == 0) {
        // 0x80228784: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228794;
    }
    // 0x80228784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228788: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022878C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228790: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80228794:
    // 0x80228794: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80228798: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022879C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x802287A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802287A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802287A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802287AC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802287B0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802287B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802287B8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x802287BC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_802287C0:
    // 0x802287C0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802287C4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802287C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802287CC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802287D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802287D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287D8: jr          $ra
    // 0x802287DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802287DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E284_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E284: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E288: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E28C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E294: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E298: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E29C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E2A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E2A4: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x8022E2A8: lw          $v1, 0xD0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD0);
    // 0x8022E2AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E2B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E2B4: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8022E2B8: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x8022E2BC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E2C0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022E2C4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022E2C8: jal         0x80032498
    // 0x8022E2CC: ori         $s1, $v0, 0x1
    ctx->r17 = ctx->r2 | 0X1;
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x8022E2CC: ori         $s1, $v0, 0x1
    ctx->r17 = ctx->r2 | 0X1;
    after_0:
    // 0x8022E2D0: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x8022E2D4: jal         0x800324B4
    // 0x8022E2D8: sll         $s2, $v0, 13
    ctx->r18 = S32(ctx->r2 << 13);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022E2D8: sll         $s2, $v0, 13
    ctx->r18 = S32(ctx->r2 << 13);
    after_1:
    // 0x8022E2DC: lh          $v1, 0xE6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE6);
    // 0x8022E2E0: lh          $a0, 0xE8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE8);
    // 0x8022E2E4: addiu       $s3, $s0, 0xD0
    ctx->r19 = ADD32(ctx->r16, 0XD0);
    // 0x8022E2E8: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x8022E2EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E2F0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022E2F4: lbu         $v1, 0xDC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDC);
    // 0x8022E2F8: sll         $a1, $v0, 13
    ctx->r5 = S32(ctx->r2 << 13);
    // 0x8022E2FC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E300: bne         $v1, $zero, L_8022E330
    if (ctx->r3 != 0) {
        // 0x8022E304: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_8022E330;
    }
    // 0x8022E304: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E308: nop

    // 0x8022E30C: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E310: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E314: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022E318: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022E31C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022E320: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8022E324: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E328: j           L_8022E3B0
    // 0x8022E32C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
        goto L_8022E3B0;
    // 0x8022E32C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_8022E330:
    // 0x8022E330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E334: bne         $v1, $v0, L_8022E360
    if (ctx->r3 != ctx->r2) {
        // 0x8022E338: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E360;
    }
    // 0x8022E338: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E33C: nop

    // 0x8022E340: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E344: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E348: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022E34C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022E350: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022E354: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E358: j           L_8022E3AC
    // 0x8022E35C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
        goto L_8022E3AC;
    // 0x8022E35C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_8022E360:
    // 0x8022E360: bne         $v1, $v0, L_8022E38C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E364: nop
    
            goto L_8022E38C;
    }
    // 0x8022E364: nop

    // 0x8022E368: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E36C: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E370: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022E374: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022E378: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022E37C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8022E380: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022E384: j           L_8022E3B0
    // 0x8022E388: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
        goto L_8022E3B0;
    // 0x8022E388: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_8022E38C:
    // 0x8022E38C: nop

    // 0x8022E390: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E394: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E398: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022E39C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022E3A0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022E3A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E3A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_8022E3AC:
    // 0x8022E3AC: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_8022E3B0:
    // 0x8022E3B0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022E3B4: jal         0x8004DD04
    // 0x8022E3B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022E3B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022E3BC: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x8022E3C0: sll         $v1, $s4, 24
    ctx->r3 = S32(ctx->r20 << 24);
    // 0x8022E3C4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022E3C8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E3CC: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E3D0: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x8022E3D4: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8022E3D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E3DC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E3E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E3E4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E3E8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E3EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E3F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E3F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3F8: jr          $ra
    // 0x8022E3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802275C4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802275C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802275D4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802275D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802275DC: jal         0x8006FF84
    // 0x802275E0: nop

    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802275E0: nop

    after_0:
    // 0x802275E4: beq         $v0, $zero, L_802276A4
    if (ctx->r2 == 0) {
        // 0x802275E8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802276A4;
    }
    // 0x802275E8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802275EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802275F0: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x802275F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802275F8: lhu         $a0, 0x49C4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C4);
    // 0x802275FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227600: lhu         $a1, 0x49C6($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C6);
    // 0x80227604: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80227608: lhu         $a2, 0x49C8($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49C8);
    // 0x8022760C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80227610: lhu         $a3, 0x4A06($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X4A06);
    // 0x80227614: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227618: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022761C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227620: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80227624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227628: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022762C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227630: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80227634: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227638: sb          $zero, 0x7670($at)
    MEM_B(0X7670, ctx->r1) = 0;
    // 0x8022763C: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227640: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227644: sh          $a0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r4;
    // 0x80227648: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022764C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227650: sh          $a1, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r5;
    // 0x80227654: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227658: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022765C: sh          $a2, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r6;
    // 0x80227660: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80227664: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227668: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022766C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227670: sw          $a0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r4;
    // 0x80227674: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227678: sw          $a1, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r5;
    // 0x8022767C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227680: sw          $a2, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r6;
    // 0x80227684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227688: sh          $a3, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r7;
    // 0x8022768C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227690: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227694: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80227698: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022769C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802276A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802276A4:
    // 0x802276A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802276A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276AC: jr          $ra
    // 0x802276B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232A90_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A90: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232A94: lbu         $v1, -0x3A4C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4C);
    // 0x80232A98: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232A9C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80232AA0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232AA4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80232AA8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80232AAC: bne         $v1, $v0, L_80232AC4
    if (ctx->r3 != ctx->r2) {
        // 0x80232AB0: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_80232AC4;
    }
    // 0x80232AB0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232AB4: jal         0x8004F684
    // 0x80232AB8: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80232AB8: nop

    after_0:
    // 0x80232ABC: j           L_80232B48
    // 0x80232AC0: nop

        goto L_80232B48;
    // 0x80232AC0: nop

L_80232AC4:
    // 0x80232AC4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80232AC8: bne         $v0, $zero, L_80232B48
    if (ctx->r2 != 0) {
        // 0x80232ACC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80232B48;
    }
    // 0x80232ACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232AD0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80232AD4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80232AD8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80232ADC: jal         0x8004D5D4
    // 0x80232AE0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80232AE0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_1:
    // 0x80232AE4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80232AE8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80232AEC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80232AF0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80232AF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232AF8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80232AFC: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80232B00: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x80232B04: jal         0x80031600
    // 0x80232B08: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80232B08: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_2:
    // 0x80232B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232B10: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80232B14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232B18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80232B1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232B20: jal         0x80031DA8
    // 0x80232B24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80232B24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80232B28: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80232B2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232B30: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80232B34: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232B38: sh          $zero, 0x38($s1)
    MEM_H(0X38, ctx->r17) = 0;
    // 0x80232B3C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80232B40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232B44: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_80232B48:
    // 0x80232B48: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80232B4C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232B50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232B54: jr          $ra
    // 0x80232B58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232B58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80232B5C: nop

;}
RECOMP_FUNC void func_80230F7C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230F80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230F84: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80230F88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230F8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230F90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230F94: lw          $v0, 0x6C18($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C18);
    // 0x80230F98: jalr        $v0
    // 0x80230F9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230F9C: nop

    after_0:
    // 0x80230FA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230FA4: jr          $ra
    // 0x80230FA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230FA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233800_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233804: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233808: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023380C: bne         $v0, $zero, L_8023382C
    if (ctx->r2 != 0) {
        // 0x80233810: nop
    
            goto L_8023382C;
    }
    // 0x80233810: nop

    // 0x80233814: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80233818: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023381C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80233820: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233824: j           L_80233840
    // 0x80233828: lw          $v0, 0x6E80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E80);
        goto L_80233840;
    // 0x80233828: lw          $v0, 0x6E80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E80);
L_8023382C:
    // 0x8023382C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80233830: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233834: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80233838: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023383C: lw          $v0, 0x6E90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E90);
L_80233840:
    // 0x80233840: jalr        $v0
    // 0x80233844: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233844: nop

    after_0:
    // 0x80233848: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023384C: jr          $ra
    // 0x80233850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231AEC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231AEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231AF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231AF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231AF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231AFC: jal         0x8004F144
    // 0x80231B00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231B00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80231B04: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231B08: beq         $s0, $zero, L_80231B48
    if (ctx->r16 == 0) {
        // 0x80231B0C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80231B48;
    }
    // 0x80231B0C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80231B10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231B14: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231B18: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231B1C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231B20: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80231B24: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80231B28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231B2C: jal         0x8009A3B4
    // 0x80231B30: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231B30: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231B34: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80231B38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231B3C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80231B40: jal         0x8004F684
    // 0x80231B44: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x80231B44: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_80231B48:
    // 0x80231B48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231B4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231B50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231B54: jr          $ra
    // 0x80231B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225950_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225954: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225958: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022595C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225960: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225964: bne         $v0, $zero, L_80225980
    if (ctx->r2 != 0) {
        // 0x80225968: nop
    
            goto L_80225980;
    }
    // 0x80225968: nop

    // 0x8022596C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225970: jal         0x800607C4
    // 0x80225974: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225974: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    after_0:
    // 0x80225978: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022597C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225980:
    // 0x80225980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225988: jr          $ra
    // 0x8022598C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022598C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CF0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D00: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225D04: beq         $v1, $zero, L_80225D1C
    if (ctx->r3 == 0) {
        // 0x80225D08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225D1C;
    }
    // 0x80225D08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D0C: beq         $v1, $v0, L_80225D54
    if (ctx->r3 == ctx->r2) {
        // 0x80225D10: nop
    
            goto L_80225D54;
    }
    // 0x80225D10: nop

    // 0x80225D14: j           L_80225D88
    // 0x80225D18: nop

        goto L_80225D88;
    // 0x80225D18: nop

L_80225D1C:
    // 0x80225D1C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225D20: jal         0x800607C4
    // 0x80225D24: addiu       $a0, $a0, 0x5A5C
    ctx->r4 = ADD32(ctx->r4, 0X5A5C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225D24: addiu       $a0, $a0, 0x5A5C
    ctx->r4 = ADD32(ctx->r4, 0X5A5C);
    after_0:
    // 0x80225D28: jal         0x8006033C
    // 0x80225D2C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225D2C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x80225D30: beq         $v0, $zero, L_80225D48
    if (ctx->r2 == 0) {
        // 0x80225D34: nop
    
            goto L_80225D48;
    }
    // 0x80225D34: nop

    // 0x80225D38: jal         0x80060AAC
    // 0x80225D3C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x80225D3C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80225D40: jal         0x80060AAC
    // 0x80225D44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225D44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
L_80225D48:
    // 0x80225D48: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225D4C: j           L_80225D84
    // 0x80225D50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225D84;
    // 0x80225D50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225D54:
    // 0x80225D54: jal         0x8006033C
    // 0x80225D58: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225D58: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x80225D5C: bne         $v0, $zero, L_80225D74
    if (ctx->r2 != 0) {
        // 0x80225D60: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225D74;
    }
    // 0x80225D60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225D64: jal         0x8006033C
    // 0x80225D68: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225D68: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225D6C: beq         $v0, $zero, L_80225D88
    if (ctx->r2 == 0) {
        // 0x80225D70: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225D88;
    }
    // 0x80225D70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225D74:
    // 0x80225D74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225D78: jal         0x80060DA0
    // 0x80225D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225D80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225D84:
    // 0x80225D84: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225D88:
    // 0x80225D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D90: jr          $ra
    // 0x80225D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D118_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D11C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D120: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D124: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D128: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022D12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D130: jal         0x8004DDE8
    // 0x8022D134: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022D134: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D138: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D13C: beq         $v1, $zero, L_8022D158
    if (ctx->r3 == 0) {
        // 0x8022D140: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022D158;
    }
    // 0x8022D140: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022D144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D148: beq         $v1, $v0, L_8022D184
    if (ctx->r3 == ctx->r2) {
        // 0x8022D14C: nop
    
            goto L_8022D184;
    }
    // 0x8022D14C: nop

    // 0x8022D150: j           L_8022D1AC
    // 0x8022D154: nop

        goto L_8022D1AC;
    // 0x8022D154: nop

L_8022D158:
    // 0x8022D158: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8022D15C: beq         $v0, $zero, L_8022D1AC
    if (ctx->r2 == 0) {
        // 0x8022D160: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D1AC;
    }
    // 0x8022D160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D164: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022D168: jal         0x80050294
    // 0x8022D16C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022D16C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022D170: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D174: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D178: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D17C: j           L_8022D1AC
    // 0x8022D180: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D1AC;
    // 0x8022D180: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D184:
    // 0x8022D184: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D188: bgez        $v0, L_8022D1AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D18C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D1AC;
    }
    // 0x8022D18C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D190: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D194: jal         0x80050294
    // 0x8022D198: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022D198: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022D19C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D1A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D1A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D1A8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022D1AC:
    // 0x8022D1AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D1B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D1B4: jr          $ra
    // 0x8022D1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A4B8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4B8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022A4BC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022A4C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A4C4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022A4C8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022A4CC: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022A4D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A4D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A4D8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022A4DC: jal         0x8009A3B4
    // 0x8022A4E0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A4E0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022A4E4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022A4E8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A4EC: jal         0x8009A3B4
    // 0x8022A4F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A4F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A4F4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022A4F8: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022A4FC: jal         0x8009A3B4
    // 0x8022A500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A504: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x8022A508: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022A50C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A510: beq         $v0, $zero, L_8022A5C4
    if (ctx->r2 == 0) {
        // 0x8022A514: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022A5C4;
    }
    // 0x8022A514: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022A518: addiu       $a0, $zero, 0x160
    ctx->r4 = ADD32(0, 0X160);
    // 0x8022A51C: jal         0x8002A33C
    // 0x8022A520: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022A520: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A524: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022A528: addiu       $v1, $v1, -0x3A40
    ctx->r3 = ADD32(ctx->r3, -0X3A40);
    // 0x8022A52C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022A530: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A534: jal         0x8004EFE4
    // 0x8022A538: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_4;
    // 0x8022A538: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    after_4:
    // 0x8022A53C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A540: beq         $v1, $zero, L_8022A554
    if (ctx->r3 == 0) {
        // 0x8022A544: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A554;
    }
    // 0x8022A544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A548: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A54C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022A550: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_8022A554:
    // 0x8022A554: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A558: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A55C: jal         0x8004EC38
    // 0x8022A560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_5;
    // 0x8022A560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A564: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A56C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022A570: sb          $v0, -0x3A45($at)
    MEM_B(-0X3A45, ctx->r1) = ctx->r2;
    // 0x8022A574: jal         0x800324B4
    // 0x8022A578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x8022A578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022A57C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A580: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022A584: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A588: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A58C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A590: srl         $v1, $v1, 11
    ctx->r3 = S32(U32(ctx->r3) >> 11);
    // 0x8022A594: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022A598: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x8022A59C: jal         0x80032498
    // 0x8022A5A0: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x8022A5A0: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_7:
    // 0x8022A5A4: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022A5A8: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x8022A5AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A5B0: srl         $v1, $v1, 9
    ctx->r3 = S32(U32(ctx->r3) >> 9);
    // 0x8022A5B4: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x8022A5B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022A5BC: j           L_8022A5E0
    // 0x8022A5C0: sb          $a0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r4;
        goto L_8022A5E0;
    // 0x8022A5C0: sb          $a0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r4;
L_8022A5C4:
    // 0x8022A5C4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A5C8: blez        $v0, L_8022A5DC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A5CC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A5DC;
    }
    // 0x8022A5CC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A5D0: addiu       $v0, $v1, -0x14
    ctx->r2 = ADD32(ctx->r3, -0X14);
    // 0x8022A5D4: j           L_8022A5E0
    // 0x8022A5D8: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
        goto L_8022A5E0;
    // 0x8022A5D8: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8022A5DC:
    // 0x8022A5DC: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
L_8022A5E0:
    // 0x8022A5E0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022A5E4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022A5E8: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A5EC: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022A5F0: lh          $a3, 0x16($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X16);
    // 0x8022A5F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A5F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A5FC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A600: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022A604: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A608: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x8022A60C: jal         0x8009A3B4
    // 0x8022A610: sw          $a3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022A610: sw          $a3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r7;
    after_8:
    // 0x8022A614: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022A618: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022A61C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8022A620: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A624: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x8022A628: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022A62C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A630: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A634: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x8022A638: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A63C: lui         $v0, 0xC80
    ctx->r2 = S32(0XC80 << 16);
    // 0x8022A640: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022A644: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022A648: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022A64C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A650: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022A654: jal         0x80051E18
    // 0x8022A658: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022A658: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022A65C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A660: jal         0x8005044C
    // 0x8022A664: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    func_8005044C_2B84C(rdram, ctx);
        goto after_10;
    // 0x8022A664: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    after_10:
    // 0x8022A668: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A66C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022A670: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A674: jal         0x8003B564
    // 0x8022A678: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_11;
    // 0x8022A678: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022A67C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022A680: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022A684: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A688: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022A68C: jr          $ra
    // 0x8022A690: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022A690: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802276B4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802276C4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802276C8: beq         $v1, $zero, L_802276E0
    if (ctx->r3 == 0) {
        // 0x802276CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802276E0;
    }
    // 0x802276CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802276D0: beq         $v1, $v0, L_8022775C
    if (ctx->r3 == ctx->r2) {
        // 0x802276D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022775C;
    }
    // 0x802276D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802276D8: j           L_802277BC
    // 0x802276DC: nop

        goto L_802277BC;
    // 0x802276DC: nop

L_802276E0:
    // 0x802276E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802276E4: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x802276E8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802276EC: lbu         $v1, 0x7670($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7670);
    // 0x802276F0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802276F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276F8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x802276FC: beq         $v1, $zero, L_80227740
    if (ctx->r3 == 0) {
        // 0x80227700: addiu       $v0, $zero, -0x514
        ctx->r2 = ADD32(0, -0X514);
            goto L_80227740;
    }
    // 0x80227700: addiu       $v0, $zero, -0x514
    ctx->r2 = ADD32(0, -0X514);
    // 0x80227704: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227708: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022770C: addiu       $v0, $zero, 0x692
    ctx->r2 = ADD32(0, 0X692);
    // 0x80227710: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227714: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80227718: lui         $v0, 0xFAEC
    ctx->r2 = S32(0XFAEC << 16);
    // 0x8022771C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227720: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80227724: lui         $v0, 0x692
    ctx->r2 = S32(0X692 << 16);
    // 0x80227728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022772C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80227730: jal         0x8004F418
    // 0x80227734: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227734: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x80227738: jal         0x8004F418
    // 0x8022773C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022773C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_1:
L_80227740:
    // 0x80227740: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80227744: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227748: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8022774C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227754: j           L_802277BC
    // 0x80227758: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802277BC;
    // 0x80227758: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022775C:
    // 0x8022775C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227760: jal         0x80036B00
    // 0x80227764: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x80227764: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80227768: jal         0x80060590
    // 0x8022776C: addiu       $a0, $zero, 0x549
    ctx->r4 = ADD32(0, 0X549);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8022776C: addiu       $a0, $zero, 0x549
    ctx->r4 = ADD32(0, 0X549);
    after_3:
    // 0x80227770: jal         0x8006036C
    // 0x80227774: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80227774: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_4:
    // 0x80227778: jal         0x80060D38
    // 0x8022777C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80060D38_3C138(rdram, ctx);
        goto after_5;
    // 0x8022777C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_5:
    // 0x80227780: jal         0x80060C1C
    // 0x80227784: addiu       $a0, $zero, 0x2E8
    ctx->r4 = ADD32(0, 0X2E8);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_6;
    // 0x80227784: addiu       $a0, $zero, 0x2E8
    ctx->r4 = ADD32(0, 0X2E8);
    after_6:
    // 0x80227788: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022778C: jal         0x80070050
    // 0x80227790: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_7;
    // 0x80227790: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_7:
    // 0x80227794: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227798: lbu         $v0, 0x49BA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49BA);
    // 0x8022779C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802277A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277A4: sb          $v1, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r3;
    // 0x802277A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277B0: jal         0x80034844
    // 0x802277B4: sb          $v0, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_8;
    // 0x802277B4: sb          $v0, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = ctx->r2;
    after_8:
    // 0x802277B8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802277BC:
    // 0x802277BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277C4: jr          $ra
    // 0x802277C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802277CC: nop

;}
RECOMP_FUNC void func_8022B6F8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6F8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022B6FC: beq         $a1, $zero, L_8022B710
    if (ctx->r5 == 0) {
        // 0x8022B700: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022B710;
    }
    // 0x8022B700: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B704: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x8022B708: j           L_8022B718
    // 0x8022B70C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_8022B718;
    // 0x8022B70C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_8022B710:
    // 0x8022B710: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x8022B714: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_8022B718:
    // 0x8022B718: jr          $ra
    // 0x8022B71C: nop

    TRACE_RETURN()
    return;
    // 0x8022B71C: nop

;}
RECOMP_FUNC void func_8022E688_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E688: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E68C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E690: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E694: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022E698: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022E69C: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8022E6A0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E6A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022E6A8: beq         $a1, $zero, L_8022E79C
    if (ctx->r5 == 0) {
        // 0x8022E6AC: sw          $s2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r18;
            goto L_8022E79C;
    }
    // 0x8022E6AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022E6B0: lhu         $a3, 0x14($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E6B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E6B8: sh          $a3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r7;
    // 0x8022E6BC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E6C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E6C4: sra         $v1, $v1, 26
    ctx->r3 = S32(SIGNED(ctx->r3) >> 26);
    // 0x8022E6C8: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022E6CC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022E6D0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E6D4: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x8022E6D8: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022E6DC: beq         $v1, $zero, L_8022E710
    if (ctx->r3 == 0) {
        // 0x8022E6E0: sh          $a2, 0x14($sp)
        MEM_H(0X14, ctx->r29) = ctx->r6;
            goto L_8022E710;
    }
    // 0x8022E6E0: sh          $a2, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r6;
    // 0x8022E6E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E6E8: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
    // 0x8022E6EC: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x8022E6F0: jal         0x8003ECF0
    // 0x8022E6F4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_0;
    // 0x8022E6F4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022E6F8: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022E6FC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E700: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E704: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022E708: j           L_8022E738
    // 0x8022E70C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
        goto L_8022E738;
    // 0x8022E70C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
L_8022E710:
    // 0x8022E710: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E714: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
    // 0x8022E718: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8022E71C: jal         0x8003ECF0
    // 0x8022E720: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_1;
    // 0x8022E720: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022E724: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022E728: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E72C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E730: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022E734: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
L_8022E738:
    // 0x8022E738: jal         0x8003ECF0
    // 0x8022E73C: nop

    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_2;
    // 0x8022E73C: nop

    after_2:
    // 0x8022E740: andi        $a0, $s3, 0x2
    ctx->r4 = ctx->r19 & 0X2;
    // 0x8022E744: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022E748: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8022E74C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E750: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022E754: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E758: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E75C: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E760: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E764: lhu         $a1, 0x4C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022E768: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x8022E76C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022E770: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E774: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E778: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E77C: sra         $v0, $a1, 16
    ctx->r2 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022E780: blez        $v0, L_8022E790
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022E784: sh          $v1, 0x54($s0)
        MEM_H(0X54, ctx->r16) = ctx->r3;
            goto L_8022E790;
    }
    // 0x8022E784: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x8022E788: j           L_8022E794
    // 0x8022E78C: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
        goto L_8022E794;
    // 0x8022E78C: sra         $v0, $a1, 17
    ctx->r2 = S32(SIGNED(ctx->r5) >> 17);
L_8022E790:
    // 0x8022E790: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_8022E794:
    // 0x8022E794: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E798: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_8022E79C:
    // 0x8022E79C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022E7A0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022E7A4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022E7A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E7AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E7B0: jr          $ra
    // 0x8022E7B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E7B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F5A4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F5A8: lbu         $v1, -0x3A4C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4C);
    // 0x8022F5AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5B0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022F5B4: bne         $v1, $v0, L_8022F5CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022F5B8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022F5CC;
    }
    // 0x8022F5B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F5BC: jal         0x8004F4F8
    // 0x8022F5C0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022F5C0: nop

    after_0:
    // 0x8022F5C4: j           L_8022F5E8
    // 0x8022F5C8: nop

        goto L_8022F5E8;
    // 0x8022F5C8: nop

L_8022F5CC:
    // 0x8022F5CC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F5D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F5D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F5D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F5DC: lw          $v0, 0x6B50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6B50);
    // 0x8022F5E0: jalr        $v0
    // 0x8022F5E4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022F5E4: nop

    after_1:
L_8022F5E8:
    // 0x8022F5E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5EC: jr          $ra
    // 0x8022F5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F5F4: nop

    // 0x8022F5F8: nop

    // 0x8022F5FC: nop

;}
RECOMP_FUNC void func_80229A30_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229A38: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80229A3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229A40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229A44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229A48: lw          $v0, 0x6588($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6588);
    // 0x80229A4C: jalr        $v0
    // 0x80229A50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229A50: nop

    after_0:
    // 0x80229A54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229A58: jr          $ra
    // 0x80229A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C13C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C13C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C140: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C144: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C14C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C150: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C154: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C158: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C15C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C160: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C164: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C168: jal         0x8004D5D4
    // 0x8022C16C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C16C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022C170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C174: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C178: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C17C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C180: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C184: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C188: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C18C: jal         0x8003E934
    // 0x8022C190: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022C190: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022C194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C198: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C19C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C1A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C1A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C1A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C1AC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022C1B0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022C1B4: jal         0x80050294
    // 0x8022C1B8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022C1B8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    after_2:
    // 0x8022C1BC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022C1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C1C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C1C8: jr          $ra
    // 0x8022C1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ADB4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ADB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ADBC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022ADC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ADC4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022ADC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ADCC: lw          $v0, 0x65A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65A0);
    // 0x8022ADD0: jalr        $v0
    // 0x8022ADD4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022ADD4: nop

    after_0:
    // 0x8022ADD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADDC: jr          $ra
    // 0x8022ADE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ADE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802261C0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802261C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802261C8: addiu       $v0, $v0, -0x3A44
    ctx->r2 = ADD32(ctx->r2, -0X3A44);
    // 0x802261CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802261D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261D4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x802261D8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802261DC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802261E0: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x802261E4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x802261E8: slti        $v0, $a1, 0x384
    ctx->r2 = SIGNED(ctx->r5) < 0X384 ? 1 : 0;
    // 0x802261EC: bne         $v0, $zero, L_80226200
    if (ctx->r2 != 0) {
        // 0x802261F0: lui         $v0, 0x1B4E
        ctx->r2 = S32(0X1B4E << 16);
            goto L_80226200;
    }
    // 0x802261F0: lui         $v0, 0x1B4E
    ctx->r2 = S32(0X1B4E << 16);
    // 0x802261F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802261F8: j           L_80226340
    // 0x802261FC: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_80226340;
    // 0x802261FC: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80226200:
    // 0x80226200: ori         $v0, $v0, 0x81B5
    ctx->r2 = ctx->r2 | 0X81B5;
    // 0x80226204: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226208: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x8022620C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80226210: sra         $v0, $t0, 5
    ctx->r2 = S32(SIGNED(ctx->r8) >> 5);
    // 0x80226214: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226218: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022621C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226220: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80226224: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226228: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022622C: bne         $a1, $v0, L_8022625C
    if (ctx->r5 != ctx->r2) {
        // 0x80226230: nop
    
            goto L_8022625C;
    }
    // 0x80226230: nop

    // 0x80226234: jal         0x8004EEAC
    // 0x80226238: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80226238: nop

    after_0:
    // 0x8022623C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226240: beq         $v1, $zero, L_8022625C
    if (ctx->r3 == 0) {
        // 0x80226244: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022625C;
    }
    // 0x80226244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226248: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022624C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226250: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226254: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226258: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8022625C:
    // 0x8022625C: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x80226260: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x80226264: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x80226268: lhu         $a0, 0x13C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X13C);
    // 0x8022626C: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x80226270: addiu       $a2, $a2, -0x783A
    ctx->r6 = ADD32(ctx->r6, -0X783A);
    // 0x80226274: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80226278: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022627C: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x80226280: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80226284: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80226288: and         $a3, $a0, $v0
    ctx->r7 = ctx->r4 & ctx->r2;
    // 0x8022628C: sh          $a3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r7;
    // 0x80226290: lhu         $a0, 0x12C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12C);
    // 0x80226294: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x80226298: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x8022629C: lhu         $a1, 0x13C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X13C);
    // 0x802262A0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x802262A4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x802262A8: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x802262AC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x802262B0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802262B4: lhu         $v1, -0x783E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783E);
    // 0x802262B8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802262BC: lh          $a1, 0x49C4($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C4);
    // 0x802262C0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x802262C4: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x802262C8: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x802262CC: slti        $v0, $a1, -0xC8
    ctx->r2 = SIGNED(ctx->r5) < -0XC8 ? 1 : 0;
    // 0x802262D0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x802262D4: sh          $a0, -0x783E($at)
    MEM_H(-0X783E, ctx->r1) = ctx->r4;
    // 0x802262D8: beq         $v0, $zero, L_80226308
    if (ctx->r2 == 0) {
        // 0x802262DC: slti        $v0, $a1, 0xC9
        ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
            goto L_80226308;
    }
    // 0x802262DC: slti        $v0, $a1, 0xC9
    ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
    // 0x802262E0: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x802262E4: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x802262E8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x802262EC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x802262F0: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x802262F4: and         $v1, $a3, $v1
    ctx->r3 = ctx->r7 & ctx->r3;
    // 0x802262F8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x802262FC: sh          $v0, -0x783E($at)
    MEM_H(-0X783E, ctx->r1) = ctx->r2;
    // 0x80226300: sh          $v1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r3;
    // 0x80226304: slti        $v0, $a1, 0xC9
    ctx->r2 = SIGNED(ctx->r5) < 0XC9 ? 1 : 0;
L_80226308:
    // 0x80226308: bne         $v0, $zero, L_80226340
    if (ctx->r2 != 0) {
        // 0x8022630C: nop
    
            goto L_80226340;
    }
    // 0x8022630C: nop

    // 0x80226310: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x80226314: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80226318: lhu         $v1, -0x783E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783E);
    // 0x8022631C: lhu         $a0, 0x12E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12E);
    // 0x80226320: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x80226324: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80226328: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022632C: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x80226330: and         $a1, $a1, $a0
    ctx->r5 = ctx->r5 & ctx->r4;
    // 0x80226334: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80226338: sh          $v1, -0x783E($at)
    MEM_H(-0X783E, ctx->r1) = ctx->r3;
    // 0x8022633C: sh          $a1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r5;
L_80226340:
    // 0x80226340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226348: jr          $ra
    // 0x8022634C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022634C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
