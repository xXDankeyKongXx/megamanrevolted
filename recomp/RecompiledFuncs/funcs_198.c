#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227588_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022758C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227590: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227594: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227598: lw          $a0, -0x55D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X55D0);
    // 0x8022759C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802275A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802275A4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802275A8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802275AC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x802275B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802275B4: beq         $v1, $v0, L_80227648
    if (ctx->r3 == ctx->r2) {
        // 0x802275B8: nop
    
            goto L_80227648;
    }
    // 0x802275B8: nop

    // 0x802275BC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802275C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802275C4: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x802275C8: bne         $v1, $v0, L_80227648
    if (ctx->r3 != ctx->r2) {
        // 0x802275CC: nop
    
            goto L_80227648;
    }
    // 0x802275CC: nop

    // 0x802275D0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x802275D4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802275D8: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x802275DC: bne         $v1, $v0, L_80227648
    if (ctx->r3 != ctx->r2) {
        // 0x802275E0: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227648;
    }
    // 0x802275E0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802275E4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802275E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802275EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802275F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802275F4: lw          $v0, -0x6338($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6338);
    // 0x802275F8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802275FC: sw          $v0, -0x55E0($at)
    MEM_W(-0X55E0, ctx->r1) = ctx->r2;
    // 0x80227600: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227604: lw          $v0, -0x55E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55E0);
    // 0x80227608: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022760C: sh          $zero, -0x55DC($at)
    MEM_H(-0X55DC, ctx->r1) = 0;
    // 0x80227610: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227614: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227618: jal         0x8003B85C
    // 0x8022761C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022761C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227620: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227624: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80227628: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022762C: jal         0x8003B840
    // 0x80227630: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227630: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80227634: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227638: lw          $v0, -0x55D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55D0);
    // 0x8022763C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80227640: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227644: sw          $v0, -0x55D0($at)
    MEM_W(-0X55D0, ctx->r1) = ctx->r2;
L_80227648:
    // 0x80227648: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022764C: lw          $a0, -0x55CC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X55CC);
    // 0x80227650: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227654: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227658: beq         $v1, $v0, L_802276E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022765C: nop
    
            goto L_802276E4;
    }
    // 0x8022765C: nop

    // 0x80227660: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80227664: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227668: bne         $v1, $v0, L_802276E4
    if (ctx->r3 != ctx->r2) {
        // 0x8022766C: nop
    
            goto L_802276E4;
    }
    // 0x8022766C: nop

    // 0x80227670: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80227674: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80227678: bne         $v1, $v0, L_802276E4
    if (ctx->r3 != ctx->r2) {
        // 0x8022767C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802276E4;
    }
    // 0x8022767C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227680: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227684: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227688: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022768C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227690: lw          $v0, -0x62E4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X62E4);
    // 0x80227694: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227698: sw          $v0, -0x55D8($at)
    MEM_W(-0X55D8, ctx->r1) = ctx->r2;
    // 0x8022769C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802276A0: lw          $v0, -0x55D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55D8);
    // 0x802276A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802276A8: sh          $zero, -0x55D4($at)
    MEM_H(-0X55D4, ctx->r1) = 0;
    // 0x802276AC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802276B0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802276B4: jal         0x8003B85C
    // 0x802276B8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802276B8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802276BC: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802276C0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802276C4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802276C8: jal         0x8003B840
    // 0x802276CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802276CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x802276D0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802276D4: lw          $v0, -0x55CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55CC);
    // 0x802276D8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802276DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802276E0: sw          $v0, -0x55CC($at)
    MEM_W(-0X55CC, ctx->r1) = ctx->r2;
L_802276E4:
    // 0x802276E4: jal         0x80227430
    // 0x802276E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227430_ovl32(rdram, ctx);
        goto after_4;
    // 0x802276E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802276EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802276F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802276F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276F8: jr          $ra
    // 0x802276FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802276FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227700_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227704: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227708: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022770C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227710: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227714: bne         $v0, $zero, L_80227768
    if (ctx->r2 != 0) {
        // 0x80227718: nop
    
            goto L_80227768;
    }
    // 0x80227718: nop

    // 0x8022771C: jal         0x8004D5D4
    // 0x80227720: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227720: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227724: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227728: addiu       $v0, $v0, -0x626C
    ctx->r2 = ADD32(ctx->r2, -0X626C);
    // 0x8022772C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227730: sw          $v0, -0x55D0($at)
    MEM_W(-0X55D0, ctx->r1) = ctx->r2;
    // 0x80227734: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227738: addiu       $v0, $v0, -0x61E8
    ctx->r2 = ADD32(ctx->r2, -0X61E8);
    // 0x8022773C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227740: sw          $v0, -0x55CC($at)
    MEM_W(-0X55CC, ctx->r1) = ctx->r2;
    // 0x80227744: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227748: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022774C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227750: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227754: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227758: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022775C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227760: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227764: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80227768:
    // 0x80227768: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022776C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227770: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227774: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227778: lw          $v0, -0x60FC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X60FC);
    // 0x8022777C: jalr        $v0
    // 0x80227780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227784: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227788: bne         $v0, $zero, L_802277A0
    if (ctx->r2 != 0) {
        // 0x8022778C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802277A0;
    }
    // 0x8022778C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227790: jal         0x8004DD04
    // 0x80227794: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80227794: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80227798: jal         0x8005044C
    // 0x8022779C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022779C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802277A0:
    // 0x802277A0: jal         0x80227588
    // 0x802277A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227588_ovl32(rdram, ctx);
        goto after_4;
    // 0x802277A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802277A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802277AC: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x802277B0: xori        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 ^ 0X5;
    // 0x802277B4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x802277B8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802277BC: beq         $v1, $zero, L_802277D4
    if (ctx->r3 == 0) {
        // 0x802277C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802277D4;
    }
    // 0x802277C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802277C4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802277C8: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802277CC: jal         0x8003B564
    // 0x802277D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x802277D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_802277D4:
    // 0x802277D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277DC: jr          $ra
    // 0x802277E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225DFC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DFC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225E00: bne         $v0, $zero, L_80225E24
    if (ctx->r2 != 0) {
        // 0x80225E04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E24;
    }
    // 0x80225E04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E08: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225E0C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E10: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E14: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225E18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225E1C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E20: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225E24:
    // 0x80225E24: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225E28: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80225E2C: bne         $v1, $v0, L_80225E44
    if (ctx->r3 != ctx->r2) {
        // 0x80225E30: nop
    
            goto L_80225E44;
    }
    // 0x80225E30: nop

    // 0x80225E34: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225E38: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80225E3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E40: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80225E44:
    // 0x80225E44: jr          $ra
    // 0x80225E48: nop

    TRACE_RETURN()
    return;
    // 0x80225E48: nop

;}
RECOMP_FUNC void func_802273F0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802273F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227400: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227404: bne         $v0, $zero, L_80227420
    if (ctx->r2 != 0) {
        // 0x80227408: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_80227420;
    }
    // 0x80227408: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8022740C: jal         0x80050294
    // 0x80227410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227414: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227418: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022741C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227420:
    // 0x80227420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227428: jr          $ra
    // 0x8022742C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022742C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022583C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022583C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225840: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225844: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022584C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225854: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80225858: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022585C: beq         $v0, $zero, L_80225A80
    if (ctx->r2 == 0) {
        // 0x80225860: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225A80;
    }
    // 0x80225860: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225864: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225868: addu        $at, $at, $v0
    gpr jr_addend_80225870 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022586C: lw          $v0, -0x5690($at)
    ctx->r2 = ADD32(ctx->r1, -0X5690);
    // 0x80225870: jr          $v0
    // 0x80225874: nop

    switch (jr_addend_80225870 >> 2) {
        case 0: goto L_80225878; break;
        case 1: goto L_802258AC; break;
        case 2: goto L_802258C8; break;
        case 3: goto L_802258F0; break;
        case 4: goto L_80225974; break;
        case 5: goto L_802259AC; break;
        default: switch_error(__func__, 0x80225870, 0x8022A970);
    }
    // 0x80225874: nop

L_80225878:
    // 0x80225878: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022587C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225880: jal         0x8006FF84
    // 0x80225884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225888: beq         $v0, $zero, L_80225A80
    if (ctx->r2 == 0) {
        // 0x8022588C: lui         $a0, 0x110
        ctx->r4 = S32(0X110 << 16);
            goto L_80225A80;
    }
    // 0x8022588C: lui         $a0, 0x110
    ctx->r4 = S32(0X110 << 16);
    // 0x80225890: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225894: ori         $a0, $a0, 0x4101
    ctx->r4 = ctx->r4 | 0X4101;
    // 0x80225898: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8022589C: jal         0x80036B1C
    // 0x802258A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x802258A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x802258A4: j           L_802258E0
    // 0x802258A8: nop

        goto L_802258E0;
    // 0x802258A8: nop

L_802258AC:
    // 0x802258AC: jal         0x80036B7C
    // 0x802258B0: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x802258B0: nop

    after_2:
    // 0x802258B4: beq         $v0, $zero, L_80225A80
    if (ctx->r2 == 0) {
        // 0x802258B8: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80225A80;
    }
    // 0x802258B8: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x802258BC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802258C0: j           L_802258E4
    // 0x802258C4: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_802258E4;
    // 0x802258C4: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_802258C8:
    // 0x802258C8: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802258CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802258D0: bne         $v0, $zero, L_80225A80
    if (ctx->r2 != 0) {
        // 0x802258D4: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80225A80;
    }
    // 0x802258D4: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x802258D8: jal         0x80036E48
    // 0x802258DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x802258DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_802258E0:
    // 0x802258E0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_802258E4:
    // 0x802258E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802258E8: j           L_80225A80
    // 0x802258EC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80225A80;
    // 0x802258EC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802258F0:
    // 0x802258F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802258F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802258F8: jal         0x8005F6B4
    // 0x802258FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x802258FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225900: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225904: addiu       $a0, $a0, -0x6A80
    ctx->r4 = ADD32(ctx->r4, -0X6A80);
    // 0x80225908: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022590C: addiu       $a1, $a1, -0x6FA0
    ctx->r5 = ADD32(ctx->r5, -0X6FA0);
    // 0x80225910: jal         0x8006019C
    // 0x80225914: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_8006019C_3B59C(rdram, ctx);
        goto after_5;
    // 0x80225914: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_5:
    // 0x80225918: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022591C: addiu       $s0, $s0, -0x6B70
    ctx->r16 = ADD32(ctx->r16, -0X6B70);
L_80225920:
    // 0x80225920: jal         0x8005FA7C
    // 0x80225924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80225924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225928: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022592C: slti        $v0, $s1, 0xC
    ctx->r2 = SIGNED(ctx->r17) < 0XC ? 1 : 0;
    // 0x80225930: bne         $v0, $zero, L_80225920
    if (ctx->r2 != 0) {
        // 0x80225934: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80225920;
    }
    // 0x80225934: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80225938: jal         0x8004F228
    // 0x8022593C: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_7;
    // 0x8022593C: nop

    after_7:
    // 0x80225940: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225944: beq         $a0, $zero, L_80225968
    if (ctx->r4 == 0) {
        // 0x80225948: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225968;
    }
    // 0x80225948: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022594C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80225950: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80225954: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80225958: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8022595C: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80225960: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80225964: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80225968:
    // 0x80225968: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022596C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225970: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225974:
    // 0x80225974: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225978: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022597C: bne         $v0, $zero, L_802259AC
    if (ctx->r2 != 0) {
        // 0x80225980: nop
    
            goto L_802259AC;
    }
    // 0x80225980: nop

    // 0x80225984: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80225988: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022598C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225990: bne         $v1, $v0, L_802259AC
    if (ctx->r3 != ctx->r2) {
        // 0x80225994: nop
    
            goto L_802259AC;
    }
    // 0x80225994: nop

    // 0x80225998: jal         0x80036E48
    // 0x8022599C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x8022599C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_8:
    // 0x802259A0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802259A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802259A8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802259AC:
    // 0x802259AC: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x802259B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259B4: beq         $v1, $v0, L_802259CC
    if (ctx->r3 == ctx->r2) {
        // 0x802259B8: nop
    
            goto L_802259CC;
    }
    // 0x802259B8: nop

    // 0x802259BC: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x802259C0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802259C4: jalr        $v0
    // 0x802259C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x802259C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
