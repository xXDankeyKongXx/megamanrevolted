#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225B98_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225BA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225BA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BA8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225BAC: bne         $v0, $zero, L_80225C00
    if (ctx->r2 != 0) {
        // 0x80225BB0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80225C00;
    }
    // 0x80225BB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225BB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_80225BB8:
    // 0x80225BB8: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80225BBC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80225BC0: jal         0x8004F418
    // 0x80225BC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225BC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x80225BC8: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80225BCC: bne         $v0, $zero, L_80225BB8
    if (ctx->r2 != 0) {
        // 0x80225BD0: nop
    
            goto L_80225BB8;
    }
    // 0x80225BD0: nop

    // 0x80225BD4: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x80225BD8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80225BDC: addiu       $s1, $s1, -0x5A28
    ctx->r17 = ADD32(ctx->r17, -0X5A28);
L_80225BE0:
    // 0x80225BE0: jal         0x8005FA7C
    // 0x80225BE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225BE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80225BE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225BEC: slti        $v0, $s0, 0xC
    ctx->r2 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x80225BF0: bne         $v0, $zero, L_80225BE0
    if (ctx->r2 != 0) {
        // 0x80225BF4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80225BE0;
    }
    // 0x80225BF4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80225BF8: jal         0x80225D50
    // 0x80225BFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80225D50_ovl11(rdram, ctx);
        goto after_2;
    // 0x80225BFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
L_80225C00:
    // 0x80225C00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225C04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225C08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C0C: jr          $ra
    // 0x80225C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802276E0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802276F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276F4: bne         $v0, $zero, L_80227718
    if (ctx->r2 != 0) {
        // 0x802276F8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80227718;
    }
    // 0x802276F8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802276FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80227700: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227704: jal         0x80050294
    // 0x80227708: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227708: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022770C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227714: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227718:
    // 0x80227718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022771C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227720: jr          $ra
    // 0x80227724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802282BC: bne         $v0, $zero, L_802282D8
    if (ctx->r2 != 0) {
        // 0x802282C0: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_802282D8;
    }
    // 0x802282C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802282C4: jal         0x80050294
    // 0x802282C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802282C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802282CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802282D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802282D8:
    // 0x802282D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802282DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282E0: jr          $ra
    // 0x802282E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802282E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227828_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022782C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227830: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227838: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022783C: bne         $v0, $zero, L_80227858
    if (ctx->r2 != 0) {
        // 0x80227840: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_80227858;
    }
    // 0x80227840: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227844: jal         0x80050294
    // 0x80227848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022784C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227854: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227858:
    // 0x80227858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022785C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227860: jr          $ra
    // 0x80227864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227890_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227894: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227898: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022789C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802278A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802278A8: lw          $v0, -0x4F50($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F50);
    // 0x802278AC: jalr        $v0
    // 0x802278B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802278B0: nop

    after_0:
    // 0x802278B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802278B8: jr          $ra
    // 0x802278BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FCC_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226FDC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226FE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226FE4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226FE8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226FEC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226FF0: jal         0x8004D5D4
    // 0x80226FF4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226FF4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226FF8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80226FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227000: bne         $v1, $v0, L_8022700C
    if (ctx->r3 != ctx->r2) {
        // 0x80227004: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8022700C;
    }
    // 0x80227004: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227008: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_8022700C:
    // 0x8022700C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227010: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227014: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227018: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8022701C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227020: bne         $v1, $v0, L_8022702C
    if (ctx->r3 != ctx->r2) {
        // 0x80227024: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_8022702C;
    }
    // 0x80227024: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227028: addiu       $v0, $zero, 0x318C
    ctx->r2 = ADD32(0, 0X318C);
L_8022702C:
    // 0x8022702C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227034: jal         0x8003E934
    // 0x80227038: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80227038: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022703C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80227040: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227044: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227048: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022704C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227050: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227058: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022705C: jr          $ra
    // 0x80227060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022533C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022533C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225340: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225344: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225348: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022534C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225350: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225354: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225358: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022535C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225360: lw          $v1, -0x5B00($at)
    ctx->r3 = MEM_W(ctx->r1, -0X5B00);
    // 0x80225364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022536C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225370: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225374: jalr        $v0
    // 0x80225378: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225378: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022537C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225380: jr          $ra
    // 0x80225384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228E10_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228E14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228E18: jal         0x8004F488
    // 0x80228E1C: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80228E1C: nop

    after_0:
    // 0x80228E20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228E24: jr          $ra
    // 0x80228E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228E2C: nop

;}
RECOMP_FUNC void func_80228A64_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228A68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228A74: jal         0x8004D5D4
    // 0x80228A78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228A78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80228A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228A84: jal         0x80050294
    // 0x80228A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80228A8C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228A90: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228A94: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228A98: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228A9C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228AA0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228AA4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228AA8: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80228AAC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228AB0: bne         $v1, $v0, L_80228ACC
    if (ctx->r3 != ctx->r2) {
        // 0x80228AB4: nop
    
            goto L_80228ACC;
    }
    // 0x80228AB4: nop

    // 0x80228AB8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228ABC: addiu       $v0, $v0, -0x4A90
    ctx->r2 = ADD32(ctx->r2, -0X4A90);
    // 0x80228AC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228AC4: j           L_80228AE4
    // 0x80228AC8: sw          $v0, -0x4620($at)
    MEM_W(-0X4620, ctx->r1) = ctx->r2;
        goto L_80228AE4;
    // 0x80228AC8: sw          $v0, -0x4620($at)
    MEM_W(-0X4620, ctx->r1) = ctx->r2;
L_80228ACC:
    // 0x80228ACC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228AD0: addiu       $v0, $v0, -0x4B00
    ctx->r2 = ADD32(ctx->r2, -0X4B00);
    // 0x80228AD4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228AD8: sw          $v0, -0x4620($at)
    MEM_W(-0X4620, ctx->r1) = ctx->r2;
    // 0x80228ADC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228AE0: addiu       $v0, $v0, -0x4AEC
    ctx->r2 = ADD32(ctx->r2, -0X4AEC);
L_80228AE4:
    // 0x80228AE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228AE8: sw          $v0, -0x461C($at)
    MEM_W(-0X461C, ctx->r1) = ctx->r2;
    // 0x80228AEC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228AF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228AF8: jal         0x802289D0
    // 0x80228AFC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    func_802289D0_ovl11(rdram, ctx);
        goto after_2;
    // 0x80228AFC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    after_2:
    // 0x80228B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228B04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B08: jr          $ra
    // 0x80228B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802296C8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802296CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802296D0: jal         0x8004F5C4
    // 0x802296D4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802296D4: nop

    after_0:
    // 0x802296D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802296DC: jr          $ra
    // 0x802296E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802277A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802277B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802277B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802277B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277BC: bne         $v0, $zero, L_802277D8
    if (ctx->r2 != 0) {
        // 0x802277C0: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_802277D8;
    }
    // 0x802277C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802277C4: jal         0x80050294
    // 0x802277C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802277C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802277CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802277D8:
    // 0x802277D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277E0: jr          $ra
    // 0x802277E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279E0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802279E8: jal         0x8004F488
    // 0x802279EC: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x802279EC: nop

    after_0:
    // 0x802279F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802279F4: jr          $ra
    // 0x802279F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253E8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253EC: bne         $v0, $zero, L_8022541C
    if (ctx->r2 != 0) {
        // 0x802253F0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022541C;
    }
    // 0x802253F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802253F4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802253F8: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802253FC: bne         $v1, $v0, L_80225408
    if (ctx->r3 != ctx->r2) {
        // 0x80225400: addiu       $a0, $zero, 0x16
        ctx->r4 = ADD32(0, 0X16);
            goto L_80225408;
    }
    // 0x80225400: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80225404: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
L_80225408:
    // 0x80225408: jal         0x80060690
    // 0x8022540C: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x8022540C: nop

    after_0:
    // 0x80225410: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225414: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225418: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022541C:
    // 0x8022541C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225424: jr          $ra
    // 0x80225428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022542C: nop

