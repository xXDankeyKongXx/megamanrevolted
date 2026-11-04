#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225BB4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BB4: jr          $ra
    // 0x80225BB8: nop

    TRACE_RETURN()
    return;
    // 0x80225BB8: nop

;}
RECOMP_FUNC void func_80231728_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023172C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231730: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231738: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x8023173C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80231740: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x80231744: bne         $v1, $v0, L_80231778
    if (ctx->r3 != ctx->r2) {
        // 0x80231748: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80231778;
    }
    // 0x80231748: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023174C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80231750: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231754: jal         0x80050294
    // 0x80231758: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231758: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023175C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80231760: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80231764: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80231768: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023176C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80231770: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231774: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80231778:
    // 0x80231778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023177C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231780: jr          $ra
    // 0x80231784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239310_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239314: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239318: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023931C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239320: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80239324: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80239328: bne         $v0, $zero, L_802393F0
    if (ctx->r2 != 0) {
        // 0x8023932C: nop
    
            goto L_802393F0;
    }
    // 0x8023932C: nop

    // 0x80239330: jal         0x8004F144
    // 0x80239334: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80239334: nop

    after_0:
    // 0x80239338: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023933C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239340: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80239344: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80239348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023934C: sb          $v1, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r3;
    // 0x80239350: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80239354: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x80239358: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8023935C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80239360: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80239364: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80239368: lb          $v1, 0xE($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XE);
    // 0x8023936C: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80239370: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80239374: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x80239378: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x8023937C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80239380: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80239384: bne         $v1, $v0, L_80239394
    if (ctx->r3 != ctx->r2) {
        // 0x80239388: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_80239394;
    }
    // 0x80239388: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    // 0x8023938C: j           L_80239398
    // 0x80239390: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
        goto L_80239398;
    // 0x80239390: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
L_80239394:
    // 0x80239394: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80239398:
    // 0x80239398: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x8023939C: lb          $v0, 0xE($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XE);
    // 0x802393A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802393A4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802393A8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802393AC: lw          $a0, -0x81C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X81C);
    // 0x802393B0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802393B4: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x802393B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802393BC: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x802393C0: lhu         $v1, 0x24($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X24);
    // 0x802393C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802393C8: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x802393CC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802393D0: sw          $v0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r2;
    // 0x802393D4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802393D8: sb          $zero, 0x23($a1)
    MEM_B(0X23, ctx->r5) = 0;
    // 0x802393DC: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x802393E0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x802393E4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802393E8: sw          $a0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r4;
    // 0x802393EC: sw          $v1, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r3;
L_802393F0:
    // 0x802393F0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802393F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802393F8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802393FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80239400: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x80239404: bne         $v0, $zero, L_80239414
    if (ctx->r2 != 0) {
        // 0x80239408: nop
    
            goto L_80239414;
    }
    // 0x80239408: nop

    // 0x8023940C: jal         0x8004F5C4
    // 0x80239410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80239410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80239414:
    // 0x80239414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023941C: jr          $ra
    // 0x80239420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230CA8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230CAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230CB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230CB4: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80230CB8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x80230CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230CC4: jal         0x80050294
    // 0x80230CC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230CC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230CCC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230CD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230CDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230CE0: jr          $ra
    // 0x80230CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B640_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B644: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B648: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B64C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B650: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022B654: jal         0x8006033C
    // 0x8022B658: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022B658: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_0:
    // 0x8022B65C: bne         $v0, $zero, L_8022B678
    if (ctx->r2 != 0) {
        // 0x8022B660: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B678;
    }
    // 0x8022B660: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B664: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022B668: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B66C: bne         $v1, $v0, L_8022B678
    if (ctx->r3 != ctx->r2) {
        // 0x8022B670: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B678;
    }
    // 0x8022B670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B674: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B678:
    // 0x8022B678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B67C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B680: jr          $ra
    // 0x8022B684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235708_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023570C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235718: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023571C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80235720: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80235724: jal         0x8004D5D4
    // 0x80235728: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235728: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023572C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235730: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235734: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235738: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023573C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235740: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235744: lhu         $v0, -0xC80($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XC80);
    // 0x80235748: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023574C: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80235750: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235754: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235758: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023575C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235760: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235764: lhu         $v0, -0xC7E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XC7E);
    // 0x80235768: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023576C: lui         $a1, 0x2C80
    ctx->r5 = S32(0X2C80 << 16);
    // 0x80235770: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x80235774: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80235778: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023577C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235780: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235784: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235788: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023578C: lhu         $v1, -0xC7C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XC7C);
    // 0x80235790: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x80235794: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80235798: sw          $a1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r5;
    // 0x8023579C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802357A0: jal         0x8002C654
    // 0x802357A4: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802357A4: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
    after_1:
    // 0x802357A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802357AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802357B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802357B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802357B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802357BC: jr          $ra
    // 0x802357C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802357C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A72C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A72C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023A730: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8023A734: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A738: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8023A73C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023A740: bne         $v0, $zero, L_8023A754
    if (ctx->r2 != 0) {
        // 0x8023A744: nop
    
            goto L_8023A754;
    }
    // 0x8023A744: nop

    // 0x8023A748: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A74C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A750: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8023A754:
    // 0x8023A754: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023A758: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A75C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023A760: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023A764: bne         $v0, $zero, L_8023A77C
    if (ctx->r2 != 0) {
        // 0x8023A768: lui         $a1, 0xFFFE
        ctx->r5 = S32(0XFFFE << 16);
            goto L_8023A77C;
    }
    // 0x8023A768: lui         $a1, 0xFFFE
    ctx->r5 = S32(0XFFFE << 16);
    // 0x8023A76C: jal         0x8004F5C4
    // 0x8023A770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023A770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023A774: j           L_8023A82C
    // 0x8023A778: nop

        goto L_8023A82C;
    // 0x8023A778: nop

L_8023A77C:
    // 0x8023A77C: ori         $a1, $a1, 0xFEFF
    ctx->r5 = ctx->r5 | 0XFEFF;
    // 0x8023A780: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x8023A784: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x8023A788: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023A78C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A790: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023A794: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8023A798: beq         $a0, $zero, L_8023A814
    if (ctx->r4 == 0) {
        // 0x8023A79C: sh          $v1, 0x24($s0)
        MEM_H(0X24, ctx->r16) = ctx->r3;
            goto L_8023A814;
    }
    // 0x8023A79C: sh          $v1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r3;
    // 0x8023A7A0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8023A7A4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8023A7A8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x8023A7AC: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x8023A7B0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A7B4: jal         0x8002C654
    // 0x8023A7B8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8023A7B8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_1:
    // 0x8023A7BC: lh          $a0, 0x38($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X38);
    // 0x8023A7C0: jal         0x800317C0
    // 0x8023A7C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800317C0_CBC0(rdram, ctx);
        goto after_2;
    // 0x8023A7C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8023A7C8: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    // 0x8023A7CC: jal         0x800319B4
    // 0x8023A7D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023A7D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8023A7D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A7D8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8023A7DC: jal         0x80030AA0
    // 0x8023A7E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80030AA0_BEA0(rdram, ctx);
        goto after_4;
    // 0x8023A7E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x8023A7E4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8023A7E8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8023A7EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A7F0: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8023A7F4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8023A7F8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8023A7FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A800: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023A804: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x8023A808: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8023A80C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A810: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_8023A814:
    // 0x8023A814: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x8023A818: lh          $v1, 0x2C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2C);
    // 0x8023A81C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x8023A820: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8023A824: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8023A828: sh          $a0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r4;
L_8023A82C:
    // 0x8023A82C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8023A830: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8023A834: jr          $ra
    // 0x8023A838: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023A838: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80225FE4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FE4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225FE8: bne         $v0, $zero, L_80226000
    if (ctx->r2 != 0) {
        // 0x80225FEC: nop
    
            goto L_80226000;
    }
    // 0x80225FEC: nop

    // 0x80225FF0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225FF4: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225FF8: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225FFC: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226000:
    // 0x80226000: jr          $ra
    // 0x80226004: nop

    TRACE_RETURN()
    return;
    // 0x80226004: nop

;}
RECOMP_FUNC void func_80235EDC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EDC: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80235EE0: lh          $v0, 0x3A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3A);
    // 0x80235EE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235EE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235EEC: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    // 0x80235EF0: jr          $ra
    // 0x80235EF4: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80235EF4: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_802307CC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802307CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802307D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802307D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802307D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802307DC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802307E0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802307E4: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x802307E8: bne         $v1, $v0, L_80230814
    if (ctx->r3 != ctx->r2) {
        // 0x802307EC: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80230814;
    }
    // 0x802307EC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802307F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802307F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802307F8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802307FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230800: jal         0x80050294
    // 0x80230804: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230804: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230808: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023080C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230810: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230814:
    // 0x80230814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230818: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023081C: jr          $ra
    // 0x80230820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023214C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023214C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232150: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232154: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023215C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80232160: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80232164: xori        $v1, $v0, 0x4
    ctx->r3 = ctx->r2 ^ 0X4;
    // 0x80232168: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023216C: xori        $v0, $v0, 0xC
    ctx->r2 = ctx->r2 ^ 0XC;
    // 0x80232170: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80232174: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232178: beq         $v1, $zero, L_8023218C
    if (ctx->r3 == 0) {
        // 0x8023217C: addiu       $a0, $zero, 0x91
        ctx->r4 = ADD32(0, 0X91);
            goto L_8023218C;
    }
    // 0x8023217C: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    // 0x80232180: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232184: jal         0x8002A2F8
    // 0x80232188: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80232188: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
