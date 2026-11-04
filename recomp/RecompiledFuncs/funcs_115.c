#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226EB4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226EB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226EC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226EC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226ECC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226ED0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80226ED4: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80226ED8: beq         $v0, $zero, L_80227280
    if (ctx->r2 == 0) {
        // 0x80226EDC: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_80227280;
    }
    // 0x80226EDC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80226EE0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226EE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226EE8: addu        $at, $at, $v0
    gpr jr_addend_80226EF0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226EEC: lw          $v0, 0x2AC0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2AC0);
    // 0x80226EF0: jr          $v0
    // 0x80226EF4: nop

    switch (jr_addend_80226EF0 >> 2) {
        case 0: goto L_80226EF8; break;
        case 1: goto L_80226F20; break;
        case 2: goto L_80226F58; break;
        case 3: goto L_80226FD8; break;
        case 4: goto L_80227018; break;
        case 5: goto L_802270B0; break;
        case 6: goto L_802270D8; break;
        case 7: goto L_80227128; break;
        case 8: goto L_8022719C; break;
        case 9: goto L_802271F4; break;
        case 10: goto L_80227228; break;
        default: switch_error(__func__, 0x80226EF0, 0x80232AC0);
    }
    // 0x80226EF4: nop

L_80226EF8:
    // 0x80226EF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226EFC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80226F00: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80226F04: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226F08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226F0C: lui         $v1, 0x101
    ctx->r3 = S32(0X101 << 16);
    // 0x80226F10: beq         $v0, $v1, L_80227218
    if (ctx->r2 == ctx->r3) {
        // 0x80226F14: nop
    
            goto L_80227218;
    }
    // 0x80226F14: nop

    // 0x80226F18: j           L_80227280
    // 0x80226F1C: nop

        goto L_80227280;
    // 0x80226F1C: nop

L_80226F20:
    // 0x80226F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F28: addiu       $a2, $zero, -0x24
    ctx->r6 = ADD32(0, -0X24);
    // 0x80226F2C: jal         0x8004DA90
    // 0x80226F30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226F30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226F34: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80226F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F3C: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80226F40: nop
    
            goto L_80227280;
    }
    // 0x80226F40: nop

    // 0x80226F44: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80226F48: bne         $v0, $v1, L_80227280
    if (ctx->r2 != ctx->r3) {
        // 0x80226F4C: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227280;
    }
    // 0x80226F4C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80226F50: j           L_80227214
    // 0x80226F54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227214;
    // 0x80226F54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226F58:
    // 0x80226F58: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226F5C: sltiu       $v0, $v0, 0x37
    ctx->r2 = ctx->r2 < 0X37 ? 1 : 0;
    // 0x80226F60: beq         $v0, $zero, L_80226F78
    if (ctx->r2 == 0) {
        // 0x80226F64: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226F78;
    }
    // 0x80226F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F68: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80226F6C: addiu       $a2, $zero, -0x18
    ctx->r6 = ADD32(0, -0X18);
    // 0x80226F70: jal         0x8004DA90
    // 0x80226F74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226F74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80226F78:
    // 0x80226F78: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80226F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F80: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80226F84: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_80227280;
    }
    // 0x80226F84: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80226F88: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80226F8C: bne         $a1, $v0, L_80226FAC
    if (ctx->r5 != ctx->r2) {
        // 0x80226F90: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_80226FAC;
    }
    // 0x80226F90: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80226F94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F98: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226F9C: jal         0x8022748C
    // 0x80226FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022748C_ovl15(rdram, ctx);
        goto after_2;
    // 0x80226FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226FA4: j           L_80227280
    // 0x80226FA8: nop

        goto L_80227280;
    // 0x80226FA8: nop

L_80226FAC:
    // 0x80226FAC: bne         $a1, $v0, L_80227280
    if (ctx->r5 != ctx->r2) {
        // 0x80226FB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227280;
    }
    // 0x80226FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226FB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226FB8: jal         0x8022748C
    // 0x80226FBC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8022748C_ovl15(rdram, ctx);
        goto after_3;
    // 0x80226FBC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_3:
    // 0x80226FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226FC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226FC8: jal         0x802274B4
    // 0x80226FCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802274B4_ovl15(rdram, ctx);
        goto after_4;
    // 0x80226FCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80226FD0: j           L_80227210
    // 0x80226FD4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_80227210;
    // 0x80226FD4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80226FD8:
    // 0x80226FD8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80226FDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226FE0: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80226FE4: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_80227280;
    }
    // 0x80226FE4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80226FE8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80226FEC: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80226FF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227280;
    }
    // 0x80226FF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226FF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226FF8: jal         0x8022748C
    // 0x80226FFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022748C_ovl15(rdram, ctx);
        goto after_5;
    // 0x80226FFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x80227000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227004: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227008: jal         0x802274B4
    // 0x8022700C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802274B4_ovl15(rdram, ctx);
        goto after_6;
    // 0x8022700C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x80227010: j           L_80227210
    // 0x80227014: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_80227210;
    // 0x80227014: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_80227018:
    // 0x80227018: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022701C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227020: bne         $v1, $v0, L_80227078
    if (ctx->r3 != ctx->r2) {
        // 0x80227024: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227078;
    }
    // 0x80227024: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227028: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022702C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x80227030: bne         $v1, $v0, L_80227048
    if (ctx->r3 != ctx->r2) {
        // 0x80227034: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80227048;
    }
    // 0x80227034: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80227038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022703C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227040: j           L_80227068
    // 0x80227044: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80227068;
    // 0x80227044: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80227048:
    // 0x80227048: bne         $v1, $v0, L_80227070
    if (ctx->r3 != ctx->r2) {
        // 0x8022704C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227070;
    }
    // 0x8022704C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227050: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227054: jal         0x8022748C
    // 0x80227058: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8022748C_ovl15(rdram, ctx);
        goto after_7;
    // 0x80227058: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x8022705C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227060: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227064: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80227068:
    // 0x80227068: jal         0x802274B4
    // 0x8022706C: nop

    func_802274B4_ovl15(rdram, ctx);
        goto after_8;
    // 0x8022706C: nop

    after_8:
L_80227070:
    // 0x80227070: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227074: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80227078:
    // 0x80227078: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x8022707C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227280;
    }
    // 0x8022707C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227080: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227084: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80227088: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227280;
    }
    // 0x80227088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022708C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227090: jal         0x8022748C
    // 0x80227094: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8022748C_ovl15(rdram, ctx);
        goto after_9;
    // 0x80227094: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_9:
    // 0x80227098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022709C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802270A0: jal         0x802274B4
    // 0x802270A4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802274B4_ovl15(rdram, ctx);
        goto after_10;
    // 0x802270A4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_10:
    // 0x802270A8: j           L_80227210
    // 0x802270AC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_80227210;
    // 0x802270AC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_802270B0:
    // 0x802270B0: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802270B4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802270B8: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x802270BC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227280;
    }
    // 0x802270BC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802270C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802270C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802270C8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802270CC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802270D0: j           L_80227218
    // 0x802270D4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80227218;
    // 0x802270D4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_802270D8:
    // 0x802270D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802270DC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802270E0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802270E4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x802270E8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802270EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802270F0: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x802270F4: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80227280;
    }
    // 0x802270F4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802270F8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802270FC: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80227100: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227280;
    }
    // 0x80227100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227104: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227108: jal         0x8022748C
    // 0x8022710C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022748C_ovl15(rdram, ctx);
        goto after_11;
    // 0x8022710C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x80227110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227114: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227118: jal         0x802274B4
    // 0x8022711C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802274B4_ovl15(rdram, ctx);
        goto after_12;
    // 0x8022711C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80227120: j           L_80227218
    // 0x80227124: nop

        goto L_80227218;
    // 0x80227124: nop

L_80227128:
    // 0x80227128: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022712C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227130: bne         $v1, $v0, L_80227164
    if (ctx->r3 != ctx->r2) {
        // 0x80227134: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227164;
    }
    // 0x80227134: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227138: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022713C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80227140: bne         $v1, $v0, L_80227160
    if (ctx->r3 != ctx->r2) {
        // 0x80227144: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227160;
    }
    // 0x80227144: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022714C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227150: jal         0x802274B4
    // 0x80227154: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802274B4_ovl15(rdram, ctx);
        goto after_13;
    // 0x80227154: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_13:
    // 0x80227158: j           L_80227280
    // 0x8022715C: nop

        goto L_80227280;
    // 0x8022715C: nop

L_80227160:
    // 0x80227160: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
L_80227164:
    // 0x80227164: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80227168: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227280;
    }
    // 0x80227168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022716C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227170: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80227174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227280;
    }
    // 0x80227174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227178: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022717C: jal         0x8022748C
    // 0x80227180: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022748C_ovl15(rdram, ctx);
        goto after_14;
    // 0x80227180: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80227184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227188: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022718C: jal         0x802274B4
    // 0x80227190: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_802274B4_ovl15(rdram, ctx);
        goto after_15;
    // 0x80227190: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_15:
    // 0x80227194: j           L_80227210
    // 0x80227198: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
        goto L_80227210;
    // 0x80227198: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_8022719C:
    // 0x8022719C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802271A0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802271A4: bne         $v1, $v0, L_802271D8
    if (ctx->r3 != ctx->r2) {
        // 0x802271A8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802271D8;
    }
    // 0x802271A8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802271AC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802271B0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802271B4: bne         $v1, $v0, L_802271D4
    if (ctx->r3 != ctx->r2) {
        // 0x802271B8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802271D4;
    }
    // 0x802271B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802271BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271C0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802271C4: jal         0x8022748C
    // 0x802271C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8022748C_ovl15(rdram, ctx);
        goto after_16;
    // 0x802271C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_16:
    // 0x802271CC: j           L_80227280
    // 0x802271D0: nop

        goto L_80227280;
    // 0x802271D0: nop

L_802271D4:
    // 0x802271D4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
L_802271D8:
    // 0x802271D8: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x802271DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227280;
    }
    // 0x802271DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802271E0: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802271E4: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x802271E8: nop
    
            goto L_80227280;
    }
    // 0x802271E8: nop

    // 0x802271EC: j           L_80227214
    // 0x802271F0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
        goto L_80227214;
    // 0x802271F0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_802271F4:
    // 0x802271F4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802271F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802271FC: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80227200: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80227280;
    }
    // 0x80227200: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227204: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227208: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x8022720C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227280;
    }
    // 0x8022720C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227210:
    // 0x80227210: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227214:
    // 0x80227214: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80227218:
    // 0x80227218: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022721C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227220: j           L_80227280
    // 0x80227224: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227280;
    // 0x80227224: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227228:
    // 0x80227228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022722C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227230: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227234: jal         0x8004DA90
    // 0x80227238: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_17;
    // 0x80227238: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
    // 0x8022723C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80227240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227244: bne         $v1, $v0, L_80227280
    if (ctx->r3 != ctx->r2) {
        // 0x80227248: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227280;
    }
    // 0x80227248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022724C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227250: jal         0x8022748C
    // 0x80227254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022748C_ovl15(rdram, ctx);
        goto after_18;
    // 0x80227254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80227258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022725C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227260: jal         0x802274B4
    // 0x80227264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802274B4_ovl15(rdram, ctx);
        goto after_19;
    // 0x80227264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80227268: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022726C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80227270: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227274: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227278: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022727C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80227280:
    // 0x80227280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227284: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227288: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022728C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227290: jr          $ra
    // 0x80227294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228D18_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228D1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228D20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228D24: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228D28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80228D2C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228D30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228D34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228D38: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80228D3C: jal         0x8004D5D4
    // 0x80228D40: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228D40: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228D44: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80228D48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228D4C: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80228D50: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80228D54: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80228D58: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80228D5C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80228D60: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228D64: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228D68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D6C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80228D70: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80228D74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D78: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x80228D7C: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x80228D80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D84: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80228D88: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80228D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D90: bne         $v1, $v0, L_80228DA8
    if (ctx->r3 != ctx->r2) {
        // 0x80228D94: nop
    
            goto L_80228DA8;
    }
    // 0x80228D94: nop

    // 0x80228D98: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228D9C: addiu       $v0, $v0, 0x19C0
    ctx->r2 = ADD32(ctx->r2, 0X19C0);
    // 0x80228DA0: j           L_80228DB4
    // 0x80228DA4: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
        goto L_80228DB4;
    // 0x80228DA4: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
L_80228DA8:
    // 0x80228DA8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228DAC: addiu       $v0, $v0, 0x1C24
    ctx->r2 = ADD32(ctx->r2, 0X1C24);
    // 0x80228DB0: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
