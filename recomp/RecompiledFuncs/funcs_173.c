#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226B80_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226B90: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226B94: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80226B98: bne         $v1, $v0, L_80226BB4
    if (ctx->r3 != ctx->r2) {
        // 0x80226B9C: nop
    
            goto L_80226BB4;
    }
    // 0x80226B9C: nop

    // 0x80226BA0: jal         0x80036E48
    // 0x80226BA4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80226BA4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80226BA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226BAC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80226BB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226BB4:
    // 0x80226BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226BB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BBC: jr          $ra
    // 0x80226BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024750C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024750C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80247510: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80247514: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247518: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024751C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80247520: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80247524: jal         0x8002C654
    // 0x80247528: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80247528: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x8024752C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80247530: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80247534: bne         $v1, $v0, L_80247550
    if (ctx->r3 != ctx->r2) {
        // 0x80247538: addiu       $v0, $zero, 0x1000
        ctx->r2 = ADD32(0, 0X1000);
            goto L_80247550;
    }
    // 0x80247538: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8024753C: addiu       $v0, $zero, 0x11A0
    ctx->r2 = ADD32(0, 0X11A0);
    // 0x80247540: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80247544: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80247548: j           L_80247560
    // 0x8024754C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_80247560;
    // 0x8024754C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_80247550:
    // 0x80247550: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80247554: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80247558: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x8024755C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
L_80247560:
    // 0x80247560: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80247564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247568: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024756C: jal         0x80031DA8
    // 0x80247570: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80247570: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x80247574: lh          $a0, 0x4($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X4);
    // 0x80247578: jal         0x800319B4
    // 0x8024757C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8024757C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80247580: lh          $a0, 0x6($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X6);
    // 0x80247584: jal         0x80031BB4
    // 0x80247588: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_3;
    // 0x80247588: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8024758C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80247590: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80247594: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80247598: jr          $ra
    // 0x8024759C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024759C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80238F9C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238F9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80238FA0: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80238FA4: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80238FA8: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80238FAC: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80238FB0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80238FB4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80238FB8: lw          $v0, 0x4290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4290);
    // 0x80238FBC: jr          $ra
    // 0x80238FC0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80238FC0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80231694_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231698: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023169C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802316A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802316A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802316A8: jal         0x8004EFE4
    // 0x802316AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x802316AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802316B0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802316B4: beq         $s1, $zero, L_80231768
    if (ctx->r17 == 0) {
        // 0x802316B8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80231768;
    }
    // 0x802316B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802316BC: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x802316C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802316C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802316C8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802316CC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802316D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802316D4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802316D8: jal         0x8004DA90
    // 0x802316DC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802316DC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x802316E0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802316E4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x802316E8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x802316EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802316F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802316F4: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x802316F8: jal         0x8009A3B4
    // 0x802316FC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802316FC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    after_2:
    // 0x80231700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231704: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80231708: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023170C: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x80231710: addiu       $a1, $s2, 0x2C
    ctx->r5 = ADD32(ctx->r18, 0X2C);
    // 0x80231714: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231718: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023171C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80231720: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80231724: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80231728: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x8023172C: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80231730: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231734: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231738: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x8023173C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231740: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x80231744: jal         0x8009A3B4
    // 0x80231748: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80231748: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    after_3:
    // 0x8023174C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80231750: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x80231754: jal         0x8009A3B4
    // 0x80231758: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80231758: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8023175C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x80231760: jal         0x8002A33C
    // 0x80231764: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80231764: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_80231768:
    // 0x80231768: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x8023176C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231770: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231774: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023177C: jr          $ra
    // 0x80231780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80231784: nop

    // 0x80231788: nop

    // 0x8023178C: nop

;}
RECOMP_FUNC void func_8023AE70_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AE70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023AE74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023AE78: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023AE7C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023AE80: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023AE84: lb          $v0, 0x9($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9);
    // 0x8023AE88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023AE8C: bne         $v0, $zero, L_8023AF10
    if (ctx->r2 != 0) {
        // 0x8023AE90: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023AF10;
    }
    // 0x8023AE90: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AE94: lb          $v0, 0x8($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X8);
    // 0x8023AE98: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8023AE9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AEA0: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8023AEA4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023AEA8: beq         $v1, $v0, L_8023AF18
    if (ctx->r3 == ctx->r2) {
        // 0x8023AEAC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023AF18;
    }
    // 0x8023AEAC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023AEB0: beql        $v1, $v0, L_8023AEB8
    if (ctx->r3 == ctx->r2) {
        // 0x8023AEB4: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8023AEB8;
    }
    goto skip_0;
    // 0x8023AEB4: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_0:
L_8023AEB8:
    // 0x8023AEB8: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x8023AEBC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8023AEC0: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8023AEC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AEC8: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8023AECC: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8023AED0: jal         0x8003B85C
    // 0x8023AED4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8023AED4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8023AED8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8023AEDC: lui         $a1, 0xE
    ctx->r5 = S32(0XE << 16);
    // 0x8023AEE0: ori         $a1, $a1, 0xD
    ctx->r5 = ctx->r5 | 0XD;
    // 0x8023AEE4: jal         0x8003B840
    // 0x8023AEE8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8023AEE8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023AEEC: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x8023AEF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8023AEF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AEF8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023AEFC: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8023AF00: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023AF04: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023AF08: j           L_8023AF18
    // 0x8023AF0C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8023AF18;
    // 0x8023AF0C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8023AF10:
    // 0x8023AF10: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023AF14: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023AF18:
    // 0x8023AF18: lb          $v0, 0xB($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XB);
    // 0x8023AF1C: bne         $v0, $zero, L_8023AFA0
    if (ctx->r2 != 0) {
        // 0x8023AF20: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023AFA0;
    }
    // 0x8023AF20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AF24: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x8023AF28: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8023AF2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AF30: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8023AF34: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023AF38: beq         $v1, $v0, L_8023AFA8
    if (ctx->r3 == ctx->r2) {
        // 0x8023AF3C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023AFA8;
    }
    // 0x8023AF3C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023AF40: beql        $v1, $v0, L_8023AF48
    if (ctx->r3 == ctx->r2) {
        // 0x8023AF44: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023AF48;
    }
    goto skip_1;
    // 0x8023AF44: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_1:
L_8023AF48:
    // 0x8023AF48: lb          $v1, 0xA($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA);
    // 0x8023AF4C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8023AF50: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8023AF54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AF58: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8023AF5C: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8023AF60: jal         0x8003B85C
    // 0x8023AF64: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8023AF64: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x8023AF68: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8023AF6C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x8023AF70: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x8023AF74: jal         0x8003B840
    // 0x8023AF78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8023AF78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8023AF7C: lb          $v1, 0xA($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA);
    // 0x8023AF80: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8023AF84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AF88: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AF8C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8023AF90: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023AF94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023AF98: j           L_8023AFA8
    // 0x8023AF9C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
        goto L_8023AFA8;
    // 0x8023AF9C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
L_8023AFA0:
    // 0x8023AFA0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023AFA4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023AFA8:
    // 0x8023AFA8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023AFAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023AFB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023AFB4: jr          $ra
    // 0x8023AFB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023AFB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802256F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256F4: jr          $ra
    // 0x802256F8: nop

    TRACE_RETURN()
    return;
    // 0x802256F8: nop

;}
RECOMP_FUNC void func_80232314_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232318: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023231C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80232320: bne         $v0, $zero, L_80232338
    if (ctx->r2 != 0) {
        // 0x80232324: nop
    
            goto L_80232338;
    }
    // 0x80232324: nop

    // 0x80232328: jal         0x8023234C
    // 0x8023232C: nop

    func_8023234C_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023232C: nop

    after_0:
    // 0x80232330: j           L_80232340
    // 0x80232334: nop

        goto L_80232340;
    // 0x80232334: nop

L_80232338:
    // 0x80232338: jal         0x802323BC
    // 0x8023233C: nop

    func_802323BC_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023233C: nop

    after_1:
L_80232340:
    // 0x80232340: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232344: jr          $ra
    // 0x80232348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802261A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A0: jr          $ra
    // 0x802261A4: nop

    TRACE_RETURN()
    return;
    // 0x802261A4: nop

;}
RECOMP_FUNC void func_80232030_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232034: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232038: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023203C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232040: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232044: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232048: lw          $v0, 0x38EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X38EC);
    // 0x8023204C: jalr        $v0
    // 0x80232050: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232050: nop

    after_0:
    // 0x80232054: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232058: jr          $ra
    // 0x8023205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227470_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227474: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80227478: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022747C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80227480: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80227484: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80227488: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022748C: beq         $v1, $v0, L_8022752C
    if (ctx->r3 == ctx->r2) {
        // 0x80227490: slti        $v0, $v1, 0x79
        ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
            goto L_8022752C;
    }
    // 0x80227490: slti        $v0, $v1, 0x79
    ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
    // 0x80227494: beql        $v0, $zero, L_802274AC
    if (ctx->r2 == 0) {
        // 0x80227498: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_802274AC;
    }
    goto skip_0;
    // 0x80227498: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    skip_0:
    // 0x8022749C: beq         $v1, $zero, L_802274C4
    if (ctx->r3 == 0) {
        // 0x802274A0: nop
    
            goto L_802274C4;
    }
    // 0x802274A0: nop

    // 0x802274A4: j           L_802275D4
    // 0x802274A8: nop

        goto L_802275D4;
    // 0x802274A8: nop

L_802274AC:
    // 0x802274AC: beq         $v1, $v0, L_80227558
    if (ctx->r3 == ctx->r2) {
        // 0x802274B0: addiu       $v0, $zero, 0x127
        ctx->r2 = ADD32(0, 0X127);
            goto L_80227558;
    }
    // 0x802274B0: addiu       $v0, $zero, 0x127
    ctx->r2 = ADD32(0, 0X127);
    // 0x802274B4: beq         $v1, $v0, L_80227584
    if (ctx->r3 == ctx->r2) {
        // 0x802274B8: nop
    
            goto L_80227584;
    }
    // 0x802274B8: nop

    // 0x802274BC: j           L_802275D4
    // 0x802274C0: nop

        goto L_802275D4;
    // 0x802274C0: nop

L_802274C4:
    // 0x802274C4: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x802274C8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802274CC: lw          $v1, 0x11D4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X11D4);
    // 0x802274D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802274D4: lw          $a0, 0x118C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X118C);
    // 0x802274D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802274DC: sb          $zero, 0x63AD($at)
    MEM_B(0X63AD, ctx->r1) = 0;
    // 0x802274E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802274E4: sb          $zero, 0x63AC($at)
    MEM_B(0X63AC, ctx->r1) = 0;
    // 0x802274E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802274EC: sb          $zero, 0x63AB($at)
    MEM_B(0X63AB, ctx->r1) = 0;
    // 0x802274F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802274F4: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x802274F8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802274FC: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x80227500: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227504: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x80227508: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022750C: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80227510: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227514: sw          $v1, 0x63B4($at)
    MEM_W(0X63B4, ctx->r1) = ctx->r3;
    // 0x80227518: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022751C: sw          $a0, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r4;
    // 0x80227520: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80227524: j           L_802275D4
    // 0x80227528: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
        goto L_802275D4;
    // 0x80227528: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_8022752C:
    // 0x8022752C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227530: lw          $v0, 0x1198($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1198);
    // 0x80227534: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227538: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x8022753C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227540: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x80227544: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227548: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x8022754C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227550: j           L_802275D4
    // 0x80227554: sw          $v0, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r2;
        goto L_802275D4;
    // 0x80227554: sw          $v0, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r2;
L_80227558:
    // 0x80227558: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022755C: lw          $v0, 0x11D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X11D8);
    // 0x80227560: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227564: sb          $zero, 0x63AD($at)
    MEM_B(0X63AD, ctx->r1) = 0;
    // 0x80227568: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022756C: sb          $zero, 0x63AC($at)
    MEM_B(0X63AC, ctx->r1) = 0;
    // 0x80227570: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227574: sb          $zero, 0x63AB($at)
    MEM_B(0X63AB, ctx->r1) = 0;
    // 0x80227578: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022757C: j           L_802275D4
    // 0x80227580: sw          $v0, 0x63B4($at)
    MEM_W(0X63B4, ctx->r1) = ctx->r2;
        goto L_802275D4;
    // 0x80227580: sw          $v0, 0x63B4($at)
    MEM_W(0X63B4, ctx->r1) = ctx->r2;
L_80227584:
    // 0x80227584: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227588: lw          $v0, 0x1198($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1198);
    // 0x8022758C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80227590: lw          $v1, 0x11D4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X11D4);
    // 0x80227594: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227598: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x8022759C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275A0: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x802275A4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275A8: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x802275AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275B0: sb          $zero, 0x63AD($at)
    MEM_B(0X63AD, ctx->r1) = 0;
    // 0x802275B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275B8: sb          $zero, 0x63AC($at)
    MEM_B(0X63AC, ctx->r1) = 0;
    // 0x802275BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275C0: sb          $zero, 0x63AB($at)
    MEM_B(0X63AB, ctx->r1) = 0;
    // 0x802275C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275C8: sw          $v0, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r2;
    // 0x802275CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802275D0: sw          $v1, 0x63B4($at)
    MEM_W(0X63B4, ctx->r1) = ctx->r3;
L_802275D4:
    // 0x802275D4: jal         0x80226CE0
    // 0x802275D8: nop

    func_80226CE0_ovl28(rdram, ctx);
        goto after_0;
    // 0x802275D8: nop

    after_0:
    // 0x802275DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802275E0: jr          $ra
    // 0x802275E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802383BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802383BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802383C0: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802383C4: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x802383C8: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x802383CC: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x802383D0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802383D4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802383D8: lw          $v0, 0x4160($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4160);
    // 0x802383DC: jr          $ra
    // 0x802383E0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802383E0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225734_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225738: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022573C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225744: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022574C: beq         $v1, $v0, L_802257A4
    if (ctx->r3 == ctx->r2) {
        // 0x80225750: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802257A4;
    }
    // 0x80225750: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225754: beql        $v0, $zero, L_8022576C
    if (ctx->r2 == 0) {
        // 0x80225758: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022576C;
    }
    goto skip_0;
    // 0x80225758: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022575C: beq         $v1, $zero, L_8022577C
    if (ctx->r3 == 0) {
        // 0x80225760: nop
    
            goto L_8022577C;
    }
    // 0x80225760: nop

    // 0x80225764: j           L_80225800
    // 0x80225768: nop

        goto L_80225800;
    // 0x80225768: nop

L_8022576C:
    // 0x8022576C: beq         $v1, $v0, L_802257C4
    if (ctx->r3 == ctx->r2) {
        // 0x80225770: nop
    
            goto L_802257C4;
    }
    // 0x80225770: nop

    // 0x80225774: j           L_80225800
    // 0x80225778: nop

        goto L_80225800;
    // 0x80225778: nop