;}
RECOMP_FUNC void func_802280F4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802280F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802280FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228104: jal         0x8004D5D4
    // 0x80228108: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228108: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022810C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228110: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228114: jal         0x80050294
    // 0x80228118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022811C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228120: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228124: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228128: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022812C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228130: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228134: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228138: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022813C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228140: bne         $v1, $v0, L_80228164
    if (ctx->r3 != ctx->r2) {
        // 0x80228144: nop
    
            goto L_80228164;
    }
    // 0x80228144: nop

    // 0x80228148: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022814C: addiu       $v0, $v0, -0x4D98
    ctx->r2 = ADD32(ctx->r2, -0X4D98);
    // 0x80228150: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228154: sw          $v0, -0x4640($at)
    MEM_W(-0X4640, ctx->r1) = ctx->r2;
    // 0x80228158: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022815C: j           L_8022817C
    // 0x80228160: addiu       $v0, $v0, -0x4D68
    ctx->r2 = ADD32(ctx->r2, -0X4D68);
        goto L_8022817C;
    // 0x80228160: addiu       $v0, $v0, -0x4D68
    ctx->r2 = ADD32(ctx->r2, -0X4D68);
L_80228164:
    // 0x80228164: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228168: addiu       $v0, $v0, -0x4DE8
    ctx->r2 = ADD32(ctx->r2, -0X4DE8);
    // 0x8022816C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228170: sw          $v0, -0x4640($at)
    MEM_W(-0X4640, ctx->r1) = ctx->r2;
    // 0x80228174: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228178: addiu       $v0, $v0, -0x4DD0
    ctx->r2 = ADD32(ctx->r2, -0X4DD0);
L_8022817C:
    // 0x8022817C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228180: sw          $v0, -0x463C($at)
    MEM_W(-0X463C, ctx->r1) = ctx->r2;
    // 0x80228184: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022818C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228190: jal         0x80228060
    // 0x80228194: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    func_80228060_ovl11(rdram, ctx);
        goto after_2;
    // 0x80228194: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    after_2:
    // 0x80228198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022819C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802281A0: jr          $ra
    // 0x802281A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228D50_ovl11(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80228D60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228D64: bne         $v0, $zero, L_80228D80
    if (ctx->r2 != 0) {
        // 0x80228D68: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80228D80;
    }
    // 0x80228D68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228D6C: jal         0x80050294
    // 0x80228D70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228D70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228D74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228D78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228D80:
    // 0x80228D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228D84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228D88: jr          $ra
    // 0x80228D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C14_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225C18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225C1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225C20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C24: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225C28: bne         $v0, $zero, L_80225CAC
    if (ctx->r2 != 0) {
        // 0x80225C2C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80225CAC;
    }
    // 0x80225C2C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225C30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
L_80225C34:
    // 0x80225C34: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80225C38: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80225C3C: jal         0x8004F418
    // 0x80225C40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225C40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x80225C44: slti        $v0, $s0, 0x5
    ctx->r2 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x80225C48: bne         $v0, $zero, L_80225C34
    if (ctx->r2 != 0) {
        // 0x80225C4C: nop
    
            goto L_80225C34;
    }
    // 0x80225C4C: nop

    // 0x80225C50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225C54: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80225C58: addiu       $s1, $s1, -0x2290
    ctx->r17 = ADD32(ctx->r17, -0X2290);
L_80225C5C:
    // 0x80225C5C: jal         0x8004F5C4
    // 0x80225C60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80225C60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80225C64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225C68: slti        $v0, $s0, 0x40
    ctx->r2 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x80225C6C: bne         $v0, $zero, L_80225C5C
    if (ctx->r2 != 0) {
        // 0x80225C70: addiu       $s1, $s1, 0x58
        ctx->r17 = ADD32(ctx->r17, 0X58);
            goto L_80225C5C;
    }
    // 0x80225C70: addiu       $s1, $s1, 0x58
    ctx->r17 = ADD32(ctx->r17, 0X58);
    // 0x80225C74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225C78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C7C: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x80225C80: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
    // 0x80225C84: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80225C88: addiu       $s1, $s1, -0x59C4
    ctx->r17 = ADD32(ctx->r17, -0X59C4);
L_80225C8C:
    // 0x80225C8C: jal         0x8005FA7C
    // 0x80225C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80225C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80225C94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225C98: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x80225C9C: bne         $v0, $zero, L_80225C8C
    if (ctx->r2 != 0) {
        // 0x80225CA0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80225C8C;
    }
    // 0x80225CA0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80225CA4: jal         0x80225D50
    // 0x80225CA8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80225D50_ovl11(rdram, ctx);
        goto after_3;
    // 0x80225CA8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
L_80225CAC:
    // 0x80225CAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225CB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225CB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CB8: jr          $ra
    // 0x80225CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227970_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227974: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227978: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022797C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227980: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227984: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227988: lw          $v0, -0x4F3C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F3C);
    // 0x8022798C: jalr        $v0
    // 0x80227990: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227990: nop

    after_0:
    // 0x80227994: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227998: jr          $ra
    // 0x8022799C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022799C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228B50_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228B60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B64: bne         $v0, $zero, L_80228B80
    if (ctx->r2 != 0) {
        // 0x80228B68: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80228B80;
    }
    // 0x80228B68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228B6C: jal         0x80050294
    // 0x80228B70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228B70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228B74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228B80:
    // 0x80228B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228B84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B88: jr          $ra
    // 0x80228B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258B0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258B0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802258B4: bne         $v0, $zero, L_802258DC
    if (ctx->r2 != 0) {
        // 0x802258B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802258DC;
    }
    // 0x802258B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802258BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258C0: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x802258C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258C8: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x802258CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258D0: sb          $v0, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = ctx->r2;
    // 0x802258D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258D8: sb          $v0, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = ctx->r2;
L_802258DC:
    // 0x802258DC: jr          $ra
    // 0x802258E0: nop

    TRACE_RETURN()
    return;
    // 0x802258E0: nop

;}
RECOMP_FUNC void func_80225A44_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225A48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225A4C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225A50: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225A54: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225A58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225A5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A60: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80225A64: bne         $v0, $zero, L_80225AE0
    if (ctx->r2 != 0) {
        // 0x80225A68: nop
    
            goto L_80225AE0;
    }
    // 0x80225A68: nop

    // 0x80225A6C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225A70: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_80225A74:
    // 0x80225A74: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80225A78: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80225A7C: jal         0x8004F418
    // 0x80225A80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225A80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x80225A84: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80225A88: bne         $v0, $zero, L_80225A74
    if (ctx->r2 != 0) {
        // 0x80225A8C: nop
    
            goto L_80225A74;
    }
    // 0x80225A8C: nop

    // 0x80225A90: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225A94: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80225A98: addiu       $s1, $s1, -0x2290
    ctx->r17 = ADD32(ctx->r17, -0X2290);
L_80225A9C:
    // 0x80225A9C: jal         0x8004F5C4
    // 0x80225AA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80225AA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80225AA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225AA8: slti        $v0, $s0, 0x40
    ctx->r2 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x80225AAC: bne         $v0, $zero, L_80225A9C
    if (ctx->r2 != 0) {
        // 0x80225AB0: addiu       $s1, $s1, 0x58
        ctx->r17 = ADD32(ctx->r17, 0X58);
            goto L_80225A9C;
    }
    // 0x80225AB0: addiu       $s1, $s1, 0x58
    ctx->r17 = ADD32(ctx->r17, 0X58);
    // 0x80225AB4: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80225AB8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80225ABC: addiu       $s1, $s1, -0x5A64
    ctx->r17 = ADD32(ctx->r17, -0X5A64);