L_8023218C:
    // 0x8023218C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80232190: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80232194: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232198: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8023219C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802321A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802321A4: jr          $ra
    // 0x802321A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802321A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238920_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238920: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80238924: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80238928: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023892C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80238930: addiu       $s1, $s2, 0x18
    ctx->r17 = ADD32(ctx->r18, 0X18);
    // 0x80238934: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238938: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8023893C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80238940: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80238944: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80238948: jal         0x8002C678
    // 0x8023894C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023894C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    after_0:
    // 0x80238950: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80238954: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238958: andi        $a0, $a0, 0x60
    ctx->r4 = ctx->r4 & 0X60;
    // 0x8023895C: jal         0x800319B4
    // 0x80238960: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80238960: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    after_1:
    // 0x80238964: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80238968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023896C: jal         0x800319B4
    // 0x80238970: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80238970: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_2:
    // 0x80238974: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x80238978: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023897C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238980: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238984: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238988: mflo        $v0
    ctx->r2 = lo;
    // 0x8023898C: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
    // 0x80238990: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80238994: mult        $s0, $s0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238998: mflo        $v0
    ctx->r2 = lo;
    // 0x8023899C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802389A0: nop

    // 0x802389A4: jal         0x80032424
    // 0x802389A8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    func_80032424_D824(rdram, ctx);
        goto after_3;
    // 0x802389A8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    after_3:
    // 0x802389AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802389B0: jal         0x80032664
    // 0x802389B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_4;
    // 0x802389B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802389B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802389BC: jal         0x800317C0
    // 0x802389C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_5;
    // 0x802389C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802389C4: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x802389C8: jal         0x800319B4
    // 0x802389CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_6;
    // 0x802389CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802389D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802389D4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802389D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802389DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802389E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802389E4: jal         0x80031DA8
    // 0x802389E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x802389E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_7:
    // 0x802389EC: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802389F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802389F4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x802389F8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802389FC: bne         $v0, $zero, L_80238AA8
    if (ctx->r2 != 0) {
        // 0x80238A00: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80238AA8;
    }
    // 0x80238A00: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80238A04: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80238A08: addiu       $s4, $zero, 0x83
    ctx->r20 = ADD32(0, 0X83);
    // 0x80238A0C: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80238A10: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80238A14: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238A18: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80238A1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80238A20: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
L_80238A24:
    // 0x80238A24: jal         0x8004F144
    // 0x80238A28: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80238A28: nop

    after_8:
    // 0x80238A2C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80238A30: beql        $s0, $zero, L_80238A9C
    if (ctx->r16 == 0) {
        // 0x80238A34: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80238A9C;
    }
    goto skip_0;
    // 0x80238A34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80238A38: sb          $s5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r21;
    // 0x80238A3C: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x80238A40: sb          $s3, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r19;
    // 0x80238A44: jal         0x800324B4
    // 0x80238A48: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_800324B4_D8B4(rdram, ctx);
        goto after_9;
    // 0x80238A48: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_9:
    // 0x80238A4C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80238A50: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238A54: mflo        $v0
    ctx->r2 = lo;
    // 0x80238A58: lhu         $v1, 0x38($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X38);
    // 0x80238A5C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80238A60: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238A64: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80238A68: lhu         $v0, 0x3A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3A);
    // 0x80238A6C: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80238A70: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80238A74: jal         0x80032498
    // 0x80238A78: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_80032498_D898(rdram, ctx);
        goto after_10;
    // 0x80238A78: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_10:
    // 0x80238A7C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80238A80: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238A84: mflo        $v0
    ctx->r2 = lo;
    // 0x80238A88: lhu         $v1, 0x3C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3C);
    // 0x80238A8C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80238A90: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238A94: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80238A98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80238A9C:
    // 0x80238A9C: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x80238AA0: bne         $v0, $zero, L_80238A24
    if (ctx->r2 != 0) {
        // 0x80238AA4: nop
    
            goto L_80238A24;
    }
    // 0x80238AA4: nop

L_80238AA8:
    // 0x80238AA8: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80238AAC: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80238AB0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80238AB4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80238AB8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80238ABC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80238AC0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80238AC4: jr          $ra
    // 0x80238AC8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80238AC8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80238D74_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D74: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238D78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238D7C: jr          $ra
    // 0x80238D80: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80238D80: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022CFA8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CFA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CFAC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022CFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CFB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CFB8: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x8022CFBC: beq         $v1, $zero, L_8022CFD8
    if (ctx->r3 == 0) {
        // 0x8022CFC0: addiu       $s0, $a1, 0x4E0
        ctx->r16 = ADD32(ctx->r5, 0X4E0);
            goto L_8022CFD8;
    }
    // 0x8022CFC0: addiu       $s0, $a1, 0x4E0
    ctx->r16 = ADD32(ctx->r5, 0X4E0);
    // 0x8022CFC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFC8: beq         $v1, $v0, L_8022CFF4
    if (ctx->r3 == ctx->r2) {
        // 0x8022CFCC: nop
    
            goto L_8022CFF4;
    }
    // 0x8022CFCC: nop

    // 0x8022CFD0: j           L_8022D040
    // 0x8022CFD4: nop

        goto L_8022D040;
    // 0x8022CFD4: nop

L_8022CFD8:
    // 0x8022CFD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFDC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x8022CFE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CFE4: sb          $v0, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r2;
    // 0x8022CFE8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022CFEC: sh          $v0, 0x4E4($a1)
    MEM_H(0X4E4, ctx->r5) = ctx->r2;
    // 0x8022CFF0: sh          $zero, 0x4E8($a1)
    MEM_H(0X4E8, ctx->r5) = 0;
L_8022CFF4:
    // 0x8022CFF4: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x8022CFF8: lbu         $v1, 0xA4($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA4);
    // 0x8022CFFC: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022D000: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D004: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022D008: beq         $v1, $zero, L_8022D01C
    if (ctx->r3 == 0) {
        // 0x8022D00C: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_8022D01C;
    }
    // 0x8022D00C: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022D010: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x8022D014: jal         0x8002A33C
    // 0x8022D018: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D018: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_8022D01C:
    // 0x8022D01C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D020: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D024: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D028: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D02C: bgtz        $v0, L_8022D040
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D030: nop
    
            goto L_8022D040;
    }
    // 0x8022D030: nop

    // 0x8022D034: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022D038: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D03C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022D040:
    // 0x8022D040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D048: jr          $ra
    // 0x8022D04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236470_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236474: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023647C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236480: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80236484: beq         $v0, $zero, L_802364AC
    if (ctx->r2 == 0) {
        // 0x80236488: addiu       $a0, $s0, 0x18
        ctx->r4 = ADD32(ctx->r16, 0X18);
            goto L_802364AC;
    }
    // 0x80236488: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8023648C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236490: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80236494: jal         0x8002C654
    // 0x80236498: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80236498: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023649C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802364A0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802364A4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802364A8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_802364AC:
    // 0x802364AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802364B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802364B4: jr          $ra
    // 0x802364B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802364B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232F50_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232F54: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80232F58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80232F5C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80232F60: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80232F64: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80232F68: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80232F6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232F70: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x80232F74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232F78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80232F7C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80232F80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232F84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232F88: sw          $v1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r3;
    // 0x80232F8C: sw          $v0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r2;
    // 0x80232F90: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x80232F94: jal         0x8004DD04
    // 0x80232F98: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80232F98: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    after_0:
    // 0x80232F9C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80232FA0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80232FA4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80232FA8: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x80232FAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232FB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80232FB4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80232FB8: sh          $v1, 0x90($s2)
    MEM_H(0X90, ctx->r18) = ctx->r3;
    // 0x80232FBC: sh          $v0, 0x92($s2)
    MEM_H(0X92, ctx->r18) = ctx->r2;
    // 0x80232FC0: jal         0x8009A3B4
    // 0x80232FC4: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232FC4: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    after_1:
    // 0x80232FC8: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80232FCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232FD0: jal         0x8009A3B4
    // 0x80232FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232FD8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80232FDC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80232FE0: beq         $v0, $zero, L_8023301C
    if (ctx->r2 == 0) {
        // 0x80232FE4: nop
    
            goto L_8023301C;
    }
    // 0x80232FE4: nop

    // 0x80232FE8: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80232FEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232FF0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232FF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232FF8: lhu         $v1, -0xDA8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDA8);
    // 0x80232FFC: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80233000: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233004: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x80233008: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023300C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233010: lhu         $v0, -0xDA6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDA6);
    // 0x80233014: j           L_8023304C
    // 0x80233018: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
        goto L_8023304C;
    // 0x80233018: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023301C:
    // 0x8023301C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80233020: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233024: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233028: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023302C: lhu         $v1, -0xDC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDC0);
    // 0x80233030: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80233034: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233038: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x8023303C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233040: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233044: lhu         $v0, -0xDBE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDBE);
    // 0x80233048: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023304C:
    // 0x8023304C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80233050: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80233054: sh          $v1, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r3;
    // 0x80233058: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023305C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80233060: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233064: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80233068: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023306C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80233070: jr          $ra
    // 0x80233074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235EAC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EAC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80235EB0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80235EB4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235EB8: beq         $v0, $zero, L_80235ECC
    if (ctx->r2 == 0) {
        // 0x80235EBC: nop
    
            goto L_80235ECC;
    }
    // 0x80235EBC: nop

    // 0x80235EC0: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x80235EC4: j           L_80235ED4
    // 0x80235EC8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_80235ED4;
    // 0x80235EC8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80235ECC:
    // 0x80235ECC: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x80235ED0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80235ED4:
    // 0x80235ED4: jr          $ra
    // 0x80235ED8: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80235ED8: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80230D30_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230D38: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230D3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230D40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230D44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230D48: lw          $v0, -0x1178($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1178);
    // 0x80230D4C: jalr        $v0
    // 0x80230D50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230D50: nop

    after_0:
    // 0x80230D54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230D58: jr          $ra
    // 0x80230D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C500_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C504: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023C508: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023C50C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8023C510: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023C514: addiu       $a2, $a2, -0x4010
    ctx->r6 = ADD32(ctx->r6, -0X4010);
    // 0x8023C518: jal         0x800283A8
    // 0x8023C51C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_0;
    // 0x8023C51C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8023C520: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023C524: jr          $ra
    // 0x8023C528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023C52C: nop