L_80228DB4:
    // 0x80228DB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228DB8: jal         0x802291F4
    // 0x80228DBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802291F4_ovl15(rdram, ctx);
        goto after_1;
    // 0x80228DBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80228DC0: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80228DC4: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80228DC8: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80228DCC: jal         0x8004F144
    // 0x80228DD0: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80228DD0: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    after_2:
    // 0x80228DD4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228DD8: beq         $a0, $zero, L_80228E08
    if (ctx->r4 == 0) {
        // 0x80228DDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228E08;
    }
    // 0x80228DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228DE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80228DE4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80228DE8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80228DEC: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80228DF0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80228DF4: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80228DF8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80228DFC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228E00: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80228E04: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80228E08:
    // 0x80228E08: jal         0x8004F144
    // 0x80228E0C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80228E0C: nop

    after_3:
    // 0x80228E10: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228E14: beq         $a0, $zero, L_80228E40
    if (ctx->r4 == 0) {
        // 0x80228E18: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80228E40;
    }
    // 0x80228E18: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80228E1C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80228E20: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80228E24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228E28: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80228E2C: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x80228E30: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80228E34: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228E38: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80228E3C: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80228E40:
    // 0x80228E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228E48: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80228E4C: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x80228E50: jal         0x8022C8F0
    // 0x80228E54: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    func_8022C8F0_ovl15(rdram, ctx);
        goto after_4;
    // 0x80228E54: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    after_4:
    // 0x80228E58: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x80228E5C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228E60: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228E64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228E6C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228E70: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228E74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228E78: jr          $ra
    // 0x80228E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BD9C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD9C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022BDA0: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022BDA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BDA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BDAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BDB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BDB4: bne         $v1, $v0, L_8022BDDC
    if (ctx->r3 != ctx->r2) {
        // 0x8022BDB8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022BDDC;
    }
    // 0x8022BDB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BDBC: jal         0x80061724
    // 0x8022BDC0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022BDC0: nop

    after_0:
    // 0x8022BDC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BDC8: jal         0x800616FC
    // 0x8022BDCC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022BDCC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022BDD0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022BDD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BDD8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022BDDC:
    // 0x8022BDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BDE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BDE4: jr          $ra
    // 0x8022BDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C50_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229C54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229C58: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229C5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229C60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229C64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229C68: lw          $v0, 0x23DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X23DC);
    // 0x80229C6C: jalr        $v0
    // 0x80229C70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229C70: nop

    after_0:
    // 0x80229C74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229C78: jr          $ra
    // 0x80229C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229F80_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229F88: jal         0x8004F418
    // 0x80229F8C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229F8C: nop

    after_0:
    // 0x80229F90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F94: jr          $ra
    // 0x80229F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AF78_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF78: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022AF7C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022AF80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AF84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022AF88: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022AF8C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022AF90: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022AF94: jal         0x8022C264
    // 0x8022AF98: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022C264_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022AF98: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022AF9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AFA0: beq         $v0, $zero, L_8022AFD0
    if (ctx->r2 == 0) {
        // 0x8022AFA4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022AFD0;
    }
    // 0x8022AFA4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022AFA8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AFAC: bne         $v1, $v0, L_8022B0F8
    if (ctx->r3 != ctx->r2) {
        // 0x8022AFB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B0F8;
    }
    // 0x8022AFB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AFB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AFB8: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AFBC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022AFC0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022AFC4: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022AFC8: j           L_8022B0FC
    // 0x8022AFCC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022B0FC;
    // 0x8022AFCC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022AFD0:
    // 0x8022AFD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFD4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022AFD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AFDC: jal         0x8004DA90
    // 0x8022AFE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022AFE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022AFE4: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022AFE8: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022AFEC: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022AFF0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022AFF4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022AFF8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022AFFC: beq         $v0, $zero, L_8022B00C
    if (ctx->r2 == 0) {
        // 0x8022B000: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022B00C;
    }
    // 0x8022B000: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022B004: j           L_8022B01C
    // 0x8022B008: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022B01C;
    // 0x8022B008: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022B00C:
    // 0x8022B00C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022B010: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B014: beq         $v0, $zero, L_8022B04C
    if (ctx->r2 == 0) {
        // 0x8022B018: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022B04C;
    }
    // 0x8022B018: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022B01C:
    // 0x8022B01C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B020: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022B024: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022B028: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B02C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B030: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B034: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022B038: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022B03C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022B040: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022B044: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B048: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022B04C:
    // 0x8022B04C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022B050: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022B054: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022B058: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022B05C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022B060: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B064: beq         $v0, $zero, L_8022B078
    if (ctx->r2 == 0) {
        // 0x8022B068: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022B078;
    }
    // 0x8022B068: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022B06C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B070: j           L_8022B08C
    // 0x8022B074: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022B08C;
    // 0x8022B074: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022B078:
    // 0x8022B078: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022B07C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022B080: beq         $v0, $zero, L_8022B0BC
    if (ctx->r2 == 0) {
        // 0x8022B084: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022B0BC;
    }
    // 0x8022B084: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022B088: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022B08C:
    // 0x8022B08C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022B090: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B094: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B098: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022B09C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B0A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B0A4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B0A8: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022B0AC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022B0B0: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022B0B4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022B0B8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022B0BC:
    // 0x8022B0BC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022B0C0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022B0C4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022B0C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B0CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B0D0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022B0D4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022B0D8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022B0DC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022B0E0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022B0E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B0E8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022B0EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B0F0: bne         $v0, $zero, L_8022B0FC
    if (ctx->r2 != 0) {
        // 0x8022B0F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B0FC;
    }
    // 0x8022B0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B0F8:
    // 0x8022B0F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B0FC:
    // 0x8022B0FC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022B100: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022B104: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022B108: jr          $ra
    // 0x8022B10C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022B10C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022BB20_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022BB24: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022BB28: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022BB2C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BB30: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022BB34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BB38: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022BB3C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022BB40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BB44: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022BB48: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022BB4C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022BB50: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022BB54: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022BB58: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022BB5C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022BB60: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022BB64: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BB68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BB6C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022BB70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BB74: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022BB78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022BB7C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022BB80: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022BB84: jal         0x8009A3B4
    // 0x8022BB88: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BB88: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022BB8C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022BB90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BB94: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022BB98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BB9C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022BBA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BBA4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022BBA8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022BBAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BBB0: jal         0x8004EC38
    // 0x8022BBB4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022BBB4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022BBB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022BBBC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022BBC0: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022BBC4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022BBC8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022BBCC: jal         0x80034FCC
    // 0x8022BBD0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022BBD0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022BBD4: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022BBD8: jal         0x8022C1C8
    // 0x8022BBDC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022BBDC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022BBE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BBE4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022BBE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BBEC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022BBF0: jal         0x8004F820
    // 0x8022BBF4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022BBF4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022BBF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBFC: bgez        $v0, L_8022BC28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BC00: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022BC28;
    }
    // 0x8022BC00: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022BC04: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022BC08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BC0C: jal         0x8004F820
    // 0x8022BC10: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022BC10: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022BC14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC18: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BC1C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022BC20: j           L_8022BC40
    // 0x8022BC24: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022BC40;
    // 0x8022BC24: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022BC28:
    // 0x8022BC28: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022BC2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BC30: jal         0x8004F820
    // 0x8022BC34: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022BC34: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022BC38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC3C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022BC40:
    // 0x8022BC40: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022BC44: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022BC48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BC4C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022BC50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BC54: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022BC58: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022BC5C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022BC60: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022BC64: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BC68: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BC6C: jr          $ra
    // 0x8022BC70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022BC70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022EEA0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EEA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022EEA4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022EEA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEAC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022EEB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EEB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022EEB8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022EEBC: jal         0x80047284
    // 0x8022EEC0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x8022EEC0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022EEC4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EEC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EECC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EED0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EED4: lw          $v0, 0x2A30($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A30);
    // 0x8022EED8: jalr        $v0
    // 0x8022EEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022EEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EEE0: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8022EEE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EEE8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EEEC: jal         0x8009A3B4
    // 0x8022EEF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EEF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EEF8: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022EEFC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022EF00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EF04: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x8022EF08: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022EF0C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022EF10: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022EF14: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x8022EF18: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EF1C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022EF20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022EF24: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022EF28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022EF2C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022EF30: jal         0x80051E18
    // 0x8022EF34: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022EF34: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022EF38: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8022EF3C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022EF40: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EF44: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EF48: jr          $ra
    // 0x8022EF4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022EF4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80229550_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229550: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229554: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229558: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022955C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229560: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229564: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229568: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022956C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229570: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229574: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80229578: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022957C: bne         $v1, $v0, L_80229594
    if (ctx->r3 != ctx->r2) {
        // 0x80229580: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80229594;
    }
    // 0x80229580: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80229584: jal         0x8004D5FC
    // 0x80229588: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x80229588: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022958C: j           L_802295A4
    // 0x80229590: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_802295A4;
    // 0x80229590: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80229594:
    // 0x80229594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229598: jal         0x8004D5D4
    // 0x8022959C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022959C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x802295A0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_802295A4:
    // 0x802295A4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802295A8: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x802295AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802295B0: addiu       $v0, $v0, 0x1DF8
    ctx->r2 = ADD32(ctx->r2, 0X1DF8);
    // 0x802295B4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802295B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295BC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802295C0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802295C4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x802295C8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802295CC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x802295D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802295D4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802295D8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802295DC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802295E0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802295E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295E8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802295EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802295F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295F8: jr          $ra
    // 0x802295FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802295FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CA3C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CA40: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CA44: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022CA48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CA4C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022CA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CA54: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022CA58: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022CA5C: jal         0x8004EEAC
    // 0x8022CA60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022CA60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022CA64: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CA68: bne         $a0, $zero, L_8022CA78
    if (ctx->r4 != 0) {
        // 0x8022CA6C: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_8022CA78;
    }
    // 0x8022CA6C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8022CA70: j           L_8022CBC4
    // 0x8022CA74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CBC4;
    // 0x8022CA74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022CA78:
    // 0x8022CA78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CA7C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022CA80: addiu       $a3, $a0, 0x88
    ctx->r7 = ADD32(ctx->r4, 0X88);
    // 0x8022CA84: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022CA88: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x8022CA8C: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022CA90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CA94: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8022CA98: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8022CA9C: sb          $s2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r18;
    // 0x8022CAA0: beq         $v1, $v0, L_8022CAE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022CAA4: sw          $zero, 0xC($a0)
        MEM_W(0XC, ctx->r4) = 0;
            goto L_8022CAE4;
    }
    // 0x8022CAA4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8022CAA8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CAAC: beql        $v0, $zero, L_8022CAC4
    if (ctx->r2 == 0) {
        // 0x8022CAB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CAC4;
    }
    goto skip_0;
    // 0x8022CAB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8022CAB4: beq         $v1, $zero, L_8022CAD4
    if (ctx->r3 == 0) {
        // 0x8022CAB8: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_8022CAD4;
    }
    // 0x8022CAB8: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022CABC: j           L_8022CB28
    // 0x8022CAC0: nop

        goto L_8022CB28;
    // 0x8022CAC0: nop

L_8022CAC4:
    // 0x8022CAC4: beq         $v1, $v0, L_8022CB04
    if (ctx->r3 == ctx->r2) {
        // 0x8022CAC8: lui         $v1, 0x2E40
        ctx->r3 = S32(0X2E40 << 16);
            goto L_8022CB04;
    }
    // 0x8022CAC8: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8022CACC: j           L_8022CB28
    // 0x8022CAD0: nop

        goto L_8022CB28;
    // 0x8022CAD0: nop

L_8022CAD4:
    // 0x8022CAD4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022CAD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CADC: j           L_8022CAF4
    // 0x8022CAE0: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
        goto L_8022CAF4;
    // 0x8022CAE0: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
L_8022CAE4:
    // 0x8022CAE4: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8022CAE8: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8022CAEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CAF0: sb          $a1, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r5;
L_8022CAF4:
    // 0x8022CAF4: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x8022CAF8: sb          $a1, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r5;
    // 0x8022CAFC: j           L_8022CB38
    // 0x8022CB00: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_8022CB38;
    // 0x8022CB00: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_8022CB04:
    // 0x8022CB04: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8022CB08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CB0C: sb          $v0, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r2;
    // 0x8022CB10: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CB14: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x8022CB18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CB1C: sb          $v0, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r2;
    // 0x8022CB20: j           L_8022CB38
    // 0x8022CB24: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_8022CB38;
    // 0x8022CB24: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_8022CB28:
    // 0x8022CB28: jal         0x8004F418
    // 0x8022CB2C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022CB2C: nop

    after_1:
    // 0x8022CB30: j           L_8022CBC4
    // 0x8022CB34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CBC4;
    // 0x8022CB34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022CB38:
    // 0x8022CB38: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022CB3C: sb          $v0, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r2;
    // 0x8022CB40: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x8022CB44: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8022CB48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CB4C: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x8022CB50: beq         $v1, $zero, L_8022CBC0
    if (ctx->r3 == 0) {
        // 0x8022CB54: sb          $v0, 0x2($a3)
        MEM_B(0X2, ctx->r7) = ctx->r2;
            goto L_8022CBC0;
    }
    // 0x8022CB54: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x8022CB58: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
L_8022CB5C:
    // 0x8022CB5C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022CB60: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8022CB64: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x8022CB68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CB6C: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022CB70: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022CB74: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8022CB78: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_8022CB7C:
    // 0x8022CB7C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022CB80: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CB84: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CB88: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022CB8C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022CB90: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022CB94: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022CB98: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022CB9C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CBA0: bne         $v0, $zero, L_8022CB7C
    if (ctx->r2 != 0) {
        // 0x8022CBA4: andi        $v0, $a1, 0xFF
        ctx->r2 = ctx->r5 & 0XFF;
            goto L_8022CB7C;
    }
    // 0x8022CBA4: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022CBA8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022CBAC: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8022CBB0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022CBB4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CBB8: bne         $v0, $zero, L_8022CB5C
    if (ctx->r2 != 0) {
        // 0x8022CBBC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022CB5C;
    }
    // 0x8022CBBC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022CBC0:
    // 0x8022CBC0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8022CBC4:
    // 0x8022CBC4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CBC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CBCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CBD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CBD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CBD8: jr          $ra
    // 0x8022CBDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CBDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022ACE4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ACE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ACEC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022ACF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ACF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022ACF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ACFC: lw          $v0, 0x2554($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2554);
    // 0x8022AD00: jalr        $v0
    // 0x8022AD04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AD04: nop

    after_0:
    // 0x8022AD08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD0C: jr          $ra
    // 0x8022AD10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F7F0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F7F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F7F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F7FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F800: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F808: lw          $v0, 0x2A80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A80);
    // 0x8022F80C: jalr        $v0
    // 0x8022F810: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F810: nop

    after_0:
    // 0x8022F814: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F818: jr          $ra
    // 0x8022F81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CD40_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CD44: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022CD48: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022CD4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CD50: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022CD54: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CD58: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022CD5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CD60: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CD64: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022CD68: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8022CD6C: addiu       $s6, $s6, 0x2BE0
    ctx->r22 = ADD32(ctx->r22, 0X2BE0);
    // 0x8022CD70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022CD74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CD78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CD7C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_8022CD80:
    // 0x8022CD80: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8022CD84: bne         $v0, $zero, L_8022CD90
    if (ctx->r2 != 0) {
        // 0x8022CD88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CD90;
    }
    // 0x8022CD88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CD90:
    // 0x8022CD90: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022CD94: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x8022CD98: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022CD9C: beq         $v0, $zero, L_8022CDFC
    if (ctx->r2 == 0) {
        // 0x8022CDA0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022CDFC;
    }
    // 0x8022CDA0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022CDA4: addu        $v0, $v0, $s6
    gpr jr_addend_8022CDAC = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022CDA8: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022CDAC: jr          $v0
    // 0x8022CDB0: nop

    switch (jr_addend_8022CDAC >> 2) {
        case 0: goto L_8022CDB4; break;
        case 1: goto L_8022CDC0; break;
        case 2: goto L_8022CDCC; break;
        case 3: goto L_8022CDD8; break;
        case 4: goto L_8022CDE4; break;
        case 5: goto L_8022CDF0; break;
        default: switch_error(__func__, 0x8022CDAC, 0x80232BE0);
    }
    // 0x8022CDB0: nop