L_80225AC0:
    // 0x80225AC0: jal         0x8005FA7C
    // 0x80225AC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80225AC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80225AC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225ACC: slti        $v0, $s0, 0x7
    ctx->r2 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x80225AD0: bne         $v0, $zero, L_80225AC0
    if (ctx->r2 != 0) {
        // 0x80225AD4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80225AC0;
    }
    // 0x80225AD4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80225AD8: jal         0x80225D50
    // 0x80225ADC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80225D50_ovl11(rdram, ctx);
        goto after_3;
    // 0x80225ADC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_80225AE0:
    // 0x80225AE0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225AE4: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80225AE8: bne         $v1, $v0, L_80225B7C
    if (ctx->r3 != ctx->r2) {
        // 0x80225AEC: nop
    
            goto L_80225B7C;
    }
    // 0x80225AEC: nop

    // 0x80225AF0: jal         0x8004F144
    // 0x80225AF4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80225AF4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_4:
    // 0x80225AF8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225AFC: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x80225B00: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x80225B04: addiu       $v0, $zero, -0x12
    ctx->r2 = ADD32(0, -0X12);
    // 0x80225B08: addiu       $s3, $zero, -0x4F
    ctx->r19 = ADD32(0, -0X4F);
    // 0x80225B0C: addiu       $s2, $zero, 0xC8
    ctx->r18 = ADD32(0, 0XC8);
    // 0x80225B10: sb          $s0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r16;
    // 0x80225B14: sb          $s1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r17;
    // 0x80225B18: sb          $s0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r16;
    // 0x80225B1C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80225B20: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80225B24: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80225B28: sh          $s3, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r19;
    // 0x80225B2C: sh          $s2, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r18;
    // 0x80225B30: sb          $s1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r17;
    // 0x80225B34: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80225B38: jal         0x8004F144
    // 0x80225B3C: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x80225B3C: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
    after_5:
    // 0x80225B40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225B44: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x80225B48: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80225B4C: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80225B50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225B54: sb          $s0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r16;
    // 0x80225B58: sb          $s1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r17;
    // 0x80225B5C: sb          $s0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r16;
    // 0x80225B60: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80225B64: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80225B68: sh          $s3, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r19;
    // 0x80225B6C: sh          $s2, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r18;
    // 0x80225B70: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225B74: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80225B78: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
L_80225B7C:
    // 0x80225B7C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225B80: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225B84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225B88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225B8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B90: jr          $ra
    // 0x80225B94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225B94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802281A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802281B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802281BC: bne         $v0, $zero, L_802281D8
    if (ctx->r2 != 0) {
        // 0x802281C0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802281D8;
    }
    // 0x802281C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802281C4: jal         0x80050294
    // 0x802281C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802281C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802281CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802281D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802281D8:
    // 0x802281D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802281DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802281E0: jr          $ra
    // 0x802281E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227CA0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227CA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227CA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227CB0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227CB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227CB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227CBC: addu        $at, $at, $v0
    gpr jr_addend_80227CC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227CC0: lw          $v0, -0x4F30($at)
    ctx->r2 = ADD32(ctx->r1, -0X4F30);
    // 0x80227CC4: jr          $v0
    // 0x80227CC8: nop

    switch (jr_addend_80227CC4 >> 2) {
        case 0: goto L_80227CCC; break;
        case 1: goto L_80227D0C; break;
        case 2: goto L_80227D50; break;
        default: switch_error(__func__, 0x80227CC4, 0x8022B0D0);
    }
    // 0x80227CC8: nop

L_80227CCC:
    // 0x80227CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CD0: jal         0x8004D5D4
    // 0x80227CD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227CD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227CE0: jal         0x80050294
    // 0x80227CE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227CE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227CE8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227CEC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80227CF0: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80227CF4: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80227CF8: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x80227CFC: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80227D00: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80227D04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227D0C:
    // 0x80227D0C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227D10: bne         $v0, $zero, L_80227D38
    if (ctx->r2 != 0) {
        // 0x80227D14: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80227D38;
    }
    // 0x80227D14: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227D1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227D20: jal         0x80050294
    // 0x80227D24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80227D24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80227D28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227D2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227D34: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80227D38:
    // 0x80227D38: jal         0x8004DD04
    // 0x80227D3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80227D3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80227D40: jal         0x8005044C
    // 0x80227D44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80227D44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227D48: j           L_80227D58
    // 0x80227D4C: nop

        goto L_80227D58;
    // 0x80227D4C: nop

L_80227D50:
    // 0x80227D50: jal         0x8004F488
    // 0x80227D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_5;
    // 0x80227D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80227D58:
    // 0x80227D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D60: jr          $ra
    // 0x80227D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227D68: nop

    // 0x80227D6C: nop

;}
RECOMP_FUNC void func_80229720_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022972C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229730: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229734: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229738: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022973C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229740: bne         $v0, $zero, L_802297B8
    if (ctx->r2 != 0) {
        // 0x80229744: nop
    
            goto L_802297B8;
    }
    // 0x80229744: nop

    // 0x80229748: jal         0x8004F144
    // 0x8022974C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022974C: nop

    after_0:
    // 0x80229750: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80229754: beq         $a1, $zero, L_802297A4
    if (ctx->r5 == 0) {
        // 0x80229758: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_802297A4;
    }
    // 0x80229758: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022975C: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x80229760: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80229764: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    // 0x80229768: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022976C: sb          $a0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r4;
    // 0x80229770: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80229774: sw          $s0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r16;
    // 0x80229778: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022977C: sb          $v1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r3;
    // 0x80229780: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x80229784: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229788: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x8022978C: lh          $v0, 0x1E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1E);
    // 0x80229790: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229794: sw          $v0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r2;
    // 0x80229798: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x8022979C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802297A0: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
L_802297A4:
    // 0x802297A4: jal         0x800A3450
    // 0x802297A8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802297A8: nop

    after_1:
    // 0x802297AC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802297B0: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x802297B4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_802297B8:
    // 0x802297B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802297BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802297C0: jr          $ra
    // 0x802297C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802297C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227610_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227614: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227618: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022761C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227620: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227624: bne         $v0, $zero, L_80227640
    if (ctx->r2 != 0) {
        // 0x80227628: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80227640;
    }
    // 0x80227628: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022762C: jal         0x80050294
    // 0x80227630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227634: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022763C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227640:
    // 0x80227640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227644: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227648: jr          $ra
    // 0x8022764C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022764C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227728_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022772C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227730: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227738: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022773C: bne         $v0, $zero, L_80227758
    if (ctx->r2 != 0) {
        // 0x80227740: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80227758;
    }
    // 0x80227740: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227744: jal         0x80050294
    // 0x80227748: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227748: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022774C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227754: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227758:
    // 0x80227758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022775C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227760: jr          $ra
    // 0x80227764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228560_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228560: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228564: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80228568: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022856C: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x80228570: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80228574: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
    // 0x80228578: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8022857C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80228580: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228584: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228588: lw          $v0, -0x4CD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4CD0);
    // 0x8022858C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80228590: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228594: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228598: lw          $v0, -0x4CC4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4CC4);
    // 0x8022859C: jr          $ra
    // 0x802285A0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802285A0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80227768_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022776C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227778: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022777C: bne         $v0, $zero, L_80227798
    if (ctx->r2 != 0) {
        // 0x80227780: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80227798;
    }
    // 0x80227780: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227784: jal         0x80050294
    // 0x80227788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022778C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227794: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227798:
    // 0x80227798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022779C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277A0: jr          $ra
    // 0x802277A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BB0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BB0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226BB4: bne         $v0, $zero, L_80226C90
    if (ctx->r2 != 0) {
        // 0x80226BB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226C90;
    }
    // 0x80226BB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226BBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BC0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226BC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226BC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BCC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226BD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226BD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BD8: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226BDC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226BE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BE4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226BE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BEC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226BF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BF4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226BF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BFC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226C00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C04: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C0C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226C10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C14: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226C18: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226C1C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226C20: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80226C24: addiu       $t0, $t0, 0x4430
    ctx->r8 = ADD32(ctx->r8, 0X4430);
    // 0x80226C28: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226C2C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226C30: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x80226C34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226C38: lbu         $a0, 0x44A0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X44A0);
    // 0x80226C3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226C40: lbu         $a1, 0x4510($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4510);
    // 0x80226C44: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80226C48: lbu         $a2, 0x4548($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X4548);
    // 0x80226C4C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80226C50: lbu         $a3, 0x4580($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X4580);
    // 0x80226C54: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80226C58: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226C5C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80226C60: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x80226C64: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80226C68: and         $a3, $a3, $v0
    ctx->r7 = ctx->r7 & ctx->r2;
    // 0x80226C6C: sb          $v1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r3;
    // 0x80226C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C74: sb          $a0, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r4;
    // 0x80226C78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C7C: sb          $a1, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = ctx->r5;
    // 0x80226C80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C84: sb          $a2, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = ctx->r6;
    // 0x80226C88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C8C: sb          $a3, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = ctx->r7;