L_802259CC:
    // 0x802259CC: jal         0x8005FB90
    // 0x802259D0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x802259D0: nop

    after_10:
    // 0x802259D4: jal         0x80060018
    // 0x802259D8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x802259D8: nop

    after_11:
    // 0x802259DC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802259E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802259E4: bne         $v1, $v0, L_80225A80
    if (ctx->r3 != ctx->r2) {
        // 0x802259E8: nop
    
            goto L_80225A80;
    }
    // 0x802259E8: nop

    // 0x802259EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802259F0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802259F4: bne         $v0, $zero, L_80225A80
    if (ctx->r2 != 0) {
        // 0x802259F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225A80;
    }
    // 0x802259F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802259FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225A00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225A04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225A08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A0C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225A10: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80225A14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A18: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225A1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A24: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80225A28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A2C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225A30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A34: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225A38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A3C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225A40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A44: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225A48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A4C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225A50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A54: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225A58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A5C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225A60: jal         0x80036B00
    // 0x80225A64: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_12;
    // 0x80225A64: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_12:
    // 0x80225A68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225A6C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80225A70: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225A74: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225A78: jal         0x80070050
    // 0x80225A7C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x80225A7C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_13:
L_80225A80:
    // 0x80225A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225A84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225A88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225A8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A90: jr          $ra
    // 0x80225A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227884_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022788C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227894: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227898: bne         $v0, $zero, L_802278B4
    if (ctx->r2 != 0) {
        // 0x8022789C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802278B4;
    }
    // 0x8022789C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802278A0: jal         0x80050294
    // 0x802278A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802278A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802278A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802278AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802278B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802278B4:
    // 0x802278B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278BC: jr          $ra
    // 0x802278C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226510_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022651C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226520: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226524: bne         $v0, $zero, L_80226558
    if (ctx->r2 != 0) {
        // 0x80226528: nop
    
            goto L_80226558;
    }
    // 0x80226528: nop

    // 0x8022652C: jal         0x8004D5D4
    // 0x80226530: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226530: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226534: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226538: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8022653C: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80226540: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80226544: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x80226548: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022654C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80226550: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226554: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226558:
    // 0x80226558: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022655C: bne         $v0, $zero, L_8022657C
    if (ctx->r2 != 0) {
        // 0x80226560: nop
    
            goto L_8022657C;
    }
    // 0x80226560: nop

    // 0x80226564: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226568: bnel        $v0, $zero, L_802265A8
    if (ctx->r2 != 0) {
        // 0x8022656C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802265A8;
    }
    goto skip_0;
    // 0x8022656C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80226570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226574: j           L_80226590
    // 0x80226578: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80226590;
    // 0x80226578: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022657C:
    // 0x8022657C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226580: bnel        $v0, $zero, L_802265A8
    if (ctx->r2 != 0) {
        // 0x80226584: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802265A8;
    }
    goto skip_1;
    // 0x80226584: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_1:
    // 0x80226588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022658C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80226590:
    // 0x80226590: jal         0x80050294
    // 0x80226594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226598: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022659C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802265A4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_802265A8:
    // 0x802265A8: jal         0x8004DD04
    // 0x802265AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802265AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802265B0: jal         0x8005044C
    // 0x802265B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802265B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802265B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802265BC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802265C0: beq         $v0, $zero, L_802265D8
    if (ctx->r2 == 0) {
        // 0x802265C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802265D8;
    }
    // 0x802265C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265C8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802265CC: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802265D0: jal         0x8003B564
    // 0x802265D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802265D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802265D8:
    // 0x802265D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802265DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802265E0: jr          $ra
    // 0x802265E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802265E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B00_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B04: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80227B08: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80227B0C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80227B10: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80227B14: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80227B18: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80227B1C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80227B20: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80227B24: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80227B28: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
    // 0x80227B2C: jr          $ra
    // 0x80227B30: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80227B30: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80226C08_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226C18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226C1C: bne         $v0, $zero, L_80226C38
    if (ctx->r2 != 0) {
        // 0x80226C20: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80226C38;
    }
    // 0x80226C20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226C24: jal         0x80050294
    // 0x80226C28: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226C28: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    after_0:
    // 0x80226C2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226C30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226C38:
    // 0x80226C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226C3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226C40: jr          $ra
    // 0x80226C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B4C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226B5C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226B60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226B64: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226B68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226B6C: lw          $v0, -0x698C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X698C);
    // 0x80226B70: jalr        $v0
    // 0x80226B74: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226B74: nop

    after_0:
    // 0x80226B78: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226B7C: bne         $v0, $zero, L_80226BBC
    if (ctx->r2 != 0) {
        // 0x80226B80: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226BBC;
    }
    // 0x80226B80: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226B84: jal         0x8004DD04
    // 0x80226B88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80226B88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80226B8C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226B90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226B94: bne         $v1, $v0, L_80226BB4
    if (ctx->r3 != ctx->r2) {
        // 0x80226B98: nop
    
            goto L_80226BB4;
    }
    // 0x80226B98: nop

    // 0x80226B9C: jal         0x800504EC
    // 0x80226BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x80226BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226BA4: jal         0x8005129C
    // 0x80226BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x80226BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226BAC: j           L_80226BBC
    // 0x80226BB0: nop

        goto L_80226BBC;
    // 0x80226BB0: nop

L_80226BB4:
    // 0x80226BB4: jal         0x8005044C
    // 0x80226BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80226BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80226BBC:
    // 0x80226BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226BC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BC4: jr          $ra
    // 0x80226BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278C4_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802278D4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802278D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278DC: beq         $v1, $v0, L_80227904
    if (ctx->r3 == ctx->r2) {
        // 0x802278E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227904;
    }
    // 0x802278E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802278E4: beq         $v0, $zero, L_80227930
    if (ctx->r2 == 0) {
        // 0x802278E8: nop
    
            goto L_80227930;
    }
    // 0x802278E8: nop

    // 0x802278EC: bne         $v1, $zero, L_80227930
    if (ctx->r3 != 0) {
        // 0x802278F0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80227930;
    }
    // 0x802278F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802278F4: jal         0x80050294
    // 0x802278F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802278F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802278FC: j           L_80227924
    // 0x80227900: nop

        goto L_80227924;
    // 0x80227900: nop

L_80227904:
    // 0x80227904: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80227908: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022790C: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80227910: bne         $v1, $v0, L_80227930
    if (ctx->r3 != ctx->r2) {
        // 0x80227914: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227930;
    }
    // 0x80227914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227918: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022791C: jal         0x800502EC
    // 0x80227920: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x80227920: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_1:
L_80227924:
    // 0x80227924: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227928: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022792C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227930:
    // 0x80227930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227934: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227938: jr          $ra
    // 0x8022793C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022793C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A6C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226A74: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80226A78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226A7C: jal         0x8004DA90
    // 0x80226A80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226A80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226A84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226A88: jr          $ra
    // 0x80226A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D84_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227D8C: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x80227D90: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80227D94: beq         $a1, $zero, L_80227ECC
    if (ctx->r5 == 0) {
        // 0x80227D98: addu        $t0, $a2, $zero
        ctx->r8 = ADD32(ctx->r6, 0);
            goto L_80227ECC;
    }
    // 0x80227D98: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x80227D9C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80227DA0: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x80227DA4: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80227DA8: lbu         $t2, -0x6090($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X6090);
    // 0x80227DAC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80227DB0: lw          $v1, -0x5858($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5858);
    // 0x80227DB4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227DB8: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80227DBC: lbu         $a0, -0x608F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X608F);
    // 0x80227DC0: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x80227DC4: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x80227DC8: lbu         $t1, -0x608E($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X608E);
    // 0x80227DCC: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x80227DD0: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80227DD4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80227DD8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80227DDC: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x80227DE0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80227DE4: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80227DE8: sb          $v0, 0x7($a3)
    MEM_B(0X7, ctx->r7) = ctx->r2;
    // 0x80227DEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227DF0: sb          $v0, 0x6($a3)
    MEM_B(0X6, ctx->r7) = ctx->r2;
    // 0x80227DF4: sb          $v0, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r2;
    // 0x80227DF8: sb          $v0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r2;
    // 0x80227DFC: addiu       $v0, $zero, 0x7C00
    ctx->r2 = ADD32(0, 0X7C00);
    // 0x80227E00: sh          $v0, 0xE($a3)
    MEM_H(0XE, ctx->r7) = ctx->r2;
    // 0x80227E04: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227E08: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80227E0C: lbu         $v0, -0x608D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X608D);
    // 0x80227E10: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
    // 0x80227E14: sb          $a0, 0x15($a3)
    MEM_B(0X15, ctx->r7) = ctx->r4;
    // 0x80227E18: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
    // 0x80227E1C: sb          $a0, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r4;
    // 0x80227E20: sb          $a0, 0x25($a3)
    MEM_B(0X25, ctx->r7) = ctx->r4;
    // 0x80227E24: andi        $a0, $t3, 0xFF
    ctx->r4 = ctx->r11 & 0XFF;
    // 0x80227E28: sb          $t2, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r10;
    // 0x80227E2C: sb          $t1, 0x14($a3)
    MEM_B(0X14, ctx->r7) = ctx->r9;
    // 0x80227E30: sb          $t2, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r10;
    // 0x80227E34: sb          $t1, 0x24($a3)
    MEM_B(0X24, ctx->r7) = ctx->r9;
    // 0x80227E38: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x80227E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E40: beq         $a0, $v0, L_80227E7C
    if (ctx->r4 == ctx->r2) {
        // 0x80227E44: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80227E7C;
    }
    // 0x80227E44: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80227E48: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80227E4C: beql        $v0, $zero, L_80227E90
    if (ctx->r2 == 0) {
        // 0x80227E50: addiu       $v0, $zero, 0xB0
        ctx->r2 = ADD32(0, 0XB0);
            goto L_80227E90;
    }
    goto skip_0;
    // 0x80227E50: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    skip_0:
    // 0x80227E54: bnel        $a0, $zero, L_80227E90
    if (ctx->r4 != 0) {
        // 0x80227E58: addiu       $v0, $zero, 0xB0
        ctx->r2 = ADD32(0, 0XB0);
            goto L_80227E90;
    }
    goto skip_1;
    // 0x80227E58: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    skip_1:
    // 0x80227E5C: subu        $v1, $t1, $t2
    ctx->r3 = SUB32(ctx->r9, ctx->r10);
    // 0x80227E60: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x80227E64: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227E68: addiu       $v1, $zero, 0x90
    ctx->r3 = ADD32(0, 0X90);
    // 0x80227E6C: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x80227E70: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80227E74: j           L_80227EA0
    // 0x80227E78: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
        goto L_80227EA0;
    // 0x80227E78: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
L_80227E7C:
    // 0x80227E7C: addiu       $v1, $zero, 0x11F
    ctx->r3 = ADD32(0, 0X11F);
    // 0x80227E80: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x80227E84: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80227E88: j           L_80227EA0
    // 0x80227E8C: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
        goto L_80227EA0;
    // 0x80227E8C: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
L_80227E90:
    // 0x80227E90: addiu       $v1, $zero, 0x12F
    ctx->r3 = ADD32(0, 0X12F);
    // 0x80227E94: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x80227E98: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80227E9C: addiu       $v0, $t0, 0x10
    ctx->r2 = ADD32(ctx->r8, 0X10);
L_80227EA0:
    // 0x80227EA0: sh          $t0, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r8;
    // 0x80227EA4: sh          $v1, 0x10($a3)
    MEM_H(0X10, ctx->r7) = ctx->r3;
    // 0x80227EA8: sh          $t0, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r8;
    // 0x80227EAC: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x80227EB0: sh          $v1, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r3;
    // 0x80227EB4: sh          $v0, 0x22($a3)
    MEM_H(0X22, ctx->r7) = ctx->r2;
    // 0x80227EB8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227EBC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80227EC0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80227EC4: jal         0x8002FD30
    // 0x80227EC8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x80227EC8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