L_8022577C:
    // 0x8022577C: jal         0x8006033C
    // 0x80225780: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225780: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x80225784: beq         $v0, $zero, L_802257FC
    if (ctx->r2 == 0) {
        // 0x80225788: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802257FC;
    }
    // 0x80225788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022578C: jal         0x8006033C
    // 0x80225790: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225790: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_1:
    // 0x80225794: bne         $v0, $zero, L_802257FC
    if (ctx->r2 != 0) {
        // 0x80225798: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802257FC;
    }
    // 0x80225798: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022579C: j           L_802257FC
    // 0x802257A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802257FC;
    // 0x802257A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802257A4:
    // 0x802257A4: jal         0x8006033C
    // 0x802257A8: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802257A8: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_2:
    // 0x802257AC: beq         $v0, $zero, L_80225800
    if (ctx->r2 == 0) {
        // 0x802257B0: nop
    
            goto L_80225800;
    }
    // 0x802257B0: nop

    // 0x802257B4: jal         0x8006036C
    // 0x802257B8: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802257B8: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_3:
    // 0x802257BC: j           L_802257F0
    // 0x802257C0: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
        goto L_802257F0;
    // 0x802257C0: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
L_802257C4:
    // 0x802257C4: jal         0x8006033C
    // 0x802257C8: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802257C8: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_4:
    // 0x802257CC: beq         $v0, $zero, L_80225800
    if (ctx->r2 == 0) {
        // 0x802257D0: nop
    
            goto L_80225800;
    }
    // 0x802257D0: nop

    // 0x802257D4: jal         0x8006036C
    // 0x802257D8: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802257D8: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_5:
    // 0x802257DC: jal         0x80036B58
    // 0x802257E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_6;
    // 0x802257E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
    // 0x802257E4: jal         0x80036E48
    // 0x802257E8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x802257E8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_7:
    // 0x802257EC: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
L_802257F0:
    // 0x802257F0: jal         0x80060690
    // 0x802257F4: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_8;
    // 0x802257F4: nop

    after_8:
    // 0x802257F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802257FC:
    // 0x802257FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225800:
    // 0x80225800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225804: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225808: jr          $ra
    // 0x8022580C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022580C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F4A8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F4AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F4B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F4B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F4B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F4BC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022F4C0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022F4C4: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F4C8: jal         0x8004FA7C
    // 0x8022F4CC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022F4CC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022F4D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F4D4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022F4D8: beq         $v0, $zero, L_8022F56C
    if (ctx->r2 == 0) {
        // 0x8022F4DC: nop
    
            goto L_8022F56C;
    }
    // 0x8022F4DC: nop

    // 0x8022F4E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F4E4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F4E8: bne         $v0, $zero, L_8022F56C
    if (ctx->r2 != 0) {
        // 0x8022F4EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F56C;
    }
    // 0x8022F4EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F4F0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F4F4: beq         $v1, $v0, L_8022F50C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F4F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F50C;
    }
    // 0x8022F4F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F4FC: beq         $v1, $v0, L_8022F53C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F500: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F53C;
    }
    // 0x8022F500: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F504: j           L_8022F560
    // 0x8022F508: nop

        goto L_8022F560;
    // 0x8022F508: nop

L_8022F50C:
    // 0x8022F50C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F510: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022F514: bne         $v0, $zero, L_8022F560
    if (ctx->r2 != 0) {
        // 0x8022F518: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F560;
    }
    // 0x8022F518: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F51C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022F520: bne         $v0, $zero, L_8022F560
    if (ctx->r2 != 0) {
        // 0x8022F524: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F560;
    }
    // 0x8022F524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F528: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F52C: bne         $v1, $v0, L_8022F560
    if (ctx->r3 != ctx->r2) {
        // 0x8022F530: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F560;
    }
    // 0x8022F530: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F534: j           L_8022F560
    // 0x8022F538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F560;
    // 0x8022F538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F53C:
    // 0x8022F53C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F540: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022F544: beq         $v0, $zero, L_8022F55C
    if (ctx->r2 == 0) {
        // 0x8022F548: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022F55C;
    }
    // 0x8022F548: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022F54C: bne         $v0, $zero, L_8022F560
    if (ctx->r2 != 0) {
        // 0x8022F550: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F560;
    }
    // 0x8022F550: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F554: j           L_8022F560
    // 0x8022F558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F560;
    // 0x8022F558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F55C:
    // 0x8022F55C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F560:
    // 0x8022F560: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F564: beq         $v0, $zero, L_8022F590
    if (ctx->r2 == 0) {
        // 0x8022F568: nop
    
            goto L_8022F590;
    }
    // 0x8022F568: nop

L_8022F56C:
    // 0x8022F56C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022F570: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F574: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F578: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F57C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F580: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F584: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F588: j           L_8022F5A0
    // 0x8022F58C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F5A0;
    // 0x8022F58C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F590:
    // 0x8022F590: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F594: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022F598: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F59C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022F5A0:
    // 0x8022F5A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F5A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F5A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5AC: jr          $ra
    // 0x8022F5B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F5B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C73C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C73C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023C740: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023C744: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C748: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023C74C: addiu       $s0, $s1, 0x440
    ctx->r16 = ADD32(ctx->r17, 0X440);
    // 0x8023C750: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023C754: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023C758: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023C75C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C760: jal         0x8004D5D4
    // 0x8023C764: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023C764: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023C768: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x8023C76C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8023C770: addiu       $v1, $s1, 0x78
    ctx->r3 = ADD32(ctx->r17, 0X78);
    // 0x8023C774: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023C778: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8023C77C: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8023C780: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8023C784: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
L_8023C788:
    // 0x8023C788: sh          $a1, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r5;
    // 0x8023C78C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8023C790: bgez        $a0, L_8023C788
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8023C794: addiu       $v1, $v1, -0x8
        ctx->r3 = ADD32(ctx->r3, -0X8);
            goto L_8023C788;
    }
    // 0x8023C794: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x8023C798: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x8023C79C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023C7A0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8023C7A4: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8023C7A8: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8023C7AC: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8023C7B0: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    // 0x8023C7B4: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x8023C7B8: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x8023C7BC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8023C7C0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8023C7C4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8023C7C8: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8023C7CC: jal         0x800540BC
    // 0x8023C7D0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8023C7D0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    after_1:
    // 0x8023C7D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C7D8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8023C7DC: sb          $zero, 0x52($s0)
    MEM_B(0X52, ctx->r16) = 0;
    // 0x8023C7E0: sb          $zero, 0x53($s0)
    MEM_B(0X53, ctx->r16) = 0;
    // 0x8023C7E4: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8023C7E8: sh          $zero, 0x70($s0)
    MEM_H(0X70, ctx->r16) = 0;
    // 0x8023C7EC: sb          $zero, 0x72($s0)
    MEM_B(0X72, ctx->r16) = 0;
    // 0x8023C7F0: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    // 0x8023C7F4: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x8023C7F8: sh          $zero, 0x78($s0)
    MEM_H(0X78, ctx->r16) = 0;
    // 0x8023C7FC: sb          $zero, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = 0;
    // 0x8023C800: sb          $zero, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = 0;
    // 0x8023C804: sb          $zero, 0x7D($s0)
    MEM_B(0X7D, ctx->r16) = 0;
    // 0x8023C808: jal         0x8004EFE4
    // 0x8023C80C: sb          $zero, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = 0;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8023C80C: sb          $zero, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = 0;
    after_2:
    // 0x8023C810: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C814: beq         $v1, $zero, L_8023C860
    if (ctx->r3 == 0) {
        // 0x8023C818: sw          $v1, 0x58($s0)
        MEM_W(0X58, ctx->r16) = ctx->r3;
            goto L_8023C860;
    }
    // 0x8023C818: sw          $v1, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r3;
    // 0x8023C81C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C820: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C824: lw          $v1, 0x58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X58);
    // 0x8023C828: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8023C82C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023C830: lw          $v1, 0x58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X58);
    // 0x8023C834: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8023C838: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023C83C: lw          $v1, 0x58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X58);
    // 0x8023C840: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023C844: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8023C848: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C84C: sb          $v0, 0x10F($s1)
    MEM_B(0X10F, ctx->r17) = ctx->r2;
    // 0x8023C850: lw          $v1, 0x58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X58);
    // 0x8023C854: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x8023C858: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023C85C: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
L_8023C860:
    // 0x8023C860: jal         0x8004EFE4
    // 0x8023C864: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_3;
    // 0x8023C864: nop

    after_3:
    // 0x8023C868: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C86C: beq         $v1, $zero, L_8023C8B8
    if (ctx->r3 == 0) {
        // 0x8023C870: sw          $v1, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->r3;
            goto L_8023C8B8;
    }
    // 0x8023C870: sw          $v1, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r3;
    // 0x8023C874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C878: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C87C: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8023C880: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8023C884: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023C888: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8023C88C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8023C890: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023C894: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8023C898: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023C89C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8023C8A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C8A4: sb          $v0, 0x123($s1)
    MEM_B(0X123, ctx->r17) = ctx->r2;
    // 0x8023C8A8: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8023C8AC: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x8023C8B0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023C8B4: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
L_8023C8B8:
    // 0x8023C8B8: jal         0x8004EFE4
    // 0x8023C8BC: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_4;
    // 0x8023C8BC: nop

    after_4:
    // 0x8023C8C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C8C4: beq         $v1, $zero, L_8023C910
    if (ctx->r3 == 0) {
        // 0x8023C8C8: sw          $v1, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r3;
            goto L_8023C910;
    }
    // 0x8023C8C8: sw          $v1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r3;
    // 0x8023C8CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C8D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C8D4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x8023C8D8: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8023C8DC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023C8E0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x8023C8E4: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8023C8E8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023C8EC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x8023C8F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023C8F4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8023C8F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C8FC: sb          $v0, 0x113($s1)
    MEM_B(0X113, ctx->r17) = ctx->r2;
    // 0x8023C900: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x8023C904: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x8023C908: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023C90C: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
L_8023C910:
    // 0x8023C910: jal         0x8004EFE4
    // 0x8023C914: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_5;
    // 0x8023C914: nop

    after_5:
    // 0x8023C918: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C91C: beq         $v1, $zero, L_8023C968
    if (ctx->r3 == 0) {
        // 0x8023C920: sw          $v1, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->r3;
            goto L_8023C968;
    }
    // 0x8023C920: sw          $v1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r3;
    // 0x8023C924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C928: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C92C: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x8023C930: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8023C934: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023C938: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x8023C93C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8023C940: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023C944: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x8023C948: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023C94C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8023C950: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C954: sb          $v0, 0x127($s1)
    MEM_B(0X127, ctx->r17) = ctx->r2;
    // 0x8023C958: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x8023C95C: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x8023C960: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023C964: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
L_8023C968:
    // 0x8023C968: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023C96C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023C970: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023C974: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C978: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C97C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023C980: lbu         $a0, 0x8($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X8);
    // 0x8023C984: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x8023C988: sh          $a0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r4;
    // 0x8023C98C: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8023C990: lui         $a1, 0x6666
    ctx->r5 = S32(0X6666 << 16);
    // 0x8023C994: ori         $a1, $a1, 0x6667
    ctx->r5 = ctx->r5 | 0X6667;
    // 0x8023C998: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C99C: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C9A0: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C9A4: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023C9A8: addiu       $a3, $a3, 0x6400
    ctx->r7 = ADD32(ctx->r7, 0X6400);
    // 0x8023C9AC: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x8023C9B0: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x8023C9B4: sh          $a0, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r4;
    // 0x8023C9B8: sh          $a0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r4;
    // 0x8023C9BC: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023C9C0: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023C9C4: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8023C9C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023C9CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C9D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C9D4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8023C9D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023C9DC: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x8023C9E0: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8023C9E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C9E8: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C9EC: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C9F0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023C9F4: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023C9F8: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8023C9FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023CA00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CA04: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CA08: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023CA0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CA10: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023CA14: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CA18: sw          $v1, 0x6404($at)
    MEM_W(0X6404, ctx->r1) = ctx->r3;
    // 0x8023CA1C: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8023CA20: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023CA24: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023CA28: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023CA2C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023CA30: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023CA34: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8023CA38: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023CA3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CA40: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8023CA44: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CA48: sw          $v0, 0x6408($at)
    MEM_W(0X6408, ctx->r1) = ctx->r2;
    // 0x8023CA4C: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8023CA50: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023CA54: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023CA58: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023CA5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CA60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CA64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023CA68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023CA6C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023CA70: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CA74: sw          $v0, 0x6410($at)
    MEM_W(0X6410, ctx->r1) = ctx->r2;
    // 0x8023CA78: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023CA7C: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8023CA80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023CA84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CA88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CA8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CA90: sw          $v0, 0x640C($at)
    MEM_W(0X640C, ctx->r1) = ctx->r2;
    // 0x8023CA94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CA98: sw          $a3, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r7;
    // 0x8023CA9C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023CAA0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023CAA4: jal         0x80050294
    // 0x8023CAA8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8023CAA8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    after_6:
    // 0x8023CAAC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023CAB0: ori         $v0, $v0, 0x5058
    ctx->r2 = ctx->r2 | 0X5058;
    // 0x8023CAB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CAB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023CABC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CAC0: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    // 0x8023CAC4: jal         0x8004A00C
    // 0x8023CAC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_7;
    // 0x8023CAC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_7:
    // 0x8023CACC: jal         0x8023CAE8
    // 0x8023CAD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023CAE8_ovl28(rdram, ctx);
        goto after_8;
    // 0x8023CAD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8023CAD4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023CAD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CADC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023CAE0: jr          $ra
    // 0x8023CAE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023CAE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C1F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C1F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C200: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C204: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C208: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C20C: beq         $v1, $zero, L_8022C228
    if (ctx->r3 == 0) {
        // 0x8022C210: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022C228;
    }
    // 0x8022C210: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C218: beq         $v1, $v0, L_8022C238
    if (ctx->r3 == ctx->r2) {
        // 0x8022C21C: nop
    
            goto L_8022C238;
    }
    // 0x8022C21C: nop

    // 0x8022C220: j           L_8022C360
    // 0x8022C224: nop

        goto L_8022C360;
    // 0x8022C224: nop

L_8022C228:
    // 0x8022C228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C22C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C230: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C234: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022C238:
    // 0x8022C238: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022C23C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C240: bnel        $v1, $v0, L_8022C258
    if (ctx->r3 != ctx->r2) {
        // 0x8022C244: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C258;
    }
    goto skip_0;
    // 0x8022C244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022C248: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022C24C: jal         0x8002A33C
    // 0x8022C250: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C250: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022C254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C258:
    // 0x8022C258: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C25C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022C260: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022C264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C268: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C26C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C270: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C274: jal         0x8004DA90
    // 0x8022C278: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022C278: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C27C: jal         0x80040F30
    // 0x8022C280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022C280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C288: jal         0x8003E934
    // 0x8022C28C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022C28C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022C290: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C294: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C298: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C29C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C2A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C2A4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C2A8: bltz        $v0, L_8022C2C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C2AC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C2C0;
    }
    // 0x8022C2AC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C2B0: beq         $v0, $zero, L_8022C2D0
    if (ctx->r2 == 0) {
        // 0x8022C2B4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C2D0;
    }
    // 0x8022C2B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C2B8: j           L_8022C310
    // 0x8022C2BC: nop

        goto L_8022C310;
    // 0x8022C2BC: nop

