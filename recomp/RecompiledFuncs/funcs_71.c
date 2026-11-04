#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226ED4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226ED4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80226ED8: bne         $v0, $zero, L_80226EF0
    if (ctx->r2 != 0) {
        // 0x80226EDC: nop
    
            goto L_80226EF0;
    }
    // 0x80226EDC: nop

    // 0x80226EE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EE4: sb          $zero, 0x4628($at)
    MEM_B(0X4628, ctx->r1) = 0;
    // 0x80226EE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EEC: sb          $zero, 0x45F0($at)
    MEM_B(0X45F0, ctx->r1) = 0;
L_80226EF0:
    // 0x80226EF0: jr          $ra
    // 0x80226EF4: nop

    TRACE_RETURN()
    return;
    // 0x80226EF4: nop

;}
RECOMP_FUNC void func_80227610_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227618: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022761C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227620: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227624: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80227628: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8022762C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227630: slti        $v0, $v0, 0x46
    ctx->r2 = SIGNED(ctx->r2) < 0X46 ? 1 : 0;
    // 0x80227634: bne         $v0, $zero, L_80227688
    if (ctx->r2 != 0) {
        // 0x80227638: sb          $v1, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r3;
            goto L_80227688;
    }
    // 0x80227638: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022763C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80227640: beq         $v0, $zero, L_80227688
    if (ctx->r2 == 0) {
        // 0x80227644: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80227688;
    }
    // 0x80227644: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227648: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x8022764C: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    // 0x80227650: jal         0x80229D40
    // 0x80227654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80229D40_ovl6(rdram, ctx);
        goto after_0;
    // 0x80227654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80227658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022765C: addiu       $a1, $zero, -0x64
    ctx->r5 = ADD32(0, -0X64);
    // 0x80227660: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x80227664: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    // 0x80227668: jal         0x80229D40
    // 0x8022766C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80229D40_ovl6(rdram, ctx);
        goto after_1;
    // 0x8022766C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80227670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227674: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80227678: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x8022767C: addiu       $a3, $zero, 0x190
    ctx->r7 = ADD32(0, 0X190);
    // 0x80227680: jal         0x80229D40
    // 0x80227684: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80229D40_ovl6(rdram, ctx);
        goto after_2;
    // 0x80227684: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80227688:
    // 0x80227688: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022768C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80227690: bne         $v1, $v0, L_802276B4
    if (ctx->r3 != ctx->r2) {
        // 0x80227694: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_802276B4;
    }
    // 0x80227694: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022769C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802276A0: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x802276A4: jal         0x8022A4EC
    // 0x802276A8: addiu       $a3, $zero, 0x258
    ctx->r7 = ADD32(0, 0X258);
    func_8022A4EC_ovl6(rdram, ctx);
        goto after_3;
    // 0x802276A8: addiu       $a3, $zero, 0x258
    ctx->r7 = ADD32(0, 0X258);
    after_3:
    // 0x802276AC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802276B0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_802276B4:
    // 0x802276B4: bne         $v1, $v0, L_802276CC
    if (ctx->r3 != ctx->r2) {
        // 0x802276B8: addiu       $v1, $zero, 0x32
        ctx->r3 = ADD32(0, 0X32);
            goto L_802276CC;
    }
    // 0x802276B8: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x802276BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276C0: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x802276C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802276C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802276CC:
    // 0x802276CC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802276D0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802276D4: lui         $v1, 0xA0
    ctx->r3 = S32(0XA0 << 16);
    // 0x802276D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802276DC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802276E0: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x802276E4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802276E8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x802276EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802276F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802276F4: jr          $ra
    // 0x802276F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802276F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226950_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226950: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226954: bne         $v0, $zero, L_80226988
    if (ctx->r2 != 0) {
        // 0x80226958: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226988;
    }
    // 0x80226958: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022695C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226960: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226968: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022696C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80226970: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226974: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226978: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022697C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226980: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226984: sh          $zero, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = 0;
L_80226988:
    // 0x80226988: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022698C: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
    // 0x80226990: bne         $v1, $v0, L_802269A0
    if (ctx->r3 != ctx->r2) {
        // 0x80226994: nop
    
            goto L_802269A0;
    }
    // 0x80226994: nop

    // 0x80226998: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8022699C: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_802269A0:
    // 0x802269A0: jr          $ra
    // 0x802269A4: nop

    TRACE_RETURN()
    return;
    // 0x802269A4: nop

;}
RECOMP_FUNC void func_80226FC8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FC8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226FCC: bne         $v0, $zero, L_80227080
    if (ctx->r2 != 0) {
        // 0x80226FD0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227080;
    }
    // 0x80226FD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226FD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FD8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226FDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226FE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FE4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FF0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226FF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226FF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FFC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80227000: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227004: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80227008: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022700C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80227010: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227014: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80227018: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022701C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80227020: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227024: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80227028: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022702C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80227030: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80227034: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80227038: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022703C: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80227040: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80227044: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227048: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022704C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80227050: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80227054: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80227058: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022705C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227060: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80227064: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80227068: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022706C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227070: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80227074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227078: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022707C: sb          $v0, -0x36C4($at)
    MEM_B(-0X36C4, ctx->r1) = ctx->r2;
L_80227080:
    // 0x80227080: jr          $ra
    // 0x80227084: nop

    TRACE_RETURN()
    return;
    // 0x80227084: nop