;}
RECOMP_FUNC void func_802333F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802333F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802333F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802333F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802333FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233400: jal         0x80053ED8
    // 0x80233404: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80233404: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x80233408: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023340C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80233410: bne         $v1, $zero, L_80233424
    if (ctx->r3 != 0) {
        // 0x80233414: sw          $v0, 0xF4($s0)
        MEM_W(0XF4, ctx->r16) = ctx->r2;
            goto L_80233424;
    }
    // 0x80233414: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
    // 0x80233418: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023341C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233420: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80233424:
    // 0x80233424: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80233428: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023342C: addiu       $a0, $s0, 0xE4
    ctx->r4 = ADD32(ctx->r16, 0XE4);
    // 0x80233430: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80233434: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x80233438: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023343C: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80233440: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80233444: lw          $v1, 0x88($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X88);
    // 0x80233448: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023344C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233450: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80233454: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233458: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
    // 0x8023345C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80233460: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80233464: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x80233468: jal         0x800540B4
    // 0x8023346C: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_1;
    // 0x8023346C: sw          $v1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233470: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80233474: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80233478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023347C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80233480: sw          $v0, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r2;
    // 0x80233484: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x80233488: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
    // 0x8023348C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80233490: sh          $v0, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r2;
    // 0x80233494: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233498: addiu       $v0, $v0, -0xD50
    ctx->r2 = ADD32(ctx->r2, -0XD50);
    // 0x8023349C: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x802334A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802334A4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802334A8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802334AC: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x802334B0: jal         0x802334C8
    // 0x802334B4: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    func_802334C8_ovl2(rdram, ctx);
        goto after_2;
    // 0x802334B4: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    after_2:
    // 0x802334B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802334BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802334C0: jr          $ra
    // 0x802334C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802334C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230980_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023098C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80230990: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x80230994: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023099C: jal         0x80050294
    // 0x802309A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802309A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802309A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802309A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802309AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802309B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802309B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802309B8: jr          $ra
    // 0x802309BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802309BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226574_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226574: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226578: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x8022657C: bne         $v0, $zero, L_80226590
    if (ctx->r2 != 0) {
        // 0x80226580: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226590;
    }
    // 0x80226580: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226584: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226588: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022658C: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
L_80226590:
    // 0x80226590: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226594: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226598: bne         $v1, $v0, L_802265A8
    if (ctx->r3 != ctx->r2) {
        // 0x8022659C: nop
    
            goto L_802265A8;
    }
    // 0x8022659C: nop

    // 0x802265A0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x802265A4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_802265A8:
    // 0x802265A8: jr          $ra
    // 0x802265AC: nop

    TRACE_RETURN()
    return;
    // 0x802265AC: nop

;}
RECOMP_FUNC void func_802318B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802318B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802318B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802318B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802318BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802318C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802318C4: bnel        $v0, $zero, L_802318F0
    if (ctx->r2 != 0) {
        // 0x802318C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802318F0;
    }
    goto skip_0;
    // 0x802318C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x802318CC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x802318D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802318D4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802318D8: jal         0x80050294
    // 0x802318DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802318DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802318E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802318E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802318E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802318EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802318F0:
    // 0x802318F0: addiu       $a1, $zero, -0x17
    ctx->r5 = ADD32(0, -0X17);
    // 0x802318F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802318F8: jal         0x8004DA90
    // 0x802318FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802318FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80231900: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80231904: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80231908: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x8023190C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80231910: xori        $v0, $v0, 0x25
    ctx->r2 = ctx->r2 ^ 0X25;
    // 0x80231914: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80231918: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023191C: beq         $v1, $zero, L_80231930
    if (ctx->r3 == 0) {
        // 0x80231920: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_80231930;
    }
    // 0x80231920: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x80231924: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231928: jal         0x8002A2F8
    // 0x8023192C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023192C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
L_80231930:
    // 0x80231930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231934: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231938: jr          $ra
    // 0x8023193C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023193C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231940_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231948: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023194C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80231950: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80231954: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023195C: jal         0x80050294
    // 0x80231960: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231960: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231964: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231968: jal         0x8004DD04
    // 0x8023196C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023196C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80231970: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231974: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231978: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023197C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231980: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231984: jr          $ra
    // 0x80231988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E234_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E23C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E240: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E244: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E248: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E24C: lw          $v1, 0x4F4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4F4);
    // 0x8022E250: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022E254: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022E258: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x8022E25C: beq         $s1, $zero, L_8022E428
    if (ctx->r17 == 0) {
        // 0x8022E260: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_8022E428;
    }
    // 0x8022E260: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x8022E264: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x8022E268: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022E26C: beql        $v0, $zero, L_8022E420
    if (ctx->r2 == 0) {
        // 0x8022E270: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022E420;
    }
    goto skip_0;
    // 0x8022E270: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022E274: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022E278: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022E27C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8022E280: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022E284: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E288: bgtz        $v0, L_8022E314
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022E28C: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022E314;
    }
    // 0x8022E28C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022E290: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E294: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8022E298: beq         $v0, $zero, L_8022E2EC
    if (ctx->r2 == 0) {
        // 0x8022E29C: nop
    
            goto L_8022E2EC;
    }
    // 0x8022E29C: nop

    // 0x8022E2A0: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022E2A4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E2A8: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8022E2AC: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8022E2B0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022E2B4: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022E2B8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022E2BC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E2C0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E2C4: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x8022E2C8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E2CC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022E2D0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E2D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E2D8: lbu         $s1, 0x9($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X9);
    // 0x8022E2DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E2E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E2E4: j           L_8022E314
    // 0x8022E2E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022E314;
    // 0x8022E2E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022E2EC:
    // 0x8022E2EC: jal         0x8006FF58
    // 0x8022E2F0: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x8022E2F0: nop

    after_0:
    // 0x8022E2F4: beq         $v0, $zero, L_8022E310
    if (ctx->r2 == 0) {
        // 0x8022E2F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E310;
    }
    // 0x8022E2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E2FC: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022E300: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022E304: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022E308: j           L_8022E314
    // 0x8022E30C: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
        goto L_8022E314;
    // 0x8022E30C: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
L_8022E310:
    // 0x8022E310: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_8022E314:
    // 0x8022E314: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E318: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022E31C: beq         $v0, $zero, L_8022E3A0
    if (ctx->r2 == 0) {
        // 0x8022E320: slti        $v0, $s1, 0xA
        ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_8022E3A0;
    }
    // 0x8022E320: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8022E324: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8022E328: bne         $v0, $zero, L_8022E334
    if (ctx->r2 != 0) {
        // 0x8022E32C: addiu       $v0, $v1, 0xA
        ctx->r2 = ADD32(ctx->r3, 0XA);
            goto L_8022E334;
    }
    // 0x8022E32C: addiu       $v0, $v1, 0xA
    ctx->r2 = ADD32(ctx->r3, 0XA);
    // 0x8022E330: addu        $v0, $v1, $s1
    ctx->r2 = ADD32(ctx->r3, ctx->r17);
L_8022E334:
    // 0x8022E334: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
    // 0x8022E338: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E33C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8022E340: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8022E344: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E348: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E34C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E350: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022E354: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E358: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E35C: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022E360: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022E364: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E368: beq         $v0, $zero, L_8022E384
    if (ctx->r2 == 0) {
        // 0x8022E36C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022E384;
    }
    // 0x8022E36C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022E370: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8022E374: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E378: bne         $v0, $zero, L_8022E3EC
    if (ctx->r2 != 0) {
        // 0x8022E37C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022E3EC;
    }
    // 0x8022E37C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022E380: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022E384:
    // 0x8022E384: jal         0x8002A33C
    // 0x8022E388: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022E388: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022E38C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E390: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E394: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022E398: j           L_8022E3F4
    // 0x8022E39C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022E3F4;
    // 0x8022E39C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022E3A0:
    // 0x8022E3A0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E3A4: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8022E3A8: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8022E3AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E3B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E3B4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E3B8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022E3BC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E3C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E3C4: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022E3C8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022E3CC: slt         $v0, $s1, $v1
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E3D0: beq         $v0, $zero, L_8022E3EC
    if (ctx->r2 == 0) {
        // 0x8022E3D4: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022E3EC;
    }
    // 0x8022E3D4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022E3D8: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8022E3DC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E3E0: bne         $v0, $zero, L_8022E3EC
    if (ctx->r2 != 0) {
        // 0x8022E3E4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022E3EC;
    }
    // 0x8022E3E4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022E3E8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022E3EC:
    // 0x8022E3EC: jal         0x8002A33C
    // 0x8022E3F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022E3F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_8022E3F4:
    // 0x8022E3F4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E3F8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E3FC: lw          $v1, 0x34($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X34);
    // 0x8022E400: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022E404: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022E408: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022E40C: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x8022E410: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022E414: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022E418: j           L_8022E428
    // 0x8022E41C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022E428;
    // 0x8022E41C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022E420:
    // 0x8022E420: jal         0x8002A33C
    // 0x8022E424: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022E424: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8022E428:
    // 0x8022E428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E42C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E430: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E434: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E438: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E43C: jr          $ra
    // 0x8022E440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022E444: nop

    // 0x8022E448: nop

    // 0x8022E44C: nop