L_8022C2C0:
    // 0x8022C2C0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C2C4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C2C8: bne         $v0, $zero, L_8022C310
    if (ctx->r2 != 0) {
        // 0x8022C2CC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C310;
    }
    // 0x8022C2CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022C2D0:
    // 0x8022C2D0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C2D4: jal         0x8009A3B4
    // 0x8022C2D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C2D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022C2DC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C2E0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C2E4: jal         0x8009A3B4
    // 0x8022C2E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C2E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022C2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C2F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C2F4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C2F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C2FC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C300: bne         $v0, $zero, L_8022C338
    if (ctx->r2 != 0) {
        // 0x8022C304: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C338;
    }
    // 0x8022C304: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C308: j           L_8022C344
    // 0x8022C30C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022C344;
    // 0x8022C30C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C310:
    // 0x8022C310: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022C314: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022C318: beq         $v0, $zero, L_8022C34C
    if (ctx->r2 == 0) {
        // 0x8022C31C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C34C;
    }
    // 0x8022C31C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C320: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C324: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C328: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C32C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C330: beq         $v0, $zero, L_8022C340
    if (ctx->r2 == 0) {
        // 0x8022C334: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C340;
    }
    // 0x8022C334: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022C338:
    // 0x8022C338: j           L_8022C360
    // 0x8022C33C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022C360;
    // 0x8022C33C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022C340:
    // 0x8022C340: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C344:
    // 0x8022C344: j           L_8022C360
    // 0x8022C348: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022C360;
    // 0x8022C348: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022C34C:
    // 0x8022C34C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C350: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022C354: beq         $v0, $zero, L_8022C360
    if (ctx->r2 == 0) {
        // 0x8022C358: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022C360;
    }
    // 0x8022C358: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022C35C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C360:
    // 0x8022C360: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C36C: jr          $ra
    // 0x8022C370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023234C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023234C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232350: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232358: jal         0x80232424
    // 0x8023235C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80232424_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023235C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232360: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80232364: bne         $v0, $zero, L_802323A4
    if (ctx->r2 != 0) {
        // 0x80232368: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802323A4;
    }
    // 0x80232368: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023236C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232370: bne         $v1, $v0, L_80232384
    if (ctx->r3 != ctx->r2) {
        // 0x80232374: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80232384;
    }
    // 0x80232374: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80232378: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023237C: j           L_8023238C
    // 0x80232380: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
        goto L_8023238C;
    // 0x80232380: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
L_80232384:
    // 0x80232384: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232388: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
L_8023238C:
    // 0x8023238C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80232390: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232394: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80232398: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023239C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802323A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802323A4:
    // 0x802323A4: jal         0x80232444
    // 0x802323A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232444_ovl28(rdram, ctx);
        goto after_1;
    // 0x802323A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802323AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802323B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802323B4: jr          $ra
    // 0x802323B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802323B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024829C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024829C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802482A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802482A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802482A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802482AC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802482B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802482B4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802482B8: jal         0x8004D5D4
    // 0x802482BC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802482BC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802482C0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802482C4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802482C8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802482CC: bne         $v1, $zero, L_802482DC
    if (ctx->r3 != 0) {
        // 0x802482D0: sw          $v0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r2;
            goto L_802482DC;
    }
    // 0x802482D0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802482D4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802482D8: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_802482DC:
    // 0x802482DC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802482E0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802482E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802482E8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802482EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802482F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802482F4: jr          $ra
    // 0x802482F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802482F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C87C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C87C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024C880: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024C884: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024C888: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024C88C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024C890: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024C894: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8024C898: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8024C89C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C8A0: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8024C8A4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8024C8A8: bne         $v0, $v1, L_8024C9AC
    if (ctx->r2 != ctx->r3) {
        // 0x8024C8AC: nop
    
            goto L_8024C9AC;
    }
    // 0x8024C8AC: nop

    // 0x8024C8B0: jal         0x8004F144
    // 0x8024C8B4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024C8B4: nop

    after_0:
    // 0x8024C8B8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024C8BC: beq         $s1, $zero, L_8024C9AC
    if (ctx->r17 == 0) {
        // 0x8024C8C0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8024C9AC;
    }
    // 0x8024C8C0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8024C8C4: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8024C8C8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8024C8CC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8024C8D0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8024C8D4: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8024C8D8: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8024C8DC: jal         0x800A3450
    // 0x8024C8E0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024C8E0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x8024C8E4: lbu         $v1, 0xD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XD);
    // 0x8024C8E8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024C8EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C8F0: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8024C8F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024C8F8: jal         0x800A3450
    // 0x8024C8FC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024C8FC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x8024C900: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x8024C904: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8024C908: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C90C: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8024C910: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x8024C914: jal         0x800A3450
    // 0x8024C918: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024C918: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8024C91C: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8024C920: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x8024C924: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x8024C928: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8024C92C: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x8024C930: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C934: jal         0x800A3450
    // 0x8024C938: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8024C938: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x8024C93C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024C940: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8024C944: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8024C948: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x8024C94C: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8024C950: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x8024C954: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024C958: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024C95C: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x8024C960: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8024C964: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8024C968: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x8024C96C: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x8024C970: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x8024C974: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8024C978: blez        $v0, L_8024C99C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024C97C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8024C99C;
    }
    // 0x8024C97C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8024C980:
    // 0x8024C980: jal         0x8024C770
    // 0x8024C984: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8024C770_ovl28(rdram, ctx);
        goto after_5;
    // 0x8024C984: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8024C988: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8024C98C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024C990: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024C994: bne         $v0, $zero, L_8024C980
    if (ctx->r2 != 0) {
        // 0x8024C998: nop
    
            goto L_8024C980;
    }
    // 0x8024C998: nop

L_8024C99C:
    // 0x8024C99C: jal         0x800A3450
    // 0x8024C9A0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8024C9A0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x8024C9A4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024C9A8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8024C9AC:
    // 0x8024C9AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024C9B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024C9B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024C9B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024C9BC: jr          $ra
    // 0x8024C9C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024C9C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802383E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802383E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802383E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802383EC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802383F0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802383F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802383F8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802383FC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80238400: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238404: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80238408: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8023840C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80238410: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80238414: beq         $a0, $v0, L_80238430
    if (ctx->r4 == ctx->r2) {
        // 0x80238418: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80238430;
    }
    // 0x80238418: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023841C: bne         $a0, $v0, L_8023842C
    if (ctx->r4 != ctx->r2) {
        // 0x80238420: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023842C;
    }
    // 0x80238420: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80238424: j           L_80238430
    // 0x80238428: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80238430;
    // 0x80238428: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023842C:
    // 0x8023842C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80238430:
    // 0x80238430: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80238434: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80238438: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023843C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80238440: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80238444: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80238448: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023844C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238450: beq         $a0, $v1, L_80238478
    if (ctx->r4 == ctx->r3) {
        // 0x80238454: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80238478;
    }
    // 0x80238454: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80238458: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8023845C: jal         0x8003B85C
    // 0x80238460: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80238460: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80238464: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80238468: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8023846C: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80238470: jal         0x8003B840
    // 0x80238474: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80238474: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80238478:
    // 0x80238478: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8023847C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80238480: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80238484: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80238488: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8023848C: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80238490: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80238494: beq         $v1, $v0, L_802384B0
    if (ctx->r3 == ctx->r2) {
        // 0x80238498: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802384B0;
    }
    // 0x80238498: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023849C: bne         $v1, $v0, L_802384AC
    if (ctx->r3 != ctx->r2) {
        // 0x802384A0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802384AC;
    }
    // 0x802384A0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802384A4: j           L_802384B0
    // 0x802384A8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_802384B0;
    // 0x802384A8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_802384AC:
    // 0x802384AC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_802384B0:
    // 0x802384B0: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x802384B4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802384B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802384BC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802384C0: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x802384C4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802384C8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802384CC: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802384D0: beq         $a0, $v1, L_802384F8
    if (ctx->r4 == ctx->r3) {
        // 0x802384D4: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802384F8;
    }
    // 0x802384D4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802384D8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802384DC: jal         0x8003B85C
    // 0x802384E0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802384E0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802384E4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802384E8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802384EC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802384F0: jal         0x8003B840
    // 0x802384F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802384F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802384F8:
    // 0x802384F8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802384FC: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80238500: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80238504: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80238508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023850C: jr          $ra
    // 0x80238510: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80238510: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80238514: nop

    // 0x80238518: nop

    // 0x8023851C: nop

;}
RECOMP_FUNC void func_8022CB48_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CB4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CB58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CB5C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CB60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB64: beq         $v1, $v0, L_8022CBB0
    if (ctx->r3 == ctx->r2) {
        // 0x8022CB68: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022CBB0;
    }
    // 0x8022CB68: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022CB6C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CB70: beql        $v0, $zero, L_8022CB88
    if (ctx->r2 == 0) {
        // 0x8022CB74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CB88;
    }
    goto skip_0;
    // 0x8022CB74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CB78: beq         $v1, $zero, L_8022CB98
    if (ctx->r3 == 0) {
        // 0x8022CB7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CB98;
    }
    // 0x8022CB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB80: j           L_8022CC24
    // 0x8022CB84: nop

        goto L_8022CC24;
    // 0x8022CB84: nop

L_8022CB88:
    // 0x8022CB88: beq         $v1, $v0, L_8022CBDC
    if (ctx->r3 == ctx->r2) {
        // 0x8022CB8C: nop
    
            goto L_8022CBDC;
    }
    // 0x8022CB8C: nop

    // 0x8022CB90: j           L_8022CC24
    // 0x8022CB94: nop

        goto L_8022CC24;
    // 0x8022CB94: nop

L_8022CB98:
    // 0x8022CB98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CB9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CBA0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CBA4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022CBA8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022CBAC: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022CBB0:
    // 0x8022CBB0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022CBB4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022CBB8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022CBBC: bgez        $v0, L_8022CBD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CBC0: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_8022CBD0;
    }
    // 0x8022CBC0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022CBC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CBC8: j           L_8022CBDC
    // 0x8022CBCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022CBDC;
    // 0x8022CBCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CBD0:
    // 0x8022CBD0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022CBD4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CBD8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022CBDC:
    // 0x8022CBDC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022CBE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CBE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CBEC: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x8022CBF0: jal         0x8004DA90
    // 0x8022CBF4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CBF4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x8022CBF8: jal         0x80040F30
    // 0x8022CBFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022CBFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CC00: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022CC04: beq         $v0, $zero, L_8022CC24
    if (ctx->r2 == 0) {
        // 0x8022CC08: nop
    
            goto L_8022CC24;
    }
    // 0x8022CC08: nop

    // 0x8022CC0C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022CC10: bgez        $v0, L_8022CC24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CC14: nop
    
            goto L_8022CC24;
    }
    // 0x8022CC14: nop

    // 0x8022CC18: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CC1C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CC20: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CC24:
    // 0x8022CC24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC30: jr          $ra
    // 0x8022CC34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CC34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802367D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802367D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802367DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802367E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802367E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802367E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802367EC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802367F0: beq         $v1, $zero, L_80236808
    if (ctx->r3 == 0) {
        // 0x802367F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236808;
    }
    // 0x802367F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802367F8: beq         $v1, $v0, L_80236888
    if (ctx->r3 == ctx->r2) {
        // 0x802367FC: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80236888;
    }
    // 0x802367FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80236800: j           L_80236904
    // 0x80236804: nop

        goto L_80236904;
    // 0x80236804: nop

L_80236808:
    // 0x80236808: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023680C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80236810: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80236814: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80236818: beq         $a1, $v0, L_80236860
    if (ctx->r5 == ctx->r2) {
        // 0x8023681C: slti        $v0, $a1, 0x1F
        ctx->r2 = SIGNED(ctx->r5) < 0X1F ? 1 : 0;
            goto L_80236860;
    }
    // 0x8023681C: slti        $v0, $a1, 0x1F
    ctx->r2 = SIGNED(ctx->r5) < 0X1F ? 1 : 0;
    // 0x80236820: beq         $v0, $zero, L_80236838
    if (ctx->r2 == 0) {
        // 0x80236824: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80236838;
    }
    // 0x80236824: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80236828: beq         $a1, $v0, L_8023684C
    if (ctx->r5 == ctx->r2) {
        // 0x8023682C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023684C;
    }
    // 0x8023682C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236830: j           L_80236904
    // 0x80236834: nop

        goto L_80236904;
    // 0x80236834: nop

L_80236838:
    // 0x80236838: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023683C: beq         $a1, $v0, L_80236878
    if (ctx->r5 == ctx->r2) {
        // 0x80236840: nop
    
            goto L_80236878;
    }
    // 0x80236840: nop

    // 0x80236844: j           L_80236904
    // 0x80236848: nop

        goto L_80236904;
    // 0x80236848: nop

L_8023684C:
    // 0x8023684C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236850: jal         0x80236A60
    // 0x80236854: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x80236854: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80236858: j           L_80236904
    // 0x8023685C: nop

        goto L_80236904;
    // 0x8023685C: nop

L_80236860:
    // 0x80236860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236864: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236868: jal         0x80236A60
    // 0x8023686C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023686C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80236870: j           L_80236904
    // 0x80236874: nop

        goto L_80236904;
    // 0x80236874: nop

L_80236878:
    // 0x80236878: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023687C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236880: j           L_80236904
    // 0x80236884: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80236904;
    // 0x80236884: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80236888:
    // 0x80236888: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023688C: bne         $v1, $v0, L_802368B0
    if (ctx->r3 != ctx->r2) {
        // 0x80236890: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_802368B0;
    }
    // 0x80236890: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80236894: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236898: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
    // 0x8023689C: bne         $v1, $v0, L_802368AC
    if (ctx->r3 != ctx->r2) {
        // 0x802368A0: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_802368AC;
    }
    // 0x802368A0: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x802368A4: j           L_80236904
    // 0x802368A8: sb          $zero, 0xB($a2)
    MEM_B(0XB, ctx->r6) = 0;
        goto L_80236904;
    // 0x802368A8: sb          $zero, 0xB($a2)
    MEM_B(0XB, ctx->r6) = 0;
L_802368AC:
    // 0x802368AC: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
L_802368B0:
    // 0x802368B0: bne         $v1, $v0, L_80236904
    if (ctx->r3 != ctx->r2) {
        // 0x802368B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236904;
    }
    // 0x802368B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802368B8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802368BC: bne         $v1, $v0, L_80236904
    if (ctx->r3 != ctx->r2) {
        // 0x802368C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236904;
    }
    // 0x802368C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802368C4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x802368C8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802368CC: addiu       $v0, $zero, 0x199
    ctx->r2 = ADD32(0, 0X199);
    // 0x802368D0: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x802368D4: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x802368D8: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x802368DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802368E0: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x802368E4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x802368E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802368EC: sb          $s0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r16;
    // 0x802368F0: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x802368F4: jal         0x80236A60
    // 0x802368F8: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    func_80236A60_ovl28(rdram, ctx);
        goto after_2;
    // 0x802368F8: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    after_2:
    // 0x802368FC: sb          $s0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r16;
    // 0x80236900: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80236904:
    // 0x80236904: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236908: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023690C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236910: jr          $ra
    // 0x80236914: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236914: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802468D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802468D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802468D4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802468D8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x802468DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802468E0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802468E4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802468E8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802468EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802468F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802468F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802468F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802468FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246900: lw          $s7, 0x18($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X18);
    // 0x80246904: lw          $s4, 0x8($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X8);
    // 0x80246908: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8024690C: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80246910: addiu       $s3, $s3, 0x6430
    ctx->r19 = ADD32(ctx->r19, 0X6430);
    // 0x80246914: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x80246918: addiu       $a3, $fp, 0x14
    ctx->r7 = ADD32(ctx->r30, 0X14);
    // 0x8024691C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80246920: beq         $v1, $v0, L_80246C2C
    if (ctx->r3 == ctx->r2) {
        // 0x80246924: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_80246C2C;
    }
    // 0x80246924: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80246928: addiu       $s2, $s4, 0x10
    ctx->r18 = ADD32(ctx->r20, 0X10);
    // 0x8024692C: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