;}
RECOMP_FUNC void func_8022A094_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A09C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A0A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A0A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A0A8: bne         $v0, $zero, L_8022A0FC
    if (ctx->r2 != 0) {
        // 0x8022A0AC: lui         $v0, 0x3D08
        ctx->r2 = S32(0X3D08 << 16);
            goto L_8022A0FC;
    }
    // 0x8022A0AC: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8022A0B0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A0B4: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8022A0B8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8022A0BC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A0C0: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8022A0C4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A0C8: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8022A0CC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8022A0D0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A0D4: jal         0x800A3450
    // 0x8022A0D8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A0D8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A0DC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A0E0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A0E4: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8022A0E8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022A0EC: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x8022A0F0: sh          $zero, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = 0;
    // 0x8022A0F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A0F8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022A0FC:
    // 0x8022A0FC: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8022A100: addiu       $v0, $a0, -0x80
    ctx->r2 = ADD32(ctx->r4, -0X80);
    // 0x8022A104: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A10C: bne         $v0, $zero, L_8022A124
    if (ctx->r2 != 0) {
        // 0x8022A110: sra         $v1, $v0, 24
        ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
            goto L_8022A124;
    }
    // 0x8022A110: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A114: jal         0x8004F5C4
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A11C: j           L_8022A15C
    // 0x8022A120: nop

        goto L_8022A15C;
    // 0x8022A120: nop

L_8022A124:
    // 0x8022A124: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x8022A128: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A12C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022A130: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A134: sh          $a0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r4;
    // 0x8022A138: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022A13C: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x8022A140: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022A144: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022A148: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8022A14C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022A150: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x8022A154: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x8022A158: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
L_8022A15C:
    // 0x8022A15C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A160: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A164: jr          $ra
    // 0x8022A168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802271A8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271A8: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802271AC: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x802271B0: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x802271B4: addiu       $v0, $zero, -0xC00
    ctx->r2 = ADD32(0, -0XC00);
    // 0x802271B8: sh          $v0, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r2;
    // 0x802271BC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802271C0: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    // 0x802271C4: addiu       $v0, $zero, -0x4C
    ctx->r2 = ADD32(0, -0X4C);
    // 0x802271C8: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x802271CC: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x802271D0: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x802271D4: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802271D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802271DC: jr          $ra
    // 0x802271E0: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x802271E0: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80225690_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225690: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80225694: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80225698: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022569C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802256A0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802256A4: bne         $v0, $zero, L_802257D8
    if (ctx->r2 != 0) {
        // 0x802256A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802257D8;
    }
    // 0x802256A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802256AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802256B0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802256B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802256BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256C4: sb          $a2, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r6;
    // 0x802256C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256CC: sb          $s1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r17;
    // 0x802256D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256D4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802256D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256DC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802256E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256E4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802256E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256EC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802256F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256F4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802256F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256FC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225700: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225704: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225708: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022570C: sb          $zero, 0x4660($at)
    MEM_B(0X4660, ctx->r1) = 0;
    // 0x80225710: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225714: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225718: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022571C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225720: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225724: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80225728: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022572C: addiu       $s0, $zero, -0x3
    ctx->r16 = ADD32(0, -0X3);
    // 0x80225730: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x80225734: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022573C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225740: sb          $v0, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = ctx->r2;
    // 0x80225744: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80225748: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022574C: sb          $v0, -0x36C0($at)
    MEM_B(-0X36C0, ctx->r1) = ctx->r2;
    // 0x80225750: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225754: sb          $v0, -0x36C1($at)
    MEM_B(-0X36C1, ctx->r1) = ctx->r2;
    // 0x80225758: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022575C: sb          $v0, -0x36C2($at)
    MEM_B(-0X36C2, ctx->r1) = ctx->r2;
    // 0x80225760: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225764: sb          $a2, -0x36BF($at)
    MEM_B(-0X36BF, ctx->r1) = ctx->r6;
    // 0x80225768: jal         0x8004CB2C
    // 0x8022576C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8022576C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x80225770: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225774: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80225778: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022577C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225780: addiu       $v0, $zero, -0x7DA
    ctx->r2 = ADD32(0, -0X7DA);
    // 0x80225784: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225788: addiu       $v0, $zero, -0x17
    ctx->r2 = ADD32(0, -0X17);
    // 0x8022578C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80225790: addiu       $v0, $zero, 0x82A
    ctx->r2 = ADD32(0, 0X82A);
    // 0x80225794: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80225798: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022579C: jal         0x80228F48
    // 0x802257A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_1;
    // 0x802257A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x802257A4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802257A8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x802257AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802257B0: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x802257B4: addiu       $v0, $zero, -0x7BC
    ctx->r2 = ADD32(0, -0X7BC);
    // 0x802257B8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x802257BC: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x802257C0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x802257C4: addiu       $v0, $zero, 0x88E
    ctx->r2 = ADD32(0, 0X88E);
    // 0x802257C8: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x802257CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257D0: jal         0x80228F48
    // 0x802257D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_2;
    // 0x802257D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
L_802257D8:
    // 0x802257D8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802257DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802257E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802257E4: jr          $ra
    // 0x802257E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802257E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229970_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229974: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229978: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8022997C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229980: bne         $v1, $v0, L_80229998
    if (ctx->r3 != ctx->r2) {
        // 0x80229984: nop
    
            goto L_80229998;
    }
    // 0x80229984: nop

    // 0x80229988: jal         0x8004F5C4
    // 0x8022998C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022998C: nop

    after_0:
    // 0x80229990: j           L_802299B4
    // 0x80229994: nop

        goto L_802299B4;
    // 0x80229994: nop

L_80229998:
    // 0x80229998: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022999C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802299A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802299A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802299A8: lw          $v0, -0x3B10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B10);
    // 0x802299AC: jalr        $v0
    // 0x802299B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802299B0: nop

    after_1:
L_802299B4:
    // 0x802299B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802299B8: jr          $ra
    // 0x802299BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802299BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226680_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226684: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226688: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022668C: bne         $v0, $zero, L_80226700
    if (ctx->r2 != 0) {
        // 0x80226690: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80226700;
    }
    // 0x80226690: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226694: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226698: lw          $v0, -0x36D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X36D0);
    // 0x8022669C: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x802266A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802266A4: sb          $zero, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = 0;
    // 0x802266A8: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x802266AC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802266B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266B4: sh          $v0, 0x45DA($at)
    MEM_H(0X45DA, ctx->r1) = ctx->r2;
    // 0x802266B8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802266BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266C0: sh          $v0, 0x4682($at)
    MEM_H(0X4682, ctx->r1) = ctx->r2;
    // 0x802266C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802266C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266CC: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x802266D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266D4: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x802266D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266DC: sb          $v1, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = ctx->r3;
    // 0x802266E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266E4: sb          $v1, 0x4660($at)
    MEM_B(0X4660, ctx->r1) = ctx->r3;
    // 0x802266E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266EC: sb          $v0, 0x4690($at)
    MEM_B(0X4690, ctx->r1) = ctx->r2;
    // 0x802266F0: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    // 0x802266F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802266F8: jal         0x80229E74
    // 0x802266FC: addiu       $a3, $zero, -0x1F4
    ctx->r7 = ADD32(0, -0X1F4);
    func_80229E74_ovl6(rdram, ctx);
        goto after_0;
    // 0x802266FC: addiu       $a3, $zero, -0x1F4
    ctx->r7 = ADD32(0, -0X1F4);
    after_0:
L_80226700:
    // 0x80226700: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226704: jr          $ra
    // 0x80226708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269F0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802269F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802269F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226A00: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226A04: bne         $v0, $zero, L_80226ADC
    if (ctx->r2 != 0) {
        // 0x80226A08: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226ADC;
    }
    // 0x80226A08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226A0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A10: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226A14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226A18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A1C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226A20: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226A24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A28: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226A2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A30: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226A34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A38: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226A3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A40: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226A44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A48: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226A4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A50: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226A54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A58: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226A5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A60: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226A64: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80226A68: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A6C: sb          $zero, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = 0;
    // 0x80226A70: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226A74: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226A78: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226A7C: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x80226A80: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226A84: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80226A88: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226A8C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226A90: jal         0x8004CB2C
    // 0x80226A94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226A94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x80226A98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226A9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AA0: sb          $v0, 0x4660($at)
    MEM_B(0X4660, ctx->r1) = ctx->r2;
    // 0x80226AA4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80226AA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AAC: sw          $zero, 0x4664($at)
    MEM_W(0X4664, ctx->r1) = 0;
    // 0x80226AB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AB4: sw          $zero, 0x4668($at)
    MEM_W(0X4668, ctx->r1) = 0;
    // 0x80226AB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226ABC: sh          $zero, 0x4680($at)
    MEM_H(0X4680, ctx->r1) = 0;
    // 0x80226AC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AC4: sh          $v0, 0x4682($at)
    MEM_H(0X4682, ctx->r1) = ctx->r2;
    // 0x80226AC8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80226ACC: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x80226AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226AD4: jal         0x80229E74
    // 0x80226AD8: addiu       $a3, $zero, -0x1F4
    ctx->r7 = ADD32(0, -0X1F4);
    func_80229E74_ovl6(rdram, ctx);
        goto after_1;
    // 0x80226AD8: addiu       $a3, $zero, -0x1F4
    ctx->r7 = ADD32(0, -0X1F4);
    after_1:
L_80226ADC:
    // 0x80226ADC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226AE0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226AE4: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80226AE8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226AEC: bne         $v0, $v1, L_80226B0C
    if (ctx->r2 != ctx->r3) {
        // 0x80226AF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226B0C;
    }
    // 0x80226AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226AF8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80226AFC: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80226B00: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80226B04: jal         0x80229D40
    // 0x80226B08: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_2;
    // 0x80226B08: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_2:
L_80226B0C:
    // 0x80226B0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226B14: jr          $ra
    // 0x80226B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227FD4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227FD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227FE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FE8: bne         $v0, $zero, L_80228004
    if (ctx->r2 != 0) {
        // 0x80227FEC: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_80228004;
    }
    // 0x80227FEC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80227FF0: jal         0x80050294
    // 0x80227FF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227FF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227FF8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228000: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228004:
    // 0x80228004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228008: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022800C: jr          $ra
    // 0x80228010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227424_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227428: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022742C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227434: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227438: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022743C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227440: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227444: lw          $v0, -0x4158($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4158);
    // 0x80227448: jalr        $v0
    // 0x8022744C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022744C: nop

    after_0:
    // 0x80227450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227454: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80227458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022745C: jal         0x8004DA90
    // 0x80227460: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227460: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022746C: jr          $ra
    // 0x80227470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D40_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D40: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80229D44: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80229D48: lbu         $s2, 0x7B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X7B);
    // 0x80229D4C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80229D50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229D54: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80229D58: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80229D5C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80229D60: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x80229D64: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80229D68: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80229D6C: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x80229D70: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80229D74: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80229D78: jal         0x8004F144
    // 0x80229D7C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80229D7C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    after_0:
    // 0x80229D80: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x80229D84: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80229D88: beq         $s0, $zero, L_80229E44
    if (ctx->r16 == 0) {
        // 0x80229D8C: addu        $s5, $s7, $zero
        ctx->r21 = ADD32(ctx->r23, 0);
            goto L_80229E44;
    }
    // 0x80229D8C: addu        $s5, $s7, $zero
    ctx->r21 = ADD32(ctx->r23, 0);
    // 0x80229D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D94: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229D98: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80229D9C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80229DA0: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x80229DA4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80229DA8: beq         $s1, $zero, L_80229E30
    if (ctx->r17 == 0) {
        // 0x80229DAC: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_80229E30;
    }
    // 0x80229DAC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80229DB0: jal         0x800A3450
    // 0x80229DB4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80229DB4: nop

    after_1:
    // 0x80229DB8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80229DBC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80229DC0: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80229DC4: jal         0x800A3450
    // 0x80229DC8: sh          $s6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r22;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80229DC8: sh          $s6, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r22;
    after_2:
    // 0x80229DCC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80229DD0: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80229DD4: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x80229DD8: jal         0x8002C654
    // 0x80229DDC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80229DDC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_3:
    // 0x80229DE0: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80229DE4: jal         0x800319B4
    // 0x80229DE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80229DE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80229DEC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80229DF0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80229DF4: jal         0x80031270
    // 0x80229DF8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_5;
    // 0x80229DF8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x80229DFC: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80229E00: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80229E04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E08: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80229E0C: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x80229E10: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80229E14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E18: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80229E1C: lh          $v1, 0x24($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X24);
    // 0x80229E20: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80229E24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E28: j           L_80229E3C
    // 0x80229E2C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
        goto L_80229E3C;
    // 0x80229E2C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80229E30:
    // 0x80229E30: sh          $s4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r20;
    // 0x80229E34: sh          $s6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r22;
    // 0x80229E38: sh          $s5, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r21;