L_80227ECC:
    // 0x80227ECC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227ED0: jr          $ra
    // 0x80227ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227ED8: nop

    // 0x80227EDC: nop

;}
RECOMP_FUNC void func_802288A4_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802288A8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802288AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802288B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802288B4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x802288B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802288BC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802288C0: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x802288C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802288C8: jal         0x8003BA58
    // 0x802288CC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x802288CC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x802288D0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802288D4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802288D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802288DC: jal         0x8003BB80
    // 0x802288E0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x802288E0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802288E4: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802288E8: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x802288EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802288F0: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x802288F4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802288F8: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x802288FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228900: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80228904: lbu         $v1, -0x56FB($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X56FB);
    // 0x80228908: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022890C: bne         $v0, $v1, L_8022892C
    if (ctx->r2 != ctx->r3) {
        // 0x80228910: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022892C;
    }
    // 0x80228910: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80228914: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80228918: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022891C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228920: bne         $v1, $v0, L_8022892C
    if (ctx->r3 != ctx->r2) {
        // 0x80228924: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_8022892C;
    }
    // 0x80228924: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80228928: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_8022892C:
    // 0x8022892C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80228930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80228934: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228938: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022893C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228940: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228944: lbu         $v1, -0x5718($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5718);
    // 0x80228948: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022894C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80228950: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80228954: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228958: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022895C: addiu       $v1, $v0, 0x2E
    ctx->r3 = ADD32(ctx->r2, 0X2E);
    // 0x80228960: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228964: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80228968: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x8022896C: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x80228970: jal         0x8003BC68
    // 0x80228974: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80228974: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228978: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022897C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228980: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228984: jr          $ra
    // 0x80228988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226474_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226478: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022647C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226484: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226488: bnel        $v0, $zero, L_802264D0
    if (ctx->r2 != 0) {
        // 0x8022648C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802264D0;
    }
    goto skip_0;
    // 0x8022648C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80226490: jal         0x8004D5D4
    // 0x80226494: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226494: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022649C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802264A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802264A4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802264A8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802264AC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802264B0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802264B4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802264B8: jal         0x80050294
    // 0x802264BC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802264BC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x802264C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802264C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802264C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802264CC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_802264D0:
    // 0x802264D0: jal         0x8004DD04
    // 0x802264D4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802264D4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802264D8: jal         0x8005044C
    // 0x802264DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802264DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802264E0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802264E4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802264E8: beq         $v0, $zero, L_80226500
    if (ctx->r2 == 0) {
        // 0x802264EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226500;
    }
    // 0x802264EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802264F0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802264F4: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802264F8: jal         0x8003B564
    // 0x802264FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802264FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80226500:
    // 0x80226500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226504: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226508: jr          $ra
    // 0x8022650C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022650C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802277E4_ovl32(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802277F4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802277F8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802277FC: beq         $v0, $zero, L_80227874
    if (ctx->r2 == 0) {
        // 0x80227800: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227874;
    }
    // 0x80227800: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227804: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227808: addu        $at, $at, $v0
    gpr jr_addend_80227810 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022780C: lw          $v0, -0x5618($at)
    ctx->r2 = ADD32(ctx->r1, -0X5618);
    // 0x80227810: jr          $v0
    // 0x80227814: nop

    switch (jr_addend_80227810 >> 2) {
        case 0: goto L_80227818; break;
        case 1: goto L_80227874; break;
        case 2: goto L_80227828; break;
        case 3: goto L_80227844; break;
        case 4: goto L_80227874; break;
        default: switch_error(__func__, 0x80227810, 0x8022A9E8);
    }
    // 0x80227814: nop

L_80227818:
    // 0x80227818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022781C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227820: j           L_80227860
    // 0x80227824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80227860;
    // 0x80227824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80227828:
    // 0x80227828: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x8022782C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227830: bne         $v0, $zero, L_80227874
    if (ctx->r2 != 0) {
        // 0x80227834: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227874;
    }
    // 0x80227834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022783C: j           L_80227860
    // 0x80227840: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80227860;
    // 0x80227840: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80227844:
    // 0x80227844: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80227848: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022784C: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80227850: bne         $v1, $v0, L_80227874
    if (ctx->r3 != ctx->r2) {
        // 0x80227854: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227874;
    }
    // 0x80227854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227858: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022785C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
L_80227860:
    // 0x80227860: jal         0x80050294
    // 0x80227864: nop

    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227864: nop

    after_0:
    // 0x80227868: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022786C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227870: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227874:
    // 0x80227874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227878: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022787C: jr          $ra
    // 0x80227880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227430_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022743C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227440: addiu       $a1, $a1, -0x55E0
    ctx->r5 = ADD32(ctx->r5, -0X55E0);
    // 0x80227444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227448: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022744C: beq         $a0, $zero, L_802274DC
    if (ctx->r4 == 0) {
        // 0x80227450: nop
    
            goto L_802274DC;
    }
    // 0x80227450: nop

    // 0x80227454: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227458: lw          $v1, -0x55E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55E0);
    // 0x8022745C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80227460: beq         $v0, $zero, L_802274DC
    if (ctx->r2 == 0) {
        // 0x80227464: nop
    
            goto L_802274DC;
    }
    // 0x80227464: nop

    // 0x80227468: bgez        $v0, L_80227478
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022746C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80227478;
    }
    // 0x8022746C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227470: j           L_802274A0
    // 0x80227474: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_802274A0;
    // 0x80227474: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80227478:
    // 0x80227478: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022747C: lhu         $v0, -0x55DC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55DC);
    // 0x80227480: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227484: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227488: sh          $v0, -0x55DC($at)
    MEM_H(-0X55DC, ctx->r1) = ctx->r2;
    // 0x8022748C: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x80227490: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227494: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227498: bne         $v0, $v1, L_802274DC
    if (ctx->r2 != ctx->r3) {
        // 0x8022749C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_802274DC;
    }
    // 0x8022749C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_802274A0:
    // 0x802274A0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802274A4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802274A8: lw          $v0, -0x55E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55E0);
    // 0x802274AC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802274B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274B4: sh          $zero, -0x55DC($at)
    MEM_H(-0X55DC, ctx->r1) = 0;
    // 0x802274B8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802274BC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802274C0: jal         0x8003B85C
    // 0x802274C4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802274C4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x802274C8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802274CC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x802274D0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x802274D4: jal         0x8003B840
    // 0x802274D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802274D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_802274DC:
    // 0x802274DC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802274E0: addiu       $a1, $a1, -0x55D8
    ctx->r5 = ADD32(ctx->r5, -0X55D8);
    // 0x802274E4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x802274E8: beq         $a0, $zero, L_80227578
    if (ctx->r4 == 0) {
        // 0x802274EC: nop
    
            goto L_80227578;
    }
    // 0x802274EC: nop

    // 0x802274F0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802274F4: lw          $v1, -0x55D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55D8);
    // 0x802274F8: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x802274FC: beq         $v0, $zero, L_80227578
    if (ctx->r2 == 0) {
        // 0x80227500: nop
    
            goto L_80227578;
    }
    // 0x80227500: nop

    // 0x80227504: bgez        $v0, L_80227514
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227508: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80227514;
    }
    // 0x80227508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022750C: j           L_8022753C
    // 0x80227510: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022753C;
    // 0x80227510: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80227514:
    // 0x80227514: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227518: lhu         $v0, -0x55D4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55D4);
    // 0x8022751C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227520: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227524: sh          $v0, -0x55D4($at)
    MEM_H(-0X55D4, ctx->r1) = ctx->r2;
    // 0x80227528: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022752C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227530: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227534: bne         $v0, $v1, L_80227578
    if (ctx->r2 != ctx->r3) {
        // 0x80227538: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80227578;
    }
    // 0x80227538: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022753C:
    // 0x8022753C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80227540: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227544: lw          $v0, -0x55D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55D8);
    // 0x80227548: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022754C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227550: sh          $zero, -0x55D4($at)
    MEM_H(-0X55D4, ctx->r1) = 0;
    // 0x80227554: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227558: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022755C: jal         0x8003B85C
    // 0x80227560: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80227560: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80227564: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227568: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022756C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80227570: jal         0x8003B840
    // 0x80227574: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80227574: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80227578:
    // 0x80227578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022757C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227580: jr          $ra
    // 0x80227584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251BC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802251C0: lb          $a0, -0x3BC7($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802251C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802251CC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802251D0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802251D4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802251D8: addiu       $v0, $v0, 0xCB4
    ctx->r2 = ADD32(ctx->r2, 0XCB4);
    // 0x802251DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802251E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251E4: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x802251E8: bne         $a0, $zero, L_80225204
    if (ctx->r4 != 0) {
        // 0x802251EC: addu        $s0, $v1, $v0
        ctx->r16 = ADD32(ctx->r3, ctx->r2);
            goto L_80225204;
    }
    // 0x802251EC: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
    // 0x802251F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251F4: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251F8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251FC: j           L_8022520C
    // 0x80225200: addiu       $a1, $a1, -0x7024
    ctx->r5 = ADD32(ctx->r5, -0X7024);
        goto L_8022520C;
    // 0x80225200: addiu       $a1, $a1, -0x7024
    ctx->r5 = ADD32(ctx->r5, -0X7024);
L_80225204:
    // 0x80225204: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225208: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022520C:
    // 0x8022520C: jal         0x80037D80
    // 0x80225210: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x80225210: nop

    after_0:
    // 0x80225214: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225218: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022521C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225220: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x8022522C: lbu         $a3, 0x3($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X3);
    // 0x80225230: lui         $t0, 0x7FE9
    ctx->r8 = S32(0X7FE9 << 16);
    // 0x80225234: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x80225238: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8022523C: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225240: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x80225244: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80225248: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022524C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225250: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225254: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    // 0x80225258: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022525C: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225260: lb          $a2, 0x0($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X0);
    // 0x80225264: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225268: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8022526C: sb          $zero, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = 0;
    // 0x80225270: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225274: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225278: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022527C: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    // 0x80225280: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225284: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225288: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022528C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225290: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225294: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225298: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x8022529C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802252A0: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x802252A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252A8: sb          $t2, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r10;
    // 0x802252AC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B0: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x802252B4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252B8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802252BC: lw          $v0, -0x70C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X70C8);
    // 0x802252C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252C4: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x802252C8: lw          $a0, -0x70FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X70FC);
    // 0x802252CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252D0: jal         0x8004C790
    // 0x802252D4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252D4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252D8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252E0: addiu       $a0, $a0, -0x7058
    ctx->r4 = ADD32(ctx->r4, -0X7058);
    // 0x802252E4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252F0: lw          $v1, -0x7040($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7040);
    // 0x802252F4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252F8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252FC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225300: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225304: addiu       $v0, $v0, -0x70AC
    ctx->r2 = ADD32(ctx->r2, -0X70AC);
    // 0x80225308: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022530C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225310: jal         0x80054FB8
    // 0x80225314: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225314: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225318: jal         0x8004A614
    // 0x8022531C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x8022531C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225320: jal         0x80225340
    // 0x80225324: nop

    func_80225340_ovl32(rdram, ctx);
        goto after_4;
    // 0x80225324: nop

    after_4:
    // 0x80225328: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022532C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225334: jr          $ra
    // 0x80225338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022533C: nop