L_80226C90:
    // 0x80226C90: jr          $ra
    // 0x80226C94: nop

    TRACE_RETURN()
    return;
    // 0x80226C94: nop

;}
RECOMP_FUNC void func_802282E8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802282FC: bne         $v0, $zero, L_80228318
    if (ctx->r2 != 0) {
        // 0x80228300: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80228318;
    }
    // 0x80228300: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228304: jal         0x80050294
    // 0x80228308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022830C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228310: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228314: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228318:
    // 0x80228318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022831C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228320: jr          $ra
    // 0x80228324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225778_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022577C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225780: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225788: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022578C: beq         $v1, $zero, L_802257A4
    if (ctx->r3 == 0) {
        // 0x80225790: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802257A4;
    }
    // 0x80225790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225794: beq         $v1, $v0, L_80225808
    if (ctx->r3 == ctx->r2) {
        // 0x80225798: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225808;
    }
    // 0x80225798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022579C: j           L_80225854
    // 0x802257A0: nop

        goto L_80225854;
    // 0x802257A0: nop

L_802257A4:
    // 0x802257A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802257A8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802257AC: bne         $v0, $zero, L_802257E0
    if (ctx->r2 != 0) {
        // 0x802257B0: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_802257E0;
    }
    // 0x802257B0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x802257B4: jal         0x8004CB2C
    // 0x802257B8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x802257B8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x802257BC: jal         0x80054578
    // 0x802257C0: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x802257C0: nop

    after_1:
    // 0x802257C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802257C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802257CC: jal         0x80036B00
    // 0x802257D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x802257D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802257D4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802257D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802257DC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802257E0:
    // 0x802257E0: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802257E4: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x802257E8: beq         $v0, $zero, L_80225854
    if (ctx->r2 == 0) {
        // 0x802257EC: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80225854;
    }
    // 0x802257EC: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x802257F0: bne         $v0, $zero, L_80225854
    if (ctx->r2 != 0) {
        // 0x802257F4: nop
    
            goto L_80225854;
    }
    // 0x802257F4: nop

    // 0x802257F8: jal         0x8005FB90
    // 0x802257FC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x802257FC: nop

    after_3:
    // 0x80225800: j           L_80225854
    // 0x80225804: nop

        goto L_80225854;
    // 0x80225804: nop

L_80225808:
    // 0x80225808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022580C: jal         0x80034844
    // 0x80225810: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80225810: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x80225814: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225818: addiu       $v1, $v1, -0x3B96
    ctx->r3 = ADD32(ctx->r3, -0X3B96);
    // 0x8022581C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225820: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80225824: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225828: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8022582C: addiu       $v1, $v1, 0x5448
    ctx->r3 = ADD32(ctx->r3, 0X5448);
    // 0x80225830: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80225834: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225838: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x8022583C: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    // 0x80225840: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225844: sb          $zero, 0x5449($at)
    MEM_B(0X5449, ctx->r1) = 0;
    // 0x80225848: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022584C: jal         0x800292E8
    // 0x80225850: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_800292E8_46E8(rdram, ctx);
        goto after_5;
    // 0x80225850: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_5:
L_80225854:
    // 0x80225854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225858: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022585C: jr          $ra
    // 0x80225860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226114_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226118: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022611C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226120: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226124: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226128: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022612C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226130: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80226134: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80226138: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022613C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226140: beq         $v0, $zero, L_8022638C
    if (ctx->r2 == 0) {
        // 0x80226144: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022638C;
    }
    // 0x80226144: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226148: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022614C: addu        $at, $at, $v0
    gpr jr_addend_80226154 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226150: lw          $v0, -0x46D0($at)
    ctx->r2 = ADD32(ctx->r1, -0X46D0);
    // 0x80226154: jr          $v0
    // 0x80226158: nop

    switch (jr_addend_80226154 >> 2) {
        case 0: goto L_8022615C; break;
        case 1: goto L_802261A4; break;
        case 2: goto L_802261C0; break;
        case 3: goto L_802261E8; break;
        case 4: goto L_80226244; break;
        case 5: goto L_8022628C; break;
        default: switch_error(__func__, 0x80226154, 0x8022B930);
    }
    // 0x80226158: nop

L_8022615C:
    // 0x8022615C: jal         0x8006FF84
    // 0x80226160: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226160: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x80226164: beq         $v0, $zero, L_8022638C
    if (ctx->r2 == 0) {
        // 0x80226168: lui         $a0, 0x10A
        ctx->r4 = S32(0X10A << 16);
            goto L_8022638C;
    }
    // 0x80226168: lui         $a0, 0x10A
    ctx->r4 = S32(0X10A << 16);
    // 0x8022616C: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80226170: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x80226174: ori         $a0, $a0, 0x2C00
    ctx->r4 = ctx->r4 | 0X2C00;
    // 0x80226178: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022617C: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80226180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226184: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x80226188: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022618C: andi        $a1, $a1, 0xFC
    ctx->r5 = ctx->r5 & 0XFC;
    // 0x80226190: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80226194: jal         0x80036B1C
    // 0x80226198: sb          $a1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r5;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80226198: sb          $a1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r5;
    after_1:
    // 0x8022619C: j           L_802261D8
    // 0x802261A0: nop

        goto L_802261D8;
    // 0x802261A0: nop

L_802261A4:
    // 0x802261A4: jal         0x80036B7C
    // 0x802261A8: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x802261A8: nop

    after_2:
    // 0x802261AC: beq         $v0, $zero, L_8022638C
    if (ctx->r2 == 0) {
        // 0x802261B0: addiu       $v1, $zero, 0x19
        ctx->r3 = ADD32(0, 0X19);
            goto L_8022638C;
    }
    // 0x802261B0: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x802261B4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802261B8: j           L_802261DC
    // 0x802261BC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_802261DC;
    // 0x802261BC: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_802261C0:
    // 0x802261C0: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802261C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802261C8: bne         $v0, $zero, L_8022638C
    if (ctx->r2 != 0) {
        // 0x802261CC: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_8022638C;
    }
    // 0x802261CC: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x802261D0: jal         0x80036E48
    // 0x802261D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x802261D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_802261D8:
    // 0x802261D8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_802261DC:
    // 0x802261DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261E0: j           L_8022638C
    // 0x802261E4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_8022638C;
    // 0x802261E4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802261E8:
    // 0x802261E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802261EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802261F0: jal         0x8005F6B4
    // 0x802261F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x802261F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802261F8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802261FC: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226200: addiu       $s0, $s0, -0x54D0
    ctx->r16 = ADD32(ctx->r16, -0X54D0);
    // 0x80226204: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226208: addiu       $v0, $v0, -0x5408
    ctx->r2 = ADD32(ctx->r2, -0X5408);
    // 0x8022620C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226210: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226214: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226218: addiu       $v0, $v0, -0x52E0
    ctx->r2 = ADD32(ctx->r2, -0X52E0);
    // 0x8022621C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
L_80226220:
    // 0x80226220: jal         0x8005FA7C
    // 0x80226224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80226224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226228: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022622C: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80226230: bne         $v0, $zero, L_80226220
    if (ctx->r2 != 0) {
        // 0x80226234: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80226220;
    }
    // 0x80226234: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80226238: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022623C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226240: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226244:
    // 0x80226244: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226248: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022624C: bne         $v0, $zero, L_8022628C
    if (ctx->r2 != 0) {
        // 0x80226250: nop
    
            goto L_8022628C;
    }
    // 0x80226250: nop

    // 0x80226254: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226258: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022625C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226260: beq         $v1, $v0, L_80226278
    if (ctx->r3 == ctx->r2) {
        // 0x80226264: nop
    
            goto L_80226278;
    }
    // 0x80226264: nop

    // 0x80226268: jal         0x8006072C
    // 0x8022626C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_6;
    // 0x8022626C: nop

    after_6:
    // 0x80226270: beq         $v0, $zero, L_8022628C
    if (ctx->r2 == 0) {
        // 0x80226274: nop
    
            goto L_8022628C;
    }
    // 0x80226274: nop