L_80229E3C:
    // 0x80229E3C: j           L_80229E48
    // 0x80229E40: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_80229E48;
    // 0x80229E40: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80229E44:
    // 0x80229E44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229E48:
    // 0x80229E48: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x80229E4C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80229E50: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80229E54: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80229E58: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80229E5C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80229E60: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80229E64: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80229E68: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80229E6C: jr          $ra
    // 0x80229E70: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80229E70: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802276FC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227704: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227708: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022770C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227710: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227714: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227718: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022771C: bne         $v0, $zero, L_80227730
    if (ctx->r2 != 0) {
        // 0x80227720: nop
    
            goto L_80227730;
    }
    // 0x80227720: nop

    // 0x80227724: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022772C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227730:
    // 0x80227730: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80227734: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80227738: lui         $v1, 0xA0
    ctx->r3 = S32(0XA0 << 16);
    // 0x8022773C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227740: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x80227744: beq         $a0, $zero, L_80227794
    if (ctx->r4 == 0) {
        // 0x80227748: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_80227794;
    }
    // 0x80227748: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8022774C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227754: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x80227758: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x8022775C: jal         0x80229D40
    // 0x80227760: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80229D40_ovl6(rdram, ctx);
        goto after_0;
    // 0x80227760: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80227764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227768: addiu       $a1, $zero, -0x64
    ctx->r5 = ADD32(0, -0X64);
    // 0x8022776C: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x80227770: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x80227774: jal         0x80229D40
    // 0x80227778: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80229D40_ovl6(rdram, ctx);
        goto after_1;
    // 0x80227778: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8022777C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227780: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80227784: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x80227788: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x8022778C: jal         0x80229D40
    // 0x80227790: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80229D40_ovl6(rdram, ctx);
        goto after_2;
    // 0x80227790: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80227794:
    // 0x80227794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227798: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022779C: jr          $ra
    // 0x802277A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802277A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022785C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022785C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227860: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227864: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022786C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227870: bne         $v0, $zero, L_8022788C
    if (ctx->r2 != 0) {
        // 0x80227874: nop
    
            goto L_8022788C;
    }
    // 0x80227874: nop

    // 0x80227878: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022787C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80227880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227884: j           L_802278BC
    // 0x80227888: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802278BC;
    // 0x80227888: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022788C:
    // 0x8022788C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227890: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227894: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x80227898: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022789C: jal         0x800324B4
    // 0x802278A0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802278A0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802278A4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802278A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802278AC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802278B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802278B4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802278B8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_802278BC:
    // 0x802278BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802278C0: jal         0x8004DD04
    // 0x802278C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802278C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802278C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278D0: jr          $ra
    // 0x802278D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802278D8: nop

    // 0x802278DC: nop

;}
RECOMP_FUNC void func_80226B1C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B1C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226B20: bne         $v0, $zero, L_80226B3C
    if (ctx->r2 != 0) {
        // 0x80226B24: addiu       $v1, $zero, 0x400
        ctx->r3 = ADD32(0, 0X400);
            goto L_80226B3C;
    }
    // 0x80226B24: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x80226B28: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226B2C: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x80226B30: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80226B34: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226B38: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226B3C:
    // 0x80226B3C: jr          $ra
    // 0x80226B40: nop

    TRACE_RETURN()
    return;
    // 0x80226B40: nop

;}
RECOMP_FUNC void func_80226C0C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C0C: jr          $ra
    // 0x80226C10: nop

    TRACE_RETURN()
    return;
    // 0x80226C10: nop