L_80246930:
    // 0x80246930: jal         0x8006033C
    // 0x80246934: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80246934: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_0:
    // 0x80246938: bnel        $v0, $zero, L_80246C14
    if (ctx->r2 != 0) {
        // 0x8024693C: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_80246C14;
    }
    goto skip_0;
    // 0x8024693C: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x80246940: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x80246944: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80246948: beq         $v1, $v0, L_80246A40
    if (ctx->r3 == ctx->r2) {
        // 0x8024694C: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_80246A40;
    }
    // 0x8024694C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80246950: beq         $v0, $zero, L_80246968
    if (ctx->r2 == 0) {
        // 0x80246954: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80246968;
    }
    // 0x80246954: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80246958: beq         $v1, $v0, L_80246984
    if (ctx->r3 == ctx->r2) {
        // 0x8024695C: nop
    
            goto L_80246984;
    }
    // 0x8024695C: nop

    // 0x80246960: j           L_80246C14
    // 0x80246964: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_80246C14;
    // 0x80246964: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80246968:
    // 0x80246968: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8024696C: beq         $v1, $v0, L_80246AFC
    if (ctx->r3 == ctx->r2) {
        // 0x80246970: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80246AFC;
    }
    // 0x80246970: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80246974: beq         $v1, $v0, L_80246BA8
    if (ctx->r3 == ctx->r2) {
        // 0x80246978: nop
    
            goto L_80246BA8;
    }
    // 0x80246978: nop

    // 0x8024697C: j           L_80246C14
    // 0x80246980: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_80246C14;
    // 0x80246980: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80246984:
    // 0x80246984: jal         0x8004EEAC
    // 0x80246988: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x80246988: nop

    after_1:
    // 0x8024698C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80246990: beq         $s1, $zero, L_80246C10
    if (ctx->r17 == 0) {
        // 0x80246994: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80246C10;
    }
    // 0x80246994: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80246998: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8024699C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802469A0: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x802469A4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802469A8: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x802469AC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802469B0: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x802469B4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x802469B8: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x802469BC: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x802469C0: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x802469C4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x802469C8: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x802469CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802469D0: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x802469D4: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802469D8: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x802469DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802469E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802469E4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x802469E8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802469EC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x802469F0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x802469F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802469F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802469FC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80246A00: jal         0x8009A3B4
    // 0x80246A04: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80246A04: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_2:
    // 0x80246A08: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80246A0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80246A10: jal         0x8009A3B4
    // 0x80246A14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80246A14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80246A18: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80246A1C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80246A20: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80246A24: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80246A28: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80246A2C: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80246A30: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80246A34: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80246A38: j           L_80246C04
    // 0x80246A3C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80246C04;
    // 0x80246A3C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80246A40:
    // 0x80246A40: jal         0x8004EF48
    // 0x80246A44: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_4;
    // 0x80246A44: nop

    after_4:
    // 0x80246A48: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80246A4C: beq         $s1, $zero, L_80246C10
    if (ctx->r17 == 0) {
        // 0x80246A50: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80246C10;
    }
    // 0x80246A50: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80246A54: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80246A58: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80246A5C: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80246A60: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80246A64: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80246A68: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80246A6C: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x80246A70: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80246A74: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x80246A78: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80246A7C: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80246A80: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80246A84: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x80246A88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246A8C: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80246A90: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80246A94: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80246A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246A9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246AA0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80246AA4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80246AA8: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80246AAC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80246AB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246AB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246AB8: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80246ABC: jal         0x8009A3B4
    // 0x80246AC0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80246AC0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x80246AC4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80246AC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80246ACC: jal         0x8009A3B4
    // 0x80246AD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80246AD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80246AD4: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80246AD8: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80246ADC: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80246AE0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80246AE4: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80246AE8: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80246AEC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80246AF0: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80246AF4: j           L_80246C04
    // 0x80246AF8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80246C04;
    // 0x80246AF8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80246AFC:
    // 0x80246AFC: jal         0x8004EFE4
    // 0x80246B00: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x80246B00: nop

    after_7:
    // 0x80246B04: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80246B08: beq         $s1, $zero, L_80246C10
    if (ctx->r17 == 0) {
        // 0x80246B0C: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80246C10;
    }
    // 0x80246B0C: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80246B10: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80246B14: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80246B18: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80246B1C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80246B20: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80246B24: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80246B28: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80246B2C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80246B30: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x80246B34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246B38: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80246B3C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80246B40: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80246B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246B48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246B4C: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80246B50: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80246B54: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80246B58: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80246B5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246B60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246B64: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80246B68: jal         0x8009A3B4
    // 0x80246B6C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80246B6C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_8:
    // 0x80246B70: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80246B74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80246B78: jal         0x8009A3B4
    // 0x80246B7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80246B7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80246B80: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80246B84: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80246B88: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80246B8C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80246B90: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80246B94: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80246B98: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80246B9C: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80246BA0: j           L_80246C04
    // 0x80246BA4: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80246C04;
    // 0x80246BA4: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80246BA8:
    // 0x80246BA8: jal         0x8004F2C4
    // 0x80246BAC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x80246BAC: nop

    after_10:
    // 0x80246BB0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80246BB4: beq         $s0, $zero, L_80246C10
    if (ctx->r16 == 0) {
        // 0x80246BB8: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80246C10;
    }
    // 0x80246BB8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80246BBC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80246BC0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80246BC4: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80246BC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80246BCC: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80246BD0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80246BD4: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80246BD8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80246BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246BE0: jal         0x8009A3B4
    // 0x80246BE4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80246BE4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x80246BE8: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x80246BEC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80246BF0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80246BF4: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x80246BF8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80246BFC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80246C00: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80246C04:
    // 0x80246C04: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    // 0x80246C08: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x80246C0C: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_80246C10:
    // 0x80246C10: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80246C14:
    // 0x80246C14: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x80246C18: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x80246C1C: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x80246C20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80246C24: bne         $v1, $v0, L_80246930
    if (ctx->r3 != ctx->r2) {
        // 0x80246C28: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80246930;
    }
    // 0x80246C28: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80246C2C:
    // 0x80246C2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80246C30: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80246C34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80246C38: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x80246C3C: lhu         $v0, 0x2($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X2);
    // 0x80246C40: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x80246C44: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x80246C48: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80246C4C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x80246C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246C54: sb          $v0, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r2;
    // 0x80246C58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80246C5C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80246C60: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80246C64: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80246C68: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80246C6C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80246C70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80246C74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80246C78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80246C7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80246C80: jr          $ra
    // 0x80246C84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80246C84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80246C88: nop

    // 0x80246C8C: nop

;}
RECOMP_FUNC void func_8022DC60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DC68: jal         0x8004F418
    // 0x8022DC6C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022DC6C: nop

    after_0:
    // 0x8022DC70: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC74: jr          $ra
    // 0x8022DC78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DC78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802266C8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266C8: jr          $ra
    // 0x802266CC: nop

    TRACE_RETURN()
    return;
    // 0x802266CC: nop

;}
RECOMP_FUNC void func_80237F90_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237F98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237F9C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80237FA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237FA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237FA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237FAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237FB0: jal         0x8009A3B4
    // 0x80237FB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237FB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80237FB8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80237FBC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80237FC0: jal         0x8009A3B4
    // 0x80237FC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237FC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80237FC8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80237FCC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80237FD0: jal         0x8009A3B4
    // 0x80237FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80237FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80237FD8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80237FDC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80237FE0: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80237FE4: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x80237FE8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80237FEC: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80237FF0: beq         $v0, $zero, L_802382A4
    if (ctx->r2 == 0) {
        // 0x80237FF4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802382A4;
    }
    // 0x80237FF4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80237FF8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237FFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80238000: addu        $at, $at, $v0
    gpr jr_addend_80238008 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238004: lw          $v0, 0x5EB8($at)
    ctx->r2 = ADD32(ctx->r1, 0X5EB8);
    // 0x80238008: jr          $v0
    // 0x8023800C: nop

    switch (jr_addend_80238008 >> 2) {
        case 0: goto L_80238010; break;
        case 1: goto L_80238024; break;
        case 2: goto L_80238054; break;
        case 3: goto L_80238174; break;
        case 4: goto L_8023819C; break;
        case 5: goto L_802381B8; break;
        case 6: goto L_80238200; break;
        case 7: goto L_802382A4; break;
        default: switch_error(__func__, 0x80238008, 0x80255EB8);
    }
    // 0x8023800C: nop

L_80238010:
    // 0x80238010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238014: jal         0x802382F4
    // 0x80238018: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802382F4_ovl28(rdram, ctx);
        goto after_3;
    // 0x80238018: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023801C: j           L_802382A8
    // 0x80238020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802382A8;
    // 0x80238020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238024:
    // 0x80238024: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238028: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023802C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80238030: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80238034: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x80238038: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802382A8;
    }
    // 0x80238038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023803C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80238040: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238044: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x80238048: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_802382A8;
    }
    // 0x80238048: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023804C: j           L_8023827C
    // 0x80238050: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8023827C;
    // 0x80238050: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80238054:
    // 0x80238054: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80238058: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8023805C: bne         $v1, $v0, L_8023814C
    if (ctx->r3 != ctx->r2) {
        // 0x80238060: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_8023814C;
    }
    // 0x80238060: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80238064: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80238068: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023806C: beq         $v1, $v0, L_80238134
    if (ctx->r3 == ctx->r2) {
        // 0x80238070: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_80238134;
    }
    // 0x80238070: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x80238074: beq         $v0, $zero, L_802380B0
    if (ctx->r2 == 0) {
        // 0x80238078: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802380B0;
    }
    // 0x80238078: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023807C: beq         $v1, $v0, L_802380F4
    if (ctx->r3 == ctx->r2) {
        // 0x80238080: slti        $v0, $v1, 0x1F
        ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
            goto L_802380F4;
    }
    // 0x80238080: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80238084: beq         $v0, $zero, L_8023809C
    if (ctx->r2 == 0) {
        // 0x80238088: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023809C;
    }
    // 0x80238088: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023808C: beq         $v1, $v0, L_80238120
    if (ctx->r3 == ctx->r2) {
        // 0x80238090: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238120;
    }
    // 0x80238090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238094: j           L_80238144
    // 0x80238098: nop

        goto L_80238144;
    // 0x80238098: nop

L_8023809C:
    // 0x8023809C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802380A0: beq         $v1, $v0, L_80238120
    if (ctx->r3 == ctx->r2) {
        // 0x802380A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238120;
    }
    // 0x802380A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802380A8: j           L_80238144
    // 0x802380AC: nop

        goto L_80238144;
    // 0x802380AC: nop

L_802380B0:
    // 0x802380B0: addiu       $v0, $zero, 0xD7
    ctx->r2 = ADD32(0, 0XD7);
    // 0x802380B4: beq         $v1, $v0, L_8023810C
    if (ctx->r3 == ctx->r2) {
        // 0x802380B8: slti        $v0, $v1, 0xD8
        ctx->r2 = SIGNED(ctx->r3) < 0XD8 ? 1 : 0;
            goto L_8023810C;
    }
    // 0x802380B8: slti        $v0, $v1, 0xD8
    ctx->r2 = SIGNED(ctx->r3) < 0XD8 ? 1 : 0;
    // 0x802380BC: beq         $v0, $zero, L_802380D4
    if (ctx->r2 == 0) {
        // 0x802380C0: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_802380D4;
    }
    // 0x802380C0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802380C4: beq         $v1, $v0, L_802380E8
    if (ctx->r3 == ctx->r2) {
        // 0x802380C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802380E8;
    }
    // 0x802380C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802380CC: j           L_80238144
    // 0x802380D0: nop

        goto L_80238144;
    // 0x802380D0: nop

L_802380D4:
    // 0x802380D4: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x802380D8: beq         $v1, $v0, L_80238138
    if (ctx->r3 == ctx->r2) {
        // 0x802380DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238138;
    }
    // 0x802380DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802380E0: j           L_80238144
    // 0x802380E4: nop

        goto L_80238144;
    // 0x802380E4: nop

L_802380E8:
    // 0x802380E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802380EC: jal         0x80238394
    // 0x802380F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80238394_ovl28(rdram, ctx);
        goto after_4;
    // 0x802380F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_802380F4:
    // 0x802380F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802380F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802380FC: jal         0x802383BC
    // 0x80238100: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802383BC_ovl28(rdram, ctx);
        goto after_5;
    // 0x80238100: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x80238104: j           L_80238144
    // 0x80238108: nop

        goto L_80238144;
    // 0x80238108: nop

L_8023810C:
    // 0x8023810C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238110: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238114: jal         0x80238394
    // 0x80238118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80238394_ovl28(rdram, ctx);
        goto after_6;
    // 0x80238118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8023811C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238120:
    // 0x80238120: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238124: jal         0x802383BC
    // 0x80238128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802383BC_ovl28(rdram, ctx);
        goto after_7;
    // 0x80238128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8023812C: j           L_80238144
    // 0x80238130: nop

        goto L_80238144;
    // 0x80238130: nop

L_80238134:
    // 0x80238134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238138:
    // 0x80238138: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023813C: jal         0x80238394
    // 0x80238140: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80238394_ovl28(rdram, ctx);
        goto after_8;
    // 0x80238140: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
L_80238144:
    // 0x80238144: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80238148: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_8023814C:
    // 0x8023814C: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x80238150: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802382A8;
    }
    // 0x80238150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238154: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80238158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023815C: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x80238160: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_802382A8;
    }
    // 0x80238160: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238164: jal         0x80238394
    // 0x80238168: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80238394_ovl28(rdram, ctx);
        goto after_9;
    // 0x80238168: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x8023816C: j           L_80238274
    // 0x80238170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80238274;
    // 0x80238170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238174:
    // 0x80238174: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80238178: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8023817C: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x80238180: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802382A8;
    }
    // 0x80238180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238184: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238188: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023818C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238190: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238194: j           L_8023827C
    // 0x80238198: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_8023827C;
    // 0x80238198: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_8023819C:
    // 0x8023819C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802381A0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802381A4: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x802381A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802382A8;
    }
    // 0x802381A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802381AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802381B0: j           L_80238284
    // 0x802381B4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80238284;
    // 0x802381B4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802381B8:
    // 0x802381B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802381BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802381C0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802381C4: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x802381C8: beq         $v1, $v0, L_80238294
    if (ctx->r3 == ctx->r2) {
        // 0x802381CC: slti        $v0, $v1, 0x6F
        ctx->r2 = SIGNED(ctx->r3) < 0X6F ? 1 : 0;
            goto L_80238294;
    }
    // 0x802381CC: slti        $v0, $v1, 0x6F
    ctx->r2 = SIGNED(ctx->r3) < 0X6F ? 1 : 0;
    // 0x802381D0: beq         $v0, $zero, L_802381E8
    if (ctx->r2 == 0) {
        // 0x802381D4: addiu       $v0, $zero, 0x5F
        ctx->r2 = ADD32(0, 0X5F);
            goto L_802381E8;
    }
    // 0x802381D4: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x802381D8: beq         $v1, $v0, L_80238244
    if (ctx->r3 == ctx->r2) {
        // 0x802381DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238244;
    }
    // 0x802381DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802381E0: j           L_802382A4
    // 0x802381E4: nop

        goto L_802382A4;
    // 0x802381E4: nop