;}
RECOMP_FUNC void func_80239164_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239168: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023916C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80239170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80239174: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239178: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023917C: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80239180: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80239184: bne         $v0, $zero, L_802392EC
    if (ctx->r2 != 0) {
        // 0x80239188: nop
    
            goto L_802392EC;
    }
    // 0x80239188: nop

    // 0x8023918C: jal         0x8004F144
    // 0x80239190: lui         $s0, 0x6666
    ctx->r16 = S32(0X6666 << 16);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80239190: lui         $s0, 0x6666
    ctx->r16 = S32(0X6666 << 16);
    after_0:
    // 0x80239194: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80239198: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023919C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802391A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802391A4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802391A8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x802391AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802391B0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x802391B4: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802391B8: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x802391BC: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802391C0: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x802391C4: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x802391C8: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x802391CC: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x802391D0: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x802391D4: ori         $s0, $s0, 0x6667
    ctx->r16 = ctx->r16 | 0X6667;
    // 0x802391D8: jal         0x800A3450
    // 0x802391DC: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802391DC: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x802391E0: nop

    // 0x802391E4: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802391E8: lhu         $a1, 0x1C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X1C);
    // 0x802391EC: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802391F0: addiu       $a1, $a1, -0xA
    ctx->r5 = ADD32(ctx->r5, -0XA);
    // 0x802391F4: mfhi        $a2
    ctx->r6 = hi;
    // 0x802391F8: sra         $a0, $a2, 3
    ctx->r4 = S32(SIGNED(ctx->r6) >> 3);
    // 0x802391FC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80239200: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80239204: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80239208: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023920C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80239210: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80239214: jal         0x800A3450
    // 0x80239218: sh          $a1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r5;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80239218: sh          $a1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r5;
    after_2:
    // 0x8023921C: lui         $v1, 0x6BCA
    ctx->r3 = S32(0X6BCA << 16);
    // 0x80239220: ori         $v1, $v1, 0x1AF3
    ctx->r3 = ctx->r3 | 0X1AF3;
    // 0x80239224: sra         $a1, $v0, 8
    ctx->r5 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80239228: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023922C: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80239230: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80239234: addiu       $a0, $a0, -0x13
    ctx->r4 = ADD32(ctx->r4, -0X13);
    // 0x80239238: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023923C: sra         $v1, $a2, 4
    ctx->r3 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80239240: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80239244: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80239248: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023924C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239250: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80239254: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80239258: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8023925C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80239260: jal         0x800A3450
    // 0x80239264: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80239264: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
    after_3:
    // 0x80239268: sra         $a1, $v0, 4
    ctx->r5 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023926C: mult        $a1, $s0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80239270: lhu         $a0, 0x20($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X20);
    // 0x80239274: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80239278: addiu       $a0, $a0, -0xA
    ctx->r4 = ADD32(ctx->r4, -0XA);
    // 0x8023927C: mfhi        $a2
    ctx->r6 = hi;
    // 0x80239280: sra         $v1, $a2, 3
    ctx->r3 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80239284: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80239288: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023928C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239290: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239294: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80239298: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8023929C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x802392A0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802392A4: bne         $v1, $v0, L_802392B8
    if (ctx->r3 != ctx->r2) {
        // 0x802392A8: sh          $a0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r4;
            goto L_802392B8;
    }
    // 0x802392A8: sh          $a0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r4;
    // 0x802392AC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802392B0: j           L_802392C0
    // 0x802392B4: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_802392C0;
    // 0x802392B4: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_802392B8:
    // 0x802392B8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802392BC: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
L_802392C0:
    // 0x802392C0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x802392C4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802392C8: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x802392CC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802392D0: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x802392D4: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802392D8: sb          $v0, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r2;
    // 0x802392DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802392E0: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x802392E4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802392E8: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_802392EC:
    // 0x802392EC: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802392F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802392F4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x802392F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802392FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80239300: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239304: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239308: jr          $ra
    // 0x8023930C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023930C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802360D8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802360D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802360DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802360E0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802360E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802360E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802360EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802360F0: lw          $v0, -0xB84($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB84);
    // 0x802360F4: jalr        $v0
    // 0x802360F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802360F8: nop

    after_0:
    // 0x802360FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80236100: jr          $ra
    // 0x80236104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023090C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023090C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230910: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80230914: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80230918: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x8023091C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230920: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80230924: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230928: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x8023092C: bne         $v1, $v0, L_80230940
    if (ctx->r3 != ctx->r2) {
        // 0x80230930: nop
    
            goto L_80230940;
    }
    // 0x80230930: nop

    // 0x80230934: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80230938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023093C: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80230940:
    // 0x80230940: jr          $ra
    // 0x80230944: nop

    TRACE_RETURN()
    return;
    // 0x80230944: nop

;}
RECOMP_FUNC void func_802386A4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802386A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802386A8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802386AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802386B0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802386B4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802386B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802386BC: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802386C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802386C4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802386C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802386CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802386D0: lw          $v0, 0x298($at)
    ctx->r2 = MEM_W(ctx->r1, 0X298);
    // 0x802386D4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x802386D8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x802386DC: and         $s2, $v0, $v1
    ctx->r18 = ctx->r2 & ctx->r3;
    // 0x802386E0: beq         $s2, $zero, L_802386F0
    if (ctx->r18 == 0) {
        // 0x802386E4: nop
    
            goto L_802386F0;
    }
    // 0x802386E4: nop

    // 0x802386E8: j           L_80238748
    // 0x802386EC: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
        goto L_80238748;
    // 0x802386EC: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
L_802386F0:
    // 0x802386F0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802386F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802386F8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802386FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80238700: bne         $v0, $zero, L_80238740
    if (ctx->r2 != 0) {
        // 0x80238704: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80238740;
    }
    // 0x80238704: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80238708: jal         0x800A3450
    // 0x8023870C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023870C: nop

    after_0:
    // 0x80238710: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80238714: ori         $v1, $v1, 0xC080
    ctx->r3 = ctx->r3 | 0XC080;
    // 0x80238718: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    // 0x8023871C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80238720: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80238724: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238728: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023872C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80238730: jal         0x8002A33C
    // 0x80238734: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80238734: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    after_1:
    // 0x80238738: j           L_80238748
    // 0x8023873C: nop

        goto L_80238748;
    // 0x8023873C: nop

L_80238740:
    // 0x80238740: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80238744: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_80238748:
    // 0x80238748: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023874C: addiu       $s0, $s0, 0x4B34
    ctx->r16 = ADD32(ctx->r16, 0X4B34);
    // 0x80238750: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80238754: bne         $v0, $s1, L_8023876C
    if (ctx->r2 != ctx->r17) {
        // 0x80238758: nop
    
            goto L_8023876C;
    }
    // 0x80238758: nop

    // 0x8023875C: jal         0x8006036C
    // 0x80238760: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80238760: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    after_2:
    // 0x80238764: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80238768: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
L_8023876C:
    // 0x8023876C: jal         0x8006033C
    // 0x80238770: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80238770: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    after_3:
    // 0x80238774: beq         $v0, $zero, L_80238784
    if (ctx->r2 == 0) {
        // 0x80238778: nop
    
            goto L_80238784;
    }
    // 0x80238778: nop

    // 0x8023877C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80238780: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
L_80238784:
    // 0x80238784: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80238788: subu        $v0, $a0, $s2
    ctx->r2 = SUB32(ctx->r4, ctx->r18);
    // 0x8023878C: bltz        $v0, L_802387B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80238790: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_802387B8;
    }
    // 0x80238790: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80238794: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80238798: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023879C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802387A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802387A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802387A8: lw          $v0, 0x298($at)
    ctx->r2 = MEM_W(ctx->r1, 0X298);
    // 0x802387AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802387B0: beq         $v0, $zero, L_8023885C
    if (ctx->r2 == 0) {
        // 0x802387B4: subu        $v1, $a0, $s2
        ctx->r3 = SUB32(ctx->r4, ctx->r18);
            goto L_8023885C;
    }
    // 0x802387B4: subu        $v1, $a0, $s2
    ctx->r3 = SUB32(ctx->r4, ctx->r18);
L_802387B8:
    // 0x802387B8: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x802387BC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802387C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802387C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802387C8: addiu       $v0, $v0, 0x2A0
    ctx->r2 = ADD32(ctx->r2, 0X2A0);
    // 0x802387CC: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    // 0x802387D0: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x802387D4: jal         0x8009A3B4
    // 0x802387D8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802387D8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_4:
    // 0x802387DC: lh          $v0, 0x2E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2E);
    // 0x802387E0: bne         $v0, $zero, L_80238804
    if (ctx->r2 != 0) {
        // 0x802387E4: lui         $a2, 0x80
        ctx->r6 = S32(0X80 << 16);
            goto L_80238804;
    }
    // 0x802387E4: lui         $a2, 0x80
    ctx->r6 = S32(0X80 << 16);
    // 0x802387E8: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802387EC: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x802387F0: jal         0x80032664
    // 0x802387F4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_5;
    // 0x802387F4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_5:
    // 0x802387F8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802387FC: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
    // 0x80238800: lui         $a2, 0x80
    ctx->r6 = S32(0X80 << 16);