;}
RECOMP_FUNC void func_80227FFC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FFC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80228000: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80228004: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80228008: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022800C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80228010: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80228014: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80228018: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022801C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80228020: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80228024: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80228028: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022802C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80228030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228034: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228038: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022803C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80228040: lhu         $s5, -0x580C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X580C);
    // 0x80228044: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80228048: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8022804C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80228050: lhu         $s6, -0x580A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X580A);
    // 0x80228054: jal         0x800874D0
    // 0x80228058: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80228058: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8022805C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80228060: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80228064: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80228068: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022806C: addiu       $a0, $a0, -0x55C0
    ctx->r4 = ADD32(ctx->r4, -0X55C0);
    // 0x80228070: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80228074: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228078: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022807C: lbu         $v1, -0x5768($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5768);
    // 0x80228080: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80228084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228088: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022808C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80228090: jal         0x80086F94
    // 0x80228094: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80228094: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80228098: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8022809C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802280A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802280A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802280A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802280AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802280B0: lhu         $v0, -0x5808($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X5808);
    // 0x802280B4: beq         $v0, $zero, L_802282D0
    if (ctx->r2 == 0) {
        // 0x802280B8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_802282D0;
    }
    // 0x802280B8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_802280BC:
    // 0x802280BC: bgez        $s6, L_802280C8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x802280C0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_802280C8;
    }
    // 0x802280C0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802280C4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_802280C8:
    // 0x802280C8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802280CC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802280D0: beq         $v0, $zero, L_8022838C
    if (ctx->r2 == 0) {
        // 0x802280D4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022838C;
    }
    // 0x802280D4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802280D8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802280DC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802280E0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802280E4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802280E8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802280EC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802280F0: jal         0x800874D0
    // 0x802280F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x802280F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x802280F8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802280FC: jal         0x80087248
    // 0x80228100: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80228100: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80228104: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228108: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022810C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80228110: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80228114: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80228118: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022811C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80228120: jal         0x800874D0
    // 0x80228124: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80228124: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80228128: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022812C: jal         0x80087248
    // 0x80228130: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80228130: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80228134: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80228138: bgez        $s5, L_80228144
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022813C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80228144;
    }
    // 0x8022813C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80228140: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80228144:
    // 0x80228144: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80228148: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022814C: jal         0x800874D0
    // 0x80228150: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80228150: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80228154: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80228158: jal         0x80087248
    // 0x8022815C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8022815C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80228160: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80228164: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80228168: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8022816C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80228170: bnel        $v0, $zero, L_802280BC
    if (ctx->r2 != 0) {
        // 0x80228174: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802280BC;
    }
    goto skip_0;
    // 0x80228174: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80228178: beq         $a1, $zero, L_802282C8
    if (ctx->r5 == 0) {
        // 0x8022817C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_802282C8;
    }
    // 0x8022817C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x80228180: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x80228184: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x80228188: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8022818C:
    // 0x8022818C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80228190: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80228194: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80228198: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8022819C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x802281A0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x802281A4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x802281A8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802281AC: mflo        $a3
    ctx->r7 = lo;
    // 0x802281B0: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x802281B4: nop

    // 0x802281B8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x802281BC: bne         $a1, $zero, L_802281C8
    if (ctx->r5 != 0) {
        // 0x802281C0: nop
    
            goto L_802281C8;
    }
    // 0x802281C0: nop

    // 0x802281C4: break       7
    do_break(2149745092);
L_802281C8:
    // 0x802281C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802281CC: bne         $a1, $at, L_802281E0
    if (ctx->r5 != ctx->r1) {
        // 0x802281D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802281E0;
    }
    // 0x802281D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802281D4: bne         $a3, $at, L_802281E0
    if (ctx->r7 != ctx->r1) {
        // 0x802281D8: nop
    
            goto L_802281E0;
    }
    // 0x802281D8: nop

    // 0x802281DC: break       6
    do_break(2149745116);
L_802281E0:
    // 0x802281E0: mflo        $a3
    ctx->r7 = lo;
    // 0x802281E4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x802281E8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x802281EC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x802281F0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802281F4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x802281F8: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802281FC: mflo        $v0
    ctx->r2 = lo;
    // 0x80228200: nop

    // 0x80228204: nop

    // 0x80228208: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8022820C: bne         $a1, $zero, L_80228218
    if (ctx->r5 != 0) {
        // 0x80228210: nop
    
            goto L_80228218;
    }
    // 0x80228210: nop

    // 0x80228214: break       7
    do_break(2149745172);
L_80228218:
    // 0x80228218: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022821C: bne         $a1, $at, L_80228230
    if (ctx->r5 != ctx->r1) {
        // 0x80228220: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80228230;
    }
    // 0x80228220: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228224: bne         $v0, $at, L_80228230
    if (ctx->r2 != ctx->r1) {
        // 0x80228228: nop
    
            goto L_80228230;
    }
    // 0x80228228: nop

    // 0x8022822C: break       6
    do_break(2149745196);
L_80228230:
    // 0x80228230: mflo        $v0
    ctx->r2 = lo;
    // 0x80228234: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80228238: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8022823C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80228240: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228244: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80228248: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022824C: mflo        $v1
    ctx->r3 = lo;
    // 0x80228250: nop

    // 0x80228254: nop

    // 0x80228258: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8022825C: bne         $a1, $zero, L_80228268
    if (ctx->r5 != 0) {
        // 0x80228260: nop
    
            goto L_80228268;
    }
    // 0x80228260: nop

    // 0x80228264: break       7
    do_break(2149745252);
L_80228268:
    // 0x80228268: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022826C: bne         $a1, $at, L_80228280
    if (ctx->r5 != ctx->r1) {
        // 0x80228270: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80228280;
    }
    // 0x80228270: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228274: bne         $v1, $at, L_80228280
    if (ctx->r3 != ctx->r1) {
        // 0x80228278: nop
    
            goto L_80228280;
    }
    // 0x80228278: nop

    // 0x8022827C: break       6
    do_break(2149745276);
L_80228280:
    // 0x80228280: mflo        $v1
    ctx->r3 = lo;
    // 0x80228284: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x80228288: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8022828C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80228290: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80228294: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80228298: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8022829C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x802282A0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x802282A4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x802282A8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x802282AC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x802282B0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x802282B4: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x802282B8: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x802282BC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x802282C0: bne         $v0, $zero, L_8022818C
    if (ctx->r2 != 0) {
        // 0x802282C4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8022818C;
    }
    // 0x802282C4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_802282C8:
    // 0x802282C8: j           L_802280BC
    // 0x802282CC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_802280BC;
    // 0x802282CC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802282D0:
    // 0x802282D0: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x802282D4: bne         $v0, $zero, L_8022838C
    if (ctx->r2 != 0) {
        // 0x802282D8: nop
    
            goto L_8022838C;
    }
    // 0x802282D8: nop

L_802282DC:
    // 0x802282DC: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802282E0: bltzl       $v0, L_802282E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802282E4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802282E8;
    }
    goto skip_1;
    // 0x802282E4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_802282E8:
    // 0x802282E8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802282EC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802282F0: beq         $v0, $zero, L_8022838C
    if (ctx->r2 == 0) {
        // 0x802282F4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022838C;
    }
    // 0x802282F4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802282F8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802282FC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80228300: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80228304: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80228308: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022830C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80228310: jal         0x800874D0
    // 0x80228314: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80228314: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80228318: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022831C: jal         0x80087248
    // 0x80228320: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80228320: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80228324: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228328: bgez        $s5, L_80228334
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022832C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80228334;
    }
    // 0x8022832C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80228330: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80228334:
    // 0x80228334: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80228338: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022833C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80228340: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80228344: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80228348: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022834C: jal         0x800874D0
    // 0x80228350: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80228350: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80228354: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80228358: jal         0x80087248
    // 0x8022835C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8022835C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80228360: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80228364: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80228368: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022836C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80228370: bnel        $v0, $zero, L_802282DC
    if (ctx->r2 != 0) {
        // 0x80228374: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802282DC;
    }
    goto skip_2;
    // 0x80228374: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80228378: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022837C: jal         0x80099F90
    // 0x80228380: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x80228380: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x80228384: j           L_802282DC
    // 0x80228388: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_802282DC;
    // 0x80228388: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022838C:
    // 0x8022838C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80228390: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80228394: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80228398: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022839C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802283A0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802283A4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802283A8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802283AC: jr          $ra
    // 0x802283B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x802283B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80226CC8_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226CD8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226CDC: bne         $v0, $zero, L_80226CF8
    if (ctx->r2 != 0) {
        // 0x80226CE0: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_80226CF8;
    }
    // 0x80226CE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80226CE4: jal         0x80050294
    // 0x80226CE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226CE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226CEC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226CF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226CF4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226CF8:
    // 0x80226CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226CFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D00: jr          $ra
    // 0x80226D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D5C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D5C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225D60: bne         $v0, $zero, L_80225D9C
    if (ctx->r2 != 0) {
        // 0x80225D64: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225D9C;
    }
    // 0x80225D64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225D68: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80225D6C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225D70: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80225D74: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225D78: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225D7C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225D80: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225D84: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80225D88: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225D8C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225D90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225D94: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225D98: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225D9C:
    // 0x80225D9C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225DA0: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x80225DA4: bne         $v1, $v0, L_80225DBC
    if (ctx->r3 != ctx->r2) {
        // 0x80225DA8: nop
    
            goto L_80225DBC;
    }
    // 0x80225DA8: nop

    // 0x80225DAC: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225DB0: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80225DB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225DB8: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80225DBC:
    // 0x80225DBC: jr          $ra
    // 0x80225DC0: nop

    TRACE_RETURN()
    return;
    // 0x80225DC0: nop

;}
RECOMP_FUNC void func_80225C3C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C3C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225C40: bne         $v0, $zero, L_80225C64
    if (ctx->r2 != 0) {
        // 0x80225C44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225C64;
    }
    // 0x80225C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C48: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225C4C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225C50: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225C54: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225C58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225C5C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225C60: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225C64:
    // 0x80225C64: jr          $ra
    // 0x80225C68: nop

    TRACE_RETURN()
    return;
    // 0x80225C68: nop

;}
RECOMP_FUNC void func_80226E98_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226E9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EA4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226EA8: lw          $a0, -0x55F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X55F0);
    // 0x80226EAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226EB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226EB4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226EB8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80226EBC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80226EC0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226EC4: beq         $v1, $v0, L_80226F58
    if (ctx->r3 == ctx->r2) {
        // 0x80226EC8: nop
    
            goto L_80226F58;
    }
    // 0x80226EC8: nop

    // 0x80226ECC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80226ED0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226ED4: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80226ED8: bne         $v1, $v0, L_80226F58
    if (ctx->r3 != ctx->r2) {
        // 0x80226EDC: nop
    
            goto L_80226F58;
    }
    // 0x80226EDC: nop

    // 0x80226EE0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80226EE4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226EE8: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x80226EEC: bne         $v1, $v0, L_80226F58
    if (ctx->r3 != ctx->r2) {
        // 0x80226EF0: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80226F58;
    }
    // 0x80226EF0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226EF4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80226EF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226EFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226F04: lw          $v0, -0x6784($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6784);
    // 0x80226F08: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F0C: sw          $v0, -0x5600($at)
    MEM_W(-0X5600, ctx->r1) = ctx->r2;
    // 0x80226F10: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226F14: lw          $v0, -0x5600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5600);
    // 0x80226F18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F1C: sh          $zero, -0x55FC($at)
    MEM_H(-0X55FC, ctx->r1) = 0;
    // 0x80226F20: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226F24: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226F28: jal         0x8003B85C
    // 0x80226F2C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80226F2C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80226F30: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226F34: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226F38: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226F3C: jal         0x8003B840
    // 0x80226F40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226F40: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80226F44: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226F48: lw          $v0, -0x55F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55F0);
    // 0x80226F4C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80226F50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F54: sw          $v0, -0x55F0($at)
    MEM_W(-0X55F0, ctx->r1) = ctx->r2;