L_8022CDB4:
    // 0x8022CDB4: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CDB8: j           L_8022CDFC
    // 0x8022CDBC: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_8022CDFC;
    // 0x8022CDBC: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022CDC0:
    // 0x8022CDC0: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CDC4: j           L_8022CDF8
    // 0x8022CDC8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022CDF8;
    // 0x8022CDC8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022CDCC:
    // 0x8022CDCC: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CDD0: j           L_8022CDF8
    // 0x8022CDD4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_8022CDF8;
    // 0x8022CDD4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022CDD8:
    // 0x8022CDD8: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022CDDC: j           L_8022CDFC
    // 0x8022CDE0: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_8022CDFC;
    // 0x8022CDE0: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022CDE4:
    // 0x8022CDE4: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022CDE8: j           L_8022CDF8
    // 0x8022CDEC: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022CDF8;
    // 0x8022CDEC: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022CDF0:
    // 0x8022CDF0: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022CDF4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022CDF8:
    // 0x8022CDF8: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022CDFC:
    // 0x8022CDFC: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8022CE00: beq         $v0, $zero, L_8022CE64
    if (ctx->r2 == 0) {
        // 0x8022CE04: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022CE64;
    }
    // 0x8022CE04: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CE08: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CE0C: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022CE10: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022CE14: beq         $v0, $zero, L_8022CE44
    if (ctx->r2 == 0) {
        // 0x8022CE18: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022CE44;
    }
    // 0x8022CE18: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CE1C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022CE20: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CE24:
    // 0x8022CE24: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x8022CE28: jal         0x8022D160
    // 0x8022CE2C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022D160_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022CE2C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022CE30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CE34: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CE38: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022CE3C: bne         $v0, $zero, L_8022CE24
    if (ctx->r2 != 0) {
        // 0x8022CE40: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022CE24;
    }
    // 0x8022CE40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CE44:
    // 0x8022CE44: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CE48: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CE4C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022CE50: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022CE54: beq         $v0, $zero, L_8022CEC0
    if (ctx->r2 == 0) {
        // 0x8022CE58: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022CEC0;
    }
    // 0x8022CE58: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CE5C: j           L_8022CEC0
    // 0x8022CE60: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_8022CEC0;
    // 0x8022CE60: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022CE64:
    // 0x8022CE64: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8022CE68: addu        $v1, $s3, $a0
    ctx->r3 = ADD32(ctx->r19, ctx->r4);
    // 0x8022CE6C: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x8022CE70: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CE74: bnel        $v0, $zero, L_8022CEC4
    if (ctx->r2 != 0) {
        // 0x8022CE78: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022CEC4;
    }
    goto skip_0;
    // 0x8022CE78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8022CE7C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CE80: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022CE84: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CE88: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x8022CE8C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8022CE90: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CE94: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022CE98:
    // 0x8022CE98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CE9C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CEA0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CEA4: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022CEA8: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022CEAC: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022CEB0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CEB4: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CEB8: bne         $v0, $zero, L_8022CE98
    if (ctx->r2 != 0) {
        // 0x8022CEBC: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8022CE98;
    }
    // 0x8022CEBC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022CEC0:
    // 0x8022CEC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022CEC4:
    // 0x8022CEC4: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CEC8: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022CECC: bne         $v0, $zero, L_8022CD80
    if (ctx->r2 != 0) {
        // 0x8022CED0: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022CD80;
    }
    // 0x8022CED0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CED4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CED8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022CEDC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022CEE0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022CEE4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CEE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CEEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CEF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEF4: jr          $ra
    // 0x8022CEF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CEF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B708_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B708: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B70C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B714: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B718: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B71C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B720: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B724: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022B728: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022B72C: bne         $v0, $zero, L_8022B788
    if (ctx->r2 != 0) {
        // 0x8022B730: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B788;
    }
    // 0x8022B730: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B734: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B738: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B73C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B740: jal         0x8004F820
    // 0x8022B744: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B744: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022B748: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B74C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B750: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022B754: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B758: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B75C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022B760: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022B764: beq         $a0, $zero, L_8022B788
    if (ctx->r4 == 0) {
        // 0x8022B768: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B788;
    }
    // 0x8022B768: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B76C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B770: jal         0x8022C130
    // 0x8022B774: nop

    func_8022C130_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022B774: nop

    after_1:
    // 0x8022B778: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B77C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B780: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B784: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022B788:
    // 0x8022B788: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022B78C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022B790: bne         $v0, $zero, L_8022B7B4
    if (ctx->r2 != 0) {
        // 0x8022B794: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022B7B4;
    }
    // 0x8022B794: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022B798: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B79C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022B7A0: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022B7A4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B7A8: jal         0x8022C1C8
    // 0x8022B7AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022B7AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022B7B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B7B4:
    // 0x8022B7B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B7B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B7BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B7C0: jr          $ra
    // 0x8022B7C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B7C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DA04_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DA08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DA10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DA14: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022DA18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DA1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DA20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DA24: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DA28: jal         0x8004D5FC
    // 0x8022DA2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8022DA2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DA30: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022DA34: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DA38: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DA3C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DA40: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DA44: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DA48: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DA4C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DA50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DA54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DA58: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022DA5C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022DA60: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022DA64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DA68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DA6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022DA70: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022DA74: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022DA78: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DA7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DA80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022DA84: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DA88: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DA8C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022DA90: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022DA94: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022DA98: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022DA9C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DAA0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8022DAA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAB0: jr          $ra
    // 0x8022DAB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DAB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A904_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A908: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A90C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A910: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A914: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A918: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022A91C: bne         $v0, $zero, L_8022A95C
    if (ctx->r2 != 0) {
        // 0x8022A920: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A95C;
    }
    // 0x8022A920: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A924: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022A928: bne         $v0, $zero, L_8022A950
    if (ctx->r2 != 0) {
        // 0x8022A92C: nop
    
            goto L_8022A950;
    }
    // 0x8022A92C: nop

    // 0x8022A930: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x8022A934: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022A938: bne         $v1, $v0, L_8022A950
    if (ctx->r3 != ctx->r2) {
        // 0x8022A93C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A950;
    }
    // 0x8022A93C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A940: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022A944: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022A948: j           L_8022A98C
    // 0x8022A94C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022A98C;
    // 0x8022A94C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022A950:
    // 0x8022A950: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x8022A954: beq         $v0, $zero, L_8022A9BC
    if (ctx->r2 == 0) {
        // 0x8022A958: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A9BC;
    }
    // 0x8022A958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A95C:
    // 0x8022A95C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A960: bne         $v0, $zero, L_8022A9BC
    if (ctx->r2 != 0) {
        // 0x8022A964: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A9BC;
    }
    // 0x8022A964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A968: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022A96C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A970: bne         $v1, $v0, L_8022A9BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A974: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022A9BC;
    }
    // 0x8022A974: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022A978: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A97C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022A980: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A984: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A988: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022A98C:
    // 0x8022A98C: jal         0x8009A3B4
    // 0x8022A990: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A990: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A994: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022A998: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A99C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022A9A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A9A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A9A8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A9AC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A9B0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A9B4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022A9B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A9BC:
    // 0x8022A9BC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A9C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A9C4: jal         0x8004DA90
    // 0x8022A9C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022A9C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022A9CC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022A9D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A9D4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022A9D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A9DC: bne         $v0, $zero, L_8022AA0C
    if (ctx->r2 != 0) {
        // 0x8022A9E0: nop
    
            goto L_8022AA0C;
    }
    // 0x8022A9E0: nop

    // 0x8022A9E4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A9E8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A9EC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A9F0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A9F4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A9F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A9FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AA00: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022AA04: j           L_8022AA5C
    // 0x8022AA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022AA5C;
    // 0x8022AA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AA0C:
    // 0x8022AA0C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022AA10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AA14: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022AA18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA1C: bne         $v0, $zero, L_8022AA2C
    if (ctx->r2 != 0) {
        // 0x8022AA20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AA2C;
    }
    // 0x8022AA20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AA24: j           L_8022AA5C
    // 0x8022AA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022AA5C;
    // 0x8022AA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AA2C:
    // 0x8022AA2C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022AA30: jal         0x8022C264
    // 0x8022AA34: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022C264_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022AA34: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x8022AA38: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AA3C: beq         $v0, $zero, L_8022AA60
    if (ctx->r2 == 0) {
        // 0x8022AA40: nop
    
            goto L_8022AA60;
    }
    // 0x8022AA40: nop

    // 0x8022AA44: jal         0x8022C1C8
    // 0x8022AA48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022AA48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022AA4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AA50: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022AA54: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022AA58: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022AA5C:
    // 0x8022AA5C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AA60:
    // 0x8022AA60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AA64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA6C: jr          $ra
    // 0x8022AA70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AA70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225150_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0xE8
    ctx->r2 = ADD32(ctx->r2, -0XE8);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x70
    ctx->r2 = ADD32(ctx->r2, 0X70);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0xAC
    ctx->r2 = ADD32(ctx->r2, 0XAC);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x144
    ctx->r2 = ADD32(ctx->r2, 0X144);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x19C
    ctx->r2 = ADD32(ctx->r2, 0X19C);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x1B0
    ctx->r2 = ADD32(ctx->r2, 0X1B0);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80226B04_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226B08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B0C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226B10: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80226B14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B18: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226B1C: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x80226B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B24: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226B28: addiu       $v0, $zero, -0x25C
    ctx->r2 = ADD32(0, -0X25C);
    // 0x80226B2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B30: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226B34: addiu       $v0, $zero, -0x4AA
    ctx->r2 = ADD32(0, -0X4AA);
    // 0x80226B38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B3C: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226B40: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226B44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B48: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    // 0x80226B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B50: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226B54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B58: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226B5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B60: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226B64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B68: jr          $ra
    // 0x80226B6C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226B6C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8022A77C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A77C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8022A780: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A784: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x8022A788: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022A78C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x8022A790: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8022A794: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x8022A798: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A79C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A7A0: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x8022A7A4: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x8022A7A8: jr          $ra
    // 0x8022A7AC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022A7AC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022DBD0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DBD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DBD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DBD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DBDC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DBE0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DBE8: jal         0x8009A3B4
    // 0x8022DBEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DBEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022DBF0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DBF4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DBF8: jal         0x8009A3B4
    // 0x8022DBFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DBFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DC00: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DC04: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DC08: jal         0x8009A3B4
    // 0x8022DC0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DC0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DC10: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DC14: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DC18: bne         $v1, $zero, L_8022DC6C
    if (ctx->r3 != 0) {
        // 0x8022DC1C: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_8022DC6C;
    }
    // 0x8022DC1C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022DC20: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DC24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DC2C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DC30: jal         0x8004D5D4
    // 0x8022DC34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022DC34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022DC38: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DC3C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DC40: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DC44: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DC48: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DC4C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DC50: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DC54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022DC58: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DC5C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022DC60: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022DC64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DC68: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022DC6C:
    // 0x8022DC6C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DC70: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022DC74: beq         $a1, $v0, L_8022DC8C
    if (ctx->r5 == ctx->r2) {
        // 0x8022DC78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DC8C;
    }
    // 0x8022DC78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC7C: jal         0x80050294
    // 0x8022DC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022DC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022DC84: j           L_8022DC94
    // 0x8022DC88: nop

        goto L_8022DC94;
    // 0x8022DC88: nop

L_8022DC8C:
    // 0x8022DC8C: jal         0x8005044C
    // 0x8022DC90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022DC90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022DC94:
    // 0x8022DC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DC98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC9C: jr          $ra
    // 0x8022DCA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DCA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022DCA4: nop

    // 0x8022DCA8: nop

    // 0x8022DCAC: nop