;}
RECOMP_FUNC void func_802288B0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802288B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802288C0: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802288C4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802288C8: bne         $v0, $zero, L_802288E4
    if (ctx->r2 != 0) {
        // 0x802288CC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802288E4;
    }
    // 0x802288CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802288D0: jal         0x80050294
    // 0x802288D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802288D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802288D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802288DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802288E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802288E4:
    // 0x802288E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802288E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288EC: jr          $ra
    // 0x802288F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227930_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022793C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227940: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227944: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227948: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022794C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227950: lw          $v0, -0x4110($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4110);
    // 0x80227954: jalr        $v0
    // 0x80227958: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227958: nop

    after_0:
    // 0x8022795C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227960: jal         0x8004DD04
    // 0x80227964: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80227964: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80227968: jal         0x800504EC
    // 0x8022796C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x8022796C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227970: jal         0x8005129C
    // 0x80227974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x80227974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022797C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227980: jr          $ra
    // 0x80227984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228DB8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228DBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80228DC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80228DC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80228DC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228DCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228DD0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80228DD4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80228DD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DDC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80228DE0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228DE4: bne         $v0, $v1, L_80228ED8
    if (ctx->r2 != ctx->r3) {
        // 0x80228DE8: nop
    
            goto L_80228ED8;
    }
    // 0x80228DE8: nop

    // 0x80228DEC: jal         0x8004F144
    // 0x80228DF0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80228DF0: nop

    after_0:
    // 0x80228DF4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228DF8: beq         $s1, $zero, L_80228ED8
    if (ctx->r17 == 0) {
        // 0x80228DFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228ED8;
    }
    // 0x80228DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E00: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80228E04: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80228E08: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80228E0C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80228E10: jal         0x800A3450
    // 0x80228E14: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80228E14: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x80228E18: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228E1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228E20: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80228E24: jal         0x800A3450
    // 0x80228E28: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80228E28: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x80228E2C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80228E30: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228E34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E38: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x80228E3C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80228E40: jal         0x800A3450
    // 0x80228E44: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80228E44: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80228E48: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80228E4C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80228E50: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80228E54: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228E58: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x80228E5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E60: jal         0x800A3450
    // 0x80228E64: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80228E64: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80228E68: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80228E6C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80228E70: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80228E74: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80228E78: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x80228E7C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80228E80: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228E84: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228E88: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x80228E8C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80228E90: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80228E94: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80228E98: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x80228E9C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x80228EA0: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80228EA4: blez        $v0, L_80228EC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80228EA8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80228EC8;
    }
    // 0x80228EA8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80228EAC:
    // 0x80228EAC: jal         0x80228CE0
    // 0x80228EB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80228CE0_ovl6(rdram, ctx);
        goto after_5;
    // 0x80228EB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80228EB4: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80228EB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80228EBC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228EC0: bne         $v0, $zero, L_80228EAC
    if (ctx->r2 != 0) {
        // 0x80228EC4: nop
    
            goto L_80228EAC;
    }
    // 0x80228EC4: nop

L_80228EC8:
    // 0x80228EC8: jal         0x800A3450
    // 0x80228ECC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80228ECC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x80228ED0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80228ED4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80228ED8:
    // 0x80228ED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80228EDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80228EE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228EE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228EE8: jr          $ra
    // 0x80228EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022686C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022686C: jr          $ra
    // 0x80226870: nop

    TRACE_RETURN()
    return;
    // 0x80226870: nop

;}
RECOMP_FUNC void func_8022896C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022896C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228970: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022897C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228980: bne         $v0, $zero, L_8022899C
    if (ctx->r2 != 0) {
        // 0x80228984: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_8022899C;
    }
    // 0x80228984: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80228988: jal         0x80050294
    // 0x8022898C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022898C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228990: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228994: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228998: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022899C:
    // 0x8022899C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802289A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289A4: jr          $ra
    // 0x802289A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802289A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228CE0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228CE4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80228CE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228CEC: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80228CF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228CF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228CF8: addu        $at, $at, $v0
    gpr jr_addend_80228D00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228CFC: lw          $v0, -0x3B60($at)
    ctx->r2 = ADD32(ctx->r1, -0X3B60);
    // 0x80228D00: jr          $v0
    // 0x80228D04: nop

    switch (jr_addend_80228D00 >> 2) {
        case 0: goto L_80228D08; break;
        case 1: goto L_80228D20; break;
        case 2: goto L_80228DA4; break;
        default: switch_error(__func__, 0x80228D00, 0x8022C4A0);
    }
    // 0x80228D04: nop

L_80228D08:
    // 0x80228D08: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x80228D0C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80228D10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228D14: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228D18: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x80228D1C: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80228D20:
    // 0x80228D20: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80228D24: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80228D28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228D2C: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80228D30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228D34: beq         $v0, $zero, L_80228D48
    if (ctx->r2 == 0) {
        // 0x80228D38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228D48;
    }
    // 0x80228D38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228D3C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80228D40: bne         $v1, $v0, L_80228D58
    if (ctx->r3 != ctx->r2) {
        // 0x80228D44: nop
    
            goto L_80228D58;
    }
    // 0x80228D44: nop

L_80228D48:
    // 0x80228D48: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80228D4C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80228D50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D54: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80228D58:
    // 0x80228D58: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x80228D5C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80228D60: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80228D64: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80228D68: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x80228D6C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80228D70: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80228D74: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80228D78: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80228D7C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228D80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D84: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80228D88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D8C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80228D90: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80228D94: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x80228D98: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x80228D9C: j           L_80228DAC
    // 0x80228DA0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_80228DAC;
    // 0x80228DA0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_80228DA4:
    // 0x80228DA4: jal         0x8004F5C4
    // 0x80228DA8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80228DA8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_80228DAC:
    // 0x80228DAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228DB0: jr          $ra
    // 0x80228DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C14_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226C18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226C1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226C24: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226C28: bne         $v0, $zero, L_80226C84
    if (ctx->r2 != 0) {
        // 0x80226C2C: slti        $v0, $v0, 0x73
        ctx->r2 = SIGNED(ctx->r2) < 0X73 ? 1 : 0;
            goto L_80226C84;
    }
    // 0x80226C2C: slti        $v0, $v0, 0x73
    ctx->r2 = SIGNED(ctx->r2) < 0X73 ? 1 : 0;
    // 0x80226C30: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80226C34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C38: sw          $zero, 0x4588($at)
    MEM_W(0X4588, ctx->r1) = 0;
    // 0x80226C3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C40: sw          $zero, 0x4584($at)
    MEM_W(0X4584, ctx->r1) = 0;
    // 0x80226C44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C48: sh          $zero, 0x45A2($at)
    MEM_H(0X45A2, ctx->r1) = 0;
    // 0x80226C4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C50: sh          $v0, 0x45A0($at)
    MEM_H(0X45A0, ctx->r1) = ctx->r2;
    // 0x80226C54: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80226C58: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80226C5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226C60: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80226C64: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80226C68: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x80226C6C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226C70: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226C74: jal         0x8004CB2C
    // 0x80226C78: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226C78: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    after_0:
    // 0x80226C7C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226C80: slti        $v0, $v0, 0x73
    ctx->r2 = SIGNED(ctx->r2) < 0X73 ? 1 : 0;