L_80226F58:
    // 0x80226F58: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226F5C: lw          $a0, -0x55EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X55EC);
    // 0x80226F60: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226F64: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F68: beq         $v1, $v0, L_80226FF4
    if (ctx->r3 == ctx->r2) {
        // 0x80226F6C: nop
    
            goto L_80226FF4;
    }
    // 0x80226F6C: nop

    // 0x80226F70: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80226F74: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226F78: bne         $v1, $v0, L_80226FF4
    if (ctx->r3 != ctx->r2) {
        // 0x80226F7C: nop
    
            goto L_80226FF4;
    }
    // 0x80226F7C: nop

    // 0x80226F80: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80226F84: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80226F88: bne         $v1, $v0, L_80226FF4
    if (ctx->r3 != ctx->r2) {
        // 0x80226F8C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80226FF4;
    }
    // 0x80226F8C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226F90: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80226F94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226F98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FA0: lw          $v0, -0x6730($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6730);
    // 0x80226FA4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226FA8: sw          $v0, -0x55F8($at)
    MEM_W(-0X55F8, ctx->r1) = ctx->r2;
    // 0x80226FAC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226FB0: lw          $v0, -0x55F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55F8);
    // 0x80226FB4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226FB8: sh          $zero, -0x55F4($at)
    MEM_H(-0X55F4, ctx->r1) = 0;
    // 0x80226FBC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226FC0: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226FC4: jal         0x8003B85C
    // 0x80226FC8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80226FC8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80226FCC: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226FD0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80226FD4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80226FD8: jal         0x8003B840
    // 0x80226FDC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80226FDC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80226FE0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226FE4: lw          $v0, -0x55EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55EC);
    // 0x80226FE8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80226FEC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226FF0: sw          $v0, -0x55EC($at)
    MEM_W(-0X55EC, ctx->r1) = ctx->r2;
L_80226FF4:
    // 0x80226FF4: jal         0x80226D40
    // 0x80226FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226D40_ovl32(rdram, ctx);
        goto after_4;
    // 0x80226FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226FFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227000: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227008: jr          $ra
    // 0x8022700C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022700C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227A00_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227A04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80227A08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227A0C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80227A10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80227A14: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80227A18: bne         $v0, $zero, L_80227A84
    if (ctx->r2 != 0) {
        // 0x80227A1C: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80227A84;
    }
    // 0x80227A1C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80227A20: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227A24: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80227A28: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80227A2C: jal         0x8004D5D4
    // 0x80227A30: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227A30: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80227A34: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80227A38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227A3C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80227A40: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80227A44: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80227A48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A4C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227A50: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227A54: addiu       $v1, $v1, -0x60E0
    ctx->r3 = ADD32(ctx->r3, -0X60E0);
    // 0x80227A58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A5C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80227A60: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x80227A64: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x80227A68: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x80227A6C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80227A70: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x80227A74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227A78: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80227A7C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80227A80: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
L_80227A84:
    // 0x80227A84: jal         0x8002C654
    // 0x80227A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80227A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227A8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A90: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80227A94: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227A98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80227A9C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227AA0: jal         0x80031DA8
    // 0x80227AA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80227AA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80227AA8: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80227AAC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80227AB0: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x80227AB4: jal         0x8003B6B8
    // 0x80227AB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_3;
    // 0x80227AB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80227ABC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80227AC0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80227AC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227AC8: jr          $ra
    // 0x80227ACC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227ACC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225DC4_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DC4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225DC8: bne         $v0, $zero, L_80225DF4
    if (ctx->r2 != 0) {
        // 0x80225DCC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225DF4;
    }
    // 0x80225DCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225DD0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225DD4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225DD8: lui         $v0, 0xFF8D
    ctx->r2 = S32(0XFF8D << 16);
    // 0x80225DDC: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225DE0: lui         $v0, 0xFEE5
    ctx->r2 = S32(0XFEE5 << 16);
    // 0x80225DE4: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80225DE8: addiu       $v0, $zero, 0xCE4
    ctx->r2 = ADD32(0, 0XCE4);
    // 0x80225DEC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225DF0: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_80225DF4:
    // 0x80225DF4: jr          $ra
    // 0x80225DF8: nop

    TRACE_RETURN()
    return;
    // 0x80225DF8: nop

;}
RECOMP_FUNC void func_80225C98_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C98: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225C9C: bne         $v0, $zero, L_80225CC4
    if (ctx->r2 != 0) {
        // 0x80225CA0: nop
    
            goto L_80225CC4;
    }
    // 0x80225CA0: nop

    // 0x80225CA4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225CA8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225CAC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225CB0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225CB4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225CB8: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80225CBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CC0: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80225CC4:
    // 0x80225CC4: jr          $ra
    // 0x80225CC8: nop

    TRACE_RETURN()
    return;
    // 0x80225CC8: nop

;}
RECOMP_FUNC void func_80227EE0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227EE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227EEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227EF8: lw          $v0, -0x5748($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5748);
    // 0x80227EFC: jalr        $v0
    // 0x80227F00: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227F00: nop

    after_0:
    // 0x80227F04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227F08: jr          $ra
    // 0x80227F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228450_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228450: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80228454: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80228458: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8022845C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80228460: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80228464: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80228468: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022846C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228470: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228474: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x80228478: lb          $a0, 0xD($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XD);
    // 0x8022847C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228480: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80228484: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228488: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022848C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228490: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80228494: lbu         $v1, -0x56DB($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X56DB);
    // 0x80228498: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022849C: bne         $v0, $v1, L_802284BC
    if (ctx->r2 != ctx->r3) {
        // 0x802284A0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802284BC;
    }
    // 0x802284A0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802284A4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802284A8: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x802284AC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802284B0: bne         $v1, $v0, L_802284BC
    if (ctx->r3 != ctx->r2) {
        // 0x802284B4: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_802284BC;
    }
    // 0x802284B4: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x802284B8: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_802284BC:
    // 0x802284BC: lb          $v0, 0xD($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XD);
    // 0x802284C0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802284C4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802284C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802284CC: lbu         $v1, -0x56DC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X56DC);
    // 0x802284D0: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x802284D4: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x802284D8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802284DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802284E0: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x802284E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284E8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x802284EC: mfhi        $t1
    ctx->r9 = hi;
    // 0x802284F0: srl         $t0, $t1, 2
    ctx->r8 = S32(U32(ctx->r9) >> 2);
    // 0x802284F4: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x802284F8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802284FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228500: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228504: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80228508: sll         $s0, $v1, 2
    ctx->r16 = S32(ctx->r3 << 2);
    // 0x8022850C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80228510: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80228514: andi        $t0, $t0, 0xFF
    ctx->r8 = ctx->r8 & 0XFF;
    // 0x80228518: sll         $s1, $t0, 2
    ctx->r17 = S32(ctx->r8 << 2);
    // 0x8022851C: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
    // 0x80228520: jal         0x8003BA58
    // 0x80228524: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80228524: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    after_0:
    // 0x80228528: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x8022852C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80228530: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80228534: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228538: jal         0x8003BB80
    // 0x8022853C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022853C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80228540: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80228544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228548: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8022854C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80228550: addiu       $s5, $s0, 0x23
    ctx->r21 = ADD32(ctx->r16, 0X23);
    // 0x80228554: addiu       $v0, $s0, 0x26
    ctx->r2 = ADD32(ctx->r16, 0X26);
    // 0x80228558: addiu       $s4, $s0, 0x4
    ctx->r20 = ADD32(ctx->r16, 0X4);
    // 0x8022855C: sb          $v0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r2;
    // 0x80228560: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80228564: addiu       $s2, $s1, 0x54
    ctx->r18 = ADD32(ctx->r17, 0X54);
    // 0x80228568: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x8022856C: addiu       $v0, $s1, 0x67
    ctx->r2 = ADD32(ctx->r17, 0X67);
    // 0x80228570: sb          $s5, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r21;
    // 0x80228574: sb          $s4, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r20;
    // 0x80228578: sb          $s2, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r18;
    // 0x8022857C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x80228580: sb          $s2, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r18;
    // 0x80228584: jal         0x8003BC68
    // 0x80228588: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80228588: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022858C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80228590: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80228594: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80228598: jal         0x8003BB80
    // 0x8022859C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_3;
    // 0x8022859C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x802285A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802285A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802285A8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x802285AC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x802285B0: addiu       $v0, $s0, 0x20
    ctx->r2 = ADD32(ctx->r16, 0X20);
    // 0x802285B4: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x802285B8: addiu       $s1, $s1, 0x41
    ctx->r17 = ADD32(ctx->r17, 0X41);
    // 0x802285BC: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x802285C0: sb          $s5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r21;
    // 0x802285C4: sb          $s0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r16;
    // 0x802285C8: sb          $s4, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r20;
    // 0x802285CC: sb          $s1, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r17;
    // 0x802285D0: sb          $s2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r18;
    // 0x802285D4: sb          $s1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r17;
    // 0x802285D8: jal         0x8003BC68
    // 0x802285DC: sb          $s2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r18;
    func_8003BC68_17068(rdram, ctx);
        goto after_4;
    // 0x802285DC: sb          $s2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r18;
    after_4:
    // 0x802285E0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x802285E4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802285E8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802285EC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802285F0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802285F4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802285F8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802285FC: jr          $ra
    // 0x80228600: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80228600: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802271F0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802271F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802271F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802271FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227200: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227204: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80227208: beq         $v0, $zero, L_80227270
    if (ctx->r2 == 0) {
        // 0x8022720C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227270;
    }
    // 0x8022720C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227210: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227214: addu        $at, $at, $v0
    gpr jr_addend_8022721C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227218: lw          $v0, -0x5660($at)
    ctx->r2 = ADD32(ctx->r1, -0X5660);
    // 0x8022721C: jr          $v0
    // 0x80227220: nop

    switch (jr_addend_8022721C >> 2) {
        case 0: goto L_80227224; break;
        case 1: goto L_80227270; break;
        case 2: goto L_8022723C; break;
        case 3: goto L_80227270; break;
        case 4: goto L_8022726C; break;
        default: switch_error(__func__, 0x8022721C, 0x8022A9A0);
    }
    // 0x80227220: nop

L_80227224:
    // 0x80227224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227228: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8022722C: jal         0x80050294
    // 0x80227230: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227230: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227234: j           L_80227254
    // 0x80227238: nop

        goto L_80227254;
    // 0x80227238: nop

L_8022723C:
    // 0x8022723C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80227240: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80227244: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80227248: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022724C: bne         $v1, $v0, L_80227270
    if (ctx->r3 != ctx->r2) {
        // 0x80227250: nop
    
            goto L_80227270;
    }
    // 0x80227250: nop

L_80227254:
    // 0x80227254: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227258: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022725C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80227260: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227264: j           L_80227270
    // 0x80227268: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227270;
    // 0x80227268: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022726C:
    // 0x8022726C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80227270:
    // 0x80227270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227278: jr          $ra
    // 0x8022727C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022727C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D58_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D5C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227D60: addiu       $v1, $v1, -0x3A4B
    ctx->r3 = ADD32(ctx->r3, -0X3A4B);
    // 0x80227D64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227D68: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227D6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D70: jal         0x8004F5C4
    // 0x80227D74: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80227D74: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x80227D78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227D7C: jr          $ra
    // 0x80227D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A98_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A98: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225A9C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225AA0: bne         $v0, $zero, L_80225B54
    if (ctx->r2 != 0) {
        // 0x80225AA4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225B54;
    }
    // 0x80225AA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225AA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AAC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225AB0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225AB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AB8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225ABC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225AC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AC4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225AC8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225ACC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AD0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225AD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AD8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225ADC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AE0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225AE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AE8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225AEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AF0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225AF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AF8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225AFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B00: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225B04: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80225B08: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80225B0C: lui         $v1, 0x650
    ctx->r3 = S32(0X650 << 16);
    // 0x80225B10: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80225B14: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80225B18: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80225B1C: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80225B20: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225B24: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225B28: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80225B2C: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x80225B30: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x80225B34: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225B38: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225B3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225B40: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225B44: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80225B48: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225B4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225B50: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_80225B54:
    // 0x80225B54: jr          $ra
    // 0x80225B58: nop

    TRACE_RETURN()
    return;
    // 0x80225B58: nop