L_80226278:
    // 0x80226278: jal         0x80036E48
    // 0x8022627C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x8022627C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x80226280: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226288: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022628C:
    // 0x8022628C: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80226290: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226294: beq         $v1, $v0, L_802262AC
    if (ctx->r3 == ctx->r2) {
        // 0x80226298: nop
    
            goto L_802262AC;
    }
    // 0x80226298: nop

    // 0x8022629C: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x802262A0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802262A4: jalr        $v0
    // 0x802262A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x802262A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
L_802262AC:
    // 0x802262AC: jal         0x8005FB90
    // 0x802262B0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_9;
    // 0x802262B0: nop

    after_9:
    // 0x802262B4: jal         0x80060018
    // 0x802262B8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x802262B8: nop

    after_10:
    // 0x802262BC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802262C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802262C4: bne         $v1, $v0, L_8022638C
    if (ctx->r3 != ctx->r2) {
        // 0x802262C8: nop
    
            goto L_8022638C;
    }
    // 0x802262C8: nop

    // 0x802262CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802262D0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802262D4: bne         $v0, $zero, L_8022638C
    if (ctx->r2 != 0) {
        // 0x802262D8: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_8022638C;
    }
    // 0x802262D8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802262DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802262E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262E4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802262E8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802262EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262F0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802262F4: jal         0x80072168
    // 0x802262F8: addiu       $a1, $zero, 0x205
    ctx->r5 = ADD32(0, 0X205);
    func_80072168_4D568(rdram, ctx);
        goto after_11;
    // 0x802262F8: addiu       $a1, $zero, 0x205
    ctx->r5 = ADD32(0, 0X205);
    after_11:
    // 0x802262FC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226300: bne         $v0, $v1, L_8022630C
    if (ctx->r2 != ctx->r3) {
        // 0x80226304: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022630C;
    }
    // 0x80226304: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022630C:
    // 0x8022630C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226310: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022631C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226320: addiu       $v0, $zero, -0x1C2
    ctx->r2 = ADD32(0, -0X1C2);
    // 0x80226324: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226328: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022632C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226330: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226334: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80226338: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022633C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226340: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226348: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022634C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226350: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226354: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226358: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022635C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226360: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226364: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226368: jal         0x80036B00
    // 0x8022636C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_12;
    // 0x8022636C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_12:
    // 0x80226370: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80226374: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80226378: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022637C: jal         0x80070050
    // 0x80226380: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x80226380: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_13:
    // 0x80226384: jal         0x8006036C
    // 0x80226388: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x80226388: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_14:
L_8022638C:
    // 0x8022638C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226390: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226394: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226398: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022639C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263A0: jr          $ra
    // 0x802263A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802263A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226E28_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E28: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226E2C: bne         $v0, $zero, L_80226E80
    if (ctx->r2 != 0) {
        // 0x80226E30: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80226E80;
    }
    // 0x80226E30: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226E34: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226E38: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226E3C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226E40: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80226E44: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226E48: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226E4C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226E50: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80226E54: addiu       $v0, $zero, 0x955
    ctx->r2 = ADD32(0, 0X955);
    // 0x80226E58: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226E5C: lw          $a1, 0x3C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3C);
    // 0x80226E60: addiu       $v0, $zero, 0x555
    ctx->r2 = ADD32(0, 0X555);
    // 0x80226E64: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226E68: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E70: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226E74: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226E78: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226E7C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226E80:
    // 0x80226E80: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226E84: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80226E88: bne         $v1, $v0, L_80226EB8
    if (ctx->r3 != ctx->r2) {
        // 0x80226E8C: addiu       $v0, $zero, 0x7B
        ctx->r2 = ADD32(0, 0X7B);
            goto L_80226EB8;
    }
    // 0x80226E8C: addiu       $v0, $zero, 0x7B
    ctx->r2 = ADD32(0, 0X7B);
    // 0x80226E90: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226E94: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80226E98: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x80226E9C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226EA0: sb          $v0, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r2;
    // 0x80226EA4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226EA8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226EAC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226EB0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226EB4: addiu       $v0, $zero, 0x7B
    ctx->r2 = ADD32(0, 0X7B);
L_80226EB8:
    // 0x80226EB8: bne         $v1, $v0, L_80226EE4
    if (ctx->r3 != ctx->r2) {
        // 0x80226EBC: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_80226EE4;
    }
    // 0x80226EBC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80226EC0: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x80226EC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226EC8: sb          $v1, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r3;
    // 0x80226ECC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226ED0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226ED4: lw          $a1, 0x3C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3C);
    // 0x80226ED8: sb          $v1, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r3;
    // 0x80226EDC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226EE0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80226EE4:
    // 0x80226EE4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226EE8: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x80226EEC: bne         $v1, $v0, L_80226F14
    if (ctx->r3 != ctx->r2) {
        // 0x80226EF0: addiu       $v0, $zero, 0x83
        ctx->r2 = ADD32(0, 0X83);
            goto L_80226F14;
    }
    // 0x80226EF0: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80226EF4: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x80226EF8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226EFC: sb          $v0, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r2;
    // 0x80226F00: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226F04: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226F08: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226F0C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226F10: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
L_80226F14:
    // 0x80226F14: bne         $v1, $v0, L_80226F30
    if (ctx->r3 != ctx->r2) {
        // 0x80226F18: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80226F30;
    }
    // 0x80226F18: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226F1C: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80226F20: sb          $v0, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r2;
    // 0x80226F24: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226F28: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226F2C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80226F30:
    // 0x80226F30: jr          $ra
    // 0x80226F34: nop

    TRACE_RETURN()
    return;
    // 0x80226F34: nop

    // 0x80226F38: nop

    // 0x80226F3C: nop

;}
RECOMP_FUNC void func_80228A34_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228A38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228A3C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80228A40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228A44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228A48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228A4C: lw          $v0, -0x4A10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4A10);
    // 0x80228A50: jalr        $v0
    // 0x80228A54: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228A54: nop

    after_0:
    // 0x80228A58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228A5C: jr          $ra
    // 0x80228A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225664_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225668: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022566C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225674: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225678: beq         $v1, $zero, L_80225690
    if (ctx->r3 == 0) {
        // 0x8022567C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225690;
    }
    // 0x8022567C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225680: beq         $v1, $v0, L_802256CC
    if (ctx->r3 == ctx->r2) {
        // 0x80225684: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802256CC;
    }
    // 0x80225684: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225688: j           L_80225738
    // 0x8022568C: nop

        goto L_80225738;
    // 0x8022568C: nop