;}
RECOMP_FUNC void func_802259BC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259CC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259D0: bne         $v0, $zero, L_802259F8
    if (ctx->r2 != 0) {
        // 0x802259D4: nop
    
            goto L_802259F8;
    }
    // 0x802259D4: nop

    // 0x802259D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802259DC: jal         0x800607C4
    // 0x802259E0: addiu       $a0, $a0, 0x98C
    ctx->r4 = ADD32(ctx->r4, 0X98C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802259E0: addiu       $a0, $a0, 0x98C
    ctx->r4 = ADD32(ctx->r4, 0X98C);
    after_0:
    // 0x802259E4: jal         0x80225A4C
    // 0x802259E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802259E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802259EC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802259F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802259F8:
    // 0x802259F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A00: jr          $ra
    // 0x80225A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FDCC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022FDD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022FDD4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022FDD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FDDC: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x8022FDE0: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022FDE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FDE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022FDEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022FDF0: jal         0x800324B4
    // 0x8022FDF4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022FDF4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8022FDF8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022FDFC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FE00: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FE04: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x8022FE08: sra         $s1, $s1, 24
    ctx->r17 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8022FE0C: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FE10: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FE14: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8022FE18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE1C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FE20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FE24: jal         0x80032498
    // 0x8022FE28: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022FE28: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022FE2C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8022FE30: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FE34: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FE38: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FE3C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022FE40: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x8022FE44: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022FE48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FE4C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022FE50: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x8022FE54: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8022FE58: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022FE5C: jal         0x8003B878
    // 0x8022FE60: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_2;
    // 0x8022FE60: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022FE64: lui         $a1, 0x2EF0
    ctx->r5 = S32(0X2EF0 << 16);
    // 0x8022FE68: ori         $a1, $a1, 0xA0A0
    ctx->r5 = ctx->r5 | 0XA0A0;
    // 0x8022FE6C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x8022FE70: ori         $a0, $a0, 0x4080
    ctx->r4 = ctx->r4 | 0X4080;
    // 0x8022FE74: lui         $v1, 0xE
    ctx->r3 = S32(0XE << 16);
    // 0x8022FE78: ori         $v1, $v1, 0x409F
    ctx->r3 = ctx->r3 | 0X409F;
    // 0x8022FE7C: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022FE80: addiu       $v1, $zero, 0x5F80
    ctx->r3 = ADD32(0, 0X5F80);
    // 0x8022FE84: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8022FE88: addiu       $v1, $zero, 0x5F9F
    ctx->r3 = ADD32(0, 0X5F9F);
    // 0x8022FE8C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8022FE90: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x8022FE94: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022FE98: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE9C: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x8022FEA0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022FEA4: subu        $v1, $v1, $s1
    ctx->r3 = SUB32(ctx->r3, ctx->r17);
    // 0x8022FEA8: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8022FEAC: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8022FEB0: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x8022FEB4: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022FEB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022FEBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022FEC0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FEC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FEC8: jr          $ra
    // 0x8022FECC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022FECC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E02C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E02C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022E030: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022E034: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022E038: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022E03C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8022E040: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8022E044: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022E048: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022E04C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022E050: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022E054: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8022E058: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022E05C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E060: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E064: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E068: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022E06C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x8022E070: lhu         $s5, 0x2924($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X2924);
    // 0x8022E074: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8022E078: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8022E07C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8022E080: lhu         $s6, 0x2926($s6)
    ctx->r22 = MEM_HU(ctx->r22, 0X2926);
    // 0x8022E084: jal         0x800874D0
    // 0x8022E088: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x8022E088: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8022E08C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022E090: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022E094: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x8022E098: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022E09C: addiu       $a0, $a0, 0x2C30
    ctx->r4 = ADD32(ctx->r4, 0X2C30);
    // 0x8022E0A0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x8022E0A4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E0A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E0AC: lbu         $v1, 0x29C8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X29C8);
    // 0x8022E0B0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022E0B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022E0BC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022E0C0: jal         0x80086F94
    // 0x8022E0C4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x8022E0C4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8022E0C8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8022E0CC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E0D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E0D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E0D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E0DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E0E0: lhu         $v0, 0x2928($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2928);
    // 0x8022E0E4: beq         $v0, $zero, L_8022E300
    if (ctx->r2 == 0) {
        // 0x8022E0E8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8022E300;
    }
    // 0x8022E0E8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8022E0EC:
    // 0x8022E0EC: bgez        $s6, L_8022E0F8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8022E0F0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8022E0F8;
    }
    // 0x8022E0F0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8022E0F4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_8022E0F8:
    // 0x8022E0F8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022E0FC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E100: beq         $v0, $zero, L_8022E3BC
    if (ctx->r2 == 0) {
        // 0x8022E104: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022E3BC;
    }
    // 0x8022E104: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022E108: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8022E10C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022E110: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8022E114: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8022E118: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022E11C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022E120: jal         0x800874D0
    // 0x8022E124: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x8022E124: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x8022E128: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022E12C: jal         0x80087248
    // 0x8022E130: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x8022E130: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x8022E134: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E138: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022E13C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x8022E140: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x8022E144: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8022E148: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022E14C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022E150: jal         0x800874D0
    // 0x8022E154: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x8022E154: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8022E158: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022E15C: jal         0x80087248
    // 0x8022E160: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x8022E160: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x8022E164: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x8022E168: bgez        $s5, L_8022E174
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022E16C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8022E174;
    }
    // 0x8022E16C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E170: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_8022E174:
    // 0x8022E174: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x8022E178: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022E17C: jal         0x800874D0
    // 0x8022E180: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x8022E180: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x8022E184: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022E188: jal         0x80087248
    // 0x8022E18C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8022E18C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x8022E190: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E194: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8022E198: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8022E19C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E1A0: bnel        $v0, $zero, L_8022E0EC
    if (ctx->r2 != 0) {
        // 0x8022E1A4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022E0EC;
    }
    goto skip_0;
    // 0x8022E1A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x8022E1A8: beq         $a1, $zero, L_8022E2F8
    if (ctx->r5 == 0) {
        // 0x8022E1AC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8022E2F8;
    }
    // 0x8022E1AC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8022E1B0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x8022E1B4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x8022E1B8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8022E1BC:
    // 0x8022E1BC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x8022E1C0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x8022E1C4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x8022E1C8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8022E1CC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x8022E1D0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x8022E1D4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x8022E1D8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E1DC: mflo        $a3
    ctx->r7 = lo;
    // 0x8022E1E0: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x8022E1E4: nop

    // 0x8022E1E8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8022E1EC: bne         $a1, $zero, L_8022E1F8
    if (ctx->r5 != 0) {
        // 0x8022E1F0: nop
    
            goto L_8022E1F8;
    }
    // 0x8022E1F0: nop

    // 0x8022E1F4: break       7
    do_break(2149769716);
L_8022E1F8:
    // 0x8022E1F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022E1FC: bne         $a1, $at, L_8022E210
    if (ctx->r5 != ctx->r1) {
        // 0x8022E200: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022E210;
    }
    // 0x8022E200: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E204: bne         $a3, $at, L_8022E210
    if (ctx->r7 != ctx->r1) {
        // 0x8022E208: nop
    
            goto L_8022E210;
    }
    // 0x8022E208: nop

    // 0x8022E20C: break       6
    do_break(2149769740);
L_8022E210:
    // 0x8022E210: mflo        $a3
    ctx->r7 = lo;
    // 0x8022E214: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x8022E218: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8022E21C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8022E220: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022E224: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8022E228: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E22C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E230: nop

    // 0x8022E234: nop

    // 0x8022E238: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8022E23C: bne         $a1, $zero, L_8022E248
    if (ctx->r5 != 0) {
        // 0x8022E240: nop
    
            goto L_8022E248;
    }
    // 0x8022E240: nop

    // 0x8022E244: break       7
    do_break(2149769796);
L_8022E248:
    // 0x8022E248: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022E24C: bne         $a1, $at, L_8022E260
    if (ctx->r5 != ctx->r1) {
        // 0x8022E250: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022E260;
    }
    // 0x8022E250: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E254: bne         $v0, $at, L_8022E260
    if (ctx->r2 != ctx->r1) {
        // 0x8022E258: nop
    
            goto L_8022E260;
    }
    // 0x8022E258: nop

    // 0x8022E25C: break       6
    do_break(2149769820);
L_8022E260:
    // 0x8022E260: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E264: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8022E268: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8022E26C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8022E270: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E274: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8022E278: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E27C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E280: nop

    // 0x8022E284: nop

    // 0x8022E288: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8022E28C: bne         $a1, $zero, L_8022E298
    if (ctx->r5 != 0) {
        // 0x8022E290: nop
    
            goto L_8022E298;
    }
    // 0x8022E290: nop

    // 0x8022E294: break       7
    do_break(2149769876);
L_8022E298:
    // 0x8022E298: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022E29C: bne         $a1, $at, L_8022E2B0
    if (ctx->r5 != ctx->r1) {
        // 0x8022E2A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022E2B0;
    }
    // 0x8022E2A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E2A4: bne         $v1, $at, L_8022E2B0
    if (ctx->r3 != ctx->r1) {
        // 0x8022E2A8: nop
    
            goto L_8022E2B0;
    }
    // 0x8022E2A8: nop

    // 0x8022E2AC: break       6
    do_break(2149769900);
L_8022E2B0:
    // 0x8022E2B0: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E2B4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x8022E2B8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8022E2BC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x8022E2C0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x8022E2C4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8022E2C8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8022E2CC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x8022E2D0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8022E2D4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x8022E2D8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8022E2DC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8022E2E0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022E2E4: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022E2E8: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8022E2EC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8022E2F0: bne         $v0, $zero, L_8022E1BC
    if (ctx->r2 != 0) {
        // 0x8022E2F4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8022E1BC;
    }
    // 0x8022E2F4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_8022E2F8:
    // 0x8022E2F8: j           L_8022E0EC
    // 0x8022E2FC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8022E0EC;
    // 0x8022E2FC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022E300:
    // 0x8022E300: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8022E304: bne         $v0, $zero, L_8022E3BC
    if (ctx->r2 != 0) {
        // 0x8022E308: nop
    
            goto L_8022E3BC;
    }
    // 0x8022E308: nop

L_8022E30C:
    // 0x8022E30C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8022E310: bltzl       $v0, L_8022E318
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E314: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8022E318;
    }
    goto skip_1;
    // 0x8022E314: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_8022E318:
    // 0x8022E318: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022E31C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E320: beq         $v0, $zero, L_8022E3BC
    if (ctx->r2 == 0) {
        // 0x8022E324: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022E3BC;
    }
    // 0x8022E324: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022E328: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8022E32C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022E330: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8022E334: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8022E338: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022E33C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022E340: jal         0x800874D0
    // 0x8022E344: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x8022E344: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x8022E348: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022E34C: jal         0x80087248
    // 0x8022E350: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x8022E350: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x8022E354: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E358: bgez        $s5, L_8022E364
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022E35C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8022E364;
    }
    // 0x8022E35C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8022E360: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_8022E364:
    // 0x8022E364: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8022E368: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E36C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x8022E370: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8022E374: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022E378: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022E37C: jal         0x800874D0
    // 0x8022E380: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x8022E380: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x8022E384: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022E388: jal         0x80087248
    // 0x8022E38C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8022E38C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x8022E390: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E394: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8022E398: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022E39C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E3A0: bnel        $v0, $zero, L_8022E30C
    if (ctx->r2 != 0) {
        // 0x8022E3A4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022E30C;
    }
    goto skip_2;
    // 0x8022E3A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x8022E3A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E3AC: jal         0x80099F90
    // 0x8022E3B0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022E3B0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x8022E3B4: j           L_8022E30C
    // 0x8022E3B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8022E30C;
    // 0x8022E3B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022E3BC:
    // 0x8022E3BC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8022E3C0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8022E3C4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8022E3C8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022E3CC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022E3D0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022E3D4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022E3D8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022E3DC: jr          $ra
    // 0x8022E3E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8022E3E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80229960_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229960: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80229964: lb          $v0, 0xC($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XC);
    // 0x80229968: bne         $v0, $zero, L_802299B0
    if (ctx->r2 != 0) {
        // 0x8022996C: nop
    
            goto L_802299B0;
    }
    // 0x8022996C: nop

    // 0x80229970: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80229974: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229978: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022997C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80229980: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80229984: lh          $a0, -0x2400($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2400);
    // 0x80229988: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8022998C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80229990: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229994: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80229998: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022999C: sh          $v1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r3;
    // 0x802299A0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802299A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802299A8: j           L_802299B8
    // 0x802299AC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_802299B8;
    // 0x802299AC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_802299B0:
    // 0x802299B0: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x802299B4: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
L_802299B8:
    // 0x802299B8: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x802299BC: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x802299C0: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x802299C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802299C8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802299CC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802299D0: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x802299D4: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x802299D8: jr          $ra
    // 0x802299DC: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x802299DC: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_8022823C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022823C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228240: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80228244: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80228248: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022824C: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80228250: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228254: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228258: lw          $v0, 0x1930($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1930);
    // 0x8022825C: jr          $ra
    // 0x80228260: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80228260: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225FFC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226000: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226004: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022600C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226010: bne         $v0, $zero, L_8022605C
    if (ctx->r2 != 0) {
        // 0x80226014: addiu       $v0, $zero, 0x84
        ctx->r2 = ADD32(0, 0X84);
            goto L_8022605C;
    }
    // 0x80226014: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x80226018: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022601C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226020: addiu       $a0, $a0, 0xA44
    ctx->r4 = ADD32(ctx->r4, 0XA44);
    // 0x80226024: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80226028: addiu       $v0, $zero, -0x1DD
    ctx->r2 = ADD32(0, -0X1DD);
    // 0x8022602C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80226030: addiu       $v0, $zero, -0x104
    ctx->r2 = ADD32(0, -0X104);
    // 0x80226034: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80226038: lui         $v0, 0x84
    ctx->r2 = S32(0X84 << 16);
    // 0x8022603C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226040: lui         $v0, 0xFE23
    ctx->r2 = S32(0XFE23 << 16);
    // 0x80226044: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80226048: lui         $v0, 0xFEFC
    ctx->r2 = S32(0XFEFC << 16);
    // 0x8022604C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226050: addiu       $v0, $zero, 0x5C7
    ctx->r2 = ADD32(0, 0X5C7);
    // 0x80226054: jal         0x8005FA7C
    // 0x80226058: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80226058: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    after_0:
L_8022605C:
    // 0x8022605C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226060: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80226064: bne         $v1, $v0, L_80226078
    if (ctx->r3 != ctx->r2) {
        // 0x80226068: nop
    
            goto L_80226078;
    }
    // 0x80226068: nop

    // 0x8022606C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226070: jal         0x8005FA7C
    // 0x80226074: addiu       $a0, $a0, 0xA6C
    ctx->r4 = ADD32(ctx->r4, 0XA6C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80226074: addiu       $a0, $a0, 0xA6C
    ctx->r4 = ADD32(ctx->r4, 0XA6C);
    after_1:
L_80226078:
    // 0x80226078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022607C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226080: jr          $ra
    // 0x80226084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB38_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EB3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EB40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EB44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EB48: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022EB4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EB50: jal         0x8002C654
    // 0x8022EB54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022EB54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022EB58: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EB5C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022EB60: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EB64: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022EB68: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022EB6C: lhu         $a0, 0x2A20($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2A20);
    // 0x8022EB70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EB74: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EB78: jal         0x80031BB4
    // 0x8022EB7C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_1;
    // 0x8022EB7C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_1:
    // 0x8022EB80: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EB84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EB88: jal         0x800319B4
    // 0x8022EB8C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022EB8C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x8022EB90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB9C: jr          $ra
    // 0x8022EBA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EBA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225C70_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225C74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225C78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225C7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225C80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C84: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80225C88: beq         $v1, $zero, L_80225CA0
    if (ctx->r3 == 0) {
        // 0x80225C8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225CA0;
    }
    // 0x80225C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C90: beq         $v1, $v0, L_80225CFC
    if (ctx->r3 == ctx->r2) {
        // 0x80225C94: nop
    
            goto L_80225CFC;
    }
    // 0x80225C94: nop

    // 0x80225C98: j           L_80225D50
    // 0x80225C9C: nop

        goto L_80225D50;
    // 0x80225C9C: nop

L_80225CA0:
    // 0x80225CA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225CA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225CA8: jal         0x8005F6B4
    // 0x80225CAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80225CAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225CB0: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225CB4: addiu       $s0, $s0, 0xA1C
    ctx->r16 = ADD32(ctx->r16, 0XA1C);
    // 0x80225CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225CBC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225CC0: addiu       $v0, $v0, 0xA80
    ctx->r2 = ADD32(ctx->r2, 0XA80);
    // 0x80225CC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225CC8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225CCC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225CD0: addiu       $v0, $v0, 0xACC
    ctx->r2 = ADD32(ctx->r2, 0XACC);
    // 0x80225CD4: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80225CD8: jal         0x8005FA7C
    // 0x80225CDC: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225CDC: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_1:
    // 0x80225CE0: jal         0x8005FA7C
    // 0x80225CE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80225CE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80225CE8: jal         0x80036B58
    // 0x80225CEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_3;
    // 0x80225CEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x80225CF0: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225CF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CF8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225CFC:
    // 0x80225CFC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225D00: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225D04: jal         0x8006FF84
    // 0x80225D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x80225D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225D0C: beq         $v0, $zero, L_80225D50
    if (ctx->r2 == 0) {
        // 0x80225D10: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80225D50;
    }
    // 0x80225D10: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225D14: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225D18: ori         $a0, $a0, 0x3601
    ctx->r4 = ctx->r4 | 0X3601;
    // 0x80225D1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225D20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D24: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D2C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80225D30: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80225D34: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80225D38: jal         0x80036B1C
    // 0x80225D3C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_5;
    // 0x80225D3C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_5:
    // 0x80225D40: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80225D44: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x80225D48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D4C: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225D50:
    // 0x80225D50: jal         0x8005FB90
    // 0x80225D54: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x80225D54: nop

    after_6:
    // 0x80225D58: jal         0x80060018
    // 0x80225D5C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x80225D5C: nop

    after_7:
    // 0x80225D60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225D64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225D68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D6C: jr          $ra
    // 0x80225D70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227708_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227708: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022770C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227714: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227718: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8022771C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227720: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227724: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227728: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022772C: jal         0x8004D5D4
    // 0x80227730: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227730: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227734: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80227738: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x8022773C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227740: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227744: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227748: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022774C: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80227750: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
L_80227754:
    // 0x80227754: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80227758: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022775C: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x80227760: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80227764: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227768: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022776C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227770: slti        $v0, $v0, 0x12
    ctx->r2 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x80227774: bne         $v0, $zero, L_80227754
    if (ctx->r2 != 0) {
        // 0x80227778: sll         $v0, $v1, 24
        ctx->r2 = S32(ctx->r3 << 24);
            goto L_80227754;
    }
    // 0x80227778: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8022777C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227780: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227788: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022778C: sh          $v0, 0x216($s0)
    MEM_H(0X216, ctx->r16) = ctx->r2;
    // 0x80227790: addiu       $v0, $zero, -0x3DF0
    ctx->r2 = ADD32(0, -0X3DF0);
    // 0x80227794: sh          $v0, 0x21E($s0)
    MEM_H(0X21E, ctx->r16) = ctx->r2;
    // 0x80227798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022779C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802277A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802277A4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802277A8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802277AC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x802277B0: jal         0x80228214
    // 0x802277B4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    func_80228214_ovl15(rdram, ctx);
        goto after_1;
    // 0x802277B4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    after_1:
    // 0x802277B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802277BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802277C0: jal         0x8022823C
    // 0x802277C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022823C_ovl15(rdram, ctx);
        goto after_2;
    // 0x802277C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802277C8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802277CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802277D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802277D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802277DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802277E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277E4: jr          $ra
    // 0x802277E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802277E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226E14_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226E24: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80226E28: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226E2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226E30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226E34: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226E38: jal         0x8004D5D4
    // 0x80226E3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226E3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226E48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226E4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226E50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226E54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226E58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226E5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226E60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226E64: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80226E68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226E6C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226E70: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226E74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80226E78: jal         0x8022748C
    // 0x80226E7C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022748C_ovl15(rdram, ctx);
        goto after_1;
    // 0x80226E7C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_1:
    // 0x80226E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226E88: jal         0x802274B4
    // 0x80226E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802274B4_ovl15(rdram, ctx);
        goto after_2;
    // 0x80226E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80226E90: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226E94: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80226E98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226EA0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226EA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226EA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226EAC: jr          $ra
    // 0x80226EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226EB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F1EC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F1F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F1F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F1F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F1FC: jal         0x8004F144
    // 0x8022F200: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022F200: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F204: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022F208: beq         $s0, $zero, L_8022F248
    if (ctx->r16 == 0) {
        // 0x8022F20C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022F248;
    }
    // 0x8022F20C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022F210: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F214: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022F218: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F21C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022F220: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022F224: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022F228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F22C: jal         0x8009A3B4
    // 0x8022F230: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F230: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F234: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022F238: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F23C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022F240: jal         0x8004F684
    // 0x8022F244: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x8022F244: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_8022F248:
    // 0x8022F248: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F24C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F250: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F254: jr          $ra
    // 0x8022F258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ABCC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ABD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ABD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ABD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ABDC: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x8022ABE0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022ABE4: jal         0x8004FA7C
    // 0x8022ABE8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022ABE8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022ABEC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022ABF0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022ABF4: bne         $v0, $zero, L_8022AC40
    if (ctx->r2 != 0) {
        // 0x8022ABF8: nop
    
            goto L_8022AC40;
    }
    // 0x8022ABF8: nop

    // 0x8022ABFC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022AC00: beq         $v0, $zero, L_8022AC14
    if (ctx->r2 == 0) {
        // 0x8022AC04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AC14;
    }
    // 0x8022AC04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC08: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022AC0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AC10: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022AC14:
    // 0x8022AC14: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022AC18: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022AC1C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x8022AC20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AC28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC2C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022AC30: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022AC34: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022AC38: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022AC3C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_8022AC40:
    // 0x8022AC40: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AC44: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022AC48: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AC4C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022AC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC58: jr          $ra
    // 0x8022AC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287C8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802287CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802287D0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802287D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802287D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802287DC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802287E0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802287E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802287E8: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x802287EC: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802287F0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802287F4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802287F8: beq         $a0, $v0, L_80228814
    if (ctx->r4 == ctx->r2) {
        // 0x802287FC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80228814;
    }
    // 0x802287FC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80228800: bne         $a0, $v0, L_80228810
    if (ctx->r4 != ctx->r2) {
        // 0x80228804: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228810;
    }
    // 0x80228804: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228808: j           L_80228814
    // 0x8022880C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80228814;
    // 0x8022880C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80228810:
    // 0x80228810: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80228814:
    // 0x80228814: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80228818: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022881C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228820: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228824: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80228828: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022882C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228830: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228834: beq         $a0, $v1, L_8022885C
    if (ctx->r4 == ctx->r3) {
        // 0x80228838: addiu       $a1, $zero, 0x1F
        ctx->r5 = ADD32(0, 0X1F);
            goto L_8022885C;
    }
    // 0x80228838: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8022883C: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x80228840: jal         0x8003B85C
    // 0x80228844: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80228844: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x80228848: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022884C: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x80228850: ori         $a1, $a1, 0xB
    ctx->r5 = ctx->r5 | 0XB;
    // 0x80228854: jal         0x8003B840
    // 0x80228858: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228858: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022885C:
    // 0x8022885C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80228860: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80228864: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228868: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022886C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228870: jr          $ra
    // 0x80228874: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228874: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80228878: nop

    // 0x8022887C: nop

;}
RECOMP_FUNC void func_8022E54C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E54C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022E550: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022E554: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E558: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022E55C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022E560: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022E564: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E568: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E56C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E570: lw          $v0, 0x29FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X29FC);
    // 0x8022E574: jalr        $v0
    // 0x8022E578: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E578: nop

    after_0:
    // 0x8022E57C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022E580: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E584: beq         $v1, $v0, L_8022E5F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E588: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022E5F8;
    }
    // 0x8022E588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E58C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022E590: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E594: jal         0x80047284
    // 0x8022E598: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x8022E598: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022E59C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022E5A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5A4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022E5A8: jal         0x8009A3B4
    // 0x8022E5AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E5AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E5B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5B4: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022E5B8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022E5BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E5C0: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x8022E5C4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022E5C8: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022E5CC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E5D0: addiu       $v0, $s1, 0x4C
    ctx->r2 = ADD32(ctx->r17, 0X4C);
    // 0x8022E5D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E5D8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022E5DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022E5E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E5E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E5E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E5EC: jal         0x80051E18
    // 0x8022E5F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022E5F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022E5F4: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_8022E5F8:
    // 0x8022E5F8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022E5FC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022E600: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E604: jr          $ra
    // 0x8022E608: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022E608: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226088_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022608C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226090: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226094: bne         $v0, $zero, L_802260A4
    if (ctx->r2 != 0) {
        // 0x80226098: nop
    
            goto L_802260A4;
    }
    // 0x80226098: nop

    // 0x8022609C: jal         0x8004F418
    // 0x802260A0: lw          $a0, 0x34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X34);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802260A0: lw          $a0, 0x34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X34);
    after_0:
L_802260A4:
    // 0x802260A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802260A8: jr          $ra
    // 0x802260AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BFC4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BFC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BFC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BFCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BFD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BFD4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BFD8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022BFDC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022BFE0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022BFE4: jal         0x8004F820
    // 0x8022BFE8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022BFE8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022BFEC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BFF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BFF4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BFF8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022BFFC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022C000: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022C004: bne         $v0, $zero, L_8022C028
    if (ctx->r2 != 0) {
        // 0x8022C008: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022C028;
    }
    // 0x8022C008: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022C00C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C010: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022C014: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C018: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022C01C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022C020: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022C024: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022C028:
    // 0x8022C028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C02C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C030: jr          $ra
    // 0x8022C034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A48_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226A4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226A50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226A54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226A58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A5C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80226A60: bne         $v1, $zero, L_80226AB0
    if (ctx->r3 != 0) {
        // 0x80226A64: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80226AB0;
    }
    // 0x80226A64: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80226A68: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226A6C: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80226A70: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226A74: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226A78: addiu       $s0, $s0, 0x118C
    ctx->r16 = ADD32(ctx->r16, 0X118C);
    // 0x80226A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226A80: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226A84: jal         0x8005FA7C
    // 0x80226A88: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80226A88: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x80226A8C: jal         0x8005FA7C
    // 0x80226A90: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80226A90: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80226A94: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x80226A98: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80226A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AA0: jal         0x80226B04
    // 0x80226AA4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    func_80226B04_ovl15(rdram, ctx);
        goto after_2;
    // 0x80226AA4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    after_2:
    // 0x80226AA8: j           L_80226AF0
    // 0x80226AAC: nop

        goto L_80226AF0;
    // 0x80226AAC: nop

L_80226AB0:
    // 0x80226AB0: bne         $v1, $v0, L_80226AD8
    if (ctx->r3 != ctx->r2) {
        // 0x80226AB4: addiu       $v0, $zero, 0xDD
        ctx->r2 = ADD32(0, 0XDD);
            goto L_80226AD8;
    }
    // 0x80226AB4: addiu       $v0, $zero, 0xDD
    ctx->r2 = ADD32(0, 0XDD);
    // 0x80226AB8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226ABC: addiu       $s0, $s0, 0x11B4
    ctx->r16 = ADD32(ctx->r16, 0X11B4);
    // 0x80226AC0: jal         0x8005FA7C
    // 0x80226AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80226AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226AC8: jal         0x8005FA7C
    // 0x80226ACC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80226ACC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x80226AD0: j           L_80226AF0
    // 0x80226AD4: nop

        goto L_80226AF0;
    // 0x80226AD4: nop

L_80226AD8:
    // 0x80226AD8: bne         $v1, $v0, L_80226AF0
    if (ctx->r3 != ctx->r2) {
        // 0x80226ADC: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_80226AF0;
    }
    // 0x80226ADC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80226AE0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226AE4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80226AE8: jal         0x80036E48
    // 0x80226AEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80226AEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_5:
L_80226AF0:
    // 0x80226AF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226AF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226AF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226AFC: jr          $ra
    // 0x80226B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F398_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F398: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F39C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F3A0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F3A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F3A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022F3AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022F3B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022F3B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F3B8: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8022F3BC: jal         0x80053ED8
    // 0x8022F3C0: addiu       $s4, $s1, 0x28
    ctx->r20 = ADD32(ctx->r17, 0X28);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022F3C0: addiu       $s4, $s1, 0x28
    ctx->r20 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x8022F3C4: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022F3C8: bne         $v1, $zero, L_8022F3DC
    if (ctx->r3 != 0) {
        // 0x8022F3CC: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_8022F3DC;
    }
    // 0x8022F3CC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022F3D0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022F3D4: j           L_8022F3EC
    // 0x8022F3D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
        goto L_8022F3EC;
    // 0x8022F3D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_8022F3DC:
    // 0x8022F3DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F3E0: bne         $v1, $v0, L_8022F404
    if (ctx->r3 != ctx->r2) {
        // 0x8022F3E4: nop
    
            goto L_8022F404;
    }
    // 0x8022F3E4: nop

    // 0x8022F3E8: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