;}
RECOMP_FUNC void func_80225EF0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EF0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225EF4: bne         $v0, $zero, L_80225F2C
    if (ctx->r2 != 0) {
        // 0x80225EF8: nop
    
            goto L_80225F2C;
    }
    // 0x80225EF8: nop

    // 0x80225EFC: lw          $a1, 0x50($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X50);
    // 0x80225F00: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225F04: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225F08: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225F0C: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80225F10: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80225F14: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225F18: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80225F1C: lui         $v0, 0xF448
    ctx->r2 = S32(0XF448 << 16);
    // 0x80225F20: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80225F24: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225F28: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_80225F2C:
    // 0x80225F2C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225F30: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80225F34: bne         $v1, $v0, L_80225F54
    if (ctx->r3 != ctx->r2) {
        // 0x80225F38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225F54;
    }
    // 0x80225F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F3C: lw          $a1, 0x50($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X50);
    // 0x80225F40: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225F44: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225F48: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80225F4C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225F50: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80225F54:
    // 0x80225F54: jr          $ra
    // 0x80225F58: nop

    TRACE_RETURN()
    return;
    // 0x80225F58: nop

;}
RECOMP_FUNC void func_802269A0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802269B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802269B4: bne         $v0, $zero, L_802269F8
    if (ctx->r2 != 0) {
        // 0x802269B8: nop
    
            goto L_802269F8;
    }
    // 0x802269B8: nop

    // 0x802269BC: jal         0x8004D5D4
    // 0x802269C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802269C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802269C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802269C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802269CC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802269D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802269D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802269D8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802269DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802269E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802269E4: jal         0x80050294
    // 0x802269E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802269E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x802269EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802269F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802269F8:
    // 0x802269F8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802269FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226A00: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A08: lw          $v0, -0x69C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69C0);
    // 0x80226A0C: jalr        $v0
    // 0x80226A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80226A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226A14: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226A18: bne         $v0, $zero, L_80226A30
    if (ctx->r2 != 0) {
        // 0x80226A1C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226A30;
    }
    // 0x80226A1C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226A20: jal         0x8004DD04
    // 0x80226A24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80226A24: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80226A28: jal         0x8005044C
    // 0x80226A2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80226A2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80226A30:
    // 0x80226A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226A34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226A38: jr          $ra
    // 0x80226A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B34_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B34: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80227B38: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80227B3C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x80227B40: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80227B44: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80227B48: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80227B4C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80227B50: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80227B54: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227B58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227B5C: lw          $a1, 0x28($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X28);
    // 0x80227B60: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    // 0x80227B64: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x80227B68: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227B6C: lh          $a0, 0x2C($s6)
    ctx->r4 = MEM_H(ctx->r22, 0X2C);
    // 0x80227B70: lhu         $a2, 0x2E($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X2E);
    // 0x80227B74: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80227B78: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x80227B7C: srl         $a0, $a0, 31
    ctx->r4 = S32(U32(ctx->r4) >> 31);
    // 0x80227B80: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80227B84: mfhi        $a3
    ctx->r7 = hi;
    // 0x80227B88: sra         $v1, $a3, 2
    ctx->r3 = S32(SIGNED(ctx->r7) >> 2);
    // 0x80227B8C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80227B90: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80227B94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227B98: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227B9C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80227BA0: addiu       $v0, $zero, 0x102
    ctx->r2 = ADD32(0, 0X102);
    // 0x80227BA4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80227BA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227BAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227BB4: slti        $v0, $v0, -0x11
    ctx->r2 = SIGNED(ctx->r2) < -0X11 ? 1 : 0;
    // 0x80227BB8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80227BBC: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80227BC0: beq         $a0, $zero, L_80227C8C
    if (ctx->r4 == 0) {
        // 0x80227BC4: addiu       $s4, $s6, 0x28
        ctx->r20 = ADD32(ctx->r22, 0X28);
            goto L_80227C8C;
    }
    // 0x80227BC4: addiu       $s4, $s6, 0x28
    ctx->r20 = ADD32(ctx->r22, 0X28);
    // 0x80227BC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80227BCC:
    // 0x80227BCC: sll         $s2, $s5, 16
    ctx->r18 = S32(ctx->r21 << 16);
    // 0x80227BD0: sra         $s2, $s2, 16
    ctx->r18 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80227BD4: sll         $s3, $s2, 2
    ctx->r19 = S32(ctx->r18 << 2);
    // 0x80227BD8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227BDC: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x80227BE0: lbu         $a1, -0x5D30($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X5D30);
    // 0x80227BE4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80227BE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227BEC: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
    // 0x80227BF0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80227BF4: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80227BF8: subu        $s0, $v1, $s0
    ctx->r16 = SUB32(ctx->r3, ctx->r16);
    // 0x80227BFC: sll         $s1, $s0, 16
    ctx->r17 = S32(ctx->r16 << 16);
    // 0x80227C00: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80227C04: jal         0x80227D84
    // 0x80227C08: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80227D84_ovl32(rdram, ctx);
        goto after_0;
    // 0x80227C08: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80227C0C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227C10: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x80227C14: lbu         $a1, -0x5D2F($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X5D2F);
    // 0x80227C18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80227C1C: jal         0x80227D84
    // 0x80227C20: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80227D84_ovl32(rdram, ctx);
        goto after_1;
    // 0x80227C20: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80227C24: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227C28: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x80227C2C: lbu         $a1, -0x5D2E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X5D2E);
    // 0x80227C30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80227C34: jal         0x80227D84
    // 0x80227C38: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80227D84_ovl32(rdram, ctx);
        goto after_2;
    // 0x80227C38: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80227C3C: addiu       $s0, $s0, -0x12
    ctx->r16 = ADD32(ctx->r16, -0X12);
    // 0x80227C40: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80227C44: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80227C48: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x80227C4C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80227C50: addu        $a2, $a2, $s2
    ctx->r6 = ADD32(ctx->r6, ctx->r18);
    // 0x80227C54: lbu         $a2, -0x5D2D($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X5D2D);
    // 0x80227C58: addiu       $v0, $s5, -0x1
    ctx->r2 = ADD32(ctx->r21, -0X1);
    // 0x80227C5C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80227C60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227C68: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80227C6C: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80227C70: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80227C74: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80227C78: slti        $s0, $s0, -0x11
    ctx->r16 = SIGNED(ctx->r16) < -0X11 ? 1 : 0;
    // 0x80227C7C: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x80227C80: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x80227C84: bne         $v0, $zero, L_80227BCC
    if (ctx->r2 != 0) {
        // 0x80227C88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80227BCC;
    }
    // 0x80227C88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80227C8C:
    // 0x80227C8C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80227C90: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    // 0x80227C94: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x80227C98: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227C9C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227CA0: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80227CA4: mfhi        $a3
    ctx->r7 = hi;
    // 0x80227CA8: sra         $v1, $a3, 2
    ctx->r3 = S32(SIGNED(ctx->r7) >> 2);
    // 0x80227CAC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80227CB0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80227CB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227CB8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227CBC: bne         $a0, $v0, L_80227D1C
    if (ctx->r4 != ctx->r2) {
        // 0x80227CC0: sw          $a0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r4;
            goto L_80227D1C;
    }
    // 0x80227CC0: sw          $a0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r4;
    // 0x80227CC4: lh          $v0, 0x4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X4);
    // 0x80227CC8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80227CCC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227CD0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80227CD4: lbu         $v1, -0x5D2D($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X5D2D);
    // 0x80227CD8: beq         $v1, $zero, L_80227D14
    if (ctx->r3 == 0) {
        // 0x80227CDC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80227D14;
    }
    // 0x80227CDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CE0: lhu         $v0, 0x6($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6);
    // 0x80227CE4: lh          $a0, 0x4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X4);
    // 0x80227CE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CEC: sh          $v0, 0x6($s4)
    MEM_H(0X6, ctx->r20) = ctx->r2;
    // 0x80227CF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227CF4: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80227CF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227CFC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80227D00: lbu         $v1, -0x5D2D($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X5D2D);
    // 0x80227D04: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227D08: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227D0C: bne         $v0, $v1, L_80227D1C
    if (ctx->r2 != ctx->r3) {
        // 0x80227D10: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227D1C;
    }
    // 0x80227D10: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80227D14:
    // 0x80227D14: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80227D18: sh          $zero, 0x6($s4)
    MEM_H(0X6, ctx->r20) = 0;
L_80227D1C:
    // 0x80227D1C: lh          $v0, 0x4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X4);
    // 0x80227D20: slti        $v0, $v0, 0xBA
    ctx->r2 = SIGNED(ctx->r2) < 0XBA ? 1 : 0;
    // 0x80227D24: bne         $v0, $zero, L_80227D30
    if (ctx->r2 != 0) {
        // 0x80227D28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227D30;
    }
    // 0x80227D28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227D2C: sb          $v0, 0x8($s6)
    MEM_B(0X8, ctx->r22) = ctx->r2;
L_80227D30:
    // 0x80227D30: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80227D34: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80227D38: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80227D3C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80227D40: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80227D44: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227D48: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227D4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227D50: jr          $ra
    // 0x80227D54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80227D54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80226684_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226688: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022668C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226694: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226698: bnel        $v0, $zero, L_802266E0
    if (ctx->r2 != 0) {
        // 0x8022669C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802266E0;
    }
    goto skip_0;
    // 0x8022669C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x802266A0: jal         0x8004D5D4
    // 0x802266A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802266A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802266A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802266AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802266B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802266B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802266B8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802266BC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802266C0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802266C4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802266C8: jal         0x80050294
    // 0x802266CC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802266CC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x802266D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802266D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802266DC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_802266E0:
    // 0x802266E0: jal         0x8004DD04
    // 0x802266E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802266E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802266E8: jal         0x8005044C
    // 0x802266EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802266EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802266F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802266F4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802266F8: beq         $v0, $zero, L_80226710
    if (ctx->r2 == 0) {
        // 0x802266FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226710;
    }
    // 0x802266FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226700: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80226704: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x80226708: jal         0x8003B564
    // 0x8022670C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022670C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80226710:
    // 0x80226710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226714: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226718: jr          $ra
    // 0x8022671C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022671C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287BC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802287C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802287C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802287C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802287CC: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x802287D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802287D4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802287D8: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x802287DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802287E0: jal         0x8003BA58
    // 0x802287E4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x802287E4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x802287E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802287EC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802287F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802287F4: jal         0x8003BB80
    // 0x802287F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x802287F8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802287FC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80228800: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x80228804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228808: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8022880C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228810: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80228814: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228818: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022881C: lbu         $v1, -0x5717($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X5717);
    // 0x80228820: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228824: bne         $v0, $v1, L_80228844
    if (ctx->r2 != ctx->r3) {
        // 0x80228828: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80228844;
    }
    // 0x80228828: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022882C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80228830: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80228834: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80228838: bne         $v1, $v0, L_80228844
    if (ctx->r3 != ctx->r2) {
        // 0x8022883C: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_80228844;
    }
    // 0x8022883C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80228840: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80228844:
    // 0x80228844: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80228848: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022884C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228850: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228854: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228858: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022885C: lbu         $v1, -0x5718($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5718);
    // 0x80228860: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80228864: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80228868: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022886C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228870: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80228874: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80228878: addiu       $v0, $v0, 0x2E
    ctx->r2 = ADD32(ctx->r2, 0X2E);
    // 0x8022887C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80228880: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80228884: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80228888: jal         0x8003BC68
    // 0x8022888C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022888C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228890: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228894: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228898: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022889C: jr          $ra
    // 0x802288A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802288A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022602C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022602C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226030: bne         $v0, $zero, L_80226060
    if (ctx->r2 != 0) {
        // 0x80226034: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226060;
    }
    // 0x80226034: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226038: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8022603C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226040: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226044: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226048: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x8022604C: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80226050: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226054: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226058: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022605C: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_80226060:
    // 0x80226060: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226064: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226068: bne         $v1, $v0, L_80226084
    if (ctx->r3 != ctx->r2) {
        // 0x8022606C: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_80226084;
    }
    // 0x8022606C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x80226070: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226074: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80226078: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x8022607C: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80226080: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_80226084:
    // 0x80226084: bne         $v1, $v0, L_8022609C
    if (ctx->r3 != ctx->r2) {
        // 0x80226088: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022609C;
    }
    // 0x80226088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022608C: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226090: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80226094: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80226098: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_8022609C:
    // 0x8022609C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802260A0: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x802260A4: bne         $v1, $v0, L_802260B8
    if (ctx->r3 != ctx->r2) {
        // 0x802260A8: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_802260B8;
    }
    // 0x802260A8: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x802260AC: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x802260B0: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x802260B4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_802260B8:
    // 0x802260B8: bne         $v1, $v0, L_802260C8
    if (ctx->r3 != ctx->r2) {
        // 0x802260BC: nop
    
            goto L_802260C8;
    }
    // 0x802260BC: nop

    // 0x802260C0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x802260C4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_802260C8:
    // 0x802260C8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802260CC: addiu       $v0, $zero, 0x71
    ctx->r2 = ADD32(0, 0X71);
    // 0x802260D0: bne         $v1, $v0, L_802260E4
    if (ctx->r3 != ctx->r2) {
        // 0x802260D4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802260E4;
    }
    // 0x802260D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802260D8: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x802260DC: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x802260E0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