L_802381E8:
    // 0x802381E8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x802381EC: bne         $v1, $v0, L_802382A8
    if (ctx->r3 != ctx->r2) {
        // 0x802381F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802382A8;
    }
    // 0x802381F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802381F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802381F8: j           L_8023827C
    // 0x802381FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_8023827C;
    // 0x802381FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80238200:
    // 0x80238200: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80238204: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80238208: beq         $v1, $v0, L_80238258
    if (ctx->r3 == ctx->r2) {
        // 0x8023820C: slti        $v0, $v1, 0xA1
        ctx->r2 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
            goto L_80238258;
    }
    // 0x8023820C: slti        $v0, $v1, 0xA1
    ctx->r2 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x80238210: beq         $v0, $zero, L_80238228
    if (ctx->r2 == 0) {
        // 0x80238214: addiu       $v0, $zero, 0x91
        ctx->r2 = ADD32(0, 0X91);
            goto L_80238228;
    }
    // 0x80238214: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
    // 0x80238218: beq         $v1, $v0, L_80238244
    if (ctx->r3 == ctx->r2) {
        // 0x8023821C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238244;
    }
    // 0x8023821C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238220: j           L_802382A4
    // 0x80238224: nop

        goto L_802382A4;
    // 0x80238224: nop

L_80238228:
    // 0x80238228: addiu       $v0, $zero, 0xC6
    ctx->r2 = ADD32(0, 0XC6);
    // 0x8023822C: beq         $v1, $v0, L_80238270
    if (ctx->r3 == ctx->r2) {
        // 0x80238230: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_80238270;
    }
    // 0x80238230: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80238234: beq         $v1, $v0, L_80238298
    if (ctx->r3 == ctx->r2) {
        // 0x80238238: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238298;
    }
    // 0x80238238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023823C: j           L_802382A4
    // 0x80238240: nop

        goto L_802382A4;
    // 0x80238240: nop

L_80238244:
    // 0x80238244: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238248: jal         0x802383BC
    // 0x8023824C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802383BC_ovl28(rdram, ctx);
        goto after_10;
    // 0x8023824C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x80238250: j           L_802382A8
    // 0x80238254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802382A8;
    // 0x80238254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238258:
    // 0x80238258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023825C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238260: jal         0x802383BC
    // 0x80238264: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802383BC_ovl28(rdram, ctx);
        goto after_11;
    // 0x80238264: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x80238268: j           L_802382A8
    // 0x8023826C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802382A8;
    // 0x8023826C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238270:
    // 0x80238270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238274:
    // 0x80238274: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238278: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8023827C:
    // 0x8023827C: jal         0x802383BC
    // 0x80238280: nop

    func_802383BC_ovl28(rdram, ctx);
        goto after_12;
    // 0x80238280: nop

    after_12:
L_80238284:
    // 0x80238284: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238288: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023828C: j           L_802382A4
    // 0x80238290: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802382A4;
    // 0x80238290: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80238294:
    // 0x80238294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238298:
    // 0x80238298: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023829C: jal         0x80238394
    // 0x802382A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80238394_ovl28(rdram, ctx);
        goto after_13;
    // 0x802382A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_13:
L_802382A4:
    // 0x802382A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802382A8:
    // 0x802382A8: jal         0x802383E4
    // 0x802382AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802383E4_ovl28(rdram, ctx);
        goto after_14;
    // 0x802382AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_14:
    // 0x802382B0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802382B4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802382B8: beq         $a1, $v0, L_802382D4
    if (ctx->r5 == ctx->r2) {
        // 0x802382BC: nop
    
            goto L_802382D4;
    }
    // 0x802382BC: nop

    // 0x802382C0: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x802382C4: jal         0x80050294
    // 0x802382C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_15;
    // 0x802382C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x802382CC: j           L_802382DC
    // 0x802382D0: nop

        goto L_802382DC;
    // 0x802382D0: nop

L_802382D4:
    // 0x802382D4: jal         0x8005044C
    // 0x802382D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_16;
    // 0x802382D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_802382DC:
    // 0x802382DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802382E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802382E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802382E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802382EC: jr          $ra
    // 0x802382F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802382F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226CE0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CE0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226CE4: lb          $v0, 0x63AA($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X63AA);
    // 0x80226CE8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80226CEC: lw          $v1, 0x63B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X63B0);
    // 0x80226CF0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80226CF4: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80226CF8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80226CFC: addiu       $a1, $a1, 0x63A8
    ctx->r5 = ADD32(ctx->r5, 0X63A8);
    // 0x80226D00: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80226D04: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80226D08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226D0C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80226D10: beq         $a0, $v0, L_80226D38
    if (ctx->r4 == ctx->r2) {
        // 0x80226D14: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80226D38;
    }
    // 0x80226D14: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80226D18: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80226D1C: bne         $a0, $v0, L_80226D30
    if (ctx->r4 != ctx->r2) {
        // 0x80226D20: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226D30;
    }
    // 0x80226D20: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226D24: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D28: j           L_80226D38
    // 0x80226D2C: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
        goto L_80226D38;
    // 0x80226D2C: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
L_80226D30:
    // 0x80226D30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226D34: sb          $v0, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = ctx->r2;
L_80226D38:
    // 0x80226D38: lb          $v1, 0x2($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X2);
    // 0x80226D3C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80226D40: lb          $a0, 0x5($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X5);
    // 0x80226D44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226D48: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226D4C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x80226D50: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80226D54: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226D58: sb          $v1, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r3;
    // 0x80226D5C: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80226D60: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80226D64: beq         $v1, $v0, L_80226D80
    if (ctx->r3 == ctx->r2) {
        // 0x80226D68: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80226D80;
    }
    // 0x80226D68: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80226D6C: bne         $v1, $v0, L_80226D7C
    if (ctx->r3 != ctx->r2) {
        // 0x80226D70: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226D7C;
    }
    // 0x80226D70: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226D74: j           L_80226D80
    // 0x80226D78: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
        goto L_80226D80;
    // 0x80226D78: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
L_80226D7C:
    // 0x80226D7C: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
L_80226D80:
    // 0x80226D80: lb          $v1, 0x5($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X5);
    // 0x80226D84: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x80226D88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226D8C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226D90: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226D94: sb          $a0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r4;
    // 0x80226D98: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x80226D9C: sb          $v0, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r2;
    // 0x80226DA0: sb          $a0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r4;
    // 0x80226DA4: sb          $v1, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r3;
    // 0x80226DA8: jr          $ra
    // 0x80226DAC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80226DAC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80232B00_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B00: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80232B04: lb          $v0, 0xA7($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XA7);
    // 0x80232B08: bgez        $v0, L_80232B34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232B0C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80232B34;
    }
    // 0x80232B0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80232B10: lhu         $v0, 0x34A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X34A);
    // 0x80232B14: lbu         $a0, 0x9($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X9);
    // 0x80232B18: sb          $v1, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = ctx->r3;
    // 0x80232B1C: sh          $zero, 0x350($a1)
    MEM_H(0X350, ctx->r5) = 0;
    // 0x80232B20: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80232B24: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232B28: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80232B2C: sh          $v0, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r2;
    // 0x80232B30: sb          $a0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r4;
L_80232B34:
    // 0x80232B34: jr          $ra
    // 0x80232B38: nop

    TRACE_RETURN()
    return;
    // 0x80232B38: nop

;}
RECOMP_FUNC void func_80229E20_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229E30: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80229E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E38: beq         $v1, $v0, L_80229E68
    if (ctx->r3 == ctx->r2) {
        // 0x80229E3C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80229E68;
    }
    // 0x80229E3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229E40: beql        $v0, $zero, L_80229E58
    if (ctx->r2 == 0) {
        // 0x80229E44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229E58;
    }
    goto skip_0;
    // 0x80229E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229E48: beq         $v1, $zero, L_80229E8C
    if (ctx->r3 == 0) {
        // 0x80229E4C: nop
    
            goto L_80229E8C;
    }
    // 0x80229E4C: nop

    // 0x80229E50: j           L_80229EC8
    // 0x80229E54: nop

        goto L_80229EC8;
    // 0x80229E54: nop

L_80229E58:
    // 0x80229E58: beq         $v1, $v0, L_80229E80
    if (ctx->r3 == ctx->r2) {
        // 0x80229E5C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80229E80;
    }
    // 0x80229E5C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229E60: j           L_80229EC8
    // 0x80229E64: nop

        goto L_80229EC8;
    // 0x80229E64: nop

L_80229E68:
    // 0x80229E68: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80229E6C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80229E70: jalr        $v0
    // 0x80229E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80229E78: j           L_80229EC8
    // 0x80229E7C: nop

        goto L_80229EC8;
    // 0x80229E7C: nop

L_80229E80:
    // 0x80229E80: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229E84: beq         $v1, $v0, L_80229EC0
    if (ctx->r3 == ctx->r2) {
        // 0x80229E88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229EC0;
    }
    // 0x80229E88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229E8C:
    // 0x80229E8C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80229E90: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80229E94: jalr        $v0
    // 0x80229E98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80229E98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229E9C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229EA0: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80229EA4: bne         $v0, $zero, L_80229EC8
    if (ctx->r2 != 0) {
        // 0x80229EA8: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_80229EC8;
    }
    // 0x80229EA8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80229EAC: beq         $v0, $zero, L_80229EC8
    if (ctx->r2 == 0) {
        // 0x80229EB0: nop
    
            goto L_80229EC8;
    }
    // 0x80229EB0: nop

    // 0x80229EB4: jal         0x80036E48
    // 0x80229EB8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80229EB8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x80229EBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229EC0:
    // 0x80229EC0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80229EC4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_80229EC8:
    // 0x80229EC8: jal         0x8006072C
    // 0x80229ECC: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_3;
    // 0x80229ECC: nop

    after_3:
    // 0x80229ED0: beq         $v0, $zero, L_80229EE4
    if (ctx->r2 == 0) {
        // 0x80229ED4: nop
    
            goto L_80229EE4;
    }
    // 0x80229ED4: nop

    // 0x80229ED8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229EDC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229EE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229EE4:
    // 0x80229EE4: jal         0x8022B7B8
    // 0x80229EE8: nop

    func_8022B7B8_ovl28(rdram, ctx);
        goto after_4;
    // 0x80229EE8: nop

    after_4:
    // 0x80229EEC: jal         0x8005FB90
    // 0x80229EF0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x80229EF0: nop

    after_5:
    // 0x80229EF4: jal         0x80060018
    // 0x80229EF8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x80229EF8: nop

    after_6:
    // 0x80229EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229F00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229F04: jr          $ra
    // 0x80229F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022922C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022922C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229230: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229234: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022923C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80229240: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80229244: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80229248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022924C: beq         $v1, $v0, L_8022933C
    if (ctx->r3 == ctx->r2) {
        // 0x80229250: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022933C;
    }
    // 0x80229250: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229254: beql        $v0, $zero, L_8022926C
    if (ctx->r2 == 0) {
        // 0x80229258: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022926C;
    }
    goto skip_0;
    // 0x80229258: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022925C: beq         $v1, $zero, L_8022927C
    if (ctx->r3 == 0) {
        // 0x80229260: addiu       $a0, $zero, 0x7E
        ctx->r4 = ADD32(0, 0X7E);
            goto L_8022927C;
    }
    // 0x80229260: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80229264: j           L_80229384
    // 0x80229268: nop

        goto L_80229384;
    // 0x80229268: nop

L_8022926C:
    // 0x8022926C: beq         $v1, $v0, L_8022935C
    if (ctx->r3 == ctx->r2) {
        // 0x80229270: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8022935C;
    }
    // 0x80229270: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80229274: j           L_80229384
    // 0x80229278: nop

        goto L_80229384;
    // 0x80229278: nop

L_8022927C:
    // 0x8022927C: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x80229280: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80229284: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229288: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    // 0x8022928C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80229290: jal         0x8004CB2C
    // 0x80229294: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80229294: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    after_0:
    // 0x80229298: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022929C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802292A0: jal         0x8005F6B4
    // 0x802292A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x802292A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802292A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802292AC: addiu       $a0, $a0, 0x19A0
    ctx->r4 = ADD32(ctx->r4, 0X19A0);
    // 0x802292B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802292B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802292B8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802292BC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802292C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802292C4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802292C8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802292CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802292D0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802292D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802292D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802292DC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802292E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802292E4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802292E8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802292EC: addiu       $v0, $v0, 0x19F0
    ctx->r2 = ADD32(ctx->r2, 0X19F0);
    // 0x802292F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802292F4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802292F8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802292FC: addiu       $v0, $v0, 0x1A3C
    ctx->r2 = ADD32(ctx->r2, 0X1A3C);
    // 0x80229300: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229304: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80229308: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022930C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80229310: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229314: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80229318: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022931C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80229320: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229324: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80229328: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022932C: jal         0x8005FA7C
    // 0x80229330: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80229330: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_2:
    // 0x80229334: j           L_8022934C
    // 0x80229338: nop

        goto L_8022934C;
    // 0x80229338: nop

L_8022933C:
    // 0x8022933C: jal         0x8006FF84
    // 0x80229340: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x80229340: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_3:
    // 0x80229344: beq         $v0, $zero, L_80229384
    if (ctx->r2 == 0) {
        // 0x80229348: nop
    
            goto L_80229384;
    }
    // 0x80229348: nop

L_8022934C:
    // 0x8022934C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80229350: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229354: j           L_80229384
    // 0x80229358: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80229384;
    // 0x80229358: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022935C:
    // 0x8022935C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229360: sw          $zero, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = 0;
    // 0x80229364: jal         0x80036B1C
    // 0x80229368: ori         $a0, $a0, 0x6700
    ctx->r4 = ctx->r4 | 0X6700;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_4;
    // 0x80229368: ori         $a0, $a0, 0x6700
    ctx->r4 = ctx->r4 | 0X6700;
    after_4:
    // 0x8022936C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80229370: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80229374: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80229378: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022937C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229380: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229384:
    // 0x80229384: jal         0x8005FB90
    // 0x80229388: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x80229388: nop

    after_5:
    // 0x8022938C: jal         0x80060018
    // 0x80229390: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x80229390: nop

    after_6:
    // 0x80229394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229398: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022939C: jr          $ra
    // 0x802293A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802293A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B2D4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B2D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B2D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B2DC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022B2E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B2E4: beq         $v1, $v0, L_8022B2FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B2E8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022B2FC;
    }
    // 0x8022B2E8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022B2EC: beq         $v1, $v0, L_8022B310
    if (ctx->r3 == ctx->r2) {
        // 0x8022B2F0: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_8022B310;
    }
    // 0x8022B2F0: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022B2F4: j           L_8022B318
    // 0x8022B2F8: nop

        goto L_8022B318;
    // 0x8022B2F8: nop