L_80238804:
    // 0x80238804: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x80238808: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023880C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80238810: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80238814: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80238818: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023881C: sw          $a2, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r6;
    // 0x80238820: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80238824: jal         0x8002A33C
    // 0x80238828: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80238828: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_6:
    // 0x8023882C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80238830: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80238834: beq         $v0, $zero, L_8023884C
    if (ctx->r2 == 0) {
        // 0x80238838: nop
    
            goto L_8023884C;
    }
    // 0x80238838: nop

    // 0x8023883C: jal         0x8006036C
    // 0x80238840: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80238840: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_7:
    // 0x80238844: j           L_8023888C
    // 0x80238848: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
        goto L_8023888C;
    // 0x80238848: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8023884C:
    // 0x8023884C: jal         0x8006036C
    // 0x80238850: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80238850: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_8:
    // 0x80238854: j           L_8023888C
    // 0x80238858: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
        goto L_8023888C;
    // 0x80238858: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8023885C:
    // 0x8023885C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80238860: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80238864: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80238868: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023886C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238870: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238874: sw          $zero, 0x298($at)
    MEM_W(0X298, ctx->r1) = 0;
    // 0x80238878: beq         $s2, $zero, L_80238888
    if (ctx->r18 == 0) {
        // 0x8023887C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80238888;
    }
    // 0x8023887C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80238880: jal         0x8002A33C
    // 0x80238884: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x80238884: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_9:
L_80238888:
    // 0x80238888: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8023888C:
    // 0x8023888C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238890: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80238894: jal         0x8009A3B4
    // 0x80238898: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80238898: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8023889C: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x802388A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802388A4: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802388A8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802388AC: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x802388B0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802388B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802388B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802388BC: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802388C0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802388C4: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x802388C8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802388CC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802388D0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802388D4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802388D8: addiu       $v1, $v1, 0x298
    ctx->r3 = ADD32(ctx->r3, 0X298);
    // 0x802388DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802388E0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802388E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802388E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802388EC: jal         0x80051E18
    // 0x802388F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x802388F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_11:
    // 0x802388F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802388F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802388FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80238900: jal         0x80047284
    // 0x80238904: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_12;
    // 0x80238904: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_12:
    // 0x80238908: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8023890C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80238910: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80238914: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80238918: jr          $ra
    // 0x8023891C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023891C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80238DB0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238DB4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80238DB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238DBC: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80238DC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238DC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238DC8: addu        $at, $at, $v0
    gpr jr_addend_80238DD0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238DCC: lw          $v0, -0x840($at)
    ctx->r2 = ADD32(ctx->r1, -0X840);
    // 0x80238DD0: jr          $v0
    // 0x80238DD4: nop

    switch (jr_addend_80238DD0 >> 2) {
        case 0: goto L_80238DD8; break;
        case 1: goto L_80238DF0; break;
        case 2: goto L_80238E74; break;
        default: switch_error(__func__, 0x80238DD0, 0x8023F7C0);
    }
    // 0x80238DD4: nop

L_80238DD8:
    // 0x80238DD8: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x80238DDC: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80238DE0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80238DE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238DE8: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x80238DEC: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80238DF0:
    // 0x80238DF0: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80238DF4: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80238DF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238DFC: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80238E00: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238E04: beq         $v0, $zero, L_80238E18
    if (ctx->r2 == 0) {
        // 0x80238E08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238E18;
    }
    // 0x80238E08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238E0C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80238E10: bne         $v1, $v0, L_80238E28
    if (ctx->r3 != ctx->r2) {
        // 0x80238E14: nop
    
            goto L_80238E28;
    }
    // 0x80238E14: nop

L_80238E18:
    // 0x80238E18: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80238E1C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80238E20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238E24: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80238E28:
    // 0x80238E28: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x80238E2C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80238E30: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80238E34: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80238E38: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x80238E3C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80238E40: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80238E44: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80238E48: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80238E4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238E50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238E54: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80238E58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238E5C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80238E60: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80238E64: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x80238E68: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x80238E6C: j           L_80238E7C
    // 0x80238E70: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_80238E7C;
    // 0x80238E70: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_80238E74:
    // 0x80238E74: jal         0x8004F5C4
    // 0x80238E78: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80238E78: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_80238E7C:
    // 0x80238E7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238E80: jr          $ra
    // 0x80238E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023204C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023204C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232050: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232054: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023205C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80232060: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80232064: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x80232068: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023206C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80232070: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80232074: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x80232078: bne         $v1, $v0, L_802320A4
    if (ctx->r3 != ctx->r2) {
        // 0x8023207C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802320A4;
    }
    // 0x8023207C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232080: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80232084: jal         0x80050294
    // 0x80232088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023208C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232090: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232094: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232098: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023209C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802320A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802320A4:
    // 0x802320A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802320A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802320AC: jr          $ra
    // 0x802320B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802320B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229514_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229518: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022951C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229520: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229524: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022952C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80229530: beq         $v1, $zero, L_8022954C
    if (ctx->r3 == 0) {
        // 0x80229534: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022954C;
    }
    // 0x80229534: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80229538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022953C: beq         $v1, $v0, L_80229588
    if (ctx->r3 == ctx->r2) {
        // 0x80229540: nop
    
            goto L_80229588;
    }
    // 0x80229540: nop

    // 0x80229544: j           L_802296F8
    // 0x80229548: nop

        goto L_802296F8;
    // 0x80229548: nop

L_8022954C:
    // 0x8022954C: lhu         $v1, 0x348($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X348);
    // 0x80229550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229554: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80229558: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022955C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229560: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80229564: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229568: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x8022956C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80229570: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    // 0x80229574: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80229578: sh          $v0, 0x34E($s1)
    MEM_H(0X34E, ctx->r17) = ctx->r2;
    // 0x8022957C: sh          $zero, 0x350($s1)
    MEM_H(0X350, ctx->r17) = 0;
    // 0x80229580: andi        $v1, $v1, 0xFFDF
    ctx->r3 = ctx->r3 & 0XFFDF;
    // 0x80229584: sh          $v1, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r3;
L_80229588:
    // 0x80229588: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022958C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229590: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x80229594: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229598: bgez        $v0, L_802295B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022959C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802295B0;
    }
    // 0x8022959C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802295A0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802295A4: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x802295A8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802295AC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_802295B0:
    // 0x802295B0: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x802295B4: lhu         $v1, 0x66($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X66);
    // 0x802295B8: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x802295BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802295C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802295C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802295CC: jal         0x8004DA90
    // 0x802295D0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802295D0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_0:
    // 0x802295D4: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x802295D8: lhu         $v1, 0x4C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4C);
    // 0x802295DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802295E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802295E4: jal         0x80040F30
    // 0x802295E8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802295E8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    after_1:
    // 0x802295EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802295F0: jal         0x8003E934
    // 0x802295F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x802295F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x802295F8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802295FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229600: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x80229604: beq         $s0, $zero, L_8022963C
    if (ctx->r16 == 0) {
        // 0x80229608: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022963C;
    }
    // 0x80229608: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022960C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80229610: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80229614: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80229618: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022961C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229620: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229624: jal         0x8009A3B4
    // 0x80229628: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80229628: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022962C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80229630: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80229634: jal         0x8009A3B4
    // 0x80229638: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80229638: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_8022963C:
    // 0x8022963C: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x80229640: lh          $v0, 0x2E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2E);
    // 0x80229644: subu        $v1, $a1, $v0
    ctx->r3 = SUB32(ctx->r5, ctx->r2);
    // 0x80229648: slti        $a0, $v1, 0x21
    ctx->r4 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x8022964C: bne         $a0, $zero, L_80229684
    if (ctx->r4 != 0) {
        // 0x80229650: nop
    
            goto L_80229684;
    }
    // 0x80229650: nop

    // 0x80229654: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80229658: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022965C: jal         0x8009A3B4
    // 0x80229660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80229660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80229664: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80229668: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022966C: jal         0x8009A3B4
    // 0x80229670: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80229670: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80229674: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229678: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022967C: j           L_802296F8
    // 0x80229680: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_802296F8;
    // 0x80229680: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80229684:
    // 0x80229684: bltzl       $v1, L_8022969C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80229688: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_8022969C;
    }
    goto skip_0;
    // 0x80229688: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    skip_0:
    // 0x8022968C: beq         $a0, $zero, L_802296A8
    if (ctx->r4 == 0) {
        // 0x80229690: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_802296A8;
    }
    // 0x80229690: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80229694: j           L_802296D4
    // 0x80229698: nop

        goto L_802296D4;
    // 0x80229698: nop

L_8022969C:
    // 0x8022969C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802296A0: bne         $v0, $zero, L_802296D4
    if (ctx->r2 != 0) {
        // 0x802296A4: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_802296D4;
    }
    // 0x802296A4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_802296A8:
    // 0x802296A8: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x802296AC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x802296B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802296B4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802296B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802296BC: jal         0x8009A3B4
    // 0x802296C0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802296C0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_7:
    // 0x802296C4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802296C8: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802296CC: jal         0x8009A3B4
    // 0x802296D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802296D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
L_802296D4:
    // 0x802296D4: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x802296D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802296DC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x802296E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802296E4: bgez        $v0, L_802296F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802296E8: nop
    
            goto L_802296F8;
    }
    // 0x802296E8: nop

    // 0x802296EC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802296F0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802296F4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_802296F8:
    // 0x802296F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802296FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229700: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229708: jr          $ra
    // 0x8022970C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022970C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231500_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231504: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231508: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023150C: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x80231510: jal         0x8004DD04
    // 0x80231514: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80231514: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80231518: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023151C: jr          $ra
    // 0x80231520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B20: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225B24: bne         $v0, $zero, L_80225B84
    if (ctx->r2 != 0) {
        // 0x80225B28: nop
    
            goto L_80225B84;
    }
    // 0x80225B28: nop

    // 0x80225B2C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225B30: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80225B34: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225B38: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225B3C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225B40: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225B44: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225B48: sb          $zero, 0x61($at)
    MEM_B(0X61, ctx->r1) = 0;
    // 0x80225B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B50: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225B54: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225B58: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225B5C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225B60: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225B64: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225B68: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225B6C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225B70: sh          $zero, 0x38($v0)
    MEM_H(0X38, ctx->r2) = 0;
    // 0x80225B74: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225B78: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80225B7C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80225B80: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