L_8022F3EC:
    // 0x8022F3EC: bne         $v0, $zero, L_8022F404
    if (ctx->r2 != 0) {
        // 0x8022F3F0: nop
    
            goto L_8022F404;
    }
    // 0x8022F3F0: nop

    // 0x8022F3F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F3F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F3FC: j           L_8022F544
    // 0x8022F400: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8022F544;
    // 0x8022F400: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F404:
    // 0x8022F404: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8022F408: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F40C: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8022F410: beq         $v0, $zero, L_8022F41C
    if (ctx->r2 == 0) {
        // 0x8022F414: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022F41C;
    }
    // 0x8022F414: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022F418: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8022F41C:
    // 0x8022F41C: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022F420: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8022F424: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022F428: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8022F42C: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x8022F430: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022F434: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x8022F438: lh          $a0, 0x56($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X56);
    // 0x8022F43C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F440: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022F444: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022F448: lw          $s0, 0x2A50($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2A50);
    // 0x8022F44C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022F450: jal         0x800324B4
    // 0x8022F454: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022F454: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_1:
    // 0x8022F458: nop

    // 0x8022F45C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F460: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F464: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022F468: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022F46C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F470: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022F474: lh          $a0, 0x56($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X56);
    // 0x8022F478: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022F47C: jal         0x80032498
    // 0x8022F480: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022F480: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_2:
    // 0x8022F484: nop

    // 0x8022F488: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F48C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F490: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8022F494: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8022F498: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022F49C: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022F4A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F4A4: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x8022F4A8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022F4AC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022F4B0: lw          $v1, 0x2A60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2A60);
    // 0x8022F4B4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022F4B8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022F4BC: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x8022F4C0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F4C4: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
L_8022F4C8:
    // 0x8022F4C8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F4CC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022F4D0: beq         $v0, $zero, L_8022F514
    if (ctx->r2 == 0) {
        // 0x8022F4D4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F514;
    }
    // 0x8022F4D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F4D8: lhu         $a1, 0x56($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F4DC: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x8022F4E0: addiu       $a1, $a1, 0x800
    ctx->r5 = ADD32(ctx->r5, 0X800);
    // 0x8022F4E4: jal         0x8022F580
    // 0x8022F4E8: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_8022F580_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022F4E8: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_3:
    // 0x8022F4EC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F4F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F4F4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x8022F4F8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F4FC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022F500: slti        $v0, $v0, 0x19
    ctx->r2 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x8022F504: beql        $v0, $zero, L_8022F534
    if (ctx->r2 == 0) {
        // 0x8022F508: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_8022F534;
    }
    goto skip_0;
    // 0x8022F508: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x8022F50C: j           L_8022F538
    // 0x8022F510: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8022F538;
    // 0x8022F510: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022F514:
    // 0x8022F514: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022F518: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F51C: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x8022F520: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x8022F524: beql        $v0, $zero, L_8022F538
    if (ctx->r2 == 0) {
        // 0x8022F528: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022F538;
    }
    goto skip_1;
    // 0x8022F528: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8022F52C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022F530: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022F534:
    // 0x8022F534: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022F538:
    // 0x8022F538: sltiu       $v0, $s2, 0x6
    ctx->r2 = ctx->r18 < 0X6 ? 1 : 0;
    // 0x8022F53C: bne         $v0, $zero, L_8022F4C8
    if (ctx->r2 != 0) {
        // 0x8022F540: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8022F4C8;
    }
    // 0x8022F540: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022F544:
    // 0x8022F544: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F548: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022F54C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022F550: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022F554: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F558: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F55C: jr          $ra
    // 0x8022F560: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F560: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B7C8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B7CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B7D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B7D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B7D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B7DC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022B7E0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B7E4: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B7E8: jal         0x8004FA7C
    // 0x8022B7EC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022B7EC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022B7F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B7F4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022B7F8: beq         $v0, $zero, L_8022B88C
    if (ctx->r2 == 0) {
        // 0x8022B7FC: nop
    
            goto L_8022B88C;
    }
    // 0x8022B7FC: nop

    // 0x8022B800: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B804: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022B808: bne         $v0, $zero, L_8022B88C
    if (ctx->r2 != 0) {
        // 0x8022B80C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B88C;
    }
    // 0x8022B80C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B810: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022B814: beq         $v1, $v0, L_8022B82C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B818: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B82C;
    }
    // 0x8022B818: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B81C: beq         $v1, $v0, L_8022B85C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B820: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B85C;
    }
    // 0x8022B820: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B824: j           L_8022B880
    // 0x8022B828: nop

        goto L_8022B880;
    // 0x8022B828: nop

L_8022B82C:
    // 0x8022B82C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B830: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022B834: bne         $v0, $zero, L_8022B880
    if (ctx->r2 != 0) {
        // 0x8022B838: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B880;
    }
    // 0x8022B838: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B83C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022B840: bne         $v0, $zero, L_8022B880
    if (ctx->r2 != 0) {
        // 0x8022B844: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B880;
    }
    // 0x8022B844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B848: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B84C: bne         $v1, $v0, L_8022B880
    if (ctx->r3 != ctx->r2) {
        // 0x8022B850: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B880;
    }
    // 0x8022B850: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B854: j           L_8022B880
    // 0x8022B858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B880;
    // 0x8022B858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B85C:
    // 0x8022B85C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B860: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022B864: beq         $v0, $zero, L_8022B87C
    if (ctx->r2 == 0) {
        // 0x8022B868: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022B87C;
    }
    // 0x8022B868: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022B86C: bne         $v0, $zero, L_8022B880
    if (ctx->r2 != 0) {
        // 0x8022B870: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B880;
    }
    // 0x8022B870: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B874: j           L_8022B880
    // 0x8022B878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B880;
    // 0x8022B878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B87C:
    // 0x8022B87C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B880:
    // 0x8022B880: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B884: beq         $v0, $zero, L_8022B8B0
    if (ctx->r2 == 0) {
        // 0x8022B888: nop
    
            goto L_8022B8B0;
    }
    // 0x8022B888: nop

L_8022B88C:
    // 0x8022B88C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022B890: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B894: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B898: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B89C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B8A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B8A4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B8A8: j           L_8022B8C0
    // 0x8022B8AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B8C0;
    // 0x8022B8AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B8B0:
    // 0x8022B8B0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B8B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B8B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B8BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B8C0:
    // 0x8022B8C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B8C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8CC: jr          $ra
    // 0x8022B8D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B8D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CC1C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC1C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022CC20: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x8022CC24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CC28: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CC2C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022CC30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CC34: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CC38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CC3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC44: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8022CC48: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022CC4C: bgez        $v1, L_8022CC58
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022CC50: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022CC58;
    }
    // 0x8022CC50: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022CC54: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8022CC58:
    // 0x8022CC58: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022CC5C: lh          $a1, -0x3BBC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3BBC);
    // 0x8022CC60: sra         $a0, $v0, 2
    ctx->r4 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022CC64: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CC68: bne         $v0, $zero, L_8022CC78
    if (ctx->r2 != 0) {
        // 0x8022CC6C: srl         $v0, $a2, 31
        ctx->r2 = S32(U32(ctx->r6) >> 31);
            goto L_8022CC78;
    }
    // 0x8022CC6C: srl         $v0, $a2, 31
    ctx->r2 = S32(U32(ctx->r6) >> 31);
    // 0x8022CC70: j           L_8022CCA0
    // 0x8022CC74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022CCA0;
    // 0x8022CC74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022CC78:
    // 0x8022CC78: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CC7C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8022CC80: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CC84: bne         $v0, $zero, L_8022CC94
    if (ctx->r2 != 0) {
        // 0x8022CC88: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8022CC94;
    }
    // 0x8022CC88: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022CC8C: j           L_8022CCA0
    // 0x8022CC90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022CCA0;
    // 0x8022CC90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CC94:
    // 0x8022CC94: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CC98: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CC9C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8022CCA0:
    // 0x8022CCA0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CCA4: beq         $v0, $zero, L_8022CD20
    if (ctx->r2 == 0) {
        // 0x8022CCA8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022CD20;
    }
    // 0x8022CCA8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022CCAC: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022CCB0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022CCB4:
    // 0x8022CCB4: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CCB8: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022CCBC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022CCC0: beq         $v0, $zero, L_8022CCF0
    if (ctx->r2 == 0) {
        // 0x8022CCC4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022CCF0;
    }
    // 0x8022CCC4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CCC8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022CCCC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CCD0:
    // 0x8022CCD0: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022CCD4: jal         0x8022D160
    // 0x8022CCD8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022D160_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022CCD8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022CCDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CCE0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CCE4: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022CCE8: bne         $v0, $zero, L_8022CCD0
    if (ctx->r2 != 0) {
        // 0x8022CCEC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022CCD0;
    }
    // 0x8022CCEC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CCF0:
    // 0x8022CCF0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CCF4: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CCF8: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022CCFC: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022CD00: beq         $v0, $zero, L_8022CD0C
    if (ctx->r2 == 0) {
        // 0x8022CD04: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022CD0C;
    }
    // 0x8022CD04: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CD08: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022CD0C:
    // 0x8022CD0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022CD10: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CD14: sltu        $v0, $v0, $s4
    ctx->r2 = ctx->r2 < ctx->r20 ? 1 : 0;
    // 0x8022CD18: bne         $v0, $zero, L_8022CCB4
    if (ctx->r2 != 0) {
        // 0x8022CD1C: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022CCB4;
    }
    // 0x8022CD1C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022CD20:
    // 0x8022CD20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CD24: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022CD28: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CD2C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD38: jr          $ra
    // 0x8022CD3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CD3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F580_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F580: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8022F584: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8022F588: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8022F58C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022F590: sll         $s2, $a2, 24
    ctx->r18 = S32(ctx->r6 << 24);
    // 0x8022F594: sra         $s2, $s2, 24
    ctx->r18 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8022F598: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022F59C: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x8022F5A0: addiu       $v0, $s1, 0x400
    ctx->r2 = ADD32(ctx->r17, 0X400);
    // 0x8022F5A4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022F5A8: addu        $s0, $a1, $v0
    ctx->r16 = ADD32(ctx->r5, ctx->r2);
    // 0x8022F5AC: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8022F5B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5B4: sll         $v0, $s2, 7
    ctx->r2 = S32(ctx->r18 << 7);
    // 0x8022F5B8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022F5BC: andi        $s3, $v0, 0xFFF
    ctx->r19 = ctx->r2 & 0XFFF;
    // 0x8022F5C0: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x8022F5C4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8022F5C8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8022F5CC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8022F5D0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8022F5D4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8022F5D8: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    // 0x8022F5DC: jal         0x800324B4
    // 0x8022F5E0: sh          $s0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r16;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022F5E0: sh          $s0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F5E4: nop

    // 0x8022F5E8: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F5EC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F5F0: lhu         $v1, 0x1C($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X1C);
    // 0x8022F5F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5F8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022F5FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F600: jal         0x80032498
    // 0x8022F604: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022F604: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022F608: nop

    // 0x8022F60C: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F610: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F614: lhu         $v1, 0x20($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X20);
    // 0x8022F618: addiu       $s6, $zero, 0xF0
    ctx->r22 = ADD32(0, 0XF0);
    // 0x8022F61C: addiu       $s4, $zero, 0xA0
    ctx->r20 = ADD32(0, 0XA0);
    // 0x8022F620: addiu       $s5, $zero, 0xA0
    ctx->r21 = ADD32(0, 0XA0);
    // 0x8022F624: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x8022F628: slti        $s2, $s2, 0x11
    ctx->r18 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x8022F62C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022F630: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F634: beq         $s2, $zero, L_8022F660
    if (ctx->r18 == 0) {
        // 0x8022F638: sh          $v1, 0x14($sp)
        MEM_H(0X14, ctx->r29) = ctx->r3;
            goto L_8022F660;
    }
    // 0x8022F638: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8022F63C: jal         0x800324B4
    // 0x8022F640: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8022F640: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x8022F644: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022F648: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F64C: lhu         $v0, 0x1E($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X1E);
    // 0x8022F650: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022F654: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022F658: j           L_8022F664
    // 0x8022F65C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_8022F664;
    // 0x8022F65C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8022F660:
    // 0x8022F660: lhu         $v0, 0x1E($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X1E);