L_8022B2FC:
    // 0x8022B2FC: jal         0x8022B750
    // 0x8022B300: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022B300: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x8022B304: jal         0x8022B784
    // 0x8022B308: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8022B784_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022B308: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x8022B30C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8022B310:
    // 0x8022B310: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B314: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022B318:
    // 0x8022B318: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B31C: jr          $ra
    // 0x8022B320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249FB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249FB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80249FB4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80249FB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80249FBC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80249FC0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80249FC4: addiu       $a1, $a1, 0x6330
    ctx->r5 = ADD32(ctx->r5, 0X6330);
    // 0x80249FC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80249FCC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80249FD0: jal         0x8009A3B4
    // 0x80249FD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80249FD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80249FD8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80249FDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80249FE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249FE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249FE8: lw          $v0, 0x51F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X51F0);
    // 0x80249FEC: jalr        $v0
    // 0x80249FF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80249FF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80249FF4: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x80249FF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80249FFC: bne         $v1, $v0, L_8024A02C
    if (ctx->r3 != ctx->r2) {
        // 0x8024A000: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8024A02C;
    }
    // 0x8024A000: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8024A004: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8024A008: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024A00C: bne         $v0, $zero, L_8024A020
    if (ctx->r2 != 0) {
        // 0x8024A010: nop
    
            goto L_8024A020;
    }
    // 0x8024A010: nop

    // 0x8024A014: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8024A018: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024A01C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_8024A020:
    // 0x8024A020: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8024A024: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A028: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_8024A02C:
    // 0x8024A02C: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8024A030: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8024A034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024A038: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x8024A03C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024A040: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024A044: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A048: jal         0x8002C654
    // 0x8024A04C: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8024A04C: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    after_2:
    // 0x8024A050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024A054: jal         0x80031DA8
    // 0x8024A058: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8024A058: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8024A05C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x8024A060: jal         0x800319B4
    // 0x8024A064: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8024A064: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8024A068: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8024A06C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8024A070: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024A074: jr          $ra
    // 0x8024A078: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8024A078: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80242B30_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242B30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80242B34: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80242B38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242B3C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80242B40: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80242B44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80242B48: jal         0x8009A3B4
    // 0x80242B4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242B4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80242B50: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242B54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242B58: jal         0x8009A3B4
    // 0x80242B5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242B5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80242B60: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80242B64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80242B68: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242B6C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80242B70: bne         $v0, $zero, L_80242B88
    if (ctx->r2 != 0) {
        // 0x80242B74: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80242B88;
    }
    // 0x80242B74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80242B78: jal         0x8004F4F8
    // 0x80242B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80242B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80242B80: j           L_80242CB0
    // 0x80242B84: nop

        goto L_80242CB0;
    // 0x80242B84: nop

L_80242B88:
    // 0x80242B88: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80242B8C: bne         $v1, $v0, L_80242B98
    if (ctx->r3 != ctx->r2) {
        // 0x80242B90: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80242B98;
    }
    // 0x80242B90: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80242B94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80242B98:
    // 0x80242B98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80242B9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80242BA0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242BA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242BA8: lbu         $v0, 0x4B74($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4B74);
    // 0x80242BAC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80242BB0: lh          $a2, 0x4C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4C);
    // 0x80242BB4: lh          $a3, 0x50($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X50);
    // 0x80242BB8: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80242BBC: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80242BC0: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80242BC4: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80242BC8: lbu         $t0, 0x4B75($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X4B75);
    // 0x80242BCC: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80242BD0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80242BD4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80242BD8: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80242BDC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80242BE0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80242BE4: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80242BE8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80242BEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242BF0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80242BF4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80242BF8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80242BFC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80242C00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242C04: sb          $t0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r8;
    // 0x80242C08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242C0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242C10: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80242C14: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80242C18: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80242C1C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80242C20: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80242C24: jal         0x8004DD04
    // 0x80242C28: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80242C28: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_3:
    // 0x80242C2C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80242C30: beq         $v0, $zero, L_80242C4C
    if (ctx->r2 == 0) {
        // 0x80242C34: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80242C4C;
    }
    // 0x80242C34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80242C38: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80242C3C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80242C40: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80242C44: bne         $v0, $zero, L_80242C98
    if (ctx->r2 != 0) {
        // 0x80242C48: nop
    
            goto L_80242C98;
    }
    // 0x80242C48: nop

L_80242C4C:
    // 0x80242C4C: jal         0x8004F144
    // 0x80242C50: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80242C50: nop

    after_4:
    // 0x80242C54: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80242C58: beq         $v1, $zero, L_80242C98
    if (ctx->r3 == 0) {
        // 0x80242C5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80242C98;
    }
    // 0x80242C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242C60: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80242C64: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80242C68: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80242C6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80242C70: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80242C74: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80242C78: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80242C7C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80242C80: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80242C84: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80242C88: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80242C8C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80242C90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80242C94: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80242C98:
    // 0x80242C98: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80242C9C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80242CA0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80242CA4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80242CA8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80242CAC: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80242CB0:
    // 0x80242CB0: jal         0x8003F754
    // 0x80242CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80242CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80242CB8: bne         $v0, $zero, L_80242CD4
    if (ctx->r2 != 0) {
        // 0x80242CBC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80242CD4;
    }
    // 0x80242CBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80242CC0: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80242CC4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80242CC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80242CCC: beq         $v0, $zero, L_80242CE8
    if (ctx->r2 == 0) {
        // 0x80242CD0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80242CE8;
    }
    // 0x80242CD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80242CD4:
    // 0x80242CD4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80242CD8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80242CDC: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80242CE0: j           L_80242D38
    // 0x80242CE4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80242D38;
    // 0x80242CE4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242CE8:
    // 0x80242CE8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80242CEC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80242CF0: beq         $v0, $zero, L_80242D38
    if (ctx->r2 == 0) {
        // 0x80242CF4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80242D38;
    }
    // 0x80242CF4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242CF8: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80242CFC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80242D00: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80242D04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242D08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242D0C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80242D10: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80242D14: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80242D18: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80242D1C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80242D20: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80242D24: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80242D28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80242D2C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80242D30: jal         0x80051E18
    // 0x80242D34: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80242D34: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80242D38:
    // 0x80242D38: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80242D3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80242D40: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80242D44: jr          $ra
    // 0x80242D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80242D48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022ADB8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ADBC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ADC0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022ADC4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022ADC8: beq         $v1, $v0, L_8022AE08
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADCC: slti        $v0, $v1, 0x10
        ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
            goto L_8022AE08;
    }
    // 0x8022ADCC: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022ADD0: beql        $v0, $zero, L_8022ADE8
    if (ctx->r2 == 0) {
        // 0x8022ADD4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022ADE8;
    }
    goto skip_0;
    // 0x8022ADD4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x8022ADD8: beq         $v1, $zero, L_8022ADF8
    if (ctx->r3 == 0) {
        // 0x8022ADDC: nop
    
            goto L_8022ADF8;
    }
    // 0x8022ADDC: nop

    // 0x8022ADE0: j           L_8022AE38
    // 0x8022ADE4: nop

        goto L_8022AE38;
    // 0x8022ADE4: nop

L_8022ADE8:
    // 0x8022ADE8: beq         $v1, $v0, L_8022AE24
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADEC: nop
    
            goto L_8022AE24;
    }
    // 0x8022ADEC: nop

    // 0x8022ADF0: j           L_8022AE38
    // 0x8022ADF4: nop

        goto L_8022AE38;
    // 0x8022ADF4: nop

L_8022ADF8:
    // 0x8022ADF8: jal         0x8022B750
    // 0x8022ADFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022ADFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8022AE00: j           L_8022AE30
    // 0x8022AE04: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_8022AE30;
    // 0x8022AE04: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_8022AE08:
    // 0x8022AE08: addiu       $v0, $zero, 0x8A
    ctx->r2 = ADD32(0, 0X8A);
    // 0x8022AE0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AE10: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022AE14: jal         0x8022B750
    // 0x8022AE18: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8022B750_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022AE18: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
    // 0x8022AE1C: j           L_8022AE38
    // 0x8022AE20: nop

        goto L_8022AE38;
    // 0x8022AE20: nop

L_8022AE24:
    // 0x8022AE24: jal         0x8022B750
    // 0x8022AE28: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8022B750_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022AE28: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x8022AE2C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_8022AE30:
    // 0x8022AE30: jal         0x8022B784
    // 0x8022AE34: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022AE34: nop

    after_3:
L_8022AE38:
    // 0x8022AE38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE3C: jr          $ra
    // 0x8022AE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BFAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BFAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BFB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BFB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BFB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BFBC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BFC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BFC4: beq         $v1, $v0, L_8022C02C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BFC8: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_8022C02C;
    }
    // 0x8022BFC8: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022BFCC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022BFD0: beql        $v0, $zero, L_8022BFE8
    if (ctx->r2 == 0) {
        // 0x8022BFD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BFE8;
    }
    goto skip_0;
    // 0x8022BFD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022BFD8: beq         $v1, $zero, L_8022BFF8
    if (ctx->r3 == 0) {
        // 0x8022BFDC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022BFF8;
    }
    // 0x8022BFDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BFE0: j           L_8022C0B8
    // 0x8022BFE4: nop

        goto L_8022C0B8;
    // 0x8022BFE4: nop

L_8022BFE8:
    // 0x8022BFE8: beq         $v1, $v0, L_8022C054
    if (ctx->r3 == ctx->r2) {
        // 0x8022BFEC: nop
    
            goto L_8022C054;
    }
    // 0x8022BFEC: nop

    // 0x8022BFF0: j           L_8022C0B8
    // 0x8022BFF4: nop

        goto L_8022C0B8;
    // 0x8022BFF4: nop

L_8022BFF8:
    // 0x8022BFF8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BFFC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022C000: beq         $v0, $zero, L_8022C010
    if (ctx->r2 == 0) {
        // 0x8022C004: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8022C010;
    }
    // 0x8022C004: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022C008: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C00C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C010:
    // 0x8022C010: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C014: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022C018: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022C01C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022C020: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022C024: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022C028: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
L_8022C02C:
    // 0x8022C02C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022C030: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C034: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022C038: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C03C: bgez        $v0, L_8022C0B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C040: nop
    
            goto L_8022C0B8;
    }
    // 0x8022C040: nop

    // 0x8022C044: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022C048: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C04C: j           L_8022C0B8
    // 0x8022C050: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022C0B8;
    // 0x8022C050: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022C054:
    // 0x8022C054: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C058: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C05C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022C060: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x8022C064: beq         $v1, $zero, L_8022C080
    if (ctx->r3 == 0) {
        // 0x8022C068: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_8022C080;
    }
    // 0x8022C068: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022C06C: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022C070: jal         0x8006033C
    // 0x8022C074: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C074: nop

    after_0:
    // 0x8022C078: j           L_8022C0A4
    // 0x8022C07C: nop

        goto L_8022C0A4;
    // 0x8022C07C: nop

L_8022C080:
    // 0x8022C080: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C084: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x8022C088: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C08C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C090: beq         $v0, $zero, L_8022C0AC
    if (ctx->r2 == 0) {
        // 0x8022C094: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8022C0AC;
    }
    // 0x8022C094: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022C098: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022C09C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022C0A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_8022C0A4:
    // 0x8022C0A4: beq         $v0, $zero, L_8022C0B8
    if (ctx->r2 == 0) {
        // 0x8022C0A8: nop
    
            goto L_8022C0B8;
    }
    // 0x8022C0A8: nop

L_8022C0AC:
    // 0x8022C0AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C0B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C0B4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C0B8:
    // 0x8022C0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C0BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C0C0: jr          $ra
    // 0x8022C0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AD38_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AD38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AD3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AD40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AD44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023AD48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AD4C: jal         0x80050294
    // 0x8023AD50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023AD50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023AD54: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023AD58: sh          $v0, 0x514($s0)
    MEM_H(0X514, ctx->r16) = ctx->r2;
    // 0x8023AD5C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023AD60: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023AD64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023AD68: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023AD6C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023AD70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023AD74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023AD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AD7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AD80: jr          $ra
    // 0x8023AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024CD58_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CD58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024CD5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024CD60: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8024CD64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CD68: beq         $v1, $v0, L_8024CDC4
    if (ctx->r3 == ctx->r2) {
        // 0x8024CD6C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024CDC4;
    }
    // 0x8024CD6C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024CD70: beq         $v0, $zero, L_8024CD88
    if (ctx->r2 == 0) {
        // 0x8024CD74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024CD88;
    }
    // 0x8024CD74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024CD78: beq         $v1, $zero, L_8024CD98
    if (ctx->r3 == 0) {
        // 0x8024CD7C: nop
    
            goto L_8024CD98;
    }
    // 0x8024CD7C: nop

    // 0x8024CD80: j           L_8024CDDC
    // 0x8024CD84: nop

        goto L_8024CDDC;
    // 0x8024CD84: nop

L_8024CD88:
    // 0x8024CD88: beq         $v1, $v0, L_8024CDD4
    if (ctx->r3 == ctx->r2) {
        // 0x8024CD8C: nop
    
            goto L_8024CDD4;
    }
    // 0x8024CD8C: nop

    // 0x8024CD90: j           L_8024CDDC
    // 0x8024CD94: nop

        goto L_8024CDDC;
    // 0x8024CD94: nop

L_8024CD98:
    // 0x8024CD98: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8024CD9C: beq         $v1, $v0, L_8024CDB4
    if (ctx->r3 == ctx->r2) {
        // 0x8024CDA0: nop
    
            goto L_8024CDB4;
    }
    // 0x8024CDA0: nop

    // 0x8024CDA4: jal         0x8024C87C
    // 0x8024CDA8: nop

    func_8024C87C_ovl28(rdram, ctx);
        goto after_0;
    // 0x8024CDA8: nop

    after_0:
    // 0x8024CDAC: j           L_8024CDDC
    // 0x8024CDB0: nop

        goto L_8024CDDC;
    // 0x8024CDB0: nop

L_8024CDB4:
    // 0x8024CDB4: jal         0x8004F5C4
    // 0x8024CDB8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8024CDB8: nop

    after_1:
    // 0x8024CDBC: j           L_8024CDDC
    // 0x8024CDC0: nop

        goto L_8024CDDC;
    // 0x8024CDC0: nop

L_8024CDC4:
    // 0x8024CDC4: jal         0x8024C770
    // 0x8024CDC8: nop

    func_8024C770_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024CDC8: nop

    after_2:
    // 0x8024CDCC: j           L_8024CDDC
    // 0x8024CDD0: nop

        goto L_8024CDDC;
    // 0x8024CDD0: nop

L_8024CDD4:
    // 0x8024CDD4: jal         0x8024C9C4
    // 0x8024CDD8: nop

    func_8024C9C4_ovl28(rdram, ctx);
        goto after_3;
    // 0x8024CDD8: nop

    after_3:
L_8024CDDC:
    // 0x8024CDDC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024CDE0: jr          $ra
    // 0x8024CDE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024CDE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A29C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A29C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A2A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A2A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A2A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A2AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A2B0: jal         0x80040F30
    // 0x8023A2B4: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x8023A2B4: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    after_0:
    // 0x8023A2B8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8023A2BC: beq         $v0, $zero, L_8023A2D0
    if (ctx->r2 == 0) {
        // 0x8023A2C0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8023A2D0;
    }
    // 0x8023A2C0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023A2C4: lw          $v0, 0x4F4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F4);
    // 0x8023A2C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023A2CC: sw          $v0, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = ctx->r2;
L_8023A2D0:
    // 0x8023A2D0: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8023A2D4: bne         $v0, $zero, L_8023A33C
    if (ctx->r2 != 0) {
        // 0x8023A2D8: nop
    
            goto L_8023A33C;
    }
    // 0x8023A2D8: nop

    // 0x8023A2DC: jal         0x8003E934
    // 0x8023A2E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8023A2E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023A2E4: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8023A2E8: beql        $v0, $v1, L_8023A328
    if (ctx->r2 == ctx->r3) {
        // 0x8023A2EC: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_8023A328;
    }
    goto skip_0;
    // 0x8023A2EC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x8023A2F0: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x8023A2F4: bne         $v0, $zero, L_8023A330
    if (ctx->r2 != 0) {
        // 0x8023A2F8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023A330;
    }
    // 0x8023A2F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A2FC: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8023A300: jal         0x8009A3B4
    // 0x8023A304: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023A304: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023A308: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023A30C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8023A310: jal         0x8009A3B4
    // 0x8023A314: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023A314: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8023A318: lw          $v0, 0x4F4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F4);
    // 0x8023A31C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8023A320: j           L_8023A330
    // 0x8023A324: sw          $v0, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = ctx->r2;
        goto L_8023A330;
    // 0x8023A324: sw          $v0, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = ctx->r2;
L_8023A328:
    // 0x8023A328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A32C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_8023A330:
    // 0x8023A330: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8023A334: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A338: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_8023A33C:
    // 0x8023A33C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A340: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A348: jr          $ra
    // 0x8023A34C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A34C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234B00_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234B04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234B08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234B0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80234B10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80234B14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234B18: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x80234B1C: addiu       $s1, $s0, 0x1D8
    ctx->r17 = ADD32(ctx->r16, 0X1D8);
    // 0x80234B20: bne         $v0, $zero, L_80234C18
    if (ctx->r2 != 0) {
        // 0x80234B24: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80234C18;
    }
    // 0x80234B24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234B28: lbu         $v1, 0x1DD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DD);
    // 0x80234B2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80234B30: bne         $v1, $v0, L_80234B98
    if (ctx->r3 != ctx->r2) {
        // 0x80234B34: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80234B98;
    }
    // 0x80234B34: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80234B38: jal         0x8004F144
    // 0x80234B3C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80234B3C: nop

    after_0:
    // 0x80234B40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234B44: beq         $a0, $zero, L_80234B80
    if (ctx->r4 == 0) {
        // 0x80234B48: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80234B80;
    }
    // 0x80234B48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234B4C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80234B50: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234B54: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80234B58: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234B5C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80234B60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234B64: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80234B68: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x80234B6C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80234B70: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80234B74: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80234B78: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x80234B7C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_80234B80:
    // 0x80234B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234B84: jal         0x8007A1B8
    // 0x80234B88: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_1;
    // 0x80234B88: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_1:
    // 0x80234B8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234B90: j           L_80234C00
    // 0x80234B94: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80234C00;
    // 0x80234B94: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234B98:
    // 0x80234B98: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x80234B9C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80234BA0: jal         0x8004F144
    // 0x80234BA4: lbu         $s2, 0x39C0($s2)
    ctx->r18 = MEM_BU(ctx->r18, 0X39C0);
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80234BA4: lbu         $s2, 0x39C0($s2)
    ctx->r18 = MEM_BU(ctx->r18, 0X39C0);
    after_2:
    // 0x80234BA8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234BAC: beq         $a0, $zero, L_80234C00
    if (ctx->r4 == 0) {
        // 0x80234BB0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80234C00;
    }
    // 0x80234BB0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234BB4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80234BB8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234BBC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80234BC0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234BC4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80234BC8: lbu         $v0, 0x1DD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DD);
    // 0x80234BCC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234BD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234BD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234BD8: lbu         $v0, 0x39C1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X39C1);
    // 0x80234BDC: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80234BE0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80234BE4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80234BE8: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x80234BEC: sh          $v1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r3;
    // 0x80234BF0: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x80234BF4: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x80234BF8: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80234BFC: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_80234C00:
    // 0x80234C00: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80234C04: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80234C08: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x80234C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234C10: j           L_80234C20
    // 0x80234C14: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80234C20;
    // 0x80234C14: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80234C18:
    // 0x80234C18: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80234C1C: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
L_80234C20:
    // 0x80234C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234C24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80234C28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234C2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234C30: jr          $ra
    // 0x80234C34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234C34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023A7BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A7BC: jr          $ra
    // 0x8023A7C0: nop

    TRACE_RETURN()
    return;
    // 0x8023A7C0: nop

;}
RECOMP_FUNC void func_8022572C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022572C: jr          $ra
    // 0x80225730: nop

    TRACE_RETURN()
    return;
    // 0x80225730: nop

;}
RECOMP_FUNC void func_802256EC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256EC: jr          $ra
    // 0x802256F0: nop

    TRACE_RETURN()
    return;
    // 0x802256F0: nop

;}
RECOMP_FUNC void func_8022B784_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B784: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022B788: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B78C: sb          $zero, 0x63ED($at)
    MEM_B(0X63ED, ctx->r1) = 0;
    // 0x8022B790: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B794: sb          $zero, 0x63EC($at)
    MEM_B(0X63EC, ctx->r1) = 0;
    // 0x8022B798: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B79C: sb          $zero, 0x63EB($at)
    MEM_B(0X63EB, ctx->r1) = 0;
    // 0x8022B7A0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022B7A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B7A8: lw          $v0, 0x2F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2F88);
    // 0x8022B7AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B7B0: jr          $ra
    // 0x8022B7B4: sw          $v0, 0x63E4($at)
    MEM_W(0X63E4, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B7B4: sw          $v0, 0x63E4($at)
    MEM_W(0X63E4, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80243980_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80243984: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80243988: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024398C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243990: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243994: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243998: lw          $v0, 0x4BCC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4BCC);
    // 0x8024399C: jalr        $v0
    // 0x802439A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802439A0: nop

    after_0:
    // 0x802439A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802439A8: jr          $ra
    // 0x802439AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802439AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80245670_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80245678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024567C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245680: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80245684: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80245688: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024568C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80245690: lw          $v0, 0x4C80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4C80);
    // 0x80245694: jalr        $v0
    // 0x80245698: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80245698: nop

    after_0:
    // 0x8024569C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x802456A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802456A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802456A8: jr          $ra
    // 0x802456AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802456AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FD18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FD1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FD28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FD2C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022FD30: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FD34: jal         0x8004FA7C
    // 0x8022FD38: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022FD38: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022FD3C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022FD40: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022FD44: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022FD48: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022FD4C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022FD50: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022FD54: beq         $v1, $zero, L_8022FD88
    if (ctx->r3 == 0) {
        // 0x8022FD58: nop
    
            goto L_8022FD88;
    }
    // 0x8022FD58: nop

    // 0x8022FD5C: jal         0x8022FEA8
    // 0x8022FD60: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022FD60: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022FD64: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022FD68: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FD6C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022FD70: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FD74: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022FD78: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022FD7C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FD80: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022FD84: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022FD88:
    // 0x8022FD88: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FD8C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022FD90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FD94: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FD98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FD9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FDA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FDA4: jr          $ra
    // 0x8022FDA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FDA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249964_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80249968: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024996C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80249970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249974: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80249978: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024997C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80249980: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80249984: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80249988: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8024998C: beq         $v0, $zero, L_80249C94
    if (ctx->r2 == 0) {
        // 0x80249990: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80249C94;
    }
    // 0x80249990: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80249994: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249998: addu        $at, $at, $v0
    gpr jr_addend_802499A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024999C: lw          $v0, 0x6300($at)
    ctx->r2 = ADD32(ctx->r1, 0X6300);
    // 0x802499A0: jr          $v0
    // 0x802499A4: nop

    switch (jr_addend_802499A0 >> 2) {
        case 0: goto L_802499A8; break;
        case 1: goto L_802499C4; break;
        case 2: goto L_802499F0; break;
        case 3: goto L_80249A14; break;
        case 4: goto L_80249A2C; break;
        case 5: goto L_80249A4C; break;
        case 6: goto L_80249AEC; break;
        case 7: goto L_80249B58; break;
        case 8: goto L_80249BC4; break;
        case 9: goto L_80249BD8; break;
        case 10: goto L_80249C04; break;
        case 11: goto L_80249C74; break;
        default: switch_error(__func__, 0x802499A0, 0x80256300);
    }
    // 0x802499A4: nop

L_802499A8:
    // 0x802499A8: jal         0x8006033C
    // 0x802499AC: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802499AC: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_0:
    // 0x802499B0: bnel        $v0, $zero, L_80249C90
    if (ctx->r2 != 0) {
        // 0x802499B4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80249C90;
    }
    goto skip_0;
    // 0x802499B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_0:
    // 0x802499B8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802499BC: j           L_80249C90
    // 0x802499C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x802499C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802499C4:
    // 0x802499C4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802499C8: addiu       $a0, $a0, -0x3AA4
    ctx->r4 = ADD32(ctx->r4, -0X3AA4);
    // 0x802499CC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802499D0: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x802499D4: beq         $v0, $zero, L_80249C94
    if (ctx->r2 == 0) {
        // 0x802499D8: addiu       $v0, $zero, -0x21
        ctx->r2 = ADD32(0, -0X21);
            goto L_80249C94;
    }
    // 0x802499D8: addiu       $v0, $zero, -0x21
    ctx->r2 = ADD32(0, -0X21);
    // 0x802499DC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802499E0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x802499E4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802499E8: j           L_80249C90
    // 0x802499EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x802499EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802499F0:
    // 0x802499F0: jal         0x8006FF84
    // 0x802499F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x802499F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x802499F8: beq         $v0, $zero, L_80249C94
    if (ctx->r2 == 0) {
        // 0x802499FC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80249C94;
    }
    // 0x802499FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80249A00: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80249A04: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80249A08: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249A0C: j           L_80249C90
    // 0x80249A10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x80249A10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80249A14:
    // 0x80249A14: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80249A18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249A1C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80249A20: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249A24: j           L_80249C90
    // 0x80249A28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x80249A28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80249A2C:
    // 0x80249A2C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80249A30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249A34: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80249A38: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80249A3C: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80249A40: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249A44: j           L_80249C90
    // 0x80249A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x80249A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80249A4C:
    // 0x80249A4C: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80249A50: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80249A54: bne         $v1, $v0, L_80249A68
    if (ctx->r3 != ctx->r2) {
        // 0x80249A58: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_80249A68;
    }
    // 0x80249A58: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80249A5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80249A60: jal         0x8002A2F8
    // 0x80249A64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80249A64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80249A68:
    // 0x80249A68: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80249A6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80249A70: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80249A74: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80249A78: bne         $v0, $zero, L_80249C94
    if (ctx->r2 != 0) {
        // 0x80249A7C: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80249C94;
    }
    // 0x80249A7C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x80249A80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80249A84: jal         0x8002A2F8
    // 0x80249A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80249A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80249A8C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80249A90: addiu       $s0, $s0, 0x51DC
    ctx->r16 = ADD32(ctx->r16, 0X51DC);
    // 0x80249A94: jal         0x8003E6BC
    // 0x80249A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80249A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80249A9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249AA0: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80249AA4: jal         0x80071ACC
    // 0x80249AA8: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x80249AA8: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    after_5:
    // 0x80249AAC: jal         0x8003E6BC
    // 0x80249AB0: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80249AB0: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_6:
    // 0x80249AB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249AB8: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80249ABC: jal         0x80071ACC
    // 0x80249AC0: ori         $a1, $a1, 0x500
    ctx->r5 = ctx->r5 | 0X500;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_7;
    // 0x80249AC0: ori         $a1, $a1, 0x500
    ctx->r5 = ctx->r5 | 0X500;
    after_7:
    // 0x80249AC4: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
    // 0x80249AC8: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x80249ACC: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x80249AD0: bne         $v0, $zero, L_80249C90
    if (ctx->r2 != 0) {
        // 0x80249AD4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80249C90;
    }
    // 0x80249AD4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80249AD8: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
    // 0x80249ADC: bne         $v0, $zero, L_80249C90
    if (ctx->r2 != 0) {
        // 0x80249AE0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80249C90;
    }
    // 0x80249AE0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80249AE4: j           L_80249C90
    // 0x80249AE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80249C90;
    // 0x80249AE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80249AEC:
    // 0x80249AEC: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80249AF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80249AF4: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80249AF8: bne         $v0, $zero, L_80249B48
    if (ctx->r2 != 0) {
        // 0x80249AFC: addiu       $a0, $s2, 0x438
        ctx->r4 = ADD32(ctx->r18, 0X438);
            goto L_80249B48;
    }
    // 0x80249AFC: addiu       $a0, $s2, 0x438
    ctx->r4 = ADD32(ctx->r18, 0X438);
    // 0x80249B00: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80249B04: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80249B08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80249B0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249B10: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80249B14: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80249B18: jal         0x8009A3B4
    // 0x80249B1C: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80249B1C: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_8:
    // 0x80249B20: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80249B24: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80249B28: jal         0x8009A3B4
    // 0x80249B2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80249B2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x80249B30: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80249B34: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x80249B38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80249B3C: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x80249B40: j           L_80249C90
    // 0x80249B44: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
        goto L_80249C90;
    // 0x80249B44: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
L_80249B48:
    // 0x80249B48: lhu         $v0, 0x12A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X12A);
    // 0x80249B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249B50: j           L_80249C94
    // 0x80249B54: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80249C94;
    // 0x80249B54: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_80249B58:
    // 0x80249B58: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80249B5C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80249B60: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80249B64: beq         $v0, $zero, L_80249BB4
    if (ctx->r2 == 0) {
        // 0x80249B68: addiu       $a0, $s2, 0x438
        ctx->r4 = ADD32(ctx->r18, 0X438);
            goto L_80249BB4;
    }
    // 0x80249B68: addiu       $a0, $s2, 0x438
    ctx->r4 = ADD32(ctx->r18, 0X438);
    // 0x80249B6C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80249B70: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80249B74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80249B78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249B7C: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80249B80: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80249B84: jal         0x8009A3B4
    // 0x80249B88: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80249B88: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_10:
    // 0x80249B8C: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80249B90: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80249B94: jal         0x8009A3B4
    // 0x80249B98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80249B98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x80249B9C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80249BA0: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x80249BA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80249BA8: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x80249BAC: j           L_80249C90
    // 0x80249BB0: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
        goto L_80249C90;
    // 0x80249BB0: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
L_80249BB4:
    // 0x80249BB4: lhu         $v0, 0x128($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X128);
    // 0x80249BB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249BBC: j           L_80249C94
    // 0x80249BC0: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80249C94;
    // 0x80249BC0: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_80249BC4:
    // 0x80249BC4: jal         0x80036B58
    // 0x80249BC8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_12;
    // 0x80249BC8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_12:
    // 0x80249BCC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249BD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249BD4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80249BD8:
    // 0x80249BD8: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80249BDC: lhu         $v1, 0x124($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X124);
    // 0x80249BE0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80249BE4: addiu       $a0, $a0, -0xCBE
    ctx->r4 = ADD32(ctx->r4, -0XCBE);
    // 0x80249BE8: slti        $v0, $v0, 0x301
    ctx->r2 = SIGNED(ctx->r2) < 0X301 ? 1 : 0;
    // 0x80249BEC: bne         $v0, $zero, L_80249C94
    if (ctx->r2 != 0) {
        // 0x80249BF0: sh          $v1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r3;
            goto L_80249C94;
    }
    // 0x80249BF0: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80249BF4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80249BF8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249BFC: j           L_80249C90
    // 0x80249C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x80249C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80249C04:
    // 0x80249C04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249C08: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80249C0C: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80249C10: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80249C14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249C18: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80249C1C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80249C20: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80249C24: bne         $v0, $v1, L_80249C94
    if (ctx->r2 != ctx->r3) {
        // 0x80249C28: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80249C94;
    }
    // 0x80249C28: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80249C2C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80249C30: addiu       $s0, $s0, 0x51DC
    ctx->r16 = ADD32(ctx->r16, 0X51DC);
    // 0x80249C34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80249C38: jal         0x8003E6BC
    // 0x80249C3C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_13;
    // 0x80249C3C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    after_13:
    // 0x80249C40: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249C44: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80249C48: jal         0x80071ACC
    // 0x80249C4C: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_14;
    // 0x80249C4C: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    after_14:
    // 0x80249C50: jal         0x8003E6BC
    // 0x80249C54: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_15;
    // 0x80249C54: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_15:
    // 0x80249C58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249C5C: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80249C60: jal         0x80071ACC
    // 0x80249C64: ori         $a1, $a1, 0x500
    ctx->r5 = ctx->r5 | 0X500;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_16;
    // 0x80249C64: ori         $a1, $a1, 0x500
    ctx->r5 = ctx->r5 | 0X500;
    after_16:
    // 0x80249C68: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249C6C: j           L_80249C90
    // 0x80249C70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80249C90;
    // 0x80249C70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80249C74:
    // 0x80249C74: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80249C78: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80249C7C: bne         $v0, $zero, L_80249C94
    if (ctx->r2 != 0) {
        // 0x80249C80: nop
    
            goto L_80249C94;
    }
    // 0x80249C80: nop

    // 0x80249C84: jal         0x8006036C
    // 0x80249C88: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    func_8006036C_3B76C(rdram, ctx);
        goto after_17;
    // 0x80249C88: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_17:
    // 0x80249C8C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80249C90:
    // 0x80249C90: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80249C94:
    // 0x80249C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80249C98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80249C9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249CA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249CA4: jr          $ra
    // 0x80249CA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80249CA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802432B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802432B8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802432BC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802432C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802432C4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802432C8: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802432CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802432D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802432D4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802432D8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802432DC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802432E0: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x802432E4: jal         0x800540D0
    // 0x802432E8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x802432E8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    after_0:
    // 0x802432EC: beql        $v0, $zero, L_802432F4
    if (ctx->r2 == 0) {
        // 0x802432F0: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_802432F4;
    }
    goto skip_0;
    // 0x802432F0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_802432F4:
    // 0x802432F4: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x802432F8: lh          $v1, 0xE2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE2);
    // 0x802432FC: lh          $a0, 0xE4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE4);
    // 0x80243300: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x80243304: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80243308: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024330C: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x80243310: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80243314: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80243318: lw          $v0, 0x49D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X49D0);
    // 0x8024331C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243320: bgez        $v0, L_8024332C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80243324: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_8024332C;
    }
    // 0x80243324: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80243328: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