L_80225B84:
    // 0x80225B84: jr          $ra
    // 0x80225B88: nop

    TRACE_RETURN()
    return;
    // 0x80225B88: nop

;}
RECOMP_FUNC void func_8022A974_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A974: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A978: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A97C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A980: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A984: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A988: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A98C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022A990: beq         $v0, $zero, L_8022A9BC
    if (ctx->r2 == 0) {
        // 0x8022A994: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A9BC;
    }
    // 0x8022A994: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A998: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022A99C: jal         0x800540D0
    // 0x8022A9A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022A9A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022A9A4: beq         $v0, $zero, L_8022A9BC
    if (ctx->r2 == 0) {
        // 0x8022A9A8: nop
    
            goto L_8022A9BC;
    }
    // 0x8022A9A8: nop

    // 0x8022A9AC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A9B0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022A9B4: j           L_8022A9C8
    // 0x8022A9B8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_8022A9C8;
    // 0x8022A9B8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022A9BC:
    // 0x8022A9BC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A9C0: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022A9C4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A9C8:
    // 0x8022A9C8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A9CC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A9D0: beq         $v0, $zero, L_8022A9E0
    if (ctx->r2 == 0) {
        // 0x8022A9D4: nop
    
            goto L_8022A9E0;
    }
    // 0x8022A9D4: nop

    // 0x8022A9D8: jal         0x8022ABA8
    // 0x8022A9DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022ABA8_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022A9DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A9E0:
    // 0x8022A9E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A9E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A9E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A9EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A9F0: lw          $v0, -0x1614($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1614);
    // 0x8022A9F4: jalr        $v0
    // 0x8022A9F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022A9F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A9FC: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022AA00: beq         $v0, $zero, L_8022AA10
    if (ctx->r2 == 0) {
        // 0x8022AA04: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AA10;
    }
    // 0x8022AA04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AA08: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AA0C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022AA10:
    // 0x8022AA10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AA14: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022AA18: beq         $v0, $zero, L_8022AA68
    if (ctx->r2 == 0) {
        // 0x8022AA1C: nop
    
            goto L_8022AA68;
    }
    // 0x8022AA1C: nop

    // 0x8022AA20: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AA24: beq         $v1, $zero, L_8022AA3C
    if (ctx->r3 == 0) {
        // 0x8022AA28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AA3C;
    }
    // 0x8022AA28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AA2C: beq         $v1, $v0, L_8022AA48
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA30: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022AA48;
    }
    // 0x8022AA30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AA34: j           L_8022AA5C
    // 0x8022AA38: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022AA5C;
    // 0x8022AA38: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022AA3C:
    // 0x8022AA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AA40: j           L_8022AA58
    // 0x8022AA44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022AA58;
    // 0x8022AA44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022AA48:
    // 0x8022AA48: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022AA4C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022AA50: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022AA54: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_8022AA58:
    // 0x8022AA58: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022AA5C:
    // 0x8022AA5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AA60: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022AA64: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022AA68:
    // 0x8022AA68: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022AA6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AA70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022AA74: jr          $ra
    // 0x8022AA78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022AA78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235F10_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235F18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235F20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235F24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235F28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235F2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F30: lw          $v0, -0xBA0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XBA0);
    // 0x80235F34: jalr        $v0
    // 0x80235F38: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235F38: nop

    after_0:
    // 0x80235F3C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80235F40: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80235F44: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80235F48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235F4C: beq         $v0, $zero, L_80235F5C
    if (ctx->r2 == 0) {
        // 0x80235F50: sh          $v1, 0x3A($s0)
        MEM_H(0X3A, ctx->r16) = ctx->r3;
            goto L_80235F5C;
    }
    // 0x80235F50: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x80235F54: j           L_80235F60
    // 0x80235F58: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
        goto L_80235F60;
    // 0x80235F58: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_80235F5C:
    // 0x80235F5C: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
L_80235F60:
    // 0x80235F60: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80235F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235F68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235F6C: jr          $ra
    // 0x80235F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802356A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802356A0: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x802356A4: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x802356A8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802356AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802356B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802356B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802356B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802356BC: sw          $a1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r5;
    // 0x802356C0: jr          $ra
    // 0x802356C4: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x802356C4: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x802356C8: nop

    // 0x802356CC: nop

;}
RECOMP_FUNC void func_802381E4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802381E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802381E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802381EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802381F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802381F4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802381F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802381FC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238200: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80238204: bne         $v0, $zero, L_80238228
    if (ctx->r2 != 0) {
        // 0x80238208: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_80238228;
    }
    // 0x80238208: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8023820C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238210: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238214: jal         0x80034904
    // 0x80238218: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_80034904_FD04(rdram, ctx);
        goto after_0;
    // 0x80238218: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023821C: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    // 0x80238220: jal         0x8002A33C
    // 0x80238224: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80238224: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
L_80238228:
    // 0x80238228: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023822C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80238230: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238234: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80238238: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8023823C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238244: jr          $ra
    // 0x80238248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A65C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A65C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A660: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A664: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A668: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A66C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A674: jal         0x8004DA90
    // 0x8022A678: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A678: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022A67C: lh          $v0, 0x1E4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1E4);
    // 0x8022A680: lh          $a0, 0x1E0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1E0);
    // 0x8022A684: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A688: mflo        $a0
    ctx->r4 = lo;
    // 0x8022A68C: lhu         $v1, 0x1D8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1D8);
    // 0x8022A690: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A694: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A698: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A69C: jal         0x800324B4
    // 0x8022A6A0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022A6A0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A6A4: lhu         $a1, 0x1E0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X1E0);
    // 0x8022A6A8: lh          $a0, 0x1E2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1E2);
    // 0x8022A6AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022A6B0: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8022A6B4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A6B8: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8022A6BC: bne         $a0, $zero, L_8022A6C8
    if (ctx->r4 != 0) {
        // 0x8022A6C0: nop
    
            goto L_8022A6C8;
    }
    // 0x8022A6C0: nop

    // 0x8022A6C4: break       7
    do_break(2149754564);
L_8022A6C8:
    // 0x8022A6C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022A6CC: bne         $a0, $at, L_8022A6E0
    if (ctx->r4 != ctx->r1) {
        // 0x8022A6D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022A6E0;
    }
    // 0x8022A6D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022A6D4: bne         $v1, $at, L_8022A6E0
    if (ctx->r3 != ctx->r1) {
        // 0x8022A6D8: nop
    
            goto L_8022A6E0;
    }
    // 0x8022A6D8: nop

    // 0x8022A6DC: break       6
    do_break(2149754588);
L_8022A6E0:
    // 0x8022A6E0: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022A6E4: lh          $v1, 0x1E6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1E6);
    // 0x8022A6E8: nop

    // 0x8022A6EC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A6F0: mflo        $v1
    ctx->r3 = lo;
    // 0x8022A6F4: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x8022A6F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A6FC: sh          $a1, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r5;
    // 0x8022A700: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022A704: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A708: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022A70C: jal         0x8005044C
    // 0x8022A710: sh          $a2, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r6;
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8022A710: sh          $a2, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r6;
    after_2:
    // 0x8022A714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A718: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A71C: jr          $ra
    // 0x8022A720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022A724: nop

    // 0x8022A728: nop

    // 0x8022A72C: nop

;}
RECOMP_FUNC void func_80226D28_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D28: jr          $ra
    // 0x80226D2C: nop

    TRACE_RETURN()
    return;
    // 0x80226D2C: nop

;}
RECOMP_FUNC void func_8023B3E0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B3E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B3E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B3EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B3F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B3F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B3F8: lw          $v0, -0x620($at)
    ctx->r2 = MEM_W(ctx->r1, -0X620);
    // 0x8023B3FC: jalr        $v0
    // 0x8023B400: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B400: nop

    after_0:
    // 0x8023B404: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B408: jr          $ra
    // 0x8023B40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230250_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230254: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230258: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023025C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80230260: lw          $a0, 0xC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC0);
    // 0x80230264: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230268: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023026C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230270: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80230274: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80230278: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023027C: beq         $v1, $v0, L_80230308
    if (ctx->r3 == ctx->r2) {
        // 0x80230280: nop
    
            goto L_80230308;
    }
    // 0x80230280: nop

    // 0x80230284: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80230288: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023028C: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80230290: bne         $v1, $v0, L_80230308
    if (ctx->r3 != ctx->r2) {
        // 0x80230294: nop
    
            goto L_80230308;
    }
    // 0x80230294: nop

    // 0x80230298: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8023029C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802302A0: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x802302A4: bne         $v1, $v0, L_80230308
    if (ctx->r3 != ctx->r2) {
        // 0x802302A8: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80230308;
    }
    // 0x802302A8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802302AC: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802302B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802302B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802302B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802302BC: lw          $v0, -0x135C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X135C);
    // 0x802302C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802302C4: sh          $zero, 0xB4($at)
    MEM_H(0XB4, ctx->r1) = 0;
    // 0x802302C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802302CC: sw          $v0, 0xB0($at)
    MEM_W(0XB0, ctx->r1) = ctx->r2;
    // 0x802302D0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802302D4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x802302D8: jal         0x8003B85C
    // 0x802302DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802302DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802302E0: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802302E4: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x802302E8: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x802302EC: jal         0x8003B840
    // 0x802302F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802302F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802302F4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802302F8: lw          $v0, 0xC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC0);
    // 0x802302FC: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80230300: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230304: sw          $v0, 0xC0($at)
    MEM_W(0XC0, ctx->r1) = ctx->r2;