L_802260E4:
    // 0x802260E4: jr          $ra
    // 0x802260E8: nop

    TRACE_RETURN()
    return;
    // 0x802260E8: nop

;}
RECOMP_FUNC void func_80225FFC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FFC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226000: bne         $v0, $zero, L_80226024
    if (ctx->r2 != 0) {
        // 0x80226004: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226024;
    }
    // 0x80226004: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226008: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8022600C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226010: lui         $v0, 0xFFB9
    ctx->r2 = S32(0XFFB9 << 16);
    // 0x80226014: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226018: lui         $v0, 0xFF9F
    ctx->r2 = S32(0XFF9F << 16);
    // 0x8022601C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226020: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
L_80226024:
    // 0x80226024: jr          $ra
    // 0x80226028: nop

    TRACE_RETURN()
    return;
    // 0x80226028: nop

;}
RECOMP_FUNC void func_80228720_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228720: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228724: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228728: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022872C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228730: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80228734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228738: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022873C: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80228740: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228744: jal         0x8003BA58
    // 0x80228748: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80228748: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8022874C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80228750: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80228754: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228758: jal         0x8003BB80
    // 0x8022875C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022875C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228760: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228764: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80228768: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022876C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80228770: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228774: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80228778: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022877C: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x80228780: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228784: addiu       $v1, $v0, 0x6
    ctx->r3 = ADD32(ctx->r2, 0X6);
    // 0x80228788: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8022878C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80228790: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x80228794: addiu       $v1, $v0, 0x3D
    ctx->r3 = ADD32(ctx->r2, 0X3D);
    // 0x80228798: addiu       $v0, $v0, 0x3F
    ctx->r2 = ADD32(ctx->r2, 0X3F);
    // 0x8022879C: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x802287A0: jal         0x8003BC68
    // 0x802287A4: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x802287A4: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x802287A8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802287AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802287B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802287B4: jr          $ra
    // 0x802287B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802287B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802262A0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802262A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802262A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802262AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802262B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802262B4: bnel        $v0, $zero, L_802262FC
    if (ctx->r2 != 0) {
        // 0x802262B8: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802262FC;
    }
    goto skip_0;
    // 0x802262B8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x802262BC: jal         0x8004D5D4
    // 0x802262C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802262C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802262C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802262C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802262CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802262D0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802262D4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802262D8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802262DC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802262E0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802262E4: jal         0x80050294
    // 0x802262E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802262E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x802262EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802262F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802262F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802262F8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_802262FC:
    // 0x802262FC: jal         0x8004DD04
    // 0x80226300: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226300: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80226304: jal         0x8005044C
    // 0x80226308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80226308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022630C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226310: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226314: beq         $v0, $zero, L_8022632C
    if (ctx->r2 == 0) {
        // 0x80226318: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022632C;
    }
    // 0x80226318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022631C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80226320: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x80226324: jal         0x8003B564
    // 0x80226328: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80226328: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022632C:
    // 0x8022632C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226334: jr          $ra
    // 0x80226338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F98_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227FA8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227FAC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80227FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227FB4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80227FB8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227FBC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227FC0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227FC4: beq         $v1, $zero, L_80227FE4
    if (ctx->r3 == 0) {
        // 0x80227FC8: nop
    
            goto L_80227FE4;
    }
    // 0x80227FC8: nop

    // 0x80227FCC: jal         0x802283B4
    // 0x80227FD0: nop

    func_802283B4_ovl32(rdram, ctx);
        goto after_0;
    // 0x80227FD0: nop

    after_0:
    // 0x80227FD4: beq         $v0, $zero, L_80227FE4
    if (ctx->r2 == 0) {
        // 0x80227FD8: nop
    
            goto L_80227FE4;
    }
    // 0x80227FD8: nop

    // 0x80227FDC: jal         0x8004F62C
    // 0x80227FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80227FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80227FE4:
    // 0x80227FE4: jal         0x80227FFC
    // 0x80227FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227FFC_ovl32(rdram, ctx);
        goto after_2;
    // 0x80227FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227FF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227FF4: jr          $ra
    // 0x80227FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B5C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B5C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225B60: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225B64: bne         $v0, $zero, L_80225C14
    if (ctx->r2 != 0) {
        // 0x80225B68: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225C14;
    }
    // 0x80225B68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225B6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B70: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225B74: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225B78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B7C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B88: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225B8C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B94: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225B98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B9C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225BA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BA4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225BA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BAC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225BB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BB4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225BB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BBC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225BC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BC4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225BC8: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x80225BCC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225BD0: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80225BD4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225BD8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225BDC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225BE0: lw          $v1, 0x2C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2C);
    // 0x80225BE4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225BE8: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80225BEC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225BF0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225BF4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225BF8: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x80225BFC: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80225C00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225C04: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225C08: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225C0C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80225C10: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
L_80225C14:
    // 0x80225C14: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80225C18: addiu       $v0, $zero, 0xBA
    ctx->r2 = ADD32(0, 0XBA);
    // 0x80225C1C: bne         $v1, $v0, L_80225C34
    if (ctx->r3 != ctx->r2) {
        // 0x80225C20: nop
    
            goto L_80225C34;
    }
    // 0x80225C20: nop

    // 0x80225C24: lw          $v1, 0x2C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2C);
    // 0x80225C28: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80225C2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225C30: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80225C34:
    // 0x80225C34: jr          $ra
    // 0x80225C38: nop

    TRACE_RETURN()
    return;
    // 0x80225C38: nop

;}
RECOMP_FUNC void func_80227940_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227948: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022794C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227950: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227954: bne         $v0, $zero, L_80227970
    if (ctx->r2 != 0) {
        // 0x80227958: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80227970;
    }
    // 0x80227958: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022795C: jal         0x80050294
    // 0x80227960: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227960: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227964: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022796C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227970:
    // 0x80227970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227974: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227978: jr          $ra
    // 0x8022797C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022797C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F5C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F5C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225F60: bne         $v0, $zero, L_80225FA8
    if (ctx->r2 != 0) {
        // 0x80225F64: addiu       $v0, $zero, 0x4B0
        ctx->r2 = ADD32(0, 0X4B0);
            goto L_80225FA8;
    }
    // 0x80225F64: addiu       $v0, $zero, 0x4B0
    ctx->r2 = ADD32(0, 0X4B0);
    // 0x80225F68: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80225F6C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225F70: lui         $v0, 0xF1DC
    ctx->r2 = S32(0XF1DC << 16);
    // 0x80225F74: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225F78: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225F7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225F80: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225F84: lui         $v0, 0xF830
    ctx->r2 = S32(0XF830 << 16);
    // 0x80225F88: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225F8C: lui         $v0, 0xEC78
    ctx->r2 = S32(0XEC78 << 16);
    // 0x80225F90: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80225F94: lui         $v0, 0xEA84
    ctx->r2 = S32(0XEA84 << 16);
    // 0x80225F98: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80225F9C: addiu       $v0, $zero, 0xF0A
    ctx->r2 = ADD32(0, 0XF0A);
    // 0x80225FA0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225FA4: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_80225FA8:
    // 0x80225FA8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225FAC: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x80225FB0: bne         $v1, $v0, L_80225FC4
    if (ctx->r3 != ctx->r2) {
        // 0x80225FB4: nop
    
            goto L_80225FC4;
    }
    // 0x80225FB4: nop

    // 0x80225FB8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225FBC: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80225FC0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225FC4:
    // 0x80225FC4: jr          $ra
    // 0x80225FC8: nop

    TRACE_RETURN()
    return;
    // 0x80225FC8: nop

;}
RECOMP_FUNC void func_80226D40_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D4C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226D50: addiu       $a1, $a1, -0x5600
    ctx->r5 = ADD32(ctx->r5, -0X5600);
    // 0x80226D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226D58: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80226D5C: beq         $a0, $zero, L_80226DEC
    if (ctx->r4 == 0) {
        // 0x80226D60: nop
    
            goto L_80226DEC;
    }
    // 0x80226D60: nop

    // 0x80226D64: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226D68: lw          $v1, -0x5600($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5600);
    // 0x80226D6C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80226D70: beq         $v0, $zero, L_80226DEC
    if (ctx->r2 == 0) {
        // 0x80226D74: nop
    
            goto L_80226DEC;
    }
    // 0x80226D74: nop

    // 0x80226D78: bgez        $v0, L_80226D88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226D7C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80226D88;
    }
    // 0x80226D7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D80: j           L_80226DB0
    // 0x80226D84: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_80226DB0;
    // 0x80226D84: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80226D88:
    // 0x80226D88: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D8C: lhu         $v0, -0x55FC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55FC);
    // 0x80226D90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226D98: sh          $v0, -0x55FC($at)
    MEM_H(-0X55FC, ctx->r1) = ctx->r2;
    // 0x80226D9C: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x80226DA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226DA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226DA8: bne         $v0, $v1, L_80226DEC
    if (ctx->r2 != ctx->r3) {
        // 0x80226DAC: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80226DEC;
    }
    // 0x80226DAC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_80226DB0:
    // 0x80226DB0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80226DB4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226DB8: lw          $v0, -0x5600($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5600);
    // 0x80226DBC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226DC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226DC4: sh          $zero, -0x55FC($at)
    MEM_H(-0X55FC, ctx->r1) = 0;
    // 0x80226DC8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226DCC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226DD0: jal         0x8003B85C
    // 0x80226DD4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80226DD4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80226DD8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226DDC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226DE0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226DE4: jal         0x8003B840
    // 0x80226DE8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226DE8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80226DEC:
    // 0x80226DEC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226DF0: addiu       $a1, $a1, -0x55F8
    ctx->r5 = ADD32(ctx->r5, -0X55F8);
    // 0x80226DF4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80226DF8: beq         $a0, $zero, L_80226E88
    if (ctx->r4 == 0) {
        // 0x80226DFC: nop
    
            goto L_80226E88;
    }
    // 0x80226DFC: nop

    // 0x80226E00: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226E04: lw          $v1, -0x55F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55F8);
    // 0x80226E08: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80226E0C: beq         $v0, $zero, L_80226E88
    if (ctx->r2 == 0) {
        // 0x80226E10: nop
    
            goto L_80226E88;
    }
    // 0x80226E10: nop

    // 0x80226E14: bgez        $v0, L_80226E24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226E18: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80226E24;
    }
    // 0x80226E18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226E1C: j           L_80226E4C
    // 0x80226E20: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_80226E4C;
    // 0x80226E20: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80226E24:
    // 0x80226E24: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226E28: lhu         $v0, -0x55F4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X55F4);
    // 0x80226E2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226E34: sh          $v0, -0x55F4($at)
    MEM_H(-0X55F4, ctx->r1) = ctx->r2;
    // 0x80226E38: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x80226E3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226E44: bne         $v0, $v1, L_80226E88
    if (ctx->r2 != ctx->r3) {
        // 0x80226E48: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80226E88;
    }
    // 0x80226E48: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_80226E4C:
    // 0x80226E4C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80226E50: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226E54: lw          $v0, -0x55F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X55F8);
    // 0x80226E58: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226E5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226E60: sh          $zero, -0x55F4($at)
    MEM_H(-0X55F4, ctx->r1) = 0;
    // 0x80226E64: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226E68: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226E6C: jal         0x8003B85C
    // 0x80226E70: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80226E70: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80226E74: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226E78: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80226E7C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80226E80: jal         0x8003B840
    // 0x80226E84: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80226E84: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80226E88:
    // 0x80226E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226E8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E90: jr          $ra
    // 0x80226E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227010_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022701C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227020: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227024: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80227028: beq         $v0, $zero, L_80227114
    if (ctx->r2 == 0) {
        // 0x8022702C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227114;
    }
    // 0x8022702C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227030: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227034: addu        $at, $at, $v0
    gpr jr_addend_8022703C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227038: lw          $v0, -0x5678($at)
    ctx->r2 = ADD32(ctx->r1, -0X5678);
    // 0x8022703C: jr          $v0
    // 0x80227040: nop

    switch (jr_addend_8022703C >> 2) {
        case 0: goto L_80227044; break;
        case 1: goto L_80227060; break;
        case 2: goto L_802270A8; break;
        case 3: goto L_802270E8; break;
        case 4: goto L_80227114; break;
        case 5: goto L_80227110; break;
        default: switch_error(__func__, 0x8022703C, 0x8022A988);
    }
    // 0x80227040: nop