L_80226C84:
    // 0x80226C84: bne         $v0, $zero, L_80226CB4
    if (ctx->r2 != 0) {
        // 0x80226C88: nop
    
            goto L_80226CB4;
    }
    // 0x80226C88: nop

    // 0x80226C8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226C90: addiu       $v0, $v0, 0x45A0
    ctx->r2 = ADD32(ctx->r2, 0X45A0);
    // 0x80226C94: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80226C98: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226C9C: lhu         $a0, 0x45A2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X45A2);
    // 0x80226CA0: addiu       $v1, $v1, 0xB
    ctx->r3 = ADD32(ctx->r3, 0XB);
    // 0x80226CA4: addiu       $a0, $a0, 0x21
    ctx->r4 = ADD32(ctx->r4, 0X21);
    // 0x80226CA8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80226CAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CB0: sh          $a0, 0x45A2($at)
    MEM_H(0X45A2, ctx->r1) = ctx->r4;
L_80226CB4:
    // 0x80226CB4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226CB8: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226CBC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80226CC0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226CC4: bne         $v0, $v1, L_80226CE4
    if (ctx->r2 != ctx->r3) {
        // 0x80226CC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226CE4;
    }
    // 0x80226CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CCC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226CD0: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80226CD4: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80226CD8: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80226CDC: jal         0x80229D40
    // 0x80226CE0: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_1;
    // 0x80226CE0: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_1:
L_80226CE4:
    // 0x80226CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226CEC: jr          $ra
    // 0x80226CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229B18_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229B1C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229B20: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80229B24: bne         $v0, $zero, L_80229B90
    if (ctx->r2 != 0) {
        // 0x80229B28: nop
    
            goto L_80229B90;
    }
    // 0x80229B28: nop

    // 0x80229B2C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229B30: bne         $v0, $zero, L_80229B88
    if (ctx->r2 != 0) {
        // 0x80229B34: nop
    
            goto L_80229B88;
    }
    // 0x80229B34: nop

    // 0x80229B38: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229B3C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229B40: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229B44: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229B48: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80229B4C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80229B50: bnel        $v1, $v0, L_80229B64
    if (ctx->r3 != ctx->r2) {
        // 0x80229B54: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_80229B64;
    }
    goto skip_0;
    // 0x80229B54: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x80229B58: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x80229B5C: j           L_80229B68
    // 0x80229B60: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_80229B68;
    // 0x80229B60: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_80229B64:
    // 0x80229B64: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80229B68:
    // 0x80229B68: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80229B6C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229B70: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80229B74: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229B78: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80229B7C: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x80229B80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229B84: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80229B88:
    // 0x80229B88: jal         0x80229690
    // 0x80229B8C: nop

    func_80229690_ovl6(rdram, ctx);
        goto after_0;
    // 0x80229B8C: nop

    after_0:
L_80229B90:
    // 0x80229B90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229B94: jr          $ra
    // 0x80229B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802289EC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802289F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802289F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802289F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802289FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A00: bne         $v0, $zero, L_80228A1C
    if (ctx->r2 != 0) {
        // 0x80228A04: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_80228A1C;
    }
    // 0x80228A04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228A08: jal         0x80050294
    // 0x80228A0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228A0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228A10: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228A1C:
    // 0x80228A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228A20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A24: jr          $ra
    // 0x80228A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228760_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228760: jr          $ra
    // 0x80228764: nop

    TRACE_RETURN()
    return;
    // 0x80228764: nop

;}
RECOMP_FUNC void func_802275E8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275E8: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802275EC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802275F0: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x802275F4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x802275F8: sh          $v0, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r2;
    // 0x802275FC: sw          $zero, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = 0;
    // 0x80227600: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80227604: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227608: jr          $ra
    // 0x8022760C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022760C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80228768_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022876C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228778: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022877C: bne         $v0, $zero, L_80228798
    if (ctx->r2 != 0) {
        // 0x80228780: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_80228798;
    }
    // 0x80228780: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80228784: jal         0x80050294
    // 0x80228788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022878C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228794: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228798:
    // 0x80228798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022879C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287A0: jr          $ra
    // 0x802287A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802287A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228730_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228730: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80228734: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228738: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022873C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228740: bne         $v0, $zero, L_80228758
    if (ctx->r2 != 0) {
        // 0x80228744: nop
    
            goto L_80228758;
    }
    // 0x80228744: nop

    // 0x80228748: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x8022874C: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80228750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228754: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80228758:
    // 0x80228758: jr          $ra
    // 0x8022875C: nop

    TRACE_RETURN()
    return;
    // 0x8022875C: nop

;}
RECOMP_FUNC void func_80227988_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022798C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227990: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80227994: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227998: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x8022799C: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x802279A0: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x802279A4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802279A8: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x802279AC: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x802279B0: sh          $zero, 0x56($a0)
    MEM_H(0X56, ctx->r4) = 0;
    // 0x802279B4: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    // 0x802279B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802279BC: jal         0x802278E0
    // 0x802279C0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    func_802278E0_ovl6(rdram, ctx);
        goto after_0;
    // 0x802279C0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    after_0:
    // 0x802279C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802279C8: jr          $ra
    // 0x802279CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022741C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022741C: jr          $ra
    // 0x80227420: nop

    TRACE_RETURN()
    return;
    // 0x80227420: nop