L_80230308:
    // 0x80230308: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023030C: lw          $a0, 0xC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC4);
    // 0x80230310: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230314: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230318: beq         $v1, $v0, L_8023039C
    if (ctx->r3 == ctx->r2) {
        // 0x8023031C: nop
    
            goto L_8023039C;
    }
    // 0x8023031C: nop

    // 0x80230320: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80230324: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80230328: bne         $v1, $v0, L_8023039C
    if (ctx->r3 != ctx->r2) {
        // 0x8023032C: nop
    
            goto L_8023039C;
    }
    // 0x8023032C: nop

    // 0x80230330: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80230334: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80230338: bne         $v1, $v0, L_8023039C
    if (ctx->r3 != ctx->r2) {
        // 0x8023033C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8023039C;
    }
    // 0x8023033C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80230340: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80230344: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230348: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023034C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230350: lw          $v0, -0x1324($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1324);
    // 0x80230354: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230358: sh          $zero, 0xBC($at)
    MEM_H(0XBC, ctx->r1) = 0;
    // 0x8023035C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230360: sw          $v0, 0xB8($at)
    MEM_W(0XB8, ctx->r1) = ctx->r2;
    // 0x80230364: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80230368: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8023036C: jal         0x8003B85C
    // 0x80230370: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80230370: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80230374: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80230378: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8023037C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80230380: jal         0x8003B840
    // 0x80230384: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80230384: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80230388: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023038C: lw          $v0, 0xC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC4);
    // 0x80230390: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80230394: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230398: sw          $v0, 0xC4($at)
    MEM_W(0XC4, ctx->r1) = ctx->r2;
L_8023039C:
    // 0x8023039C: jal         0x802300E0
    // 0x802303A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802300E0_ovl2(rdram, ctx);
        goto after_4;
    // 0x802303A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802303A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802303A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802303AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802303B0: jr          $ra
    // 0x802303B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802303B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802306C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306C4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x802306C8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802306CC: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x802306D0: bne         $v1, $v0, L_802306E4
    if (ctx->r3 != ctx->r2) {
        // 0x802306D4: nop
    
            goto L_802306E4;
    }
    // 0x802306D4: nop

    // 0x802306D8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802306DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802306E0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802306E4:
    // 0x802306E4: jr          $ra
    // 0x802306E8: nop

    TRACE_RETURN()
    return;
    // 0x802306E8: nop

;}
RECOMP_FUNC void func_802377B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802377B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802377B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802377B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802377BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802377C0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802377C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802377C8: jal         0x8006033C
    // 0x802377CC: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802377CC: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x802377D0: bne         $v0, $zero, L_802378C4
    if (ctx->r2 != 0) {
        // 0x802377D4: nop
    
            goto L_802378C4;
    }
    // 0x802377D4: nop

    // 0x802377D8: jal         0x8006033C
    // 0x802377DC: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802377DC: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    after_1:
    // 0x802377E0: bne         $v0, $zero, L_802378C4
    if (ctx->r2 != 0) {
        // 0x802377E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802378C4;
    }
    // 0x802377E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802377E8: lb          $v1, 0x8($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X8);
    // 0x802377EC: beq         $v1, $v0, L_80237848
    if (ctx->r3 == ctx->r2) {
        // 0x802377F0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80237848;
    }
    // 0x802377F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802377F4: beql        $v0, $zero, L_8023780C
    if (ctx->r2 == 0) {
        // 0x802377F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023780C;
    }
    goto skip_0;
    // 0x802377F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802377FC: beq         $v1, $zero, L_8023781C
    if (ctx->r3 == 0) {
        // 0x80237800: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023781C;
    }
    // 0x80237800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237804: j           L_802378C4
    // 0x80237808: nop

        goto L_802378C4;
    // 0x80237808: nop

L_8023780C:
    // 0x8023780C: beq         $v1, $v0, L_8023787C
    if (ctx->r3 == ctx->r2) {
        // 0x80237810: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023787C;
    }
    // 0x80237810: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237814: j           L_802378C4
    // 0x80237818: nop

        goto L_802378C4;
    // 0x80237818: nop

L_8023781C:
    // 0x8023781C: jal         0x80238028
    // 0x80237820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80237824: beq         $v0, $zero, L_802378C4
    if (ctx->r2 == 0) {
        // 0x80237828: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802378C4;
    }
    // 0x80237828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023782C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80237830: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237834: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237838: addiu       $a0, $zero, 0x256
    ctx->r4 = ADD32(0, 0X256);
    // 0x8023783C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237840: j           L_802378AC
    // 0x80237844: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_802378AC;
    // 0x80237844: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80237848:
    // 0x80237848: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023784C: lh          $s0, 0x49C6($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X49C6);
    // 0x80237850: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80237854: jal         0x8003E934
    // 0x80237858: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80237858: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_3:
    // 0x8023785C: bne         $s0, $v0, L_802378C4
    if (ctx->r16 != ctx->r2) {
        // 0x80237860: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802378C4;
    }
    // 0x80237860: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237864: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    // 0x80237868: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023786C: jal         0x800616FC
    // 0x80237870: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80237870: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_4:
    // 0x80237874: j           L_802378C4
    // 0x80237878: nop

        goto L_802378C4;
    // 0x80237878: nop

L_8023787C:
    // 0x8023787C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237880: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237884: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237888: bne         $v0, $zero, L_802378C4
    if (ctx->r2 != 0) {
        // 0x8023788C: nop
    
            goto L_802378C4;
    }
    // 0x8023788C: nop

    // 0x80237890: jal         0x8006036C
    // 0x80237894: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80237894: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    after_5:
    // 0x80237898: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023789C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x802378A0: addiu       $a0, $zero, 0x256
    ctx->r4 = ADD32(0, 0X256);
    // 0x802378A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802378A8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_802378AC:
    // 0x802378AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802378B0: jal         0x8004CB2C
    // 0x802378B4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x802378B4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_6:
    // 0x802378B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802378BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802378C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_802378C4:
    // 0x802378C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802378C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802378CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802378D0: jr          $ra
    // 0x802378D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802378D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235DE8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235DEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235DF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235DF8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235DFC: beq         $v0, $zero, L_80235E28
    if (ctx->r2 == 0) {
        // 0x80235E00: nop
    
            goto L_80235E28;
    }
    // 0x80235E00: nop

    // 0x80235E04: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235E0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235E10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235E14: lw          $v0, -0xB00($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB00);
    // 0x80235E18: jalr        $v0
    // 0x80235E1C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235E1C: nop

    after_0:
    // 0x80235E20: j           L_80235E94
    // 0x80235E24: nop

        goto L_80235E94;
    // 0x80235E24: nop

L_80235E28:
    // 0x80235E28: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80235E2C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E30: ori         $v1, $a0, 0x6
    ctx->r3 = ctx->r4 | 0X6;
    // 0x80235E34: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80235E38: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80235E3C: xori        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 ^ 0XA;
    // 0x80235E40: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80235E44: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80235E48: beq         $v1, $zero, L_80235E54
    if (ctx->r3 == 0) {
        // 0x80235E4C: ori         $v0, $a0, 0xE
        ctx->r2 = ctx->r4 | 0XE;
            goto L_80235E54;
    }
    // 0x80235E4C: ori         $v0, $a0, 0xE
    ctx->r2 = ctx->r4 | 0XE;
    // 0x80235E50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80235E54:
    // 0x80235E54: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E58: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80235E5C: bne         $v1, $v0, L_80235E78
    if (ctx->r3 != ctx->r2) {
        // 0x80235E60: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80235E78;
    }
    // 0x80235E60: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235E64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235E68: jal         0x8004D5D4
    // 0x80235E6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80235E6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80235E70: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235E74: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80235E78:
    // 0x80235E78: beql        $v1, $v0, L_80235E80
    if (ctx->r3 == ctx->r2) {
        // 0x80235E7C: sb          $zero, 0x49($s0)
        MEM_B(0X49, ctx->r16) = 0;
            goto L_80235E80;
    }
    goto skip_0;
    // 0x80235E7C: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    skip_0:
L_80235E80:
    // 0x80235E80: jal         0x8002C654
    // 0x80235E84: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80235E84: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_2:
    // 0x80235E88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235E90: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80235E94:
    // 0x80235E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235E98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235E9C: jr          $ra
    // 0x80235EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AF20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AF20: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023AF24: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023AF28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023AF2C: beq         $v1, $a0, L_8023AFB4
    if (ctx->r3 == ctx->r4) {
        // 0x8023AF30: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8023AFB4;
    }
    // 0x8023AF30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023AF34: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AF38: beq         $v0, $zero, L_8023AFEC
    if (ctx->r2 == 0) {
        // 0x8023AF3C: nop
    
            goto L_8023AFEC;
    }
    // 0x8023AF3C: nop

    // 0x8023AF40: bne         $v1, $zero, L_8023AFEC
    if (ctx->r3 != 0) {
        // 0x8023AF44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023AFEC;
    }
    // 0x8023AF44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AF48: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8023AF4C: beq         $v1, $a0, L_8023AF90
    if (ctx->r3 == ctx->r4) {
        // 0x8023AF50: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_8023AF90;
    }
    // 0x8023AF50: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8023AF54: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AF58: beql        $v0, $zero, L_8023AF70
    if (ctx->r2 == 0) {
        // 0x8023AF5C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AF70;
    }
    goto skip_0;
    // 0x8023AF5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AF60: beq         $v1, $zero, L_8023AF80
    if (ctx->r3 == 0) {
        // 0x8023AF64: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8023AF80;
    }
    // 0x8023AF64: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023AF68: j           L_8023AFB4
    // 0x8023AF6C: nop

        goto L_8023AFB4;
    // 0x8023AF6C: nop