L_8022F664:
    // 0x8022F664: jal         0x8003B878
    // 0x8022F668: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_3;
    // 0x8022F668: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022F66C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022F670: sll         $s6, $s6, 16
    ctx->r22 = S32(ctx->r22 << 16);
    // 0x8022F674: sll         $v0, $s4, 8
    ctx->r2 = S32(ctx->r20 << 8);
    // 0x8022F678: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022F67C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022F680: or          $s6, $s6, $v0
    ctx->r22 = ctx->r22 | ctx->r2;
    // 0x8022F684: or          $s6, $s5, $s6
    ctx->r22 = ctx->r21 | ctx->r22;
    // 0x8022F688: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x8022F68C: sll         $s7, $s3, 8
    ctx->r23 = S32(ctx->r19 << 8);
    // 0x8022F690: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x8022F694: lui         $s4, 0x3D48
    ctx->r20 = S32(0X3D48 << 16);
    // 0x8022F698: or          $s4, $s5, $s4
    ctx->r20 = ctx->r21 | ctx->r20;
    // 0x8022F69C: or          $s4, $s7, $s4
    ctx->r20 = ctx->r23 | ctx->r20;
    // 0x8022F6A0: addiu       $v1, $s5, 0x1F
    ctx->r3 = ADD32(ctx->r21, 0X1F);
    // 0x8022F6A4: lui         $v0, 0xE
    ctx->r2 = S32(0XE << 16);
    // 0x8022F6A8: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x8022F6AC: or          $s7, $s7, $v0
    ctx->r23 = ctx->r23 | ctx->r2;
    // 0x8022F6B0: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x8022F6B4: sw          $s4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r20;
    // 0x8022F6B8: sw          $s7, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r23;
    // 0x8022F6BC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6C0: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x8022F6C4: addiu       $s3, $s3, 0x1F
    ctx->r19 = ADD32(ctx->r19, 0X1F);
    // 0x8022F6C8: sll         $s3, $s3, 8
    ctx->r19 = S32(ctx->r19 << 8);
    // 0x8022F6CC: or          $s5, $s3, $s5
    ctx->r21 = ctx->r19 | ctx->r21;
    // 0x8022F6D0: or          $s3, $s3, $v1
    ctx->r19 = ctx->r19 | ctx->r3;
    // 0x8022F6D4: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x8022F6D8: sw          $s3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r19;
    // 0x8022F6DC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8022F6E0: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x8022F6E4: lb          $v0, 0xD($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XD);
    // 0x8022F6E8: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x8022F6EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6F0: sll         $s2, $a3, 24
    ctx->r18 = S32(ctx->r7 << 24);
    // 0x8022F6F4: sra         $s2, $s2, 24
    ctx->r18 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8022F6F8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022F6FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F700: lw          $v1, 0x2A58($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2A58);
    // 0x8022F704: lhu         $a3, 0x1E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1E);
    // 0x8022F708: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x8022F70C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x8022F710: addiu       $s1, $a3, -0x800
    ctx->r17 = ADD32(ctx->r7, -0X800);
    // 0x8022F714: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x8022F718: andi        $s1, $s1, 0xFFF
    ctx->r17 = ctx->r17 & 0XFFF;
    // 0x8022F71C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F720: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x8022F724: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x8022F728: jal         0x800324B4
    // 0x8022F72C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x8022F72C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    after_4:
    // 0x8022F730: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8022F734: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022F738: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F73C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F740: lhu         $v1, 0x1C($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X1C);
    // 0x8022F744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F748: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022F74C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F750: jal         0x80032498
    // 0x8022F754: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x8022F754: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022F758: nop

    // 0x8022F75C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F760: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F764: lhu         $v1, 0x20($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X20);
    // 0x8022F768: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022F76C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F770: jal         0x8003B878
    // 0x8022F774: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_8003B878_16C78(rdram, ctx);
        goto after_6;
    // 0x8022F774: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_6:
    // 0x8022F778: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8022F77C: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x8022F780: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022F784: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x8022F788: sw          $s4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r20;
    // 0x8022F78C: sw          $s7, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r23;
    // 0x8022F790: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x8022F794: sw          $s3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r19;
    // 0x8022F798: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8022F79C: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x8022F7A0: lb          $v0, 0xD($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XD);
    // 0x8022F7A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F7A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F7AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F7B0: lw          $v0, 0x2A58($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A58);
    // 0x8022F7B4: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x8022F7B8: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8022F7BC: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022F7C0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8022F7C4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8022F7C8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8022F7CC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8022F7D0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8022F7D4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8022F7D8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F7DC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022F7E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022F7E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022F7E8: jr          $ra
    // 0x8022F7EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022F7EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802277EC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802277F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802277F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802277F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802277FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227800: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80227804: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80227808: beq         $v0, $zero, L_80227B48
    if (ctx->r2 == 0) {
        // 0x8022780C: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80227B48;
    }
    // 0x8022780C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80227810: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227814: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227818: addu        $at, $at, $v0
    gpr jr_addend_80227820 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022781C: lw          $v0, 0x2B10($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B10);
    // 0x80227820: jr          $v0
    // 0x80227824: nop

    switch (jr_addend_80227820 >> 2) {
        case 0: goto L_80227828; break;
        case 1: goto L_80227850; break;
        case 2: goto L_802278E4; break;
        case 3: goto L_80227960; break;
        case 4: goto L_80227984; break;
        case 5: goto L_802279CC; break;
        case 6: goto L_80227A54; break;
        case 7: goto L_80227AEC; break;
        default: switch_error(__func__, 0x80227820, 0x80232B10);
    }
    // 0x80227824: nop

L_80227828:
    // 0x80227828: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022782C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227830: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80227834: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80227838: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022783C: lui         $v1, 0x101
    ctx->r3 = S32(0X101 << 16);
    // 0x80227840: beq         $v0, $v1, L_80227A44
    if (ctx->r2 == ctx->r3) {
        // 0x80227844: nop
    
            goto L_80227A44;
    }
    // 0x80227844: nop

    // 0x80227848: j           L_80227B48
    // 0x8022784C: nop

        goto L_80227B48;
    // 0x8022784C: nop

L_80227850:
    // 0x80227850: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227854: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227858: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022785C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227860: bne         $v1, $v0, L_80227B48
    if (ctx->r3 != ctx->r2) {
        // 0x80227864: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80227B48;
    }
    // 0x80227864: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227868: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8022786C: beq         $a1, $v0, L_802278B8
    if (ctx->r5 == ctx->r2) {
        // 0x80227870: slti        $v0, $a1, 0xB
        ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
            goto L_802278B8;
    }
    // 0x80227870: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x80227874: beql        $v0, $zero, L_8022788C
    if (ctx->r2 == 0) {
        // 0x80227878: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8022788C;
    }
    goto skip_0;
    // 0x80227878: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    skip_0:
    // 0x8022787C: beq         $a1, $v1, L_802278A4
    if (ctx->r5 == ctx->r3) {
        // 0x80227880: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802278A4;
    }
    // 0x80227880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227884: j           L_80227B48
    // 0x80227888: nop

        goto L_80227B48;
    // 0x80227888: nop

L_8022788C:
    // 0x8022788C: beq         $a1, $v0, L_80227A18
    if (ctx->r5 == ctx->r2) {
        // 0x80227890: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80227A18;
    }
    // 0x80227890: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80227894: beq         $a1, $v0, L_802278D0
    if (ctx->r5 == ctx->r2) {
        // 0x80227898: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802278D0;
    }
    // 0x80227898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022789C: j           L_80227B48
    // 0x802278A0: nop

        goto L_80227B48;
    // 0x802278A0: nop

L_802278A4:
    // 0x802278A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802278A8: jal         0x80228214
    // 0x802278AC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80228214_ovl15(rdram, ctx);
        goto after_0;
    // 0x802278AC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x802278B0: j           L_80227B48
    // 0x802278B4: nop

        goto L_80227B48;
    // 0x802278B4: nop

L_802278B8:
    // 0x802278B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802278BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802278C0: jal         0x8022823C
    // 0x802278C4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022823C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802278C4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_1:
    // 0x802278C8: j           L_80227B48
    // 0x802278CC: nop

        goto L_80227B48;
    // 0x802278CC: nop

L_802278D0:
    // 0x802278D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802278D4: jal         0x8022823C
    // 0x802278D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022823C_ovl15(rdram, ctx);
        goto after_2;
    // 0x802278D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
    // 0x802278DC: j           L_80227A44
    // 0x802278E0: nop

        goto L_80227A44;
    // 0x802278E0: nop

L_802278E4:
    // 0x802278E4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802278E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278EC: bne         $v1, $v0, L_80227B48
    if (ctx->r3 != ctx->r2) {
        // 0x802278F0: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80227B48;
    }
    // 0x802278F0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802278F4: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802278F8: beq         $a1, $v0, L_8022792C
    if (ctx->r5 == ctx->r2) {
        // 0x802278FC: slti        $v0, $a1, 0x79
        ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
            goto L_8022792C;
    }
    // 0x802278FC: slti        $v0, $a1, 0x79
    ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
    // 0x80227900: beq         $v0, $zero, L_80227918
    if (ctx->r2 == 0) {
        // 0x80227904: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80227918;
    }
    // 0x80227904: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80227908: beq         $a1, $v0, L_80227A1C
    if (ctx->r5 == ctx->r2) {
        // 0x8022790C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A1C;
    }
    // 0x8022790C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227910: j           L_80227B48
    // 0x80227914: nop

        goto L_80227B48;
    // 0x80227914: nop

L_80227918:
    // 0x80227918: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022791C: beq         $a1, $v0, L_80227954
    if (ctx->r5 == ctx->r2) {
        // 0x80227920: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227954;
    }
    // 0x80227920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227924: j           L_80227B48
    // 0x80227928: nop

        goto L_80227B48;
    // 0x80227928: nop

L_8022792C:
    // 0x8022792C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227930: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227934: jal         0x80228214
    // 0x80227938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80228214_ovl15(rdram, ctx);
        goto after_3;
    // 0x80227938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8022793C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227940: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227944: jal         0x8022823C
    // 0x80227948: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022823C_ovl15(rdram, ctx);
        goto after_4;
    // 0x80227948: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x8022794C: j           L_80227B48
    // 0x80227950: nop

        goto L_80227B48;
    // 0x80227950: nop

L_80227954:
    // 0x80227954: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227958: j           L_80227A44
    // 0x8022795C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80227A44;
    // 0x8022795C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_80227960:
    // 0x80227960: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227964: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227968: bne         $v1, $v0, L_80227B48
    if (ctx->r3 != ctx->r2) {
        // 0x8022796C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227B48;
    }
    // 0x8022796C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227970: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80227974: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227978: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022797C: j           L_80227A44
    // 0x80227980: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80227A44;
    // 0x80227980: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_80227984:
    // 0x80227984: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80227988: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022798C: bne         $v1, $v0, L_80227B48
    if (ctx->r3 != ctx->r2) {
        // 0x80227990: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B48;
    }
    // 0x80227990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227994: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227998: jal         0x80228214
    // 0x8022799C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80228214_ovl15(rdram, ctx);
        goto after_5;
    // 0x8022799C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802279A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802279A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802279A8: jal         0x8022823C
    // 0x802279AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022823C_ovl15(rdram, ctx);
        goto after_6;
    // 0x802279AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
    // 0x802279B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802279B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802279B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802279BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802279C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802279C4: j           L_80227A44
    // 0x802279C8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80227A44;
    // 0x802279C8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802279CC:
    // 0x802279CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802279D0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802279D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802279D8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x802279DC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802279E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802279E4: bne         $v1, $a0, L_80227A04
    if (ctx->r3 != ctx->r4) {
        // 0x802279E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227A04;
    }
    // 0x802279E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802279EC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802279F0: addiu       $v0, $zero, 0xAF
    ctx->r2 = ADD32(0, 0XAF);
    // 0x802279F4: bne         $v1, $v0, L_80227B48
    if (ctx->r3 != ctx->r2) {
        // 0x802279F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B48;
    }
    // 0x802279F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802279FC: j           L_80227A1C
    // 0x80227A00: nop

        goto L_80227A1C;
    // 0x80227A00: nop

L_80227A04:
    // 0x80227A04: bne         $v1, $v0, L_80227B48
    if (ctx->r3 != ctx->r2) {
        // 0x80227A08: nop
    
            goto L_80227B48;
    }
    // 0x80227A08: nop

    // 0x80227A0C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80227A10: bne         $a1, $a0, L_80227A30
    if (ctx->r5 != ctx->r4) {
        // 0x80227A14: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80227A30;
    }
    // 0x80227A14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80227A18:
    // 0x80227A18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227A1C:
    // 0x80227A1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227A20: jal         0x8022823C
    // 0x80227A24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022823C_ovl15(rdram, ctx);
        goto after_7;
    // 0x80227A24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80227A28: j           L_80227B48
    // 0x80227A2C: nop

        goto L_80227B48;
    // 0x80227A2C: nop

L_80227A30:
    // 0x80227A30: bne         $a1, $v0, L_80227B48
    if (ctx->r5 != ctx->r2) {
        // 0x80227A34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B48;
    }
    // 0x80227A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227A3C: jal         0x80228214
    // 0x80227A40: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80228214_ovl15(rdram, ctx);
        goto after_8;
    // 0x80227A40: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_8:
L_80227A44:
    // 0x80227A44: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A4C: j           L_80227B48
    // 0x80227A50: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227B48;
    // 0x80227A50: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227A54:
    // 0x80227A54: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80227A58: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227A5C: bne         $v1, $v0, L_80227A78
    if (ctx->r3 != ctx->r2) {
        // 0x80227A60: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227A78;
    }
    // 0x80227A60: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227A64: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x80227A68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227A6C: addiu       $v0, $zero, -0x6B
    ctx->r2 = ADD32(0, -0X6B);
    // 0x80227A70: j           L_80227AD0
    // 0x80227A74: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_80227AD0;
    // 0x80227A74: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_80227A78:
    // 0x80227A78: bne         $v1, $v0, L_80227A8C
    if (ctx->r3 != ctx->r2) {
        // 0x80227A7C: addiu       $v0, $zero, 0x34
        ctx->r2 = ADD32(0, 0X34);
            goto L_80227A8C;
    }
    // 0x80227A7C: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80227A80: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80227A84: j           L_80227AD0
    // 0x80227A88: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
        goto L_80227AD0;
    // 0x80227A88: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_80227A8C:
    // 0x80227A8C: bne         $v1, $v0, L_80227AA4
    if (ctx->r3 != ctx->r2) {
        // 0x80227A90: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227AA4;
    }
    // 0x80227A90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227A94: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80227A98: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80227A9C: j           L_80227AD0
    // 0x80227AA0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_80227AD0;
    // 0x80227AA0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_80227AA4:
    // 0x80227AA4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227AA8: bne         $v1, $v0, L_80227AD0
    if (ctx->r3 != ctx->r2) {
        // 0x80227AAC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80227AD0;
    }
    // 0x80227AAC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80227AB0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227AB4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80227AB8: sb          $v1, 0x143($s0)
    MEM_B(0X143, ctx->r16) = ctx->r3;
    // 0x80227ABC: sb          $v1, 0x147($s0)
    MEM_B(0X147, ctx->r16) = ctx->r3;
    // 0x80227AC0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227AC4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80227AC8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80227ACC: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
L_80227AD0:
    // 0x80227AD0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227AD4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80227AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227ADC: jal         0x8004DA90
    // 0x80227AE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x80227AE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80227AE4: j           L_80227B48
    // 0x80227AE8: nop

        goto L_80227B48;
    // 0x80227AE8: nop