L_80227044:
    // 0x80227044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227048: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8022704C: jal         0x80050294
    // 0x80227050: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227050: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227054: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227058: j           L_80227104
    // 0x8022705C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_80227104;
    // 0x8022705C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80227060:
    // 0x80227060: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80227064: ori         $a1, $a1, 0xB102
    ctx->r5 = ctx->r5 | 0XB102;
    // 0x80227068: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
    // 0x8022706C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80227070: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80227074: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80227078: ori         $a2, $a2, 0x6266
    ctx->r6 = ctx->r6 | 0X6266;
    // 0x8022707C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80227080: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80227084: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227088: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022708C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227090: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80227094: bne         $v1, $v0, L_80227114
    if (ctx->r3 != ctx->r2) {
        // 0x80227098: nop
    
            goto L_80227114;
    }
    // 0x80227098: nop

    // 0x8022709C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802270A0: j           L_80227108
    // 0x802270A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227108;
    // 0x802270A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802270A8:
    // 0x802270A8: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x802270AC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802270B0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802270B4: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x802270B8: ori         $a0, $a0, 0x2CB3
    ctx->r4 = ctx->r4 | 0X2CB3;
    // 0x802270BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802270C0: addiu       $v1, $v1, -0x6D72
    ctx->r3 = ADD32(ctx->r3, -0X6D72);
    // 0x802270C4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802270C8: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x802270CC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802270D0: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x802270D4: bne         $v1, $v0, L_80227114
    if (ctx->r3 != ctx->r2) {
        // 0x802270D8: nop
    
            goto L_80227114;
    }
    // 0x802270D8: nop

    // 0x802270DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802270E0: j           L_80227108
    // 0x802270E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227108;
    // 0x802270E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802270E8:
    // 0x802270E8: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802270EC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802270F0: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x802270F4: bne         $v1, $v0, L_80227114
    if (ctx->r3 != ctx->r2) {
        // 0x802270F8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80227114;
    }
    // 0x802270F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802270FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227100: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
L_80227104:
    // 0x80227104: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227108:
    // 0x80227108: j           L_80227114
    // 0x8022710C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227114;
    // 0x8022710C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227110:
    // 0x80227110: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80227114:
    // 0x80227114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227118: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022711C: jr          $ra
    // 0x80227120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FCC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FCC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225FD0: bne         $v0, $zero, L_80225FF4
    if (ctx->r2 != 0) {
        // 0x80225FD4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225FF4;
    }
    // 0x80225FD4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225FD8: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225FDC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225FE0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225FE4: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225FE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225FEC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225FF0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225FF4:
    // 0x80225FF4: jr          $ra
    // 0x80225FF8: nop

    TRACE_RETURN()
    return;
    // 0x80225FF8: nop

;}
RECOMP_FUNC void func_80227980_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022798C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227990: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227994: bne         $v0, $zero, L_802279B0
    if (ctx->r2 != 0) {
        // 0x80227998: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_802279B0;
    }
    // 0x80227998: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022799C: jal         0x80050294
    // 0x802279A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802279A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802279A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802279B0:
    // 0x802279B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279B8: jr          $ra
    // 0x802279BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802253D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802253D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802253DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802253E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802253E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802253E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253EC: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x802253F0: bne         $v0, $zero, L_80225504
    if (ctx->r2 != 0) {
        // 0x802253F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225504;
    }
    // 0x802253F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802253F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253FC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225400: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225404: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225408: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022540C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225410: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225414: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225418: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022541C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225420: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225424: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225428: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022542C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225430: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225434: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225438: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022543C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225440: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225444: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225448: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022544C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225450: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225454: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80225458: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022545C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225460: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225464: lui         $v0, 0xEC78
    ctx->r2 = S32(0XEC78 << 16);
    // 0x80225468: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8022546C: lui         $v0, 0xF98E
    ctx->r2 = S32(0XF98E << 16);
    // 0x80225470: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225474: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80225478: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8022547C: sh          $zero, 0x56($a0)
    MEM_H(0X56, ctx->r4) = 0;
    // 0x80225480: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225484: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80225488: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x8022548C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225490: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225494: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225498: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022549C: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x802254A0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802254A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802254A8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802254AC: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x802254B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802254B4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802254B8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x802254BC: addiu       $s2, $zero, 0x2A
    ctx->r18 = ADD32(0, 0X2A);
    // 0x802254C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802254C4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_802254C8:
    // 0x802254C8: jal         0x8004F2C4
    // 0x802254CC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x802254CC: nop

    after_0:
    // 0x802254D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802254D4: beql        $v1, $zero, L_802254F8
    if (ctx->r3 == 0) {
        // 0x802254D8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802254F8;
    }
    goto skip_0;
    // 0x802254D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x802254DC: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x802254E0: sb          $s3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r19;
    // 0x802254E4: sb          $s0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r16;
    // 0x802254E8: sb          $s2, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r18;
    // 0x802254EC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802254F0: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x802254F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802254F8:
    // 0x802254F8: slti        $v0, $s0, 0xB
    ctx->r2 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x802254FC: bne         $v0, $zero, L_802254C8
    if (ctx->r2 != 0) {
        // 0x80225500: nop
    
            goto L_802254C8;
    }
    // 0x80225500: nop

L_80225504:
    // 0x80225504: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80225508: addiu       $v0, $zero, 0xBD
    ctx->r2 = ADD32(0, 0XBD);
    // 0x8022550C: bne         $v1, $v0, L_80225528
    if (ctx->r3 != ctx->r2) {
        // 0x80225510: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80225528;
    }
    // 0x80225510: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80225514: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80225518: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022551C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225520: jal         0x8004CB2C
    // 0x80225524: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80225524: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_1:
L_80225528:
    // 0x80225528: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022552C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225530: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225534: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022553C: jr          $ra
    // 0x80225540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802256C8_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256D8: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802256DC: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x802256E0: beq         $v0, $zero, L_8022582C
    if (ctx->r2 == 0) {
        // 0x802256E4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022582C;
    }
    // 0x802256E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802256E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802256EC: addu        $at, $at, $v0
    gpr jr_addend_802256F4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802256F0: lw          $v0, -0x56B0($at)
    ctx->r2 = ADD32(ctx->r1, -0X56B0);
    // 0x802256F4: jr          $v0
    // 0x802256F8: nop

    switch (jr_addend_802256F4 >> 2) {
        case 0: goto L_802256FC; break;
        case 1: goto L_80225704; break;
        case 2: goto L_80225748; break;
        case 3: goto L_80225764; break;
        case 4: goto L_8022582C; break;
        case 5: goto L_802257AC; break;
        case 6: goto L_802257D0; break;
        case 7: goto L_80225810; break;
        default: switch_error(__func__, 0x802256F4, 0x8022A950);
    }
    // 0x802256F8: nop

L_802256FC:
    // 0x802256FC: j           L_802257F8
    // 0x80225700: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_802257F8;
    // 0x80225700: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_80225704:
    // 0x80225704: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225708: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022570C: bne         $v0, $zero, L_8022582C
    if (ctx->r2 != 0) {
        // 0x80225710: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_8022582C;
    }
    // 0x80225710: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80225714: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225718: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022571C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225720: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225724: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225728: addiu       $v1, $v1, 0x4430
    ctx->r3 = ADD32(ctx->r3, 0X4430);
    // 0x8022572C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225734: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225738: jal         0x80036340
    // 0x8022573C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_80036340_11740(rdram, ctx);
        goto after_0;
    // 0x8022573C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x80225740: j           L_80225800
    // 0x80225744: nop

        goto L_80225800;
    // 0x80225744: nop

L_80225748:
    // 0x80225748: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x8022574C: jal         0x80036B1C
    // 0x80225750: ori         $a0, $a0, 0x3500
    ctx->r4 = ctx->r4 | 0X3500;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80225750: ori         $a0, $a0, 0x3500
    ctx->r4 = ctx->r4 | 0X3500;
    after_1:
    // 0x80225754: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80225758: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022575C: j           L_80225800
    // 0x80225760: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
        goto L_80225800;
    // 0x80225760: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
L_80225764:
    // 0x80225764: jal         0x80036B7C
    // 0x80225768: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x80225768: nop

    after_2:
    // 0x8022576C: beq         $v0, $zero, L_8022582C
    if (ctx->r2 == 0) {
        // 0x80225770: nop
    
            goto L_8022582C;
    }
    // 0x80225770: nop

    // 0x80225774: jal         0x8004F144
    // 0x80225778: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80225778: nop

    after_3:
    // 0x8022577C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225780: beq         $a0, $zero, L_802257A4
    if (ctx->r4 == 0) {
        // 0x80225784: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802257A4;
    }
    // 0x80225784: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225788: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x8022578C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80225790: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x80225794: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80225798: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8022579C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802257A0: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_802257A4:
    // 0x802257A4: j           L_802257F8
    // 0x802257A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_802257F8;
    // 0x802257A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_802257AC:
    // 0x802257AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802257B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257B4: sb          $v0, 0x6B38($at)
    MEM_B(0X6B38, ctx->r1) = ctx->r2;
    // 0x802257B8: jal         0x80036B58
    // 0x802257BC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80036B58_11F58(rdram, ctx);
        goto after_4;
    // 0x802257BC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_4:
    // 0x802257C0: jal         0x80036B58
    // 0x802257C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_5;
    // 0x802257C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_5:
    // 0x802257C8: j           L_80225800
    // 0x802257CC: nop

        goto L_80225800;
    // 0x802257CC: nop

L_802257D0:
    // 0x802257D0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802257D4: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x802257D8: bne         $v0, $zero, L_8022582C
    if (ctx->r2 != 0) {
        // 0x802257DC: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_8022582C;
    }
    // 0x802257DC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x802257E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802257E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257E8: sb          $v0, 0x6B38($at)
    MEM_B(0X6B38, ctx->r1) = ctx->r2;
    // 0x802257EC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802257F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802257F4: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
L_802257F8:
    // 0x802257F8: jal         0x80036E48
    // 0x802257FC: nop

    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x802257FC: nop

    after_6:
L_80225800:
    // 0x80225800: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225808: j           L_8022582C
    // 0x8022580C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8022582C;
    // 0x8022580C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225810:
    // 0x80225810: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225814: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225818: bne         $v0, $zero, L_8022582C
    if (ctx->r2 != 0) {
        // 0x8022581C: nop
    
            goto L_8022582C;
    }
    // 0x8022581C: nop

    // 0x80225820: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225828: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022582C:
    // 0x8022582C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225830: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225834: jr          $ra
    // 0x80225838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