L_8023AF70:
    // 0x8023AF70: beq         $v1, $v0, L_8023AFA4
    if (ctx->r3 == ctx->r2) {
        // 0x8023AF74: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8023AFA4;
    }
    // 0x8023AF74: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023AF78: j           L_8023AFB4
    // 0x8023AF7C: nop

        goto L_8023AFB4;
    // 0x8023AF7C: nop

L_8023AF80:
    // 0x8023AF80: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023AF84: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023AF88: j           L_8023AFB0
    // 0x8023AF8C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8023AFB0;
    // 0x8023AF8C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023AF90:
    // 0x8023AF90: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023AF94: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8023AF98: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023AF9C: j           L_8023AFB0
    // 0x8023AFA0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_8023AFB0;
    // 0x8023AFA0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8023AFA4:
    // 0x8023AFA4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023AFA8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023AFAC: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_8023AFB0:
    // 0x8023AFB0: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_8023AFB4:
    // 0x8023AFB4: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8023AFB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023AFBC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8023AFC0: bne         $v0, $zero, L_8023AFD8
    if (ctx->r2 != 0) {
        // 0x8023AFC4: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_8023AFD8;
    }
    // 0x8023AFC4: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x8023AFC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023AFCC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8023AFD0: j           L_8023AFEC
    // 0x8023AFD4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_8023AFEC;
    // 0x8023AFD4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_8023AFD8:
    // 0x8023AFD8: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8023AFDC: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8023AFE0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8023AFE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AFE8: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8023AFEC:
    // 0x8023AFEC: jr          $ra
    // 0x8023AFF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023AFF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022F0C0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F0C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F0C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F0CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F0D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F0D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F0D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F0DC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022F0E0: beq         $v0, $zero, L_8022F2A8
    if (ctx->r2 == 0) {
        // 0x8022F0E4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022F2A8;
    }
    // 0x8022F0E4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022F0E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F0EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F0F0: addu        $at, $at, $v0
    gpr jr_addend_8022F0F8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F0F4: lw          $v0, -0xF0($at)
    ctx->r2 = ADD32(ctx->r1, -0XF0);
    // 0x8022F0F8: jr          $v0
    // 0x8022F0FC: nop

    switch (jr_addend_8022F0F8 >> 2) {
        case 0: goto L_8022F100; break;
        case 1: goto L_8022F15C; break;
        case 2: goto L_8022F1AC; break;
        case 3: goto L_8022F25C; break;
        case 4: goto L_8022F280; break;
        default: switch_error(__func__, 0x8022F0F8, 0x8023FF10);
    }
    // 0x8022F0FC: nop

L_8022F100:
    // 0x8022F100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F104: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F108: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F10C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F110: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022F114: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F118: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022F11C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022F120: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F124: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F128: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8022F12C: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8022F130: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F134: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F138: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F13C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022F140: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022F144: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F148: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022F14C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F150: jal         0x8003E934
    // 0x8022F154: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022F154: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022F158: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022F15C:
    // 0x8022F15C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F160: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F164: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F168: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F16C: bgez        $v0, L_8022F2A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F170: nop
    
            goto L_8022F2A8;
    }
    // 0x8022F170: nop

    // 0x8022F174: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F178: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8022F17C: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x8022F180: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F184: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022F188: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F18C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F190: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022F194: addiu       $v1, $v1, 0xC8
    ctx->r3 = ADD32(ctx->r3, 0XC8);
    // 0x8022F198: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F19C: sh          $v1, 0x182($s0)
    MEM_H(0X182, ctx->r16) = ctx->r3;
    // 0x8022F1A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022F1A4: j           L_8022F2A8
    // 0x8022F1A8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_8022F2A8;
    // 0x8022F1A8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022F1AC:
    // 0x8022F1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F1B0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F1B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F1B8: jal         0x8004DA90
    // 0x8022F1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022F1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022F1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F1C4: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F1C8: lh          $s2, 0x16($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X16);
    // 0x8022F1CC: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8022F1D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F1D4: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022F1D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F1DC: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F1E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F1E4: jal         0x80040F30
    // 0x8022F1E8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022F1E8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022F1EC: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F1F0: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022F1F4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022F1F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022F1FC: bne         $v0, $zero, L_8022F214
    if (ctx->r2 != 0) {
        // 0x8022F200: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_8022F214;
    }
    // 0x8022F200: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022F204: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x8022F208: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022F20C: bne         $v0, $zero, L_8022F250
    if (ctx->r2 != 0) {
        // 0x8022F210: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022F250;
    }
    // 0x8022F210: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022F214:
    // 0x8022F214: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    // 0x8022F218: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8022F21C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F220: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F224: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F228: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F22C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F230: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F234: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F238: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F23C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022F240: jal         0x8002A33C
    // 0x8022F244: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022F244: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022F248: j           L_8022F25C
    // 0x8022F24C: nop

        goto L_8022F25C;
    // 0x8022F24C: nop

L_8022F250:
    // 0x8022F250: sh          $s2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r18;
    // 0x8022F254: j           L_8022F2A8
    // 0x8022F258: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022F2A8;
    // 0x8022F258: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022F25C:
    // 0x8022F25C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F260: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F264: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F268: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F26C: bgez        $v0, L_8022F2A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F270: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F2A8;
    }
    // 0x8022F270: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F274: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F278: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022F27C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022F280:
    // 0x8022F280: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F284: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F288: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F28C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F290: bgez        $v0, L_8022F2A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F294: addiu       $v1, $zero, 0x78
        ctx->r3 = ADD32(0, 0X78);
            goto L_8022F2A8;
    }
    // 0x8022F294: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8022F298: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F29C: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
    // 0x8022F2A0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022F2A4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022F2A8:
    // 0x8022F2A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F2AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F2B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F2B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2B8: jr          $ra
    // 0x8022F2BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F2BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239830_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239830: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80239834: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80239838: lbu         $v1, 0xE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XE);
    // 0x8023983C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239840: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80239844: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80239848: lbu         $a0, -0x7B3($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7B3);
    // 0x8023984C: lhu         $v0, 0x20($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X20);
    // 0x80239850: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80239854: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80239858: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023985C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80239860: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x80239864: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x80239868: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x8023986C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80239870: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239874: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80239878: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8023987C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239880: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80239884: lbu         $v1, -0x7B4($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X7B4);
    // 0x80239888: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x8023988C: lbu         $a0, 0x9($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X9);
    // 0x80239890: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239894: sb          $v1, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r3;
    // 0x80239898: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023989C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802398A0: lbu         $v0, -0x7B1($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7B1);
    // 0x802398A4: lhu         $v1, 0x24($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X24);
    // 0x802398A8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x802398AC: sb          $a0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r4;
    // 0x802398B0: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802398B4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802398B8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802398BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802398C0: bne         $a0, $zero, L_802398FC
    if (ctx->r4 != 0) {
        // 0x802398C4: sh          $v1, 0x24($a1)
        MEM_H(0X24, ctx->r5) = ctx->r3;
            goto L_802398FC;
    }
    // 0x802398C4: sh          $v1, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r3;
    // 0x802398C8: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x802398CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802398D0: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x802398D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802398D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802398DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802398E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802398E4: lbu         $v0, -0x7B2($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7B2);
    // 0x802398E8: bne         $v0, $zero, L_802398FC
    if (ctx->r2 != 0) {
        // 0x802398EC: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_802398FC;
    }
    // 0x802398EC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802398F0: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x802398F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802398F8: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
L_802398FC:
    // 0x802398FC: jr          $ra
    // 0x80239900: nop

    TRACE_RETURN()
    return;
    // 0x80239900: nop

;}
RECOMP_FUNC void func_80236218_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236218: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023621C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80236220: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236224: bne         $v0, $zero, L_80236230
    if (ctx->r2 != 0) {
        // 0x80236228: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_80236230;
    }
    // 0x80236228: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8023622C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80236230:
    // 0x80236230: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80236234: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80236238: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023623C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80236240: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236244: bne         $v0, $zero, L_8023625C
    if (ctx->r2 != 0) {
        // 0x80236248: nop
    
            goto L_8023625C;
    }
    // 0x80236248: nop

    // 0x8023624C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236250: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x80236254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236258: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8023625C:
    // 0x8023625C: jr          $ra
    // 0x80236260: nop

    TRACE_RETURN()
    return;
    // 0x80236260: nop

;}
RECOMP_FUNC void func_80230BDC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230BE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230BE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230BEC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80230BF0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230BF4: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80230BF8: bne         $v1, $v0, L_80230C24
    if (ctx->r3 != ctx->r2) {
        // 0x80230BFC: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_80230C24;
    }
    // 0x80230BFC: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80230C00: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x80230C04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230C08: jal         0x80050294
    // 0x80230C0C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230C0C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230C10: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230C14: addiu       $v1, $zero, 0x2F
    ctx->r3 = ADD32(0, 0X2F);
    // 0x80230C18: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80230C1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230C20: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230C24:
    // 0x80230C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230C28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230C2C: jr          $ra
    // 0x80230C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