L_80227AEC:
    // 0x80227AEC: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80227AF0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80227AF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227AF8: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x80227AFC: bne         $v0, $v1, L_80227B48
    if (ctx->r2 != ctx->r3) {
        // 0x80227B00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B48;
    }
    // 0x80227B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227B08: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227B0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80227B10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227B14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227B18: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227B1C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80227B20: jal         0x80228214
    // 0x80227B24: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80228214_ovl15(rdram, ctx);
        goto after_10;
    // 0x80227B24: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_10:
    // 0x80227B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227B30: jal         0x8022823C
    // 0x80227B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022823C_ovl15(rdram, ctx);
        goto after_11;
    // 0x80227B34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x80227B38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227B3C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227B40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227B48:
    // 0x80227B48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227B4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227B50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B54: jr          $ra
    // 0x80227B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FED0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FED0: lb          $v0, -0x63B0($at)
    ctx->r2 = MEM_B(ctx->r1, -0X63B0);
    // 0x8022FED4: nop

    // 0x8022FED8: nop

    // 0x8022FEDC: nop

;}
RECOMP_FUNC void func_80226254_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226254: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226258: bne         $v0, $zero, L_8022627C
    if (ctx->r2 != 0) {
        // 0x8022625C: nop
    
            goto L_8022627C;
    }
    // 0x8022625C: nop

    // 0x80226260: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226264: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226268: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022626C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226270: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226274: addiu       $v0, $zero, 0x872
    ctx->r2 = ADD32(0, 0X872);
    // 0x80226278: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_8022627C:
    // 0x8022627C: jr          $ra
    // 0x80226280: nop

    TRACE_RETURN()
    return;
    // 0x80226280: nop

;}
RECOMP_FUNC void func_8022F328_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F32C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F330: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F334: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F338: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F33C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F340: lw          $v0, 0x2A74($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2A74);
    // 0x8022F344: jalr        $v0
    // 0x8022F348: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F348: nop

    after_0:
    // 0x8022F34C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F350: jr          $ra
    // 0x8022F354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A674_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A67C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A684: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022A688: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A68C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A690: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A694: bne         $v0, $zero, L_8022A700
    if (ctx->r2 != 0) {
        // 0x8022A698: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022A700;
    }
    // 0x8022A698: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022A69C: jal         0x8022C264
    // 0x8022A6A0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022C264_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022A6A0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022A6A4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A6A8: beq         $v0, $zero, L_8022A6FC
    if (ctx->r2 == 0) {
        // 0x8022A6AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A6FC;
    }
    // 0x8022A6AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A6B0: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022A6B4: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x8022A6B8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022A6BC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A6C0: bne         $v1, $zero, L_8022A6D0
    if (ctx->r3 != 0) {
        // 0x8022A6C4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022A6D0;
    }
    // 0x8022A6C4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A6C8: j           L_8022A700
    // 0x8022A6CC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_8022A700;
    // 0x8022A6CC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_8022A6D0:
    // 0x8022A6D0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A6D4: jal         0x8022C1D8
    // 0x8022A6D8: nop

    func_8022C1D8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022A6D8: nop

    after_1:
    // 0x8022A6DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A6E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A6E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A6E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A6EC: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022A6F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A6F4: j           L_8022A700
    // 0x8022A6F8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_8022A700;
    // 0x8022A6F8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022A6FC:
    // 0x8022A6FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A700:
    // 0x8022A700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A708: jr          $ra
    // 0x8022A70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A4C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225A50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225A54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225A5C: addiu       $s1, $zero, 0x1100
    ctx->r17 = ADD32(0, 0X1100);
    // 0x80225A60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80225A64: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80225A68: addiu       $a1, $a1, 0x2AA0
    ctx->r5 = ADD32(ctx->r5, 0X2AA0);
    // 0x80225A6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225A70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225A74: jal         0x8009A3B4
    // 0x80225A78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80225A78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x80225A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A80: beq         $s0, $v0, L_80225BB0
    if (ctx->r16 == ctx->r2) {
        // 0x80225A84: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80225BB0;
    }
    // 0x80225A84: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80225A88: bne         $v0, $zero, L_80225BB0
    if (ctx->r2 != 0) {
        // 0x80225A8C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225BB0;
    }
    // 0x80225A8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225A90: beq         $s0, $v0, L_80225AA8
    if (ctx->r16 == ctx->r2) {
        // 0x80225A94: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225AA8;
    }
    // 0x80225A94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225A98: beq         $s0, $v0, L_80225B34
    if (ctx->r16 == ctx->r2) {
        // 0x80225A9C: nop
    
            goto L_80225B34;
    }
    // 0x80225A9C: nop

    // 0x80225AA0: j           L_80225BB0
    // 0x80225AA4: nop

        goto L_80225BB0;
    // 0x80225AA4: nop

L_80225AA8:
    // 0x80225AA8: jal         0x8004EFE4
    // 0x80225AAC: addiu       $s1, $zero, 0x1200
    ctx->r17 = ADD32(0, 0X1200);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x80225AAC: addiu       $s1, $zero, 0x1200
    ctx->r17 = ADD32(0, 0X1200);
    after_1:
    // 0x80225AB0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80225AB4: beq         $s0, $zero, L_80225BB0
    if (ctx->r16 == 0) {
        // 0x80225AB8: addiu       $v0, $zero, 0x700
        ctx->r2 = ADD32(0, 0X700);
            goto L_80225BB0;
    }
    // 0x80225AB8: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x80225ABC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80225AC0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80225AC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225AC8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80225ACC: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80225AD0: addiu       $v0, $zero, -0x4AA
    ctx->r2 = ADD32(0, -0X4AA);
    // 0x80225AD4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80225AD8: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80225ADC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x80225AE0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80225AE4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80225AE8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80225AEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225AF0: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x80225AF4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80225AF8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225AFC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225B00: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80225B04: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225B08: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225B0C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80225B10: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80225B14: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x80225B18: jal         0x8006033C
    // 0x80225B1C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225B1C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_2:
    // 0x80225B20: beql        $v0, $zero, L_80225B2C
    if (ctx->r2 == 0) {
        // 0x80225B24: sb          $s2, 0xD($s0)
        MEM_B(0XD, ctx->r16) = ctx->r18;
            goto L_80225B2C;
    }
    goto skip_0;
    // 0x80225B24: sb          $s2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r18;
    skip_0:
    // 0x80225B28: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80225B2C:
    // 0x80225B2C: j           L_80225BB0
    // 0x80225B30: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_80225BB0;
    // 0x80225B30: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_80225B34:
    // 0x80225B34: jal         0x8004EFE4
    // 0x80225B38: addiu       $s1, $zero, 0x1200
    ctx->r17 = ADD32(0, 0X1200);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_3;
    // 0x80225B38: addiu       $s1, $zero, 0x1200
    ctx->r17 = ADD32(0, 0X1200);
    after_3:
    // 0x80225B3C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80225B40: beq         $s0, $zero, L_80225BB0
    if (ctx->r16 == 0) {
        // 0x80225B44: addiu       $v0, $zero, 0x700
        ctx->r2 = ADD32(0, 0X700);
            goto L_80225BB0;
    }
    // 0x80225B44: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x80225B48: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80225B4C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80225B50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225B54: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80225B58: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80225B5C: addiu       $v0, $zero, -0x4AA
    ctx->r2 = ADD32(0, -0X4AA);
    // 0x80225B60: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80225B64: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80225B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80225B70: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80225B74: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80225B78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225B7C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80225B80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225B84: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225B88: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225B8C: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80225B90: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80225B94: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80225B98: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225B9C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225BA0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225BA4: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80225BA8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x80225BAC: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_80225BB0:
    // 0x80225BB0: jal         0x8003E6BC
    // 0x80225BB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80225BB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80225BB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225BBC: jal         0x80071ACC
    // 0x80225BC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x80225BC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80225BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80225BC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80225BCC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225BD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225BD4: jr          $ra
    // 0x80225BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226B70_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226B74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226B78: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226B7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226B80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226B84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B88: lbu         $a0, 0x4($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4);
    // 0x80226B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B90: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80226B94: beq         $v1, $v0, L_80226BEC
    if (ctx->r3 == ctx->r2) {
        // 0x80226B98: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226BEC;
    }
    // 0x80226B98: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226B9C: beql        $v0, $zero, L_80226BB4
    if (ctx->r2 == 0) {
        // 0x80226BA0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226BB4;
    }
    goto skip_0;
    // 0x80226BA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226BA4: beq         $v1, $zero, L_80226BC4
    if (ctx->r3 == 0) {
        // 0x80226BA8: nop
    
            goto L_80226BC4;
    }
    // 0x80226BA8: nop

    // 0x80226BAC: j           L_80226D30
    // 0x80226BB0: nop

        goto L_80226D30;
    // 0x80226BB0: nop

L_80226BB4:
    // 0x80226BB4: beq         $v1, $v0, L_80226D1C
    if (ctx->r3 == ctx->r2) {
        // 0x80226BB8: nop
    
            goto L_80226D1C;
    }
    // 0x80226BB8: nop

    // 0x80226BBC: j           L_80226D30
    // 0x80226BC0: nop

        goto L_80226D30;
    // 0x80226BC0: nop

L_80226BC4:
    // 0x80226BC4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226BC8: jal         0x8006FF84
    // 0x80226BCC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226BCC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80226BD0: beq         $v0, $zero, L_80226D30
    if (ctx->r2 == 0) {
        // 0x80226BD4: nop
    
            goto L_80226D30;
    }
    // 0x80226BD4: nop

    // 0x80226BD8: jal         0x80036E48
    // 0x80226BDC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x80226BDC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x80226BE0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226BE4: j           L_80226D2C
    // 0x80226BE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226D2C;
    // 0x80226BE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226BEC:
    // 0x80226BEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226BF0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226BF4: bne         $v0, $zero, L_80226D30
    if (ctx->r2 != 0) {
        // 0x80226BF8: nop
    
            goto L_80226D30;
    }
    // 0x80226BF8: nop

    // 0x80226BFC: jal         0x8004EEAC
    // 0x80226C00: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_2;
    // 0x80226C00: nop

    after_2:
    // 0x80226C04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226C08: beq         $v1, $zero, L_80226C20
    if (ctx->r3 == 0) {
        // 0x80226C0C: nop
    
            goto L_80226C20;
    }
    // 0x80226C0C: nop

    // 0x80226C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C14: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226C18: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x80226C1C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_80226C20:
    // 0x80226C20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226C24: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80226C28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226C2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226C30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C34: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80226C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C40: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80226C44: addiu       $v0, $zero, -0x19F
    ctx->r2 = ADD32(0, -0X19F);
    // 0x80226C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C4C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80226C50: addiu       $v0, $zero, -0x81
    ctx->r2 = ADD32(0, -0X81);
    // 0x80226C54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C58: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80226C5C: addiu       $v0, $zero, -0xED
    ctx->r2 = ADD32(0, -0XED);
    // 0x80226C60: lui         $s1, 0xFE61
    ctx->r17 = S32(0XFE61 << 16);
    // 0x80226C64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C68: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80226C6C: lui         $v0, 0xFF7F
    ctx->r2 = S32(0XFF7F << 16);
    // 0x80226C70: lui         $s0, 0xFF13
    ctx->r16 = S32(0XFF13 << 16);
    // 0x80226C74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C78: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80226C7C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226C80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226C84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C88: sw          $s1, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r17;
    // 0x80226C8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C90: sw          $s0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r16;
    // 0x80226C94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C98: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80226C9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CA0: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80226CA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CA8: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80226CAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CB0: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80226CB4: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226CB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CBC: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80226CC0: jal         0x8005F6B4
    // 0x80226CC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_3;
    // 0x80226CC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80226CC8: lui         $v0, 0xFEE9
    ctx->r2 = S32(0XFEE9 << 16);
    // 0x80226CCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226CD0: sw          $v0, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r2;
    // 0x80226CD4: lui         $v0, 0xC00
    ctx->r2 = S32(0XC00 << 16);
    // 0x80226CD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226CDC: sw          $v0, 0xA10($at)
    MEM_W(0XA10, ctx->r1) = ctx->r2;
    // 0x80226CE0: lui         $v0, 0x150
    ctx->r2 = S32(0X150 << 16);
    // 0x80226CE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226CE8: sw          $v0, 0xA14($at)
    MEM_W(0XA14, ctx->r1) = ctx->r2;
    // 0x80226CEC: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80226CF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226CF4: sw          $s1, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r17;
    // 0x80226CF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226CFC: sw          $s0, 0x9E8($at)
    MEM_W(0X9E8, ctx->r1) = ctx->r16;
    // 0x80226D00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226D04: sw          $v0, 0xA18($at)
    MEM_W(0XA18, ctx->r1) = ctx->r2;
    // 0x80226D08: jal         0x80036E48
    // 0x80226D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x80226D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80226D10: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226D14: j           L_80226D2C
    // 0x80226D18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226D2C;
    // 0x80226D18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226D1C:
    // 0x80226D1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226D20: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226D24: bne         $v0, $zero, L_80226D30
    if (ctx->r2 != 0) {
        // 0x80226D28: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226D30;
    }
    // 0x80226D28: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80226D2C:
    // 0x80226D2C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226D30:
    // 0x80226D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226D34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226D38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226D3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D40: jr          $ra
    // 0x80226D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80226D48: nop

    // 0x80226D4C: nop

;}
RECOMP_FUNC void func_8022A038_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A03C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A040: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A048: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022A04C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A050: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A054: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A058: bne         $v0, $zero, L_8022A08C
    if (ctx->r2 != 0) {
        // 0x8022A05C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022A08C;
    }
    // 0x8022A05C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022A060: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A064: bne         $v1, $v0, L_8022A070
    if (ctx->r3 != ctx->r2) {
        // 0x8022A068: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A070;
    }
    // 0x8022A068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A06C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_8022A070:
    // 0x8022A070: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A074: jal         0x8022C130
    // 0x8022A078: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022C130_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022A078: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022A07C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A080: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A084: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A088: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022A08C:
    // 0x8022A08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A094: jr          $ra
    // 0x8022A098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BAF0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BAF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BAF8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022BAFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BB00: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BB04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BB08: lw          $v0, 0x25F4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X25F4);
    // 0x8022BB0C: jalr        $v0
    // 0x8022BB10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BB10: nop

    after_0:
    // 0x8022BB14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB18: jr          $ra
    // 0x8022BB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