;}
RECOMP_FUNC void func_802278E0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802278F0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802278F4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802278F8: beq         $v1, $v0, L_80227918
    if (ctx->r3 == ctx->r2) {
        // 0x802278FC: nop
    
            goto L_80227918;
    }
    // 0x802278FC: nop

    // 0x80227900: jal         0x8004D5D4
    // 0x80227904: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227904: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_0:
    // 0x80227908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022790C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227910: jal         0x80050294
    // 0x80227914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_80227918:
    // 0x80227918: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022791C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80227920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227928: jr          $ra
    // 0x8022792C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022792C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022867C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022867C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228680: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228684: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022868C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228690: bne         $v0, $zero, L_802286AC
    if (ctx->r2 != 0) {
        // 0x80228694: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802286AC;
    }
    // 0x80228694: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228698: jal         0x80050294
    // 0x8022869C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022869C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802286A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802286A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802286A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802286AC:
    // 0x802286AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802286B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802286B4: jr          $ra
    // 0x802286B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802286B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227E9C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E9C: jr          $ra
    // 0x80227EA0: nop

    TRACE_RETURN()
    return;
    // 0x80227EA0: nop

;}
RECOMP_FUNC void func_80228AD0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228AD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228AD8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228ADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228AE0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228AE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228AE8: lw          $v0, -0x3C7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3C7C);
    // 0x80228AEC: jalr        $v0
    // 0x80228AF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228AF0: nop

    after_0:
    // 0x80228AF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228AF8: jr          $ra
    // 0x80228AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802265B8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265B8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802265BC: bne         $v0, $zero, L_8022660C
    if (ctx->r2 != 0) {
        // 0x802265C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022660C;
    }
    // 0x802265C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802265C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265C8: sb          $v0, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r2;
    // 0x802265CC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802265D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802265D4: sb          $v0, -0x36C0($at)
    MEM_B(-0X36C0, ctx->r1) = ctx->r2;
    // 0x802265D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802265DC: sb          $v0, -0x36C1($at)
    MEM_B(-0X36C1, ctx->r1) = ctx->r2;
    // 0x802265E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802265E4: sb          $v0, -0x36C2($at)
    MEM_B(-0X36C2, ctx->r1) = ctx->r2;
    // 0x802265E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265F0: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x802265F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265F8: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x802265FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226600: sb          $v0, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = ctx->r2;
    // 0x80226604: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226608: sb          $v0, -0x36BF($at)
    MEM_B(-0X36BF, ctx->r1) = ctx->r2;
L_8022660C:
    // 0x8022660C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226610: addiu       $v0, $zero, 0xBF
    ctx->r2 = ADD32(0, 0XBF);
    // 0x80226614: bne         $v1, $v0, L_80226650
    if (ctx->r3 != ctx->r2) {
        // 0x80226618: addiu       $v0, $zero, 0x15D
        ctx->r2 = ADD32(0, 0X15D);
            goto L_80226650;
    }
    // 0x80226618: addiu       $v0, $zero, 0x15D
    ctx->r2 = ADD32(0, 0X15D);
    // 0x8022661C: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80226620: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226624: lui         $v1, 0x650
    ctx->r3 = S32(0X650 << 16);
    // 0x80226628: sw          $v1, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r3;
    // 0x8022662C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226630: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x80226634: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x80226638: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x8022663C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226640: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226644: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226648: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022664C: addiu       $v0, $zero, 0x15D
    ctx->r2 = ADD32(0, 0X15D);
L_80226650:
    // 0x80226650: bne         $v1, $v0, L_80226678
    if (ctx->r3 != ctx->r2) {
        // 0x80226654: nop
    
            goto L_80226678;
    }
    // 0x80226654: nop

    // 0x80226658: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022665C: lw          $v0, -0x36D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X36D0);
    // 0x80226660: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80226664: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80226668: addiu       $v0, $zero, 0x1884
    ctx->r2 = ADD32(0, 0X1884);
    // 0x8022666C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226670: sb          $zero, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = 0;
    // 0x80226674: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_80226678:
    // 0x80226678: jr          $ra
    // 0x8022667C: nop

    TRACE_RETURN()
    return;
    // 0x8022667C: nop

;}
RECOMP_FUNC void func_80229C60_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229C64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229C68: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80229C6C: beq         $v0, $zero, L_80229CF8
    if (ctx->r2 == 0) {
        // 0x80229C70: nop
    
            goto L_80229CF8;
    }
    // 0x80229C70: nop

    // 0x80229C74: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229C78: bne         $v0, $zero, L_80229C98
    if (ctx->r2 != 0) {
        // 0x80229C7C: nop
    
            goto L_80229C98;
    }
    // 0x80229C7C: nop

    // 0x80229C80: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80229C84: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229C88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229C8C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229C90: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229C94: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80229C98:
    // 0x80229C98: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80229C9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229CA0: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x80229CA4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229CA8: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229CAC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229CB0: bne         $v1, $v0, L_80229CC8
    if (ctx->r3 != ctx->r2) {
        // 0x80229CB4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229CC8;
    }
    // 0x80229CB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229CB8: jal         0x8004F5C4
    // 0x80229CBC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229CBC: nop

    after_0:
    // 0x80229CC0: j           L_80229CF8
    // 0x80229CC4: nop

        goto L_80229CF8;
    // 0x80229CC4: nop

L_80229CC8:
    // 0x80229CC8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229CCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229CD0: lw          $v1, -0x3B30($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3B30);
    // 0x80229CD4: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x80229CD8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80229CDC: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80229CE0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80229CE4: sltiu       $v0, $v0, 0x121
    ctx->r2 = ctx->r2 < 0X121 ? 1 : 0;
    // 0x80229CE8: bne         $v0, $zero, L_80229CF8
    if (ctx->r2 != 0) {
        // 0x80229CEC: sw          $v1, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r3;
            goto L_80229CF8;
    }
    // 0x80229CEC: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80229CF0: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x80229CF4: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_80229CF8:
    // 0x80229CF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229CFC: jr          $ra
    // 0x80229D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80229D04: nop

    // 0x80229D08: nop

    // 0x80229D0C: nop