L_80225690:
    // 0x80225690: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225694: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225698: jalr        $v0
    // 0x8022569C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022569C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802256A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802256A4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802256A8: bne         $v0, $zero, L_80225738
    if (ctx->r2 != 0) {
        // 0x802256AC: nop
    
            goto L_80225738;
    }
    // 0x802256AC: nop

    // 0x802256B0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802256B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802256B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802256BC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802256C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802256C4: j           L_80225738
    // 0x802256C8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_80225738;
    // 0x802256C8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_802256CC:
    // 0x802256CC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802256D0: bne         $v1, $v0, L_802256FC
    if (ctx->r3 != ctx->r2) {
        // 0x802256D4: nop
    
            goto L_802256FC;
    }
    // 0x802256D4: nop

    // 0x802256D8: jal         0x80036E48
    // 0x802256DC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x802256DC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x802256E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802256E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802256E8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x802256EC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802256F0: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x802256F4: j           L_80225738
    // 0x802256F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80225738;
    // 0x802256F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802256FC:
    // 0x802256FC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225700: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225704: jalr        $v0
    // 0x80225708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80225708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022570C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225710: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80225714: beq         $v0, $zero, L_80225738
    if (ctx->r2 == 0) {
        // 0x80225718: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80225738;
    }
    // 0x80225718: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8022571C: bne         $v0, $zero, L_80225738
    if (ctx->r2 != 0) {
        // 0x80225720: nop
    
            goto L_80225738;
    }
    // 0x80225720: nop

    // 0x80225724: jal         0x80036E48
    // 0x80225728: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80225728: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x8022572C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225730: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80225734: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_80225738:
    // 0x80225738: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022573C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80225740: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80225744: beq         $v0, $zero, L_80225758
    if (ctx->r2 == 0) {
        // 0x80225748: nop
    
            goto L_80225758;
    }
    // 0x80225748: nop

    // 0x8022574C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225750: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225754: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225758:
    // 0x80225758: jal         0x8005FB90
    // 0x8022575C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_4;
    // 0x8022575C: nop

    after_4:
    // 0x80225760: jal         0x80060018
    // 0x80225764: nop

    func_80060018_3B418(rdram, ctx);
        goto after_5;
    // 0x80225764: nop

    after_5:
    // 0x80225768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022576C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225770: jr          $ra
    // 0x80225774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258E4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802258E8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802258EC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802258F0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802258F4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802258F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802258FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225900: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225904: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225908: bne         $v0, $zero, L_80225920
    if (ctx->r2 != 0) {
        // 0x8022590C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80225920;
    }
    // 0x8022590C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225910: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225914: sb          $zero, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = 0;
    // 0x80225918: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022591C: sb          $zero, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = 0;
L_80225920:
    // 0x80225920: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225924: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80225928: bne         $v1, $v0, L_802259B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022592C: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_802259B4;
    }
    // 0x8022592C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80225930: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x80225934: addiu       $s3, $zero, -0x100
    ctx->r19 = ADD32(0, -0X100);
    // 0x80225938: addiu       $s2, $zero, -0x2A0
    ctx->r18 = ADD32(0, -0X2A0);
    // 0x8022593C: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_80225940:
    // 0x80225940: jal         0x8004F144
    // 0x80225944: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225944: nop

    after_0:
    // 0x80225948: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8022594C: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    // 0x80225950: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80225954: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80225958: sll         $v1, $a0, 5
    ctx->r3 = S32(ctx->r4 << 5);
    // 0x8022595C: subu        $v1, $s2, $v1
    ctx->r3 = SUB32(ctx->r18, ctx->r3);
    // 0x80225960: sh          $v1, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r3;
    // 0x80225964: sll         $v1, $a0, 6
    ctx->r3 = S32(ctx->r4 << 6);
    // 0x80225968: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022596C: addiu       $v1, $v1, 0x118
    ctx->r3 = ADD32(ctx->r3, 0X118);
    // 0x80225970: sh          $v1, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r3;
    // 0x80225974: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80225978: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8022597C: subu        $a0, $s1, $a0
    ctx->r4 = SUB32(ctx->r17, ctx->r4);
    // 0x80225980: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225984: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80225988: slti        $a1, $a1, 0x4
    ctx->r5 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8022598C: sb          $s5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r21;
    // 0x80225990: sb          $s4, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r20;
    // 0x80225994: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80225998: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x8022599C: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x802259A0: sh          $s3, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r19;
    // 0x802259A4: sb          $a0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r4;
    // 0x802259A8: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802259AC: bne         $a1, $zero, L_80225940
    if (ctx->r5 != 0) {
        // 0x802259B0: sb          $v1, 0x6($v0)
        MEM_B(0X6, ctx->r2) = ctx->r3;
            goto L_80225940;
    }
    // 0x802259B0: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
L_802259B4:
    // 0x802259B4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802259B8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802259BC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802259C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802259C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802259C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802259CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259D0: jr          $ra
    // 0x802259D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802259D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228D90_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228D98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228DA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228DA4: bne         $v0, $zero, L_80228DC0
    if (ctx->r2 != 0) {
        // 0x80228DA8: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80228DC0;
    }
    // 0x80228DA8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80228DAC: jal         0x80050294
    // 0x80228DB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228DB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228DB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228DB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228DC0:
    // 0x80228DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228DC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228DC8: jr          $ra
    // 0x80228DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802283AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802283B0: jal         0x8004F488
    // 0x802283B4: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x802283B4: nop

    after_0:
    // 0x802283B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802283BC: jr          $ra
    // 0x802283C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802283C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802283C4: nop

    // 0x802283C8: nop

    // 0x802283CC: nop

;}
RECOMP_FUNC void func_80225CC0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225CC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225CC8: addiu       $v0, $v0, 0x4430
    ctx->r2 = ADD32(ctx->r2, 0X4430);
    // 0x80225CCC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225CD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225CD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CD8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80225CDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CE0: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x80225CE4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80225CE8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225CEC: bne         $v0, $zero, L_80225D34
    if (ctx->r2 != 0) {
        // 0x80225CF0: nop
    
            goto L_80225D34;
    }
    // 0x80225CF0: nop

    // 0x80225CF4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80225CF8: jal         0x8004F418
    // 0x80225CFC: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225CFC: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
    after_0:
    // 0x80225D00: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80225D04: jal         0x8004F418
    // 0x80225D08: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80225D08: nop

    after_1:
    // 0x80225D0C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80225D10: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225D14: jal         0x8004F418
    // 0x80225D18: addiu       $s0, $s0, -0x5988
    ctx->r16 = ADD32(ctx->r16, -0X5988);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80225D18: addiu       $s0, $s0, -0x5988
    ctx->r16 = ADD32(ctx->r16, -0X5988);
    after_2:
L_80225D1C:
    // 0x80225D1C: jal         0x8005FA7C
    // 0x80225D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80225D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225D24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80225D28: slti        $v0, $s1, 0x1D
    ctx->r2 = SIGNED(ctx->r17) < 0X1D ? 1 : 0;
    // 0x80225D2C: bne         $v0, $zero, L_80225D1C
    if (ctx->r2 != 0) {
        // 0x80225D30: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80225D1C;
    }
    // 0x80225D30: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_80225D34:
    // 0x80225D34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225D38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225D3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D40: jr          $ra
    // 0x80225D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802286E0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802286E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802286E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802286EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802286F0: lw          $a0, -0x4630($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4630);
    // 0x802286F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802286F8: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x802286FC: beq         $v1, $zero, L_8022879C
    if (ctx->r3 == 0) {
        // 0x80228700: nop
    
            goto L_8022879C;
    }
    // 0x80228700: nop

    // 0x80228704: bgez        $v1, L_8022873C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80228708: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_8022873C;
    }
    // 0x80228708: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022870C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80228710: addiu       $a0, $a0, -0x4630
    ctx->r4 = ADD32(ctx->r4, -0X4630);
    // 0x80228714: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80228718: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022871C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80228720: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228724: lw          $v0, -0x4630($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4630);
    // 0x80228728: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022872C: sh          $zero, -0x462C($at)
    MEM_H(-0X462C, ctx->r1) = 0;
    // 0x80228730: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80228734: j           L_8022877C
    // 0x80228738: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
        goto L_8022877C;
    // 0x80228738: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_8022873C:
    // 0x8022873C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228740: addiu       $v0, $v0, -0x462C
    ctx->r2 = ADD32(ctx->r2, -0X462C);
    // 0x80228744: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80228748: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022874C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80228750: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80228754: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228758: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022875C: bne         $v1, $v0, L_8022879C
    if (ctx->r3 != ctx->r2) {
        // 0x80228760: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022879C;
    }
    // 0x80228760: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80228764: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228768: sw          $v0, -0x4630($at)
    MEM_W(-0X4630, ctx->r1) = ctx->r2;
    // 0x8022876C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228770: sh          $zero, -0x462C($at)
    MEM_H(-0X462C, ctx->r1) = 0;
    // 0x80228774: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80228778: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_8022877C:
    // 0x8022877C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228780: jal         0x8003B85C
    // 0x80228784: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80228784: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80228788: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022878C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80228790: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80228794: jal         0x8003B840
    // 0x80228798: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228798: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022879C:
    // 0x8022879C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802287A0: lw          $a0, -0x4628($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4628);
    // 0x802287A4: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x802287A8: beq         $v1, $zero, L_80228848
    if (ctx->r3 == 0) {
        // 0x802287AC: nop
    
            goto L_80228848;
    }
    // 0x802287AC: nop

    // 0x802287B0: bgez        $v1, L_802287E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802287B4: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_802287E8;
    }
    // 0x802287B4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802287B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802287BC: addiu       $a0, $a0, -0x4628
    ctx->r4 = ADD32(ctx->r4, -0X4628);
    // 0x802287C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802287C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802287C8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x802287CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802287D0: lw          $v0, -0x4628($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4628);
    // 0x802287D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802287D8: sh          $zero, -0x4624($at)
    MEM_H(-0X4624, ctx->r1) = 0;
    // 0x802287DC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802287E0: j           L_80228828
    // 0x802287E4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
        goto L_80228828;
    // 0x802287E4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_802287E8:
    // 0x802287E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802287EC: addiu       $v0, $v0, -0x4624
    ctx->r2 = ADD32(ctx->r2, -0X4624);
    // 0x802287F0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x802287F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802287F8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x802287FC: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80228800: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228804: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80228808: bne         $v1, $v0, L_80228848
    if (ctx->r3 != ctx->r2) {
        // 0x8022880C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80228848;
    }
    // 0x8022880C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80228810: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228814: sw          $v0, -0x4628($at)
    MEM_W(-0X4628, ctx->r1) = ctx->r2;
    // 0x80228818: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022881C: sh          $zero, -0x4624($at)
    MEM_H(-0X4624, ctx->r1) = 0;
    // 0x80228820: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80228824: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_80228828:
    // 0x80228828: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022882C: jal         0x8003B85C
    // 0x80228830: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80228830: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80228834: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80228838: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022883C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80228840: jal         0x8003B840
    // 0x80228844: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80228844: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80228848:
    // 0x80228848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022884C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228850: jr          $ra
    // 0x80228854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225430_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225434: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225438: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022543C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225440: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225444: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225448: lw          $v0, -0x5AC0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5AC0);
    // 0x8022544C: jalr        $v0
    // 0x80225450: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225450: nop

    after_0:
    // 0x80225454: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225458: jr          $ra
    // 0x8022545C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022545C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802297F0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802297F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802297F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802297FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229800: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229804: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229808: lw          $v0, -0x46D8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X46D8);
    // 0x8022980C: jalr        $v0
    // 0x80229810: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229810: nop

    after_0:
    // 0x80229814: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229818: jr          $ra
    // 0x8022981C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022981C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C50_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C64: bne         $v0, $zero, L_80228C80
    if (ctx->r2 != 0) {
        // 0x80228C68: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80228C80;
    }
    // 0x80228C68: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80228C6C: jal         0x80050294
    // 0x80228C70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228C70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228C74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228C80:
    // 0x80228C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C88: jr          $ra
    // 0x80228C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227064_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022706C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227074: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227078: bne         $v0, $zero, L_8022709C
    if (ctx->r2 != 0) {
        // 0x8022707C: nop
    
            goto L_8022709C;
    }
    // 0x8022707C: nop

    // 0x80227080: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80227084: jal         0x80050294
    // 0x80227088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022708C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227090: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227094: j           L_802270A4
    // 0x80227098: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802270A4;
    // 0x80227098: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022709C:
    // 0x8022709C: jal         0x8005044C
    // 0x802270A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802270A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802270A4:
    // 0x802270A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802270A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802270AC: jr          $ra
    // 0x802270B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802270B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229CC4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CC4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80229CC8: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80229CCC: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80229CD0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80229CD4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80229CD8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x80229CDC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80229CE0: bgez        $v1, L_80229D20
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80229CE4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80229D20;
    }
    // 0x80229CE4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80229CE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229CEC: bne         $v1, $v0, L_80229D0C
    if (ctx->r3 != ctx->r2) {
        // 0x80229CF0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_80229D0C;
    }
    // 0x80229CF0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80229CF4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80229CF8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80229CFC: bne         $v1, $v0, L_80229D2C
    if (ctx->r3 != ctx->r2) {
        // 0x80229D00: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80229D2C;
    }
    // 0x80229D00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229D04: j           L_80229D50
    // 0x80229D08: nop

        goto L_80229D50;
    // 0x80229D08: nop

L_80229D0C:
    // 0x80229D0C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80229D10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229D18: j           L_80229D2C
    // 0x80229D1C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_80229D2C;
    // 0x80229D1C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80229D20:
    // 0x80229D20: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80229D24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80229D28: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80229D2C:
    // 0x80229D2C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80229D30: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80229D34: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80229D38: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80229D3C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80229D40: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80229D44: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80229D48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229D4C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80229D50:
    // 0x80229D50: jr          $ra
    // 0x80229D54: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80229D54: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80229D58: nop

    // 0x80229D5C: nop

;}
RECOMP_FUNC void func_80227D70_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D7C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227D80: lw          $a0, -0x4650($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4650);
    // 0x80227D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D88: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80227D8C: beq         $v1, $zero, L_80227E2C
    if (ctx->r3 == 0) {
        // 0x80227D90: nop
    
            goto L_80227E2C;
    }
    // 0x80227D90: nop

    // 0x80227D94: bgez        $v1, L_80227DCC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80227D98: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_80227DCC;
    }
    // 0x80227D98: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227D9C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227DA0: addiu       $a0, $a0, -0x4650
    ctx->r4 = ADD32(ctx->r4, -0X4650);
    // 0x80227DA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80227DA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227DAC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80227DB0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227DB4: lw          $v0, -0x4650($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4650);
    // 0x80227DB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227DBC: sh          $zero, -0x464C($at)
    MEM_H(-0X464C, ctx->r1) = 0;
    // 0x80227DC0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227DC4: j           L_80227E0C
    // 0x80227DC8: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
        goto L_80227E0C;
    // 0x80227DC8: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80227DCC:
    // 0x80227DCC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227DD0: addiu       $v0, $v0, -0x464C
    ctx->r2 = ADD32(ctx->r2, -0X464C);
    // 0x80227DD4: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80227DD8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227DDC: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80227DE0: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80227DE4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227DE8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80227DEC: bne         $v1, $v0, L_80227E2C
    if (ctx->r3 != ctx->r2) {
        // 0x80227DF0: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80227E2C;
    }
    // 0x80227DF0: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80227DF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227DF8: sw          $v0, -0x4650($at)
    MEM_W(-0X4650, ctx->r1) = ctx->r2;
    // 0x80227DFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227E00: sh          $zero, -0x464C($at)
    MEM_H(-0X464C, ctx->r1) = 0;
    // 0x80227E04: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80227E08: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80227E0C:
    // 0x80227E0C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227E10: jal         0x8003B85C
    // 0x80227E14: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227E14: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227E18: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227E1C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80227E20: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80227E24: jal         0x8003B840
    // 0x80227E28: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227E28: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80227E2C:
    // 0x80227E2C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227E30: lw          $a0, -0x4648($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4648);
    // 0x80227E34: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80227E38: beq         $v1, $zero, L_80227ED8
    if (ctx->r3 == 0) {
        // 0x80227E3C: nop
    
            goto L_80227ED8;
    }
    // 0x80227E3C: nop

    // 0x80227E40: bgez        $v1, L_80227E78
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80227E44: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_80227E78;
    }
    // 0x80227E44: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227E48: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227E4C: addiu       $a0, $a0, -0x4648
    ctx->r4 = ADD32(ctx->r4, -0X4648);
    // 0x80227E50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80227E54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227E58: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80227E5C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227E60: lw          $v0, -0x4648($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4648);
    // 0x80227E64: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227E68: sh          $zero, -0x4644($at)
    MEM_H(-0X4644, ctx->r1) = 0;
    // 0x80227E6C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227E70: j           L_80227EB8
    // 0x80227E74: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
        goto L_80227EB8;
    // 0x80227E74: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80227E78:
    // 0x80227E78: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227E7C: addiu       $v0, $v0, -0x4644
    ctx->r2 = ADD32(ctx->r2, -0X4644);
    // 0x80227E80: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80227E84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227E88: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80227E8C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80227E90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227E94: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80227E98: bne         $v1, $v0, L_80227ED8
    if (ctx->r3 != ctx->r2) {
        // 0x80227E9C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80227ED8;
    }
    // 0x80227E9C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80227EA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EA4: sw          $v0, -0x4648($at)
    MEM_W(-0X4648, ctx->r1) = ctx->r2;
    // 0x80227EA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EAC: sh          $zero, -0x4644($at)
    MEM_H(-0X4644, ctx->r1) = 0;
    // 0x80227EB0: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80227EB4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80227EB8:
    // 0x80227EB8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227EBC: jal         0x8003B85C
    // 0x80227EC0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80227EC0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80227EC4: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227EC8: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80227ECC: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80227ED0: jal         0x8003B840
    // 0x80227ED4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80227ED4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80227ED8:
    // 0x80227ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227EDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227EE0: jr          $ra
    // 0x80227EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C98_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C98: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226C9C: bne         $v0, $zero, L_80226CAC
    if (ctx->r2 != 0) {
        // 0x80226CA0: nop
    
            goto L_80226CAC;
    }
    // 0x80226CA0: nop

    // 0x80226CA4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226CA8: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226CAC:
    // 0x80226CAC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226CB0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80226CB4: bne         $v1, $v0, L_80226CC8
    if (ctx->r3 != ctx->r2) {
        // 0x80226CB8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226CC8;
    }
    // 0x80226CB8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226CBC: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226CC0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226CC4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226CC8:
    // 0x80226CC8: jr          $ra
    // 0x80226CCC: nop

    TRACE_RETURN()
    return;
    // 0x80226CCC: nop