L_8024332C:
    // 0x8024332C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80243330: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80243334: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80243338: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024333C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243340: bltzl       $v0, L_8024335C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80243344: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8024335C;
    }
    goto skip_1;
    // 0x80243344: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x80243348: slti        $v0, $v0, 0xA1
    ctx->r2 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x8024334C: beq         $v0, $zero, L_80243368
    if (ctx->r2 == 0) {
        // 0x80243350: nop
    
            goto L_80243368;
    }
    // 0x80243350: nop

    // 0x80243354: j           L_8024337C
    // 0x80243358: nop

        goto L_8024337C;
    // 0x80243358: nop

L_8024335C:
    // 0x8024335C: slti        $v0, $v0, 0xA1
    ctx->r2 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x80243360: bne         $v0, $zero, L_8024337C
    if (ctx->r2 != 0) {
        // 0x80243364: nop
    
            goto L_8024337C;
    }
    // 0x80243364: nop

L_80243368:
    // 0x80243368: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8024336C: bgtz        $v0, L_80243378
    if (SIGNED(ctx->r2) > 0) {
        // 0x80243370: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_80243378;
    }
    // 0x80243370: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80243374: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
L_80243378:
    // 0x80243378: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8024337C:
    // 0x8024337C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80243380: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80243384: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243388: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8024338C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243390: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80243394: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x80243398: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024339C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802433A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802433A4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802433A8: beq         $v0, $zero, L_802433B8
    if (ctx->r2 == 0) {
        // 0x802433AC: nop
    
            goto L_802433B8;
    }
    // 0x802433AC: nop

    // 0x802433B0: sh          $a0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r4;
    // 0x802433B4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_802433B8:
    // 0x802433B8: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x802433BC: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x802433C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802433C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802433C8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802433CC: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x802433D0: jal         0x800324B4
    // 0x802433D4: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802433D4: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802433D8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802433DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802433E0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802433E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802433E8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x802433EC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802433F0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802433F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802433F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802433FC: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x80243400: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80243404: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80243408: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x8024340C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80243410: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x80243414: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80243418: lh          $v0, 0x24($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X24);
    // 0x8024341C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80243420: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80243424: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x80243428: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8024342C: jal         0x8004F820
    // 0x80243430: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80243430: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80243434: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x80243438: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x8024343C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80243440: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80243444: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x80243448: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8024344C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80243450: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80243454: slti        $v1, $v1, 0xA1
    ctx->r3 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x80243458: bne         $v1, $zero, L_80243468
    if (ctx->r3 != 0) {
        // 0x8024345C: sh          $a0, 0x66($s0)
        MEM_H(0X66, ctx->r16) = ctx->r4;
            goto L_80243468;
    }
    // 0x8024345C: sh          $a0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r4;
    // 0x80243460: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80243464: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80243468:
    // 0x80243468: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8024346C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80243470: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80243474: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80243478: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8024347C: jal         0x8004DBA0
    // 0x80243480: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80243480: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80243484: jal         0x80040F30
    // 0x80243488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80243488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8024348C: bne         $v0, $zero, L_80243568
    if (ctx->r2 != 0) {
        // 0x80243490: addiu       $a0, $s0, 0x66
        ctx->r4 = ADD32(ctx->r16, 0X66);
            goto L_80243568;
    }
    // 0x80243490: addiu       $a0, $s0, 0x66
    ctx->r4 = ADD32(ctx->r16, 0X66);
    // 0x80243494: jal         0x8003E934
    // 0x80243498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x80243498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8024349C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802434A0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802434A4: lh          $v1, 0x12($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X12);
    // 0x802434A8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802434AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802434B0: beq         $v0, $v1, L_80243570
    if (ctx->r2 == ctx->r3) {
        // 0x802434B4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80243570;
    }
    // 0x802434B4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802434B8: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x802434BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802434C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802434C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802434C8: bltzl       $v0, L_802434E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802434CC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802434E4;
    }
    goto skip_2;
    // 0x802434CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x802434D0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802434D4: beq         $v0, $zero, L_802434F4
    if (ctx->r2 == 0) {
        // 0x802434D8: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802434F4;
    }
    // 0x802434D8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802434DC: j           L_80243518
    // 0x802434E0: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
        goto L_80243518;
    // 0x802434E0: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
L_802434E4:
    // 0x802434E4: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802434E8: bnel        $v0, $zero, L_80243518
    if (ctx->r2 != 0) {
        // 0x802434EC: sh          $a2, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r6;
            goto L_80243518;
    }
    goto skip_3;
    // 0x802434EC: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
    skip_3:
    // 0x802434F0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802434F4:
    // 0x802434F4: bltz        $v0, L_8024350C
    if (SIGNED(ctx->r2) < 0) {
        // 0x802434F8: nop
    
            goto L_8024350C;
    }
    // 0x802434F8: nop

    // 0x802434FC: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80243500: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80243504: j           L_80243518
    // 0x80243508: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_80243518;
    // 0x80243508: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8024350C:
    // 0x8024350C: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80243510: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x80243514: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_80243518:
    // 0x80243518: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8024351C: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x80243520: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243524: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243528: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8024352C: jal         0x800324B4
    // 0x80243530: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x80243530: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_6:
    // 0x80243534: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80243538: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8024353C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80243540: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243544: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80243548: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x8024354C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243550: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80243554: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80243558: jal         0x8004DD04
    // 0x8024355C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x8024355C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_7:
    // 0x80243560: j           L_80243570
    // 0x80243564: nop

        goto L_80243570;
    // 0x80243564: nop

L_80243568:
    // 0x80243568: jal         0x800409D0
    // 0x8024356C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_800409D0_1BDD0(rdram, ctx);
        goto after_8;
    // 0x8024356C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_8:
L_80243570:
    // 0x80243570: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80243574: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80243578: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8024357C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80243580: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80243584: jr          $ra
    // 0x80243588: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80243588: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022B5C8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B5C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B5CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B5D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B5D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B5D8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B5DC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022B5E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B5E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B5E8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022B5EC: lw          $s1, 0x24($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X24);
    // 0x8022B5F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B5F4: bne         $v1, $v0, L_8022B610
    if (ctx->r3 != ctx->r2) {
        // 0x8022B5F8: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8022B610;
    }
    // 0x8022B5F8: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022B5FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B600: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B604: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022B608: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022B60C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_8022B610:
    // 0x8022B610: bne         $v1, $v0, L_8022B62C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B614: nop
    
            goto L_8022B62C;
    }
    // 0x8022B614: nop

    // 0x8022B618: jal         0x80036E48
    // 0x8022B61C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022B61C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8022B620: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B624: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022B628: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B62C:
    // 0x8022B62C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022B630: slti        $v0, $v0, 0x5A
    ctx->r2 = SIGNED(ctx->r2) < 0X5A ? 1 : 0;
    // 0x8022B634: bne         $v0, $zero, L_8022B664
    if (ctx->r2 != 0) {
        // 0x8022B638: nop
    
            goto L_8022B664;
    }
    // 0x8022B638: nop

    // 0x8022B63C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022B640: addiu       $a0, $a0, -0x3F84
    ctx->r4 = ADD32(ctx->r4, -0X3F84);
    // 0x8022B644: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8022B648: blez        $v0, L_8022B664
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022B64C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B664;
    }
    // 0x8022B64C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B650: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x8022B654: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8022B658: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B65C: bltzl       $v0, L_8022B664
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B660: sh          $zero, 0x0($a0)
        MEM_H(0X0, ctx->r4) = 0;
            goto L_8022B664;
    }
    goto skip_0;
    // 0x8022B660: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    skip_0:
L_8022B664:
    // 0x8022B664: lhu         $v0, 0x43C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X43C);
    // 0x8022B668: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8022B66C: sh          $v0, 0x43C($s2)
    MEM_H(0X43C, ctx->r18) = ctx->r2;
    // 0x8022B670: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B674: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    // 0x8022B678: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022B67C: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022B680: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8022B684: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B688: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B68C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B690: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B694: lhu         $v0, 0x2FDC($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2FDC);
    // 0x8022B698: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x8022B69C: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x8022B6A0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B6A4: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x8022B6A8: addiu       $v0, $v0, -0xC1
    ctx->r2 = ADD32(ctx->r2, -0XC1);
    // 0x8022B6AC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022B6B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B6B4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022B6B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B6BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B6C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B6C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B6C8: jr          $ra
    // 0x8022B6CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B6CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024B714_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B718: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B71C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024B720: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B724: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B728: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B72C: lw          $v0, 0x52FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X52FC);
    // 0x8024B730: jalr        $v0
    // 0x8024B734: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024B734: nop

    after_0:
    // 0x8024B738: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B73C: jr          $ra
    // 0x8024B740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024B3F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B3F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8024B3F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024B3FC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024B400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024B404: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8024B408: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8024B40C: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
    // 0x8024B410: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8024B414: lui         $s3, 0x3D48
    ctx->r19 = S32(0X3D48 << 16);
    // 0x8024B418: ori         $s3, $s3, 0x40
    ctx->r19 = ctx->r19 | 0X40;
    // 0x8024B41C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024B420: lui         $s2, 0x2E
    ctx->r18 = S32(0X2E << 16);
    // 0x8024B424: ori         $s2, $s2, 0x5F
    ctx->r18 = ctx->r18 | 0X5F;
    // 0x8024B428: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8024B42C: addiu       $s5, $zero, 0x1F40
    ctx->r21 = ADD32(0, 0X1F40);
    // 0x8024B430: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8024B434: addiu       $s4, $zero, 0x1F5F
    ctx->r20 = ADD32(0, 0X1F5F);
    // 0x8024B438: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8024B43C: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
L_8024B440:
    // 0x8024B440: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024B444: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B448: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024B44C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B450: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024B454: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x8024B458: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8024B45C: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024B460: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024B464: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8024B468: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8024B46C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8024B470: lh          $a0, 0x28($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X28);
    // 0x8024B474: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024B478: jal         0x80032498
    // 0x8024B47C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x8024B47C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_0:
    // 0x8024B480: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024B484: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B488: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024B48C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B490: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B494: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024B498: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x8024B49C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024B4A0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8024B4A4: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x8024B4A8: jal         0x8003B878
    // 0x8024B4AC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_1;
    // 0x8024B4AC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8024B4B0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8024B4B4: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x8024B4B8: lui         $v1, 0x2E20
    ctx->r3 = S32(0X2E20 << 16);
    // 0x8024B4BC: ori         $v1, $v1, 0x2020
    ctx->r3 = ctx->r3 | 0X2020;
    // 0x8024B4C0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8024B4C4: sw          $s3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r19;
    // 0x8024B4C8: sw          $s2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r18;
    // 0x8024B4CC: sw          $s5, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r21;
    // 0x8024B4D0: sw          $s4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r20;
    // 0x8024B4D4: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x8024B4D8: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8024B4DC: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x8024B4E0: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8024B4E4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8024B4E8: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x8024B4EC: bne         $v0, $zero, L_8024B440
    if (ctx->r2 != 0) {
        // 0x8024B4F0: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_8024B440;
    }
    // 0x8024B4F0: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x8024B4F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8024B4F8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8024B4FC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8024B500: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8024B504: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8024B508: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024B50C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024B510: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024B514: jr          $ra
    // 0x8024B518: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8024B518: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