;}
RECOMP_FUNC void func_80227374_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227374: jr          $ra
    // 0x80227378: nop

    TRACE_RETURN()
    return;
    // 0x80227378: nop

;}
RECOMP_FUNC void func_802286BC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802286C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802286C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802286C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802286CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802286D0: jal         0x80050294
    // 0x802286D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802286D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802286D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802286DC: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x802286E0: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x802286E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802286E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802286EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802286F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802286F4: jr          $ra
    // 0x802286F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802286F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D80_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D8C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80227D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D94: jal         0x80050294
    // 0x80227D98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227D98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227D9C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227DA0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80227DA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227DA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227DB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227DB4: jr          $ra
    // 0x80227DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287A8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802287AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802287B8: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802287BC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802287C0: bne         $v0, $zero, L_802287DC
    if (ctx->r2 != 0) {
        // 0x802287C4: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802287DC;
    }
    // 0x802287C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802287C8: jal         0x80050294
    // 0x802287CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802287CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802287D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802287D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802287D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802287DC:
    // 0x802287DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802287E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287E4: jr          $ra
    // 0x802287E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802287E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802277A4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277A4: jr          $ra
    // 0x802277A8: nop

    TRACE_RETURN()
    return;
    // 0x802277A8: nop

;}
RECOMP_FUNC void func_80227474_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227474: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80227478: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022747C: sh          $v0, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r2;
    // 0x80227480: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80227484: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    // 0x80227488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022748C: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x80227490: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80227494: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80227498: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022749C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802274A0: jr          $ra
    // 0x802274A4: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x802274A4: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022A16C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A16C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A170: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A174: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A17C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A180: bne         $v0, $zero, L_8022A1DC
    if (ctx->r2 != 0) {
        // 0x8022A184: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_8022A1DC;
    }
    // 0x8022A184: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022A188: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A18C: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x8022A190: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x8022A194: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A198: jal         0x800A3450
    // 0x8022A19C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A19C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A1A0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022A1A4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022A1A8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022A1AC: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8022A1B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A1B4: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8022A1B8: jal         0x800A3450
    // 0x8022A1BC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022A1BC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A1C0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A1C4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A1C8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022A1CC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022A1D0: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x8022A1D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A1D8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022A1DC:
    // 0x8022A1DC: lhu         $a1, 0x26($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X26);
    // 0x8022A1E0: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x8022A1E4: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022A1E8: addiu       $a0, $a1, -0x80
    ctx->r4 = ADD32(ctx->r5, -0X80);
    // 0x8022A1EC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022A1F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022A1F4: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x8022A1F8: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8022A1FC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022A200: bne         $v0, $zero, L_8022A218
    if (ctx->r2 != 0) {
        // 0x8022A204: sh          $v1, 0x1E($s0)
        MEM_H(0X1E, ctx->r16) = ctx->r3;
            goto L_8022A218;
    }
    // 0x8022A204: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8022A208: jal         0x8004F5C4
    // 0x8022A20C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8022A20C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A210: j           L_8022A23C
    // 0x8022A214: nop

        goto L_8022A23C;
    // 0x8022A214: nop

L_8022A218:
    // 0x8022A218: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A21C: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x8022A220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A224: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022A228: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A22C: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022A230: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022A234: sh          $a1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r5;
    // 0x8022A238: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
L_8022A23C:
    // 0x8022A23C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A244: jr          $ra
    // 0x8022A248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228054_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228058: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022805C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228064: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228068: bne         $v0, $zero, L_80228084
    if (ctx->r2 != 0) {
        // 0x8022806C: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_80228084;
    }
    // 0x8022806C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80228070: jal         0x80050294
    // 0x80228074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228078: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022807C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228080: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228084:
    // 0x80228084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022808C: jr          $ra
    // 0x80228090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228144_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228144: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80228148: lui         $v1, 0x26
    ctx->r3 = S32(0X26 << 16);
    // 0x8022814C: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80228150: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80228154: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x80228158: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022815C: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80228160: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228164: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80228168: bne         $v1, $v0, L_8022817C
    if (ctx->r3 != ctx->r2) {
        // 0x8022816C: nop
    
            goto L_8022817C;
    }
    // 0x8022816C: nop

    // 0x80228170: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80228174: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228178: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_8022817C:
    // 0x8022817C: jr          $ra
    // 0x80228180: nop

    TRACE_RETURN()
    return;
    // 0x80228180: nop

;}
RECOMP_FUNC void func_802272EC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802272FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227300: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227304: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227308: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022730C: lw          $v0, -0x4170($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4170);
    // 0x80227310: jalr        $v0
    // 0x80227314: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227314: nop

    after_0:
    // 0x80227318: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022731C: lhu         $v1, 0x4A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4A);
    // 0x80227320: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x80227324: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227328: sh          $a1, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r5;
    // 0x8022732C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227330: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80227334: jal         0x8004DD04
    // 0x80227338: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80227338: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022733C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227340: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227344: jr          $ra
    // 0x80227348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802288FC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228900: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228904: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228908: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022890C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228910: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228914: lw          $v0, -0x3C88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3C88);
    // 0x80228918: jalr        $v0
    // 0x8022891C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022891C: nop

    after_0:
    // 0x80228920: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228924: jr          $ra
    // 0x80228928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269C4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269C4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802269C8: bne         $v0, $zero, L_802269E8
    if (ctx->r2 != 0) {
        // 0x802269CC: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802269E8;
    }
    // 0x802269CC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802269D0: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802269D4: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802269D8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802269DC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802269E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269E4: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
L_802269E8:
    // 0x802269E8: jr          $ra
    // 0x802269EC: nop

    TRACE_RETURN()
    return;
    // 0x802269EC: nop

;}