;}
RECOMP_FUNC void func_80226D28_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D28: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226D2C: bne         $v0, $zero, L_80226D6C
    if (ctx->r2 != 0) {
        // 0x80226D30: nop
    
            goto L_80226D6C;
    }
    // 0x80226D30: nop

    // 0x80226D34: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226D38: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226D3C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226D40: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226D44: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226D48: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226D4C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D54: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226D58: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226D5C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226D60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226D64: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226D68: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226D6C:
    // 0x80226D6C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226D70: lw          $v0, 0x98($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X98);
    // 0x80226D74: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226D78: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226D7C: bne         $v1, $v0, L_80226D8C
    if (ctx->r3 != ctx->r2) {
        // 0x80226D80: nop
    
            goto L_80226D8C;
    }
    // 0x80226D80: nop

    // 0x80226D84: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226D88: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226D8C:
    // 0x80226D8C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226D90: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226D94: bne         $v1, $v0, L_80226DB0
    if (ctx->r3 != ctx->r2) {
        // 0x80226D98: addiu       $v0, $zero, 0xC1
        ctx->r2 = ADD32(0, 0XC1);
            goto L_80226DB0;
    }
    // 0x80226D98: addiu       $v0, $zero, 0xC1
    ctx->r2 = ADD32(0, 0XC1);
    // 0x80226D9C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DA4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226DA8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226DAC: addiu       $v0, $zero, 0xC1
    ctx->r2 = ADD32(0, 0XC1);
L_80226DB0:
    // 0x80226DB0: bne         $v1, $v0, L_80226DC0
    if (ctx->r3 != ctx->r2) {
        // 0x80226DB4: nop
    
            goto L_80226DC0;
    }
    // 0x80226DB4: nop

    // 0x80226DB8: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226DBC: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226DC0:
    // 0x80226DC0: jr          $ra
    // 0x80226DC4: nop

    TRACE_RETURN()
    return;
    // 0x80226DC4: nop

;}
RECOMP_FUNC void func_80226CD0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CD0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226CD4: bne         $v0, $zero, L_80226CE4
    if (ctx->r2 != 0) {
        // 0x80226CD8: nop
    
            goto L_80226CE4;
    }
    // 0x80226CD8: nop

    // 0x80226CDC: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226CE0: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226CE4:
    // 0x80226CE4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226CE8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226CEC: bne         $v1, $v0, L_80226D0C
    if (ctx->r3 != ctx->r2) {
        // 0x80226CF0: addiu       $v0, $zero, 0x140
        ctx->r2 = ADD32(0, 0X140);
            goto L_80226D0C;
    }
    // 0x80226CF0: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226CF4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226CF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226CFC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226D00: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226D04: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226D08: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_80226D0C:
    // 0x80226D0C: bne         $v1, $v0, L_80226D20
    if (ctx->r3 != ctx->r2) {
        // 0x80226D10: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226D20;
    }
    // 0x80226D10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226D14: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226D18: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226D1C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226D20:
    // 0x80226D20: jr          $ra
    // 0x80226D24: nop

    TRACE_RETURN()
    return;
    // 0x80226D24: nop

;}
RECOMP_FUNC void func_80228060_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022806C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228070: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228074: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228078: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022807C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228080: lw          $v0, -0x4D2C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4D2C);
    // 0x80228084: jalr        $v0
    // 0x80228088: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228088: nop

    after_0:
    // 0x8022808C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228090: jal         0x8004DD04
    // 0x80228094: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80228094: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80228098: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022809C: bne         $v0, $zero, L_802280AC
    if (ctx->r2 != 0) {
        // 0x802280A0: nop
    
            goto L_802280AC;
    }
    // 0x802280A0: nop

    // 0x802280A4: jal         0x8005044C
    // 0x802280A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x802280A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802280AC:
    // 0x802280AC: jal         0x80227EE8
    // 0x802280B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227EE8_ovl11(rdram, ctx);
        goto after_3;
    // 0x802280B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802280B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802280B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802280BC: jr          $ra
    // 0x802280C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802280C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226640_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226640: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226644: bne         $v0, $zero, L_80226788
    if (ctx->r2 != 0) {
        // 0x80226648: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226788;
    }
    // 0x80226648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022664C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226650: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226654: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226658: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022665C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226660: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226664: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226668: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022666C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226670: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226674: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226678: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022667C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226680: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226688: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022668C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226690: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226694: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226698: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022669C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266A0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802266A4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802266A8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802266AC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802266B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802266B4: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802266B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802266BC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802266C0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802266C4: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x802266C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802266CC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802266D0: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x802266D4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802266D8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802266DC: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x802266E0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802266E4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802266E8: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x802266EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802266F0: addiu       $a1, $a1, 0x4430
    ctx->r5 = ADD32(ctx->r5, 0X4430);
    // 0x802266F4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802266F8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802266FC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226700: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226704: lbu         $v1, 0x44A0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X44A0);
    // 0x80226708: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022670C: lbu         $a0, 0x4510($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4510);
    // 0x80226710: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80226714: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80226718: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x8022671C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226720: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226724: sb          $v1, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r3;
    // 0x80226728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022672C: sb          $a0, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = ctx->r4;
    // 0x80226730: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226734: lbu         $v1, 0x4548($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4548);
    // 0x80226738: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022673C: lbu         $a0, 0x4580($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4580);
    // 0x80226740: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80226744: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226748: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x8022674C: addiu       $v0, $zero, -0x168
    ctx->r2 = ADD32(0, -0X168);
    // 0x80226750: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226754: sh          $v0, 0x44C0($at)
    MEM_H(0X44C0, ctx->r1) = ctx->r2;
    // 0x80226758: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022675C: sh          $v0, 0x4530($at)
    MEM_H(0X4530, ctx->r1) = ctx->r2;
    // 0x80226760: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226764: sh          $v0, 0x4568($at)
    MEM_H(0X4568, ctx->r1) = ctx->r2;
    // 0x80226768: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022676C: sh          $v0, 0x45A0($at)
    MEM_H(0X45A0, ctx->r1) = ctx->r2;
    // 0x80226770: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80226774: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80226778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022677C: sb          $v1, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = ctx->r3;
    // 0x80226780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226784: sb          $a0, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = ctx->r4;
L_80226788:
    // 0x80226788: jr          $ra
    // 0x8022678C: nop

    TRACE_RETURN()
    return;
    // 0x8022678C: nop

;}
